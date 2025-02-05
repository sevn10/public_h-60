class grid {
	color[] = {1,0,0,1};
	condition = "0";
	class GRID {
		type="line";
		width = 3;
		lineType = 1;
		points[] ={
			{{0.1,0}, 1},{{0.1,1}, 1},{},
			{{0.2,0}, 1},{{0.2,1}, 1},{},
			{{0.3,0}, 1},{{0.3,1}, 1},{},
			{{0.4,0}, 1},{{0.4,1}, 1},{},
			{{0.5,0}, 1},{{0.5,1}, 1},{},
			{{0.6,0}, 1},{{0.6,1}, 1},{},
			{{0.7,0}, 1},{{0.7,1}, 1},{},
			{{0.8,0}, 1},{{0.8,1}, 1},{},
			{{0.9,0}, 1},{{0.9,1}, 1},{},
			
			{{0,0.1}, 1},{{1,0.1}, 1},{},
			{{0,0.2}, 1},{{1,0.2}, 1},{},
			{{0,0.3}, 1},{{1,0.3}, 1},{},
			{{0,0.4}, 1},{{1,0.4}, 1},{},
			{{0,0.5}, 1},{{1,0.5}, 1},{},
			{{0,0.6}, 1},{{1,0.6}, 1},{},
			{{0,0.7}, 1},{{1,0.7}, 1},{},
			{{0,0.8}, 1},{{1,0.8}, 1},{},
			{{0,0.9}, 1},{{1,0.9}, 1},{}
		};
	}; // HEADER_BARS

	class green {
		color[] = {0,1,0,0};
		class GRID {
			type="line";
			width = 4;
			lineType = 0;
			points[] ={
				{{0,BEZEL_Y1}, 1},{{1,BEZEL_Y1}, 1},{},
				{{0,BEZEL_Y2}, 1},{{1,BEZEL_Y2}, 1},{},
				{{0,BEZEL_Y3}, 1},{{1,BEZEL_Y3}, 1},{},
				{{0,BEZEL_Y4}, 1},{{1,BEZEL_Y4}, 1},{},
				{{0,BEZEL_Y5}, 1},{{1,BEZEL_Y5}, 1},{},
				{{0,BEZEL_Y6}, 1},{{1,BEZEL_Y6}, 1},{},
				
				{{BEZEL_XT1,0}, 1},{{BEZEL_XB1,1}, 1},{},
				{{BEZEL_XT2,0}, 1},{{BEZEL_XB2,1}, 1},{},
				{{BEZEL_XT3,0}, 1},{{BEZEL_XB3,1}, 1},{},
				{{BEZEL_XT4,0}, 1},{{BEZEL_XB4,1}, 1},{},
				{{BEZEL_XT5,0}, 1},{{BEZEL_XB5,1}, 1},{},
				{{BEZEL_XT6,0}, 1},{{BEZEL_XB6,1}, 1},{}
			};
		};
	};
};