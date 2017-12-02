					
class MachineGunCrosshairGroup {
						type = "group";
						condition = "mgun";				
					
					class MachineGunCrosshair {
							type = "line";
							width = 3.000000;
							points[]= {
							{"ImpactPoint", {0.000000, -0.097000}, 1}, 
							{"ImpactPoint", {0.000000, -0.085000}, 1}, {}, 
							{"ImpactPoint", {0.000000, 0.097000}, 1}, 
							{"ImpactPoint", {0.000000, 0.085000}, 1}, {}, 
							{"ImpactPoint", {-0.080000, 0.000000}, 1}, 
							{"ImpactPoint", {-0.068000, 0.000000}, 1}, {},
							{"ImpactPoint", {0.080000, 0.000000}, 1}, 
							{"ImpactPoint", {0.068000, 0.000000}, 1}, {}, 
							{"ImpactPoint", {0.000000, -0.002500}, 1}, 
							{"ImpactPoint", {0.000000, 0.002500}, 1}, {}, 
							{"ImpactPoint", {-0.002000, 0.000000}, 1}, 
							{"ImpactPoint", {0.002000, 0.000000}, 1}, {},
							
							{"ImpactPoint", {0.025000, 0.010000}, 1}, 
							{"ImpactPoint", {0.025000, -0.010000}, 1}, {},

							{"ImpactPoint", {-0.025000, 0.010000}, 1}, 
							{"ImpactPoint", {-0.025000, -0.010000}, 1}, {}
							
							};
						};
						
						
						class RadarBoxes {
						type = "radar";
						#include "wektor.hpp"
						width = 2;
						points[] = {{{-0.002000, -0.002500}, 1}, {{0.002000, -0.002500}, 1}, {{0.002000, 0.002500}, 1}, {{-0.002000, 0.002500}, 1}, {{-0.002000, -0.002500}, 1}};
					};
						
						

						class Circle {
							type = "line";
							width = 3;
							points[]= 
							{
							{"ImpactPoint", {0, -0.060000}, 1}, 
							{"ImpactPoint", {0, -0.075000}, 1}, 
							{"MissileFlightTimeRot1", {0, 0.060000}, 1, "ImpactPoint", 1}, 
							{"MissileFlightTimeRot2", {0, 0.060000}, 1, "ImpactPoint", 1}, 
							{"MissileFlightTimeRot3", {0, 0.060000}, 1, "ImpactPoint", 1}, 
							{"MissileFlightTimeRot4", {0, 0.060000}, 1, "ImpactPoint", 1}, 
							{"MissileFlightTimeRot5", {0, 0.060000}, 1, "ImpactPoint", 1}, 
							{"MissileFlightTimeRot6", {0, 0.060000}, 1, "ImpactPoint", 1}, 
							{"MissileFlightTimeRot7", {0, 0.060000}, 1, "ImpactPoint", 1}, 
							{"MissileFlightTimeRot8", {0, 0.060000}, 1, "ImpactPoint", 1}, 
							{"MissileFlightTimeRot9", {0, 0.060000}, 1, "ImpactPoint", 1}, 
							{"MissileFlightTimeRot10", {0, 0.060000}, 1, "ImpactPoint", 1}, 
							{"MissileFlightTimeRot11", {0, 0.060000}, 1, "ImpactPoint", 1}, 
							{"MissileFlightTimeRot12", {0, 0.060000}, 1, "ImpactPoint", 1}, 
							{"MissileFlightTimeRot13", {0, 0.060000}, 1, "ImpactPoint", 1}, 
							{"MissileFlightTimeRot14", {0, 0.060000}, 1, "ImpactPoint", 1}, 
							{"MissileFlightTimeRot15", {0, 0.060000}, 1, "ImpactPoint", 1}, 
							{"MissileFlightTimeRot16", {0, 0.060000}, 1, "ImpactPoint", 1}, 
							{"MissileFlightTimeRot17", {0, 0.060000}, 1, "ImpactPoint", 1}, 
							{"MissileFlightTimeRot18", {0, 0.060000}, 1, "ImpactPoint", 1}, 
							{"MissileFlightTimeRot19", {0, 0.060000}, 1, "ImpactPoint", 1}, 
							{"MissileFlightTimeRot20", {0, 0.060000}, 1, "ImpactPoint", 1}, 
							{"MissileFlightTimeRot21", {0, 0.060000}, 1, "ImpactPoint", 1}, 
							{"MissileFlightTimeRot22", {0, 0.060000}, 1, "ImpactPoint", 1}, 
							{"MissileFlightTimeRot23", {0, 0.060000}, 1, "ImpactPoint", 1}, 
							{"MissileFlightTimeRot24", {0, 0.060000}, 1, "ImpactPoint", 1}, 
							{"MissileFlightTimeRot25", {0, 0.060000}, 1, "ImpactPoint", 1}, 
							{"MissileFlightTimeRot26", {0, 0.060000}, 1, "ImpactPoint", 1}, 
							{"MissileFlightTimeRot27", {0, 0.060000}, 1, "ImpactPoint", 1}, 
							{"MissileFlightTimeRot28", {0, 0.060000}, 1, "ImpactPoint", 1}, 
							{"MissileFlightTimeRot29", {0, 0.060000}, 1, "ImpactPoint", 1}, 
							{"MissileFlightTimeRot30", {0, 0.060000}, 1, "ImpactPoint", 1}, 
							{"MissileFlightTimeRot31", {0, 0.060000}, 1, "ImpactPoint", 1}, 
							{"MissileFlightTimeRot32", {0, 0.060000}, 1, "ImpactPoint", 1}, 
							{"MissileFlightTimeRot33", {0, 0.060000}, 1, "ImpactPoint", 1}, 
							{"MissileFlightTimeRot34", {0, 0.060000}, 1, "ImpactPoint", 1}, 
							{"MissileFlightTimeRot35", {0, 0.060000}, 1, "ImpactPoint", 1}, 
							{"MissileFlightTimeRot36", {0, 0.060000}, 1, "ImpactPoint", 1}, 
							{"MissileFlightTimeRot37", {0, 0.060000}, 1, "ImpactPoint", 1}, 
							{"MissileFlightTimeRot38", {0, 0.060000}, 1, "ImpactPoint", 1}, 
							{"MissileFlightTimeRot39", {0, 0.060000}, 1, "ImpactPoint", 1}, 
							{"MissileFlightTimeRot40", {0, 0.060000}, 1, "ImpactPoint", 1}, 
							{"MissileFlightTimeRot40", {0, 0.07500}, 1, "ImpactPoint", 1}};
						};

						class Circle_Min_Range {
							type = "line";
							width = 3;
							points[]= {
							{"ImpactPoint", {0.068000, 0.000000},1},
{"ImpactPoint", {0.066967, 0.014760},1},
{"ImpactPoint", {0.063899, 0.029072},1},
{"ImpactPoint", {0.058890, 0.042500},1},
{"ImpactPoint", {0.052091, 0.054637},1},
{"ImpactPoint", {0.043710, 0.065114},1},
{"ImpactPoint", {0.034000, 0.073612},1},
{"ImpactPoint", {0.023257, 0.079874},1},
{"ImpactPoint", {0.011808, 0.083709},1},
{"ImpactPoint", {0.000000, 0.085000},1},
{"ImpactPoint", {-0.011808, 0.083709},1},
{"ImpactPoint", {-0.023257, 0.079874},1},
{"ImpactPoint", {-0.034000, 0.073612},1},
{"ImpactPoint", {-0.043710, 0.065114},1},
{"ImpactPoint", {-0.052091, 0.054637},1},
{"ImpactPoint", {-0.058890, 0.042500},1},
{"ImpactPoint", {-0.063899, 0.029072},1},
{"ImpactPoint", {-0.066967, 0.014760},1},
{"ImpactPoint", {-0.068000, 0.000000},1},
{"ImpactPoint", {-0.066967, -0.014760},1},
{"ImpactPoint", {-0.063899, -0.029072},1},
{"ImpactPoint", {-0.058890, -0.042500},1},
{"ImpactPoint", {-0.052091, -0.054637},1},
{"ImpactPoint", {-0.043710, -0.065114},1},
{"ImpactPoint", {-0.034000, -0.073612},1},
{"ImpactPoint", {-0.023257, -0.079874},1},
{"ImpactPoint", {-0.011808, -0.083709},1},
{"ImpactPoint", {-0.000000, -0.085000},1},
{"ImpactPoint", {0.011808, -0.083709},1},
{"ImpactPoint", {0.023257, -0.079874},1},
{"ImpactPoint", {0.034000, -0.073612},1},
{"ImpactPoint", {0.043710, -0.065114},1},
{"ImpactPoint", {0.052091, -0.054637},1},
{"ImpactPoint", {0.058890, -0.042500},1},
{"ImpactPoint", {0.063899, -0.029072},1},
{"ImpactPoint", {0.066967, -0.014760},1},
{"ImpactPoint", {0.068000, -0.000000},1}
};
						};

						class Distance {
							type = "text";
							source = "ImpactDistance";
							sourceScale = 0.001000;
							sourcePrecision = 1;
							max = 15;
							align = "center";
							scale = 1;
							pos[]= {"ImpactPoint", {-0.002000, 0.110000}, 1};
							right[]= {"ImpactPoint", {0.045000, 0.110000}, 1};
							down[]= {"ImpactPoint", {-0.002000, 0.150000}, 1};
						};
					};