		attenuationEffectType = "HeliAttenuation"; //utlumovani v interieru (odkaz do Attenuation.hpp ve slozce SOUNDS_F

		soundGetIn[]={"A3\Sounds_F\air\Plane_Fighter_03\getin",db-5,1};
		soundGetOut[]={"A3\Sounds_F\air\Plane_Fighter_03\getout",db-5,1, 40};
		soundDammage[]={"", db-5, 1};
		soundEngineOnInt[] = {"FIR_F16\Sound\Engine_On_In", db-0, 1.0};
		soundEngineOnExt[] = {"FIR_F16\Sound\Engine_On_ex", db5, 1.0, 500};
		soundEngineOffInt[] =  {"FIR_F16\Sound\Engine_Off_In", db-0, 1.0};
		soundEngineOffExt[] =  {"FIR_F16\Sound\Engine_Off_ex", db5, 1.0, 500};
    	soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\locked_1", db-20, 1};
    	soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\locked_3", db-20, 1.5};
	/*	EXTERNAL SOUNDS L159 */

		class Sounds
		{
			class EngineLowOut
			{/*db8*/
				sound[] =  {"FIR_F16\Sound\Engine_Low_Ex", db4, 1.0, 1200};
				frequency = "1";
			/*	frequency = "1.0 min (rpm + 0.5)";*/
				volume = "camPos*2*(rpm factor[0.95, 0])*(rpm factor[0, 0.95])";
			};
			class EngineHighOut
			{
				sound[] =  {"FIR_F16\Sound\Engine_High_Ex", db4, 1.2, 1400};
				frequency = "1";
				volume = "camPos*4*(rpm factor[0.5, 1.1])*(rpm factor[1.1, 0.5])";
			};
			class ForsageOut
			{
				sound[] =  {"FIR_F16\Sound\Forsage_Ex", db15, 1.4, 1700};
				frequency = "1";
				volume = "engineOn*camPos*(thrust factor[0.6, 1.0])";
				cone[] = {3.14, 3.92, 2.0, 0.5};
			};
			class WindNoiseOut
			{
				sound[] =  {"A3\Sounds_F\air\Plane_Fighter_03\noise", db-5, 1.0, 150};
				frequency ="(0.1+(1.2*(speed factor[1, 150])))";
				volume = "camPos*(speed factor[1, 150])";
			};

	/*	INTERNAL SOUNDS L159 */ 

			class EngineLowIn
			{
				sound[] =  {"FIR_F16\Sound\Engine_Low_In", db0, 1.0};
				frequency = "1";
			/*	frequency = "1.0 min (rpm + 0.5)";*/
				volume = (1-camPos)*((rpm factor[0.7, 0.1])*(rpm factor[0.1, 0.7]));
			};
			class EngineHighIn
			{
				sound[] =  {"FIR_F16\Sound\Engine_High_In", db0, 1.2};
				frequency = "1";
				volume = "(1-camPos)*(rpm factor[0.85, 1.0])";
			};
			class ForsageIn
			{
				sound[] =  {"FIR_F16\Sound\Forsage_In", db-2, 1.0};
				frequency = "1";
				volume = "(1-camPos)*(engineOn*(thrust factor[0.6, 1.0]))";
			};
			class WindNoiseIn
			{
				sound[] =  {"A3\Sounds_F\air\Plane_Fighter_03\noise", db-6, 1.0};
				frequency ="(0.1+(1.2*(speed factor[1, 150])))";
				volume = "(1-camPos)*(speed factor[1, 150])";
			};
		};