class CfgCloudlets 
{

	class Default;
	class A10_Contrail: Default
	{
		interval = "0.01 * (altitude factor[1000,100000])";
		circleRadius = 0;
		circleVelocity[] = {
				0, 0, 0
		};
		angleVar = 1;
		particleFSLoop = 0;
		particleShape = "\a3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 2;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 180;
		moveVelocity[] = {
				0, 0, 0
		};
		rotationVelocity = 1;
		weight = 1;
		volume = 0.800000;
		rubbing = 0.500000;
		size[] = {
				1.0, 25
		};
		color[] = {
				{0.900000, 0.900000, 0.900000, 0.900000}, {0.900000, 0.900000, 0.900000, 0.400000}, {1, 1, 1, 0}
		};
		colorCoef[] = {1,1,1,"((altitude*altitude) interpolate [1000,100000,1.2,0.5])"};
		animationSpeed[] = {
				1
		};
		randomDirectionPeriod = 0.100000;
		randomDirectionIntensity = 0.100000;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 178;
		position[] = {"positionX","positionY","positionZ"};
		positionVar[] = {0, 0, 0};
		MoveVelocityVar[] = {
				0.400000, 0.400000, 0.400000
		};
		rotationVelocityVar = 1;
		sizeVar = 0.500000;
		colorVar[] = {
				0, 0, 0, 0
		};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;


	};
	class A10C_WingTrail: Default
	{
		interval = "0.0001 * (accelY interpolate [39.9999999,40,-1,1])";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 16;
		particleFSLoop = 0;
		angleVar = 360;
		ignoreWind = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = "0.25";
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 1.274;
		volume = 1;
		rubbing = 0.18;
		size[] = {0.18};
		sizeCoef = 1;
		color[] = {{ 1,1,1,0.1 },{ 1,1,1,0.2 },{ 1,1,1,0.1 },{ 1,1,1,0 }};
		colorCoef[] = {1,1,1,"(accelY interpolate [38,85,0,1]) * ((altitude*altitude) interpolate [400,40000,1.2,0.5])"};
		animationSpeed[] = {1000};
		animationSpeedCoef = 0.01;
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.2;
		position[] = {"positionX","positionY","positionZ"};
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0,0,0};
		rotationVelocityVar = 0;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class A10C_WingTrailMed: Default
	{
		interval = "0.0001 * (accelY interpolate [39.9999999,40,-1,1])";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 16;
		particleFSLoop = 0;
		angleVar = 360;
		ignoreWind = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = "0.12";
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 1.274;
		volume = 1;
		rubbing = 0.18;
		size[] = {0.18};
		sizeCoef = 1;
		color[] = {{ 1,1,1,0.1 },{ 1,1,1,0.2 },{ 1,1,1,0.1 },{ 1,1,1,0 }};
		colorCoef[] = {1,1,1,"(accelY interpolate [38,85,0,1]) * ((altitude*altitude) interpolate [400,40000,1.2,0.5])"};
		animationSpeed[] = {1000};
		animationSpeedCoef = 0.01;
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.1;
		position[] = {"positionX","positionY","positionZ"};
		positionVar[] = {0.05,0.05,0.05};
		MoveVelocityVar[] = {0,0,0};
		rotationVelocityVar = 10;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class A10C_BodyTrail: Default
	{
		interval = "0.0001 * (accelY interpolate [69.9999999,70,-1,1])";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 13;
		particleFSLoop = 0;
		angleVar = 360;
		ignoreWind = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = "0.03";
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 1.274;
		volume = 1;
		rubbing = 0.18;
		size[] = {0.5};
		sizeCoef = 1;
		color[] = {{ 1,1,1,0.1 },{ 1,1,1,0.2 },{ 1,1,1,0.1 },{ 1,1,1,0 }};
		colorCoef[] = {1,1,1,"(accelY interpolate [70,160,0,1]) * ((altitude*altitude) interpolate [400,40000,1.5,0.5])"};
		animationSpeed[] = {1000};
		animationSpeedCoef = 0.01;
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.2;
		position[] = {"positionX","positionY","positionZ"};
		positionVar[] = {0.1,0.1,0.1};
		MoveVelocityVar[] = {0,0,0};
		rotationVelocityVar = 10;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class A10C_BodyTrailMed: Default
	{
		interval = "0.0001 * (accelY interpolate [69.9999999,70,-1,1])";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 13;
		particleFSLoop = 0;
		angleVar = 360;
		ignoreWind = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = "0.015";
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 1.274;
		volume = 1;
		rubbing = 0.18;
		size[] = {0.5};
		sizeCoef = 1;
		color[] = {{ 1,1,1,0.1 },{ 1,1,1,0.2 },{ 1,1,1,0.1 },{ 1,1,1,0 }};
		colorCoef[] = {1,1,1,"(accelY interpolate [70,160,0,1]) * ((altitude*altitude) interpolate [400,40000,1.5,0.5])"};
		animationSpeed[] = {1000};
		animationSpeedCoef = 0.01;
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.1;
		position[] = {"positionX","positionY","positionZ"};
		positionVar[] = {0.1,0.1,0.1};
		MoveVelocityVar[] = {0,0,0};
		rotationVelocityVar = 10;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
class A10C_WingTrace: Default
	{
		interval = "0.0001 * (accelY interpolate [99.9999999,90,-1,1])";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 13;
		particleFSLoop = 0;
		angleVar = 360;
		ignoreWind = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = "0.03";
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 1.274;
		volume = 1;
		rubbing = 0.18;
		size[] = {1.0};
		sizeCoef = 1;
		color[] = {{ 1,1,1,0.1 },{ 1,1,1,0.2 },{ 1,1,1,0.1 },{ 1,1,1,0 }};
		colorCoef[] = {1,1,1,"(accelY interpolate [70,160,0,1]) * ((altitude*altitude) interpolate [400,40000,1.5,0.5])"};
		animationSpeed[] = {1000};
		animationSpeedCoef = 0.01;
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.2;
		position[] = {"positionX","positionY","positionZ"};
		positionVar[] = {0.1,0.1,0.1};
		MoveVelocityVar[] = {0,0,0};
		rotationVelocityVar = 10;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class A10C_WingTraceMed: Default
	{
		interval = "0.0001 * (accelY interpolate [99.9999999,90,-1,1])";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 13;
		particleFSLoop = 0;
		angleVar = 360;
		ignoreWind = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = "0.015";
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 1.274;
		volume = 1;
		rubbing = 0.18;
		size[] = {1};
		sizeCoef = 1;
		color[] = {{ 1,1,1,0.1 },{ 1,1,1,0.2 },{ 1,1,1,0.1 },{ 1,1,1,0 }};
		colorCoef[] = {1,1,1,"(accelY interpolate [70,160,0,1]) * ((altitude*altitude) interpolate [400,40000,1.5,0.5])"};
		animationSpeed[] = {1000};
		animationSpeedCoef = 0.01;
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.1;
		position[] = {"positionX","positionY","positionZ"};
		positionVar[] = {0.1,0.1,0.1};
		MoveVelocityVar[] = {0,0,0};
		rotationVelocityVar = 10;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
};

class A10C_WingVortices
{
	class A10C_WingTrail1
	{
		simulation = "particles";
		type = "A10C_WingTrail";
		qualityLevel = 2;
	};
	class A10C_WingTrail1Med
	{
		simulation = "particles";
		type = "A10C_WingTrailMed";
		qualityLevel = 1;
	};
};

class A10C_BodyVortices
{
	class A10C_BodyTrail1
	{
		simulation = "particles";
		type = "A10_BodyTrail";
		qualityLevel = 2;
	};
	class A10C_BodyTrail1Med
	{
		simulation = "particles";
		type = "A10_BodyTrailMed";
		qualityLevel = 1;
	};
};
class A10C_WingTraces
{
	class A10C_WingTrace1
	{
		simulation = "particles";
		type = "A10_WingTrace";
		qualityLevel = 2;
	};
	class A10C_WingTrace1Med
	{
		simulation = "particles";
		type = "A10_WingTraceMed";
		qualityLevel = 1;
	};
};

