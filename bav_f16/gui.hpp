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
class F16_MFD1
{
	idd = 3600;
	movingenable = "false";
	
	class controlsBackground
	{
		class F16_MFD_MAP: RscMapControl
		{
			idc = 3620;
			maxSatelliteAlpha = 0;
			x = 0.604995 * safezoneW + safezoneX;
			y = 0.429989 * safezoneH + safezoneY;
			w = 0.22749 * safezoneW;
			h = 0.39206 * safezoneH;
		};
	};
	class controls
	{
		class F16_MFD_Frame: RscFrame
		{
			idc = 3601;
			x = 0.587496 * safezoneW + safezoneX;
			y = 0.401986 * safezoneH + safezoneY;
			w = 0.262488 * safezoneW;
			h = 0.448068 * safezoneH;
		};
		class F16_MFD_Picture: RscPicture
		{
			idc = 3602;
			text = "FIR_F16\ui\mfd_ca.paa";
			x = 0.587496 * safezoneW + safezoneX;
			y = 0.401985 * safezoneH + safezoneY;
			w = 0.262488 * safezoneW;
			h = 0.448068 * safezoneH;
		};
		class F16_MFD_SettheTarget: RscButton
		{
			idc = 3603;
			text = ""; //--- ToDo: Localize;
			tooltip = "Set the Target Location";
			action="_sethandle = execVM ""\FIR_F16\sqs\TGTSystem\F16_MFD_SETTARGET.sqf""";
			x = 0.594000 * safezoneW + safezoneX;
			y = 0.515000 * safezoneH + safezoneY;
			w = 0.0174992 * safezoneW;
			h = 0.0280043 * safezoneH;
		};
		class F16_MFD_SettheTarget_Pic: RscPicture
		{
			idc = 3606;
			text = "FIR_F16\ui\mfd_select_ca.paa"; //--- ToDo: Localize;
			x = 0.594000 * safezoneW + safezoneX;
			y = 0.515000 * safezoneH + safezoneY;
			w = 0.0174992 * safezoneW;
			h = 0.0280043 * safezoneH;
		};
		class F16_MFD_CancelTarget: RscButton
		{
			idc = 3604;
			text = ""; //--- ToDo: Localize;
			tooltip = "Cancel and Erase The Target";
			action="_sethandle = execVM ""\FIR_F16\sqs\TGTSystem\F16_MFD_CANCELTARGET.sqf""";
			x = 0.594000 * safezoneW + safezoneX;
			y = 0.564000 * safezoneH + safezoneY;
			w = 0.0174992 * safezoneW;
			h = 0.0280043 * safezoneH;
		};
		class F16_MFD_CancelTarget_Pic: RscPicture
		{
			idc = 3607;
			text = "FIR_F16\ui\mfd_clear_ca.paa"; //--- ToDo: Localize;
			x = 0.594000 * safezoneW + safezoneX;
			y = 0.564000 * safezoneH + safezoneY;
			w = 0.0174992 * safezoneW;
			h = 0.0280043 * safezoneH;
		};
		class F16_MFD_EXIT: RscButton
		{
			idc = 3605;
			text = ""; //--- ToDo: Localize;
			tooltip = "EXIT";
			action="closeDialog 0";
			x = 0.710000 * safezoneW + safezoneX;
			y = 0.810000 * safezoneH + safezoneY;
			w = 0.0174992 * safezoneW;
			h = 0.0280043 * safezoneH;
		};
		class F16_MFD_EXIT_Pic: RscPicture
		{
			idc = 3608;
			text = "FIR_F16\ui\mfd_exit_ca.paa"; //--- ToDo: Localize;
			x = 0.710000 * safezoneW + safezoneX;
			y = 0.810000 * safezoneH + safezoneY;
			w = 0.0174992 * safezoneW;
			h = 0.0280043 * safezoneH;
		};
	};
};
class F16_GUI
{
idd = 5160;
movingenable = "false";
class Controls
{
class F16_Frame: RscFrame
{
	idc = 1800;
	x = 0.150016 * safezoneW + safezoneX;
	y = 0.152747 * safezoneH + safezoneY;
	w = 0.699969 * safezoneW;
	h = 0.700106 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {1,1,1,1};
	colorActive[] = {1,1,1,1};
};
class F16_Picture_Background: RscPicture
{
	idc = 1201;
	text = "FIR_F16\ui\background_ca.paa";
	x = 0.150016 * safezoneW + safezoneX;
	y = 0.152747 * safezoneH + safezoneY;
	w = 0.699969 * safezoneW;
	h = 0.700106 * safezoneH;
};
class F16_Picture: RscPicture
{
	idc = 1200;
	text = "FIR_F16\ui\f16_loadout_ca.paa";
	x = 0.167515 * safezoneW + safezoneX;
	y = 0.205956 * safezoneH + safezoneY;
	w = 0.524976 * safezoneW;
	h = 0.364055 * safezoneH;
};
class F16_Skin_Button: RscPicture
{
	idc = 1610;
	text = "FIR_AirWeaponSystem_US\ui\button_ades.paa";
	x = 0.701241 * safezoneW + safezoneX;
	y = 0.197951 * safezoneH + safezoneY;
	w = 0.122494 * safezoneW;
	h = 0.0700106 * safezoneH;
};
class F16_Skin_Button2: RscButton
{
	idc = 1920;
	text = "";
	x = 0.701241 * safezoneW + safezoneX;
	y = 0.197951 * safezoneH + safezoneY;
	w = 0.122494 * safezoneW;
	h = 0.0700106 * safezoneH;
	colorText[] = {-1,-1,-1,-1};
	colorBackground[] = {-1,-1,-1,-1};
	colorActive[] = {-1,-1,-1,-1};
	tooltip = "Open the ADES Setting"; //--- ToDo: Localize;
	action="_insigniahandle = execVM ""\FIR_AirWeaponSystem_US\Script\ades\ADES_Open.sqf""";
};

class F16_Apply_Button: RscPicture
{
	idc = 1600;
	text = "FIR_F16\ui\button_apply.paa";
	x = 0.692491 * safezoneW + safezoneX;
	y = 0.76604 * safezoneH + safezoneY;
	w = 0.0699968 * safezoneW;
	h = 0.0700106 * safezoneH;
};
class F16_Apply_Button2: RscButton
{
	idc = 1900;
	text = "";
	x = 0.692491 * safezoneW + safezoneX;
	y = 0.76604 * safezoneH + safezoneY;
	w = 0.0699968 * safezoneW;
	h = 0.0700106 * safezoneH;
	colorText[] = {-1,-1,-1,-1};
	colorBackground[] = {-1,-1,-1,-1};
	colorActive[] = {-1,-1,-1,-1};
	tooltip = "Apply the Current Loadout"; //--- ToDo: Localize;
	action="_applyhandle = execVM ""\FIR_F16\sqs\loadout\F16_Loadout.sqf""";
};
class F16_Cancel_Button: RscPicture
{
	idc = 1601;
	text = "FIR_F16\ui\button_cancel.paa";
	x = 0.771238 * safezoneW + safezoneX;
	y = 0.76604 * safezoneH + safezoneY;
	w = 0.0699968 * safezoneW;
	h = 0.0700106 * safezoneH;
};
class F16_Cancel_Button2: RscButton
{
	idc = 1901;
	text = "";
	x = 0.771238 * safezoneW + safezoneX;
	y = 0.76604 * safezoneH + safezoneY;
	w = 0.0699968 * safezoneW;
	h = 0.0700106 * safezoneH;
	colorText[] = {-1,-1,-1,-1};
	colorBackground[] = {-1,-1,-1,-1};
	colorActive[] = {-1,-1,-1,-1};
	tooltip = "Close"; //--- ToDo: Localize;
	action="closeDialog 0";
};
class RscText_1001: RscText
{
	idc = 1001;
	text = "1"; //--- ToDo: Localize;
	x = 0.674992 * safezoneW + safezoneX;
	y = 0.584013 * safezoneH + safezoneY;
	w = 0.0174992 * safezoneW;
	h = 0.0280043 * safezoneH;
};
class RscText_1002: RscText
{
	idc = 1002;
	text = "2"; //--- ToDo: Localize;
	x = 0.613745 * safezoneW + safezoneX;
	y = 0.584013 * safezoneH + safezoneY;
	w = 0.0174992 * safezoneW;
	h = 0.0280043 * safezoneH;
};
class RscText_1003: RscText
{
	idc = 1003;
	text = "3"; //--- ToDo: Localize;
	x = 0.543748 * safezoneW + safezoneX;
	y = 0.584013 * safezoneH + safezoneY;
	w = 0.0174992 * safezoneW;
	h = 0.0280043 * safezoneH;
};
class RscText_1004: RscText
{
	idc = 1004;
	text = "4"; //--- ToDo: Localize;
	x = 0.482501 * safezoneW + safezoneX;
	y = 0.584013 * safezoneH + safezoneY;
	w = 0.0174992 * safezoneW;
	h = 0.0280043 * safezoneH;
};
class RscText_1005: RscText
{
	idc = 1005;
	text = "5"; //--- ToDo: Localize;
	x = 0.421254 * safezoneW + safezoneX;
	y = 0.584013 * safezoneH + safezoneY;
	w = 0.0174992 * safezoneW;
	h = 0.0280043 * safezoneH;
};
class RscText_1006: RscText
{
	idc = 1006;
	text = "6"; //--- ToDo: Localize;
	x = 0.351257 * safezoneW + safezoneX;
	y = 0.584013 * safezoneH + safezoneY;
	w = 0.0174992 * safezoneW;
	h = 0.0280043 * safezoneH;
};
class RscText_1007: RscText
{
	idc = 1007;
	text = "7"; //--- ToDo: Localize;
	x = 0.290009 * safezoneW + safezoneX;
	y = 0.584013 * safezoneH + safezoneY;
	w = 0.0174992 * safezoneW;
	h = 0.0280043 * safezoneH;
};
class RscText_1008: RscText
{
	idc = 1008;
	text = "8"; //--- ToDo: Localize;
	x = 0.228762 * safezoneW + safezoneX;
	y = 0.584013 * safezoneH + safezoneY;
	w = 0.0174992 * safezoneW;
	h = 0.0280043 * safezoneH;
};
class RscText_1009: RscText
{
	idc = 1009;
	text = "9"; //--- ToDo: Localize;
	x = 0.167515 * safezoneW + safezoneX;
	y = 0.584013 * safezoneH + safezoneY;
	w = 0.0174992 * safezoneW;
	h = 0.0280043 * safezoneH;
};
class F16_Combo_1: RscCombo
{
	idc = 2101;
	x = 0.611993 * safezoneW + safezoneX;
	y = 0.626019 * safezoneH + safezoneY;
	w = 0.0787465 * safezoneW;
	h = 0.0280043 * safezoneH;
};
class F16_Combo_2: RscCombo
{
	idc = 2102;
	x = 0.587496 * safezoneW + safezoneX;
	y = 0.665228 * safezoneH + safezoneY;
	w = 0.0787465 * safezoneW;
	h = 0.0280043 * safezoneH;
};
class F16_Combo_3: RscCombo
{
	idc = 2103;
	x = 0.517499 * safezoneW + safezoneX;
	y = 0.701634 * safezoneH + safezoneY;
	w = 0.0787465 * safezoneW;
	h = 0.0280043 * safezoneH;
};
class F16_Combo_4: RscCombo
{
	idc = 2105;
	x = 0.459752 * safezoneW + safezoneX;
	y = 0.794043 * safezoneH + safezoneY;
	w = 0.0787465 * safezoneW;
	h = 0.0280043 * safezoneH;
};
class F16_Combo_5: RscCombo
{
	idc = 2106;
	x = 0.395005 * safezoneW + safezoneX;
	y = 0.626019 * safezoneH + safezoneY;
	w = 0.0787465 * safezoneW;
	h = 0.0280043 * safezoneH;
};
class F16_Combo_6: RscCombo
{
	idc = 2107;
	x = 0.325008 * safezoneW + safezoneX;
	y = 0.794045 * safezoneH + safezoneY;
	w = 0.0787465 * safezoneW;
	h = 0.0280043 * safezoneH;
};
class F16_Combo_7: RscCombo
{
	idc = 2108;
	x = 0.263761 * safezoneW + safezoneX;
	y = 0.701631 * safezoneH + safezoneY;
	w = 0.0787465 * safezoneW;
	h = 0.0280043 * safezoneH;
};
class F16_Combo_8: RscCombo
{
	idc = 2110;
	x = 0.204249 * safezoneW + safezoneX;
	y = 0.665225 * safezoneH + safezoneY;
	w = 0.0787465 * safezoneW;
	h = 0.0280043 * safezoneH;
};
class F16_Combo_9: RscCombo
{
	idc = 2111;
	x = 0.167515 * safezoneW + safezoneX;
	y = 0.626019 * safezoneH + safezoneY;
	w = 0.0787465 * safezoneW;
	h = 0.0280043 * safezoneH;
};
class F16_Combo_5A: RscCombo
{
	idc = 2112;
	x = 0.394999 * safezoneW + safezoneX;
	y = 0.665223 * safezoneH + safezoneY;
	w = 0.0787465 * safezoneW;
	h = 0.0280043 * safezoneH;
};
class F16_Repair_Button: RscPicture
{
	idc = 1602;
	text = "FIR_F16\ui\button_repair.paa";
	x = 0.709991 * safezoneW + safezoneX;
	y = 0.5 * safezoneH + safezoneY;
	w = 0.122494 * safezoneW;
	h = 0.0700106 * safezoneH;
};
class F16_Repair_Button2: RscButton
{
	idc = 1902;
	text = "";
	x = 0.709991 * safezoneW + safezoneX;
	y = 0.5 * safezoneH + safezoneY;
	w = 0.122494 * safezoneW;
	h = 0.0700106 * safezoneH;
	colorText[] = {-1,-1,-1,-1};
	colorBackground[] = {-1,-1,-1,-1};
	colorActive[] = {-1,-1,-1,-1};
	tooltip = "Repair Your Aircraft"; //--- ToDo: Localize;
	action="_repairhandle = execVM ""\FIR_F16\sqs\loadout\F16_Repair.sqf""";
};
class F16_Refuel_Button: RscPicture
{
	idc = 1603;
	text = "FIR_F16\ui\button_refuel.paa";
	x = 0.709991 * safezoneW + safezoneX;
	y = 0.401985 * safezoneH + safezoneY;
	w = 0.122494 * safezoneW;
	h = 0.0700106 * safezoneH;
};
class F16_Refuel_Button2: RscButton
{
	idc = 1903;
	text = "";
	x = 0.709991 * safezoneW + safezoneX;
	y = 0.401985 * safezoneH + safezoneY;
	w = 0.122494 * safezoneW;
	h = 0.0700106 * safezoneH;
	colorText[] = {-1,-1,-1,-1};
	colorBackground[] = {-1,-1,-1,-1};
	colorActive[] = {-1,-1,-1,-1};
	tooltip = "Refuel Your Aircraft"; //--- ToDo: Localize;
	action="_refuelhandle = execVM ""\FIR_F16\sqs\loadout\F16_Refuel.sqf""";
};
class RscText_1011: RscText
{
	idc = 1011;
	text = "Select Preset"; //--- ToDo: Localize;
	x = 0.701241 * safezoneW + safezoneX;
	y = 0.289968 * safezoneH + safezoneY;
	w = 0.139994 * safezoneW;
	h = 0.0280043 * safezoneH;
};
class F16_Preset_Combo: RscCombo
{
	idc = 2113;
	text = "F16_Texture_Combo"; //--- ToDo: Localize;
	x = 0.709991 * safezoneW + safezoneX;
	y = 0.331974 * safezoneH + safezoneY;
	w = 0.122494 * safezoneW;
	h = 0.0280043 * safezoneH;
};
class f16_custom_save_Buttonpic_1: RscPicture
{
	idc = 1706;
	text = "FIR_F16\ui\button_save1_ca.paa";
	x = 0.709991 * safezoneW + safezoneX;
	y = 0.57 * safezoneH + safezoneY;
	w = 0.035 * safezoneW;
	h = 0.056 * safezoneH;
};
class f16_custom_save_Button_1: RscButton
{
	idc = 1605;
	text = ""; //--- ToDo: Localize;
	x = 0.709991 * safezoneW + safezoneX;
	y = 0.57 * safezoneH + safezoneY;
	w = 0.035 * safezoneW;
	h = 0.056 * safezoneH;
	colorText[] = {-1,-1,-1,-1};
	colorBackground[] = {-1,-1,-1,-1};
	colorActive[] = {-1,-1,-1,-1};
	tooltip = "Save the Custom Preset in slot 1"; //--- ToDo: Localize;
	action="_custom1handle = execVM ""\FIR_F16\sqs\loadout\F16_SaveCustom.sqf""";
};
class f16_custom_save_Buttonpic_2: RscPicture
{
	idc = 1707;
	text = "FIR_AirWeaponSystem_US\ui\button_killmark_ca.paa";
	x = 0.7575 * safezoneW + safezoneX;
	y = 0.57 * safezoneH + safezoneY;
	w = 0.035 * safezoneW;
	h = 0.056 * safezoneH;
};
class f16_custom_save_Button_2: RscButton
{
	idc = 1606;
	text = ""; //--- ToDo: Localize;
	x = 0.7575 * safezoneW + safezoneX;
	y = 0.57 * safezoneH + safezoneY;
	w = 0.035 * safezoneW;
	h = 0.056 * safezoneH;
	colorText[] = {-1,-1,-1,-1};
	colorBackground[] = {-1,-1,-1,-1};
	colorActive[] = {-1,-1,-1,-1};
	tooltip = "Open Killmark"; //--- ToDo: Localize;
		action="_custom1handle =  execVM ""\FIR_AirWeaponSystem_US\Script\killmark\Killmark_Open.sqf""";
};
class f16_name_Buttonpic: RscPicture
{
	idc = 1709;
	text = "FIR_F16\ui\button_name_ca.paa";
	x = 0.7575 * safezoneW + safezoneX;
	y = 0.626019 * safezoneH + safezoneY;
	w = 0.035 * safezoneW;
	h = 0.056 * safezoneH;
};
class f16_name_Button_: RscButton
{
	idc = 1608;
	text = ""; //--- ToDo: Localize;
	x = 0.7575 * safezoneW + safezoneX;
	y = 0.626019 * safezoneH + safezoneY;
	w = 0.035 * safezoneW;
	h = 0.056 * safezoneH;
	colorText[] = {-1,-1,-1,-1};
	colorBackground[] = {-1,-1,-1,-1};
	colorActive[] = {-1,-1,-1,-1};
	tooltip = "Set the Name and Rank on current Aircraft"; //--- ToDo: Localize;
	action="_namehandle = execVM ""\FIR_AirWeaponSystem_US\script\setnamerank\SetNameRank_Open.sqf""";
};
};

};

