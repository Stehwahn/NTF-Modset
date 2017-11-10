			class GUNM{
				condition="mgun";
				type="group";
				
				class Master_MODE
				{
					type="text";
					align="left";
					source="static";
					text="M61";
					scale=1;
					pos[]= {{"0.695-0.050-0.260-0.02","0.632"}, 1};
					right[]= {{"0.695-0.050-0.260+0.05-0.02","0.632"}, 1};
					down[]= {{"0.695-0.050-0.260-0.02","0.682"}, 1};
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
					text="HYDRA";
					scale=1;
					pos[]= {{"0.695-0.050-0.260-0.02","0.632"}, 1};
					right[]= {{"0.695-0.050-0.260+0.05-0.02","0.632"}, 1};
					down[]= {{"0.695-0.050-0.260-0.02","0.682"}, 1};
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
					text="AA";
					scale=1;
					pos[]= {{"0.695-0.050-0.260-0.02","0.632"}, 1};
					right[]= {{"0.695-0.050-0.260+0.05-0.02","0.632"}, 1};
					down[]= {{"0.695-0.050-0.260-0.02","0.682"}, 1};
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
					text="MVR";
					scale=1;
					pos[]= {{"0.695-0.050-0.260-0.02","0.632"}, 1};
					right[]= {{"0.695-0.050-0.260+0.05-0.02","0.632"}, 1};
					down[]= {{"0.695-0.050-0.260-0.02","0.682"}, 1};
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
					text="BMB";
					scale=1;
					pos[]= {{"0.695-0.050-0.260-0.02","0.632"}, 1};
					right[]= {{"0.695-0.050-0.260+0.05-0.02","0.632"}, 1};
					down[]= {{"0.695-0.050-0.260-0.02","0.682"}, 1};
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
										pos[]= {{"0.695-0.050-0.260-0.02","0.632"}, 1};
										right[]= {{"0.695-0.050-0.260+0.05-0.02","0.632"}, 1};
										down[]= {{"0.695-0.050-0.260-0.02","0.682"}, 1};
									};
								};
						};
					};
				};
			}
		class Ammo {
					type="text";
					align="left";
					source="ammo";
					scale=1;
					sourcescale="1";
					pos[]= {{"0.695-0.050-0.260-0.02-0.07","0.632"}, 1};
					right[]= {{"0.695-0.050-0.260+0.05-0.02-0.07","0.632"}, 1};
					down[]= {{"0.695-0.050-0.260-0.02-0.07","0.682"}, 1};
				};
				
		class Bearing
				{
					type = "text";
					source = "heading";
					sourceScale = 1;
					scale=1;
					align="left"
					pos[]= {{"0.695-0.050-0.260-0.02-0.07","0.632+0.035"}, 1};
					right[]= {{"0.695-0.050-0.260+0.05-0.02-0.07","0.632+0.035"}, 1};
					down[]= {{"0.695-0.050-0.260-0.02-0.07","0.682+0.035"}, 1};
				};