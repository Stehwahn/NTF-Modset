			class GUNM{
				condition="mgun";
				type="group";
				
				class Master_MODE
				{
					type="text";
					align="left";
					source="static";
					text="CCIP";
					scale=1;
					pos[]= {{"0.695-0.050-0.294","1.0129 - 0.89 + 0.35"}, 1};
					right[]= {{"0.72-0.050-0.294","1.0129 - 0.89 + 0.35"}, 1};
					down[]= {{"0.695-0.050-0.294","1.0429 - 0.89 + 0.35"}, 1};
				};
			};
			class rocketM{
				condition="rocket";
				type="group";
				
				class Master_MODE
				{
					type="text";
					align="left";
					source="static";
					text="CCIP";
					scale=1;
					pos[]= {{"0.695-0.050-0.294","1.0129 - 0.89 + 0.35"}, 1};
					right[]= {{"0.72-0.050-0.294","1.0129 - 0.89 + 0.35"}, 1};
					down[]= {{"0.695-0.050-0.294","1.0429 - 0.89 + 0.35"}, 1};
				};
			};
			class aaM{
				condition="AAmissile";
				type="group";
				
				class Master_MODE
				{
					type="text";
					align="left";
					source="static";
					text="A-A";
					scale=1;
					pos[]= {{"0.695-0.050-0.294","1.0129 - 0.89 + 0.35"}, 1};
					right[]= {{"0.72-0.050-0.294","1.0129 - 0.89 + 0.35"}, 1};
					down[]= {{"0.695-0.050-0.294","1.0429 - 0.89 + 0.35"}, 1};
				};
			};
			class agM {
				condition="ATmissile";
				type="group";
				
				class Master_MODE
				{
					type="text";
					align="left";
					source="static";
					text="VIS";
					scale=1;
					pos[]= {{"0.695-0.050-0.294","1.0129 - 0.89 + 0.35"}, 1};
					right[]= {{"0.72-0.050-0.294","1.0129 - 0.89 + 0.35"}, 1};
					down[]= {{"0.695-0.050-0.294","1.0429 - 0.89 + 0.35"}, 1};
				};
			};
			class bombM {
				condition="Bomb";
				type="group";
				
				class Master_MODE
				{
					type="text";
					align="left";
					source="static";
					text="CCRP";
					scale=1;
					pos[]= {{"0.695-0.050-0.294","1.0129 - 0.89 + 0.35"}, 1};
					right[]= {{"0.72-0.050-0.294","1.0129 - 0.89 + 0.35"}, 1};
					down[]= {{"0.695-0.050-0.294","1.0429 - 0.89 + 0.35"}, 1};
				};
			};
			
			
			class nav{
				condition="mgun<1";
				type="group";
				class nav2{
					condition="atmissile<1";
					type="group";
					class nav3{
						condition="aamissile<1";
						type="group";
						class nav4{
							condition="bomb<1";
							type="group";
								class nav5{
									condition="rocket<1";
									type="group";
									class Master_MODE
									{
										type="text";
										align="left";
										source="static";
										text="NAV";
										scale=1;
										pos[]= {{"0.695-0.050-0.294","1.0129 - 0.89 + 0.35"}, 1};
										right[]= {{"0.72-0.050-0.294","1.0129 - 0.89 + 0.35"}, 1};
										down[]= {{"0.695-0.050-0.294","1.0429 - 0.89 + 0.35"}, 1};
									};
								};
						};
					};
				};
			}