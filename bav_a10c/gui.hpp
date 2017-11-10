// Control types
#define CT_STATIC           0
#define CT_BUTTON           1
#define CT_EDIT             2
#define CT_SLIDER           3
#define CT_COMBO            4
#define CT_LISTBOX          5
#define CT_TOOLBOX          6
#define CT_CHECKBOXES       7
#define CT_PROGRESS         8
#define CT_HTML             9
#define CT_STATIC_SKEW      10
#define CT_ACTIVETEXT       11
#define CT_TREE             12
#define CT_STRUCTURED_TEXT  13
#define CT_CONTEXT_MENU     14
#define CT_CONTROLS_GROUP   15
#define CT_SHORTCUTBUTTON   16
#define CT_XKEYDESC         40
#define CT_XBUTTON          41
#define CT_XLISTBOX         42
#define CT_XSLIDER          43
#define CT_XCOMBO           44
#define CT_ANIMATED_TEXTURE 45
#define CT_OBJECT           80
#define CT_OBJECT_ZOOM      81
#define CT_OBJECT_CONTAINER 82
#define CT_OBJECT_CONT_ANIM 83
#define CT_LINEBREAK        98
#define CT_USER             99
#define CT_MAP              100
#define CT_MAP_MAIN         101
#define CT_LISTNBOX         102

// Static styles
#define ST_POS            0x0F
#define ST_HPOS           0x03
#define ST_VPOS           0x0C
#define ST_LEFT           0x00
#define ST_RIGHT          0x01
#define ST_CENTER         0x02
#define ST_DOWN           0x04
#define ST_UP             0x08
#define ST_VCENTER        0x0C
#define ST_GROUP_BOX       96
#define ST_GROUP_BOX2      112
#define ST_ROUNDED_CORNER  ST_GROUP_BOX + ST_CENTER
#define ST_ROUNDED_CORNER2 ST_GROUP_BOX2 + ST_CENTER

#define ST_TYPE           0xF0
#define ST_SINGLE         0x00
#define ST_MULTI          0x10
#define ST_TITLE_BAR      0x20
#define ST_PICTURE        0x30
#define ST_FRAME          0x40
#define ST_BACKGROUND     0x50
#define ST_GROUP_BOX      0x60
#define ST_GROUP_BOX2     0x70
#define ST_HUD_BACKGROUND 0x80
#define ST_TILE_PICTURE   0x90
#define ST_WITH_RECT      0xA0
#define ST_LINE           0xB0

#define ST_SHADOW         0x100
#define ST_NO_RECT        0x200
#define ST_KEEP_ASPECT_RATIO  0x800

#define ST_TITLE          ST_TITLE_BAR + ST_CENTER

// Slider styles
#define SL_DIR            0x400
#define SL_VERT           0
#define SL_HORZ           0x400

#define SL_TEXTURES       0x10

// progress bar 
#define ST_VERTICAL       0x01
#define ST_HORIZONTAL     0

// Listbox styles
#define LB_TEXTURES       0x10
#define LB_MULTI          0x20

// Tree styles
#define TR_SHOWROOT       1
#define TR_AUTOCOLLAPSE   2

// MessageBox styles
#define MB_BUTTON_OK      1
#define MB_BUTTON_CANCEL  2
#define MB_BUTTON_USER    4


////////////////
//Base Classes//
////////////////

class IGUIBack;
class RscFrame;
class RscPicture;
class RscCombo;
class Rsclistbox;
class RscButton;
class RscButtonMenu;
class RscButtonMenuOK;
class RscButtonMenuCancel;
class RscMapControl;
class RscObject;
class RscText;
class RscHTML;
class RscTextCheckbox;
class RscEdit;
class A10_GUI
{
idd = 5160;
movingenable = "false";
class Controls
{
	class a10_frame: RscFrame
	{
		idc = 1800;
		x = 0.15 * safezoneW + safezoneX;
		y = 0.15 * safezoneH + safezoneY;
		w = 0.7 * safezoneW;
		h = 0.7 * safezoneH;
		colorText[] = {1,1,1,1};
		colorBackground[] = {1,1,1,1};
		colorActive[] = {1,1,1,1};
	};
	class a10_picture_background: RscPicture
	{
		idc = 1200;
		x = 0.15 * safezoneW + safezoneX;
		y = 0.15 * safezoneH + safezoneY;
		w = 0.7 * safezoneW;
		h = 0.7 * safezoneH;
		text = "FIR_A10C\ui\background_ca.paa";
	};
	class a10pic: RscPicture
	{
		idc = 1201;
		text = "FIR_A10C\ui\a10_loadout_ca.paa";
		x = 0.1675 * safezoneW + safezoneX;
		y = 0.206 * safezoneH + safezoneY;
		w = 0.5425 * safezoneW;
		h = 0.364 * safezoneH;
	};
	class F14_Skin_Button: RscPicture
	{
		idc = 1203;
		text = "FIR_A10C\ui\button_skin.paa";
		x = 0.73625 * safezoneW + safezoneX;
		y = 0.206 * safezoneH + safezoneY;
		w = 0.09625 * safezoneW;
		h = 0.084 * safezoneH;
	};
	class a10_skin_btn: RscButton
	{
		idc = 1600;
		text = ""; //--- ToDo: Localize;
		x = 0.73625 * safezoneW + safezoneX;
		y = 0.206 * safezoneH + safezoneY;
		w = 0.09625 * safezoneW;
		h = 0.084 * safezoneH;
		colorText[] = {-1,-1,-1,-1};
		colorBackground[] = {-1,-1,-1,-1};
		colorActive[] = {-1,-1,-1,-1};
		tooltip = "Open the ADES Setting"; //--- ToDo: Localize;
		action="_insigniahandle = execVM ""\FIR_AirWeaponSystem_US\Script\ades\ADES_Open.sqf""";
	};
	class preset: RscText
	{
		idc = 1000;
		text = "select preset"; //--- ToDo: Localize;
		x = 0.73625 * safezoneW + safezoneX;
		y = 0.29 * safezoneH + safezoneY;
		w = 0.07 * safezoneW;
		h = 0.028 * safezoneH;
	};
	class preset_combo: RscCombo
	{
		idc = 2100;
		x = 0.73625 * safezoneW + safezoneX;
		y = 0.318 * safezoneH + safezoneY;
		w = 0.09625 * safezoneW;
		h = 0.028 * safezoneH;
	};
	class A10_repair_Button: RscPicture
	{
		idc = 1204;
		text = "FIR_A10C\ui\button_repair.paa";
		x = 0.73625 * safezoneW + safezoneX;
		y = 0.374 * safezoneH + safezoneY;
		w = 0.09625 * safezoneW;
		h = 0.084 * safezoneH;
	};
	class repair_btn: RscButton
	{
		idc = 1601;
		text = ""; //--- ToDo: Localize;
		x = 0.73625 * safezoneW + safezoneX;
		y = 0.374 * safezoneH + safezoneY;
		w = 0.09625 * safezoneW;
		h = 0.084 * safezoneH;
		colorText[] = {-1,-1,-1,-1};
		colorBackground[] = {-1,-1,-1,-1};
		colorActive[] = {-1,-1,-1,-1};
		tooltip = "repair"; //--- ToDo: Localize;
		action="_applyhandle = execVM ""\FIR_A10C\sqs\loadout\A10_repair.sqf""";
	};
	class A10_refuel_Button: RscPicture
	{
		idc = 1205;
		text = "FIR_A10C\ui\button_refuel.paa";
		x = 0.73625 * safezoneW + safezoneX;
		y = 0.486 * safezoneH + safezoneY;
		w = 0.09625 * safezoneW;
		h = 0.084 * safezoneH;
	};
	class refuel_btn: RscButton
	{
		idc = 1602;
		text = ""; //--- ToDo: Localize;
		x = 0.73625 * safezoneW + safezoneX;
		y = 0.486 * safezoneH + safezoneY;
		w = 0.09625 * safezoneW;
		h = 0.084 * safezoneH;
		colorText[] = {-1,-1,-1,-1};
		colorBackground[] = {-1,-1,-1,-1};
		colorActive[] = {-1,-1,-1,-1};
		tooltip = "refuel"; //--- ToDo: Localize;
		action="_applyhandle = execVM ""\FIR_A10C\sqs\loadout\A10_refuel.sqf""";
	};
	class RscText_1001: RscText
	{
		idc = 1001;
		text = "1"; //--- ToDo: Localize;
		x = 0.6925 * safezoneW + safezoneX;
		y = 0.57 * safezoneH + safezoneY;
		w = 0.0175 * safezoneW;
		h = 0.028 * safezoneH;
	};
	class RscText_1002: RscText
	{
		idc = 1002;
		text = "2"; //--- ToDo: Localize;
		x = 0.63125 * safezoneW + safezoneX;
		y = 0.57 * safezoneH + safezoneY;
		w = 0.0175 * safezoneW;
		h = 0.028 * safezoneH;
	};
	class a10_custom_save_Buttonpic_1: RscPicture
	{
		idc = 1706;
		text = "FIR_A10C\ui\button_save1_ca.paa";
		x = 0.73625 * safezoneW + safezoneX;
		y = 0.598 * safezoneH + safezoneY;
		w = 0.02625 * safezoneW;
		h = 0.042 * safezoneH;
	};
	class save1_btn: RscButton
	{
		idc = 1603;
		text = ""; //--- ToDo: Localize;
		x = 0.73625 * safezoneW + safezoneX;
		y = 0.598 * safezoneH + safezoneY;
		w = 0.02625 * safezoneW;
		h = 0.042 * safezoneH;
		colorText[] = {-1,-1,-1,-1};
		colorBackground[] = {-1,-1,-1,-1};
		colorActive[] = {-1,-1,-1,-1};
		tooltip = "Save the Custom Preset in slots"; //--- ToDo: Localize;
		action="_custom1handle = execVM ""\FIR_A10C\sqs\loadout\A10_SaveCustom.sqf""";
	};
	class a10_custom_save_Buttonpic_2: RscPicture
	{
		idc = 1707;
		text = "FIR_AirWeaponSystem_US\ui\button_killmark_ca.paa";
		x = 0.77125 * safezoneW + safezoneX;
		y = 0.598 * safezoneH + safezoneY;
		w = 0.02625 * safezoneW;
		h = 0.042 * safezoneH;
	};
	class RscButton_1605: RscButton
	{
		idc = 1605;
		text = ""; //--- ToDo: Localize;
		x = 0.77125 * safezoneW + safezoneX;
		y = 0.598 * safezoneH + safezoneY;
		w = 0.02625 * safezoneW;
		h = 0.042 * safezoneH;
		colorText[] = {-1,-1,-1,-1};
		colorBackground[] = {-1,-1,-1,-1};
		colorActive[] = {-1,-1,-1,-1};
		tooltip = "Open Killmark"; //--- ToDo: Localize;
		action="_custom1handle =  execVM ""\FIR_AirWeaponSystem_US\Script\killmark\Killmark_Open.sqf""";
	};

	class RscText_1003: RscText
	{
		idc = 1003;
		text = "3"; //--- ToDo: Localize;
		x = 0.57875 * safezoneW + safezoneX;
		y = 0.57 * safezoneH + safezoneY;
		w = 0.0175 * safezoneW;
		h = 0.028 * safezoneH;
	};
	class RscText_1004: RscText
	{
		idc = 1004;
		text = "4"; //--- ToDo: Localize;
		x = 0.535 * safezoneW + safezoneX;
		y = 0.57 * safezoneH + safezoneY;
		w = 0.0175 * safezoneW;
		h = 0.028 * safezoneH;
	};
	class RscText_1005: RscText
	{
		idc = 1005;
		text = "5"; //--- ToDo: Localize;
		x = 0.5 * safezoneW + safezoneX;
		y = 0.57 * safezoneH + safezoneY;
		w = 0.0175 * safezoneW;
		h = 0.028 * safezoneH;
	};
	class RscText_1006: RscText
	{
		idc = 1006;
		text = "GAU-8 AMMO"; //--- ToDo: Localize;
		x = 0.40375 * safezoneW + safezoneX;
		y = 0.57 * safezoneH + safezoneY;
		w = 0.07875 * safezoneW;
		h = 0.028 * safezoneH;
	};
	class RscText_1007: RscText
	{
		idc = 1007;
		text = "7"; //--- ToDo: Localize;
		x = 0.36 * safezoneW + safezoneX;
		y = 0.57 * safezoneH + safezoneY;
		w = 0.0175 * safezoneW;
		h = 0.028 * safezoneH;
	};
	class RscText_1008: RscText
	{
		idc = 1008;
		text = "8"; //--- ToDo: Localize;
		x = 0.3075 * safezoneW + safezoneX;
		y = 0.57 * safezoneH + safezoneY;
		w = 0.0175 * safezoneW;
		h = 0.028 * safezoneH;
	};
	class RscText_1009: RscText
	{
		idc = 1009;
		text = "9"; //--- ToDo: Localize;
		x = 0.26375 * safezoneW + safezoneX;
		y = 0.57 * safezoneH + safezoneY;
		w = 0.0175 * safezoneW;
		h = 0.028 * safezoneH;
	};
	class RscText_1010: RscText
	{
		idc = 1010;
		text = "10"; //--- ToDo: Localize;
		x = 0.21125 * safezoneW + safezoneX;
		y = 0.57 * safezoneH + safezoneY;
		w = 0.0175 * safezoneW;
		h = 0.028 * safezoneH;
	};
	class RscText_1011: RscText
	{
		idc = 1011;
		text = "11"; //--- ToDo: Localize;
		x = 0.1675 * safezoneW + safezoneX;
		y = 0.57 * safezoneH + safezoneY;
		w = 0.0175 * safezoneW;
		h = 0.028 * safezoneH;
	};
	class hp1_c: RscCombo
	{
		idc = 2101;
		x = 0.64875 * safezoneW + safezoneX;
		y = 0.612 * safezoneH + safezoneY;
		w = 0.07875 * safezoneW;
		h = 0.028 * safezoneH;
		//onLBSelChanged = "_applyhandle = [1] execVM ""\FIR_A10C\sqs\loadout\A10_HARDPOINT.sqf""";
	};
	class hp2_c: RscCombo
	{
		idc = 2102;
		x = 0.605 * safezoneW + safezoneX;
		y = 0.654 * safezoneH + safezoneY;
		w = 0.07875 * safezoneW;
		h = 0.028 * safezoneH;
		//onLBSelChanged = "_applyhandle = [2] execVM ""\FIR_A10C\sqs\loadout\A10_HARDPOINT.sqf""";
	};
	class hp3_c: RscCombo
	{
		idc = 2103;
		x = 0.5525 * safezoneW + safezoneX;
		y = 0.696 * safezoneH + safezoneY;
		w = 0.07875 * safezoneW;
		h = 0.028 * safezoneH;
	};
	class hp4_c: RscCombo
	{
		idc = 2104;
		x = 0.50875 * safezoneW + safezoneX;
		y = 0.738 * safezoneH + safezoneY;
		w = 0.07875 * safezoneW;
		h = 0.028 * safezoneH;
	};
	class hp5_c: RscCombo
	{
		idc = 2105;
		x = 0.47375 * safezoneW + safezoneX;
		y = 0.78 * safezoneH + safezoneY;
		w = 0.07875 * safezoneW;
		h = 0.028 * safezoneH;
	};
	class gau8_c: RscCombo
	{
		idc = 2106;
		x = 0.40375 * safezoneW + safezoneX;
		y = 0.598 * safezoneH + safezoneY;
		w = 0.07875 * safezoneW;
		h = 0.028 * safezoneH;
	};
	class hp7_c: RscCombo
	{
		idc = 2107;
		x = 0.33375 * safezoneW + safezoneX;
		y = 0.78 * safezoneH + safezoneY;
		w = 0.07875 * safezoneW;
		h = 0.028 * safezoneH;
	};
	class hp8_c: RscCombo
	{
		idc = 2108;
		x = 0.28125 * safezoneW + safezoneX;
		y = 0.738 * safezoneH + safezoneY;
		w = 0.07875 * safezoneW;
		h = 0.028 * safezoneH;
	};
	class hp9_c: RscCombo
	{
		idc = 2109;
		x = 0.2375 * safezoneW + safezoneX;
		y = 0.696 * safezoneH + safezoneY;
		w = 0.07875 * safezoneW;
		h = 0.028 * safezoneH;
	};
	class hp10_c: RscCombo
	{
		idc = 2110;
		x = 0.185 * safezoneW + safezoneX;
		y = 0.654 * safezoneH + safezoneY;
		w = 0.07875 * safezoneW;
		h = 0.028 * safezoneH;
		//onLBSelChanged = "_applyhandle = [10] execVM ""\FIR_A10C\sqs\loadout\A10_HARDPOINT.sqf""";
	};
	class hp11_c: RscCombo
	{
		idc = 2111;
		x = 0.1675 * safezoneW + safezoneX;
		y = 0.612 * safezoneH + safezoneY;
		w = 0.07875 * safezoneW;
		h = 0.028 * safezoneH;
		//onLBSelChanged = "_applyhandle = [11] execVM ""\FIR_A10C\sqs\loadout\A10_HARDPOINT.sqf""";
	};
	class a10_name_Button: RscPicture
	{
		idc = 1709;
		text = "FIR_A10C\ui\button_name_ca.paa";
		x = 0.73625 * safezoneW + safezoneX;
		y = 0.654 * safezoneH + safezoneY;
		w = 0.02625 * safezoneW;
		h = 0.042 * safezoneH;
	};
	class name_btn: RscButton
	{
		idc = 1606;
		text = ""; //--- ToDo: Localize;
		x = 0.73625 * safezoneW + safezoneX;
		y = 0.654 * safezoneH + safezoneY;
		w = 0.02625 * safezoneW;
		h = 0.042 * safezoneH;
		colorText[] = {-1,-1,-1,-1};
		colorBackground[] = {-1,-1,-1,-1};
		colorActive[] = {-1,-1,-1,-1};
		tooltip = "Apply the Current insignia"; //--- ToDo: Localize;
		action="_namehandle = execVM ""\FIR_AirWeaponSystem_US\script\setnamerank\SetNameRank_Open.sqf""";
	};
	class a10_Apply_Button: RscPicture
	{
		idc = 1902;
		text = "FIR_a10c\ui\button_apply.paa";
		x = 0.71 * safezoneW + safezoneX;
		y = 0.752 * safezoneH + safezoneY;
		w = 0.0525 * safezoneW;
		h = 0.07 * safezoneH;
	};
	class apply_btn: RscButton
	{
		idc = 1608;
		text = "apply"; //--- ToDo: Localize;
		x = 0.71 * safezoneW + safezoneX;
		y = 0.752 * safezoneH + safezoneY;
		w = 0.0525 * safezoneW;
		h = 0.07 * safezoneH;
		colorText[] = {-1,-1,-1,-1};
		colorBackground[] = {-1,-1,-1,-1};
		colorActive[] = {-1,-1,-1,-1};
		tooltip = "Apply the Current Loadout"; //--- ToDo: Localize;
		action="_applyhandle = execVM ""\FIR_A10C\sqs\loadout\A10_Loadout.sqf""";
	};
	class a10_Cancel_Button: RscPicture
	{
		idc = 1903;
		text = "FIR_A10C\ui\button_cancel.paa";
		x = 0.78 * safezoneW + safezoneX;
		y = 0.752 * safezoneH + safezoneY;
		w = 0.0525 * safezoneW;
		h = 0.07 * safezoneH;
	};
	class cancel_btn: RscButton
	{
		idc = 1609;
		text = "cancel"; //--- ToDo: Localize;
		x = 0.78 * safezoneW + safezoneX;
		y = 0.752 * safezoneH + safezoneY;
		w = 0.0525 * safezoneW;
		h = 0.07 * safezoneH;
		colorText[] = {-1,-1,-1,-1};
		colorBackground[] = {-1,-1,-1,-1};
		colorActive[] = {-1,-1,-1,-1};
		tooltip = "Close"; //--- ToDo: Localize;
		action="closeDialog 0";
	};
};

};

