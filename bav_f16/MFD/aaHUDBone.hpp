class HorizonIndicatorBank {
						type = "rotational";
						source = "horizonBank";
						sourceScale = 1.000000;
						center[] = {0.5000, 0.26000};
						min = -3.141593;
						max = 3.141593;
						minAngle = 0;
						maxAngle = 360;
						aspectRatio = 1.250000;
					};

			
class DogfightAmmoMax {
						type = "linear";
						source = "LarAmmoMax";
						sourceScale = 0.4800000;
						min = 0;
						max = 1;
						minPos[]={"0.30+0.32-0.002","0.40 - 0.28"};
						maxPos[]={"0.30+0.32-0.002","0.567 - 0.28"};
					};

					class DogfightAmmoMin: DogfightAmmoMax {
						source = "LarAmmoMin";
					};

					class DogfightTargetDist: DogfightAmmoMax {
						source = "LarTargetDist";
					};
	
class RDRAmmoMax {
						type = "linear";
						source = "LarAmmoMax";
						sourceScale = 0.4800000;
						min = 0;
						max = 1;
						minPos[]={"0.30+0.32-0.002+0.03","0.40 - 0.28+0.07"};
						maxPos[]={"0.30+0.32-0.002+0.03","0.567 - 0.28+0.07"};
					};

					class RDRAmmoMin: RDRAmmoMax {
						source = "LarAmmoMin";
					};

					class RDRTargetDist: RDRAmmoMax {
						source = "LarTargetDist";
					};
class AGMAmmoMax {
						type = "linear";
						source = "LarAmmoMax";
						sourceScale = 1;
						min = 0;
						max = 1;
						minPos[]={"0.30+0.32-0.002+0.03","0.40 - 0.28+0.07"};
						maxPos[]={"0.30+0.32-0.002+0.03","0.567 - 0.28+0.07"};
					};

					class AGMAmmoMin: AGMAmmoMax {
						source = "LarAmmoMin";
					};

					class AGMTargetDist: AGMAmmoMax {
						source = "LarTargetDist";
					};
class BOMBAmmoMax {
						type = "linear";
						source = "LarAmmoMax";
						sourceScale = 0.4800000;
						min = 0;
						max = 1;
						minPos[]={"0.30+0.32-0.002+0.03","0.40 - 0.28+0.07"};
						maxPos[]={"0.30+0.32-0.002+0.03","0.567 - 0.28+0.07"};
					};

					class BOMBAmmoMin: BOMBAmmoMax {
						source = "LarAmmoMin";
					};

					class BOMBTargetDist: BOMBAmmoMax {
						source = "LarTargetDist";
					};