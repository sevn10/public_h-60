params ["_vehicle"];

private _vehicleConfig = configFile >> "cfgVehicles" >> typeOf _vehicle;
private _pilotCameraConfig = _vehicleConfig >> "pilotCamera";
if (!isClass _pilotCameraConfig) exitWith {};
private _OpticsIn = _pilotCameraConfig >> "OpticsIn";

private _fovClasses = "true" configClasses _OpticsIn;
private _fovObjects = _fovClasses apply {
	[
		getNumber (_x >> "initFov"),
		getArray (_x >> "visionMode"),
		getArray (_x >> "thermalMode"),
		getText (_x >> "opticsDisplayName")
	]
};

_vehicle setVariable ["vtx_flir_mempoint", getText (_vehicleConfig >> "memoryPointDriverOptics")];
_vehicle setVariable ["vtx_flir_turnLimits", [
	getNumber (_pilotCameraConfig >> "minTurn"),
	getNumber (_pilotCameraConfig >> "maxTurn"),
	getNumber (_pilotCameraConfig >> "minElev"),
	getNumber (_pilotCameraConfig >> "maxElev")
]];
_vehicle setVariable ["vtx_flir_fovObjects", _fovObjects];
_vehicle setVariable ["vtx_flir_initFovMode", 0];
_vehicle setVariable ["vtx_flir_initVisionMode", 0];

vtx_uh60_flir_rightMouseDown = false;
vtx_uh60_flir_mouseButtonEvent = findDisplay 46 displayAddEventHandler ["MouseButtonDown", "_this call vtx_uh60_flir_fnc_handleKeyInputs;"];

vtx_uh60_flir_stabilizing = false;
vtx_uh60_flir_stabilized = false;
vtx_uh60_flir_stabTarget = nil;
vtx_uh60_flir_zoomChanging = false;
vtx_uh60_flir_visionChanging = false;

true