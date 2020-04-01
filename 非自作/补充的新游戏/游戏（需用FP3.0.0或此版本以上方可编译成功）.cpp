{$APPTYPE GUI}
uses windows,dos;
const pi=3.1415926535897932384626433832795028841971694;
      black=$000000;
      navy=$800000;
      darkblue=$8b0000;
      mediumblue=$cd0000;
      blue=$ff0000;
      internationalkleinblue=$a72f00;
      prussianblue=$533100;
      darkpowderblue=$993300;
      ultramarine = $ff3300;
      marineblue=$7d4700;
      cobaltblue=$ab4700;
      mineralblue=$994d00;
      strongblue=$746300;
      darkgreen=$006400;
      green=$008000;
      teal=$808000;
      peacockblue=$8c8000;
      darkcyan=$8b8b00;
      peacockgreen=$5ca100;
      deepskyblue=$ffbf00;
      darkturquoise=$d1ce00;
      mediumspringgreen=$9afa00;
      lime=$00ff00;
      springgreen=$7fff00;
      cyan=$ffff00;
      sapphire=$672508;
      lapislazuli=$ff330d;
      aqua=$ffff00;
      viridian=$367412;
      mint=$2b9816;
      midnightblue=$701919;
      dodgerblue=$ff901e;
      lightseagreen=$aab220;
      forestgreen=$228b22;
      malachite=$2ec322;
      darkmineralblue=$7d3624;
      ceruleanblue=$be522a;
      seagreen=$578b2e;
      darkslategray=$4f4f2f;
      limegreen=$32cd32;
      turquoiseblue=$cce633;
      ivygreen=$36bf36;
      mediumseagreen=$71b33c;
      turquoise=$d0e040;
      royalblue=$e16941;
      steelblue=$b48246;
      burgundy=$240047;
      saxeblue=$b39847;
      darkslateblue=$8b3d48;
      mediumturquoise=$ccd148;
      indigo=$82004b;
      coconutbrown=$001f4d;
      coffee=$00394d;
      salviablue=$e6804d;
      turquoisegreen=$80e64d;
      heliotrope=$b80050;
      emerald=$78c850;
      darkolivegreen=$2f6b55;
      wedgwoodblue=$bf8656;
      wisteria=$e6505c;
      paledenim=$c1865e;
      cadetblue=$a09e5f;
      irongray=$575b62;
      cornflowerblue=$ed9564;
      mauve=$ff4066;
      mediumaquamarine=$aacd66;
      brightgreen=$00ff66;
      cobaltgreen=$59ff66;
      aquablue=$e6ff66;
      dimgray=$696969;
      mossgreen=$237769;
      slateblue=$cd5a6a;
      olivedrab=$238e6b;
      sepia=$144270;
      slategray=$908070;
      foliagegreen=$39b873;
      celadongreen=$8ce673;
      pansy=$a10074;
      lightslategray=$998877;
      paleblue=$ccb87a;
      mediumslateblue=$ee687b;
      lawngreen=$00fc7c;
      chartreuse=$00ff7f;
      aquamarine=$d4ff7f;
      maroon=$000080;
      purple=$800080;
      olive=$008080;
      gray=$808080;
      grayishpurple=$a17486;
      skyblue=$ebce87;
      lightskyblue=$face87;
      blueviolet=$e22b8a;
      darkred=$00008b;
      darkmagenta=$8b008b;
      saddlebrown=$13458b;
      applegreen=$00e68c;
      darkseagreen=$8fbc8f;
      lightgreen=$90ee90;
      mediumpurple=$db7093;
      darkviolet=$d30094;
      palegreen=$98fb98;
      cardinalred=$360099;
      darkorchid=$cc3299;
      amethyst=$cc6699;
      grassgreen=$4de699;
      freshleaves=$4dff99;
      yellowgreen=$32cd9a;
      sienna=$2d52a0;
      camel=$476ba1;
      brown=$2a2aa5;
      horizonblue=$ccffa6;
      darkgray=$a9a9a9;
      lightblue=$e6d8ad;
      greenyellow=$2fffad;
      paleturquoise=$eeeeaf;
      lightsteelblue=$dec4b0;
      powderblue=$e6e0b0;
      firebrick=$2222b2;
      lilac=$ff99b3;
      oldrose=$9857b8;
      bronze=$3373b8;
      darkgoldenrod=$0b86b8;
      mineralviolet=$cfa1b8;
      mediumorchid=$d355ba;
      rosybrown=$8f8fbc;
      darkkhaki=$6bb7bd;
      silver=$c0c0c0;
      mediumvioletred=$8515c7;
      ruby=$8000cc;
      burntorange=$0055cc;
      ocher=$2277cc;
      clematis=$cca3cc;
      paleocre=$8cb3cc;
      mustard=$4dcccc;
      periwinkle=$ffcccc;
      lightlime=$00ffcc;
      indianred=$5c5ccd;
      peru=$3f85cd;
      chocolate=$1e69d2;
      tan=$8cb4d2;
      lightgrey=$d3d3d3;
      thistle=$d8bfd8;
      mallow=$ff4dd9;
      orchid=$d670da;
      goldenrod=$20a5da;
      palevioletred=$9370db;
      crimson=$3c14dc;
      gainsboro=$dcdcdc;
      plum=$dda0dd;
      cerise=$6331de;
      burlywood=$87b8de;
      lightcyan=$ffffe0;
      babyblue=$ffffe0;
      alizarincrimson=$3626e3;
      strongred=$0000e6;
      carmine=$5c00e6;
      camellia=$9539e6;
      operamauve=$ff80e6;
      flamingo=$b88ae6;
      apricot=$6699e6;
      chromeyellow=$00b8e6;
      jasmine=$5cc3e6;
      sandbeige=$c3c3e6;
      paillilac=$e6cfe6;
      mimosa=$33d9e6;
      lavender=$fae6e6;
      darksalmon=$7a96e9;
      violet=$ee82ee;
      palegoldenrod=$aae8ee;
      lightcoral=$8080f0;
      khaki=$8ce6f0;
      aliceblue=$fff8f0;
      honeydew=$f0fff0;
      azure=$fffff0;
      sandybrown=$60a4f4;
      wheat=$b3def5;
      beige=$dcf5f5;
      whitesmoke=$f5f5f5;
      mintcream=$fafff5;
      ghostwhite=$fff8f8;
      salmon=$7280fa;
      antiquewhite=$d7ebfa;
      linen=$e6f0fa;
      lightgoldenrodyellow=$d2fafa;
      oldlace=$e6f5fd;
      red=$0000ff;
      fuchsia=$ff00ff;
      magenta=$ff00ff;
      magentarose=$a60dff;
      deeppink=$9314ff;
      scarlet=$0024ff;
      orangered=$0045ff;
      vermilion=$004dff;
      persimmon=$404dff;
      tomato=$4763ff;
      rosepink=$cc66ff;
      hotpink=$b469ff;
      sunorange=$0073ff;
      spinelred=$b373ff;
      coral=$507fff;
      tropicalorange=$3380ff;
      salmonpink=$9980ff;
      coralpink=$bf80ff;
      darkorange=$008cff;
      marigold=$0099ff;
      lightsalmon=$7aa0ff;
      orange=$00a5ff;
      honeyorange=$66b3ff;
      shellpink=$bfb3ff;
      pearlpink=$e6b3ff;
      lightpink=$c1b6ff;
      amber=$00bfff;
      pink=$cbc0ff;
      gold=$00d7ff;
      babypink=$e6d9ff;
      peachpuff=$b9daff;
      navajowhite=$addeff;
      moccasin=$b5e4ff;
      bisque=$c4e4ff;
      mistyrose=$e1e4ff;
      peach=$b4e5ff;
      blanchedalmond=$cdebff;
      papayawhip=$d5efff;
      lavenderblush=$f5f0ff;
      seashell=$eef5ff;
      cornsilk=$dcf8ff;
      lemonchiffon=$cdfaff;
      floralwhite=$f0faff;
      snow=$fafaff;
      cream=$d0fdff;
      canaryyellow=$00ffff;
      yellow=$00ffff;
      moonyellow=$4dffff;
      champagneyellow=$99ffff;
      lightyellow=$e0ffff;
      ivory=$f0ffff;
      white=$ffffff;
      m_left=0;
      m_right=1;
      m_middle=2;
      k_lbutton=1;
      k_rbutton=2;
      k_cancel=3;
      k_mbutton=4;
      k_back=8;
      k_tab=9;
      k_clear=12;
      k_return=13;
      k_shift=16;
      k_control=17;
      k_menu=18;
      k_pause=19;
      k_capital=20;
      k_escape=27;
      k_space=32;
      k_prior=33;
      k_next=34;
      k_end=35;
      k_home=36;
      k_left=37;
      k_up=38;
      k_right=39;
      k_down=40;
      k_select=41;
      k_print=42;
      k_execute=43;
      k_snapshot=44;
      k_insert=45;
      k_delete=46;
      k_help=47;
      k_0=48;
      k_1=49;
      k_2=50;
      k_3=51;
      k_4=52;
      k_5=53;
      k_6=54;
      k_7=55;
      k_8=56;
      k_9=57;
      k_a=65;
      k_b=66;
      k_c=67;
      k_d=68;
      k_e=69;
      k_f=70;
      k_g=71;
      k_h=72;
      k_i=73;
      k_j=74;
      k_k=75;
      k_l=76;
      k_m=77;
      k_n=78;
      k_o=79;
      k_p=80;
      k_q=81;
      k_r=82;
      k_s=83;
      k_t=84;
      k_u=85;
      k_v=86;
      k_w=87;
      k_x=88;
      k_y=89;
      k_z=90;
      k_lwin=91;
      k_rwin=92;
      k_apps=93;
      k_numpad0=96;
      k_numpad1=97;
      k_numpad2=98;
      k_numpad3=99;
      k_numpad4=100;
      k_numpad5=101;
      k_numpad6=102;
      k_numpad7=103;
      k_numpad8=104;
      k_numpad9=105;
      k_multiply=106;
      k_add=107;
      k_separator=108;
      k_subtract=109;
      k_decimal=110;
      k_divide=111;
      k_f1=112;
      k_f2=113;
      k_f3=114;
      k_f4=115;
      k_f5=116;
      k_f6=117;
      k_f7=118;
      k_f8=119;
      k_f9=120;
      k_f10=121;
      k_f11=122;
      k_f12=123;
      k_f13=124;
      k_f14=125;
      k_f15=126;
      k_f16=127;
      k_f17=128;
      k_f18=129;
      k_f19=130;
      k_f20=131;
      k_f21=132;
      k_f22=133;
      k_f23=134;
      k_f24=135;
      k_numlock=144;
      k_scroll=145;
      k_lshift=160;
      k_lcontrol=162;
      k_lmenu=164;
      k_rshift=161;
      k_rcontrol=163;
      k_rmenu=165;
      buffsize=4096;
      delaytimekey=20;
      delaytimedefault=1000;
      delaytimemin=1;
      fontwidthdefault=10;
      fontheightdefault=20;
      minhz=100;
      maxhz=15000;
      _mdn:array[0..2] of longword=(mouseeventf_leftdown,mouseeventf_rightdown,mouseeventf_middledown);
      _mup:array[0..2] of longword=(mouseeventf_leftup,mouseeventf_rightup,mouseeventf_middleup);
      _bdn:array[0..2] of longword=(wm_lbuttondown,wm_mbuttondown,wm_rbuttondown);
type bitmap=
       record
       handle:hbitmap;
       dc:hdc;
       width:longword;
       height:longword;
       color:longword;
       filename:string;
       end;
type pbitmap=^bitmap;
var _hz:longword;
    _t:longword;
    _tid:longword;
    _tbegin:longword;
    _hw:hwnd;
    _dc:hdc;
    _w,_h,_x,_y:integer;
    _cbg,_cfg:longword;
    _wc:wndclass;
    _ms:msg;
    _main:bitmap;
    _pmain:pbitmap;
    _b:pbitmap;
    _pe:hpen;
    _br:hbrush;
    _fx,_fy:integer;
    _fw,_fh,_fwg:integer;
    _flt,_fud,
    _fsk,_fcs:longword;
    _ffn:string;
    _fns:hfont;
    _strz:size;
    _fnm:longword=256;
    _fn:pchar;
    _cid:longword;
    _cam:longword=256;
    _ca:pchar;
type tsm=record x1,x2,y1,y2,val:shortint;end;

const maxlen=500;
      maxsize=64;
      minsize=2;
      maxrule=9;
      rulen:array[1..maxrule]of shortint=(11,16,31,11,16,13,31,12,24);
      rulest:array[1..maxrule,1..31]of string=(
('2','4','8','16','32','64','128','256','512','1024','2048','','','','','','','','','','','','','','','','','','','',''),
('2','4','8','16','32','64','128','256','512','1024','2048','4096','8192','16384','32768','65536',
'','','','','','','','','','','','','','',''),
('2','4','8','16','32','64','128','256','512','1024','2048','4096','8192','16384','32768','65536',
'131072','262144','524288','1048576','2097152','4194304','8388608','16777216','33554432','67108864','134217728','268435456','536870912','1073741824','2147483648'),
('2','4','8','16','32','64','128','256','512','1024','2048','','','','','','','','','','','','','','','','','','','',''),
('1','2','3','5','8','13','21','34','55','89','144','233','377','610','987','1597','','','','','','','','','','','','','','',''),
('1','2','3','6','12','24','48','96','192','384','768','1536','3072','','','','','','','','','','','','','','','','','',''),
('2','4','8','16','32','64','128','256','512','1024','2048','4096','8192','16384','32768','65536',
'131072','262144','524288','1048576','2097152','4194304','8388608','16777216','33554432','67108864','134217728','268435456','536870912','1073741824','2147483648'),
('1','2','4','8','16','32','64','128','256','512','1024','2048','','','','','','','','','','','','','','','','','','',''),
('1','2','4','8','16','32','64','128','256','512','1024','2048','-1','-2','-4','-8','-16','-32','-64','-128','-256','-512','-1024','-2048','0','','','','','',''));
var clbg,clfg,clg:longword;
    i,j,k,l,m,n:longint;
    bdk:array[1..maxsize*maxsize]of tsm;
    smid:longint;
    size:shortint;
    bd:array[0..maxsize+1,0..maxsize+1]of shortint;
    rule:shortint;
    len:real;szm:real=0.1;

procedure bar(x,y,w,h:integer;c:longword);forward;
function s2pc(s:string):pchar;forward;
function pc2i(pc:pchar):longword;forward;
procedure setbrushcolor(c:longword);forward;
procedure bar(x,y,w,h:integer;cfg,cbg:longword);forward;
procedure bar_5(x,y,w,h:integer;c:longword);forward;
procedure line(x,y,w,h:integer;c:longword);forward;
procedure setpencolor(c:longword);forward;
procedure settitle(s:string);forward;
procedure setfontsize(w,h:integer);forward;
procedure setfont;forward;
procedure drawtextxy(s:string;x,y:integer;cfg,cbg:longword);forward;
procedure drawtextxy_4(s:string;x,y:integer;c:longword);forward;
function getstringwidth(s:string):longword;forward;
procedure getstringsize(s:string);forward;
procedure createwin(w,h:integer;cfg,cbg:longword);forward;
function getscrwidth:integer;forward;
function getscrheight:integer;forward;
procedure wininit;forward;
function winregister:atom;forward;
function wndproc(hw:hwnd;um:uint;wp:wparam;lp:lparam):lresult;stdcall;forward;
function gettime:longword;forward;
function wincreate:hwnd;forward;
function getborderwidth:integer;forward;
function getborderheight:integer;forward;
function getbordertitle:integer;forward;
procedure setfontname(s:string);forward;
procedure setfresh(t:longword);forward;
function nextmsg:boolean;forward;
procedure sendmsg;forward;
function ismsg(um:array of longword):boolean;forward;
function iskey:boolean;forward;
function getkey:longword;forward;
function getmsg(um:array of longword):qword;forward;
procedure setfontwidth(w:integer);forward;
procedure setfontheight(h:integer);forward;
procedure delay(t:real);forward;

procedure delay(t:real);
begin
  delay(longword(round(t*1000)));
end;

procedure setfontheight(h:integer);
begin
  _fh:=h;
  setfont;
end;

procedure setfontwidth(w:integer);
begin
  _fw:=w;
  setfont;
end;

function getmsg(um:array of longword):qword;
begin
  if not ismsg(um) then
    getmsg:=0
  else
    getmsg:=_ms.wparam*$100000000+_ms.lparam;
end;

function getkey:longword;
begin
  getkey:=getmsg([wm_keydown]) div $100000000;
end;

function iskey:boolean;
begin
  iskey:=ismsg([wm_keydown]);
end;

function ismsg(um:array of longword):boolean;
var mi:integer;
begin
  ismsg:=false;
  for mi:=0 to length(um)-1 do
    if _ms.message=um[mi] then
      ismsg:=true;
end;

procedure sendmsg;
begin
  translatemessage(_ms);
  dispatchmessage(_ms);
end;

function nextmsg:boolean;
begin
  nextmsg:=getmessage(_ms,0,0,0);
  sendmsg;
end;

procedure setfresh(t:longword);
begin
  settimer(_hw,0,t,nil);
end;

procedure setfontname(s:string);
begin
  _ffn:=s;
  setfont;
end;

function getbordertitle:integer;
begin
  getbordertitle:=getsystemmetrics(sm_cycaption);
end;

function getborderheight:integer;
begin
  getborderheight:=getsystemmetrics(sm_cyframe);
end;

function getborderwidth:integer;
begin
  getborderwidth:=getsystemmetrics(sm_cxframe);
end;

function wincreate:hwnd;
begin
  _w:=_w+getborderwidth*2;
  _h:=_h+getborderheight*2+getbordertitle;
  _hw:=createwindow('createwin','Free Pascal IDE',ws_sysmenu or ws_sizebox,_x,_y,_w,_h,0,0,maininstance,nil);
  if _hw<>0 then
  begin
    showwindow(_hw,sw_show);
    updatewindow(_hw);
  end;
  wincreate:=_hw;
end;

function gettime:longword;
begin
  gettime:=0;
  if gettime>=_tbegin then
    gettime:=gettime-_tbegin
  else
    gettime:=$100000000-_tbegin+gettime;
end;

function wndproc(hw:hwnd;um:uint;wp:wparam;lp:lparam):lresult;stdcall;
var ps:paintstruct;
begin
  wndproc:=0;
  case um of
    wm_create:
      begin
        setfontsize(fontwidthdefault,fontheightdefault);
        _tbegin:=gettime;
        dragacceptfiles(hw,true);
      end;
    wm_paint:
      begin
        beginpaint(_hw, &ps);
        endpaint(_hw, &ps);
      end;
    wm_size:
      begin
        _w:=lp mod $10000;
        _h:=lp div $10000;
      end;
    wm_close:halt;
    else
      wndproc:=defwindowproc(hw,um,wp,lp);
  end;
end;

function winregister:atom;
begin
  with _wc do
  begin
    style:=cs_hredraw or cs_vredraw;
    lpfnwndproc:=@wndproc;
    cbclsextra:=0;
    cbwndextra:=0;
    hinstance:=maininstance;
    hicon:=loadicon(maininstance,idi_application);
    hcursor:=loadcursor(maininstance,idc_arrow);
    hbrbackground:=getstockobject(white_brush);
    lpszmenuname:=nil;
    lpszclassname:='createwin';
  end;
  winregister:=registerclass(_wc);
end;

procedure wininit;
begin
  winregister;
  wincreate;
  _dc:=getdc(_hw);
  _main.handle:=_hw;
  _main.dc:=_dc;
  _main.width:=_w;
  _main.height:=_h;
  _pmain:=@_main;
end;

function getscrheight:integer;
begin
  getscrheight:=getsystemmetrics(sm_cyscreen);
end;

function getscrwidth:integer;
begin
  getscrwidth:=getsystemmetrics(sm_cxscreen);
end;

procedure createwin(w,h:integer;cfg,cbg:longword);
begin
  _w:=w;
  _h:=h;
  _x:=(getscrwidth-_w) div 2;
  _y:=(getscrheight-_h) div 2;
  _cbg:=cbg;
  _cfg:=cfg;
  wininit;
  setbkmode(_dc,transparent);
  bar(0,0,w,h,cfg,cbg);
end;

procedure getstringsize(s:string);
begin
  gettextextentpoint(_dc,s2pc(s),length(s),_strz);
end;

function getstringwidth(s:string):longword;
begin
  getstringsize(s);
  getstringwidth:=_strz.cx;
end;

procedure drawtextxy_4(s:string;x,y:integer;c:longword);
begin
  settextcolor(_dc,c);
  textout(_dc,x,y,s2pc(s),length(s));
  _fx:=x+getstringwidth(s);
end;

procedure drawtextxy(s:string;x,y:integer;cfg,cbg:longword);
begin
  setbkcolor(_dc,cbg);setbkmode(_dc,opaque);
  drawtextxy_4(s,x,y,cfg);
  setbkmode(_dc,transparent);
end;

procedure setfont;
begin
  deleteobject(_fns);
  _fns:=createfont(_fh,_fw,0,0,_fwg,_flt,_fud,_fsk,_fcs,out_default_precis,clip_default_precis,default_quality,ff_dontcare,s2pc(_ffn));
  selectobject(_dc,_fns);
end;

procedure setfontsize(w,h:integer);
begin
  _fh:=h;
  _fw:=w;
  setfont;
end;

procedure settitle(s:string);
begin
  setwindowtext(_hw,s2pc(s));
end;

procedure bar(x,y,w,h:integer;c:longword);
var lprect:rect;
begin
  setbrushcolor(c);
  lprect.left:=x;
  lprect.top:=y;
  lprect.right:=x+w;
  lprect.bottom:=y+h;
  windows.fillrect(_dc,lprect,_br);
end;

procedure setpencolor(c:longword);
begin
  deleteobject(_pe);
  if c=transparent then
    _pe:=getstockobject(null_pen)
  else
    _pe:=createpen(ps_solid,1,c);
  selectobject(_dc,_pe);
end;

procedure line(x,y,w,h:integer;c:longword);
begin
  setpencolor(c);
  windows.movetoex(_dc,x,y,nil);
  windows.lineto(_dc,x+w,y+h);
end;

procedure bar(x,y,w,h:integer;cfg,cbg:longword);
begin
  if cfg<>transparent then
    bar(x,y,w,h,cfg);
  line(x,y,w,0,cbg);
  line(x+w,y,0,h,cbg);
  line(x+w,y+h,-w,0,cbg);
  line(x,y+h,0,-h,cbg);
end;

procedure setbrushcolor(c:longword);
begin
  deleteobject(_br);
  if c=transparent then
    _br:=getstockobject(null_brush)
  else
    _br:=createsolidbrush(c);
  selectobject(_dc,_br);
end;

procedure bar_5(x,y,w,h:integer;c:longword);
var lprect:rect;
begin
  setbrushcolor(c);
  lprect.left:=x;
  lprect.top:=y;
  lprect.right:=x+w;
  lprect.bottom:=y+h;
  windows.fillrect(_dc,lprect,_br);
end;

function pc2i(pc:pchar):longword;inline;var i:longword;
begin
  pc2i:=0;i:=0;
  while pc[i]<>#0 do
  begin
    pc2i:=pc2i*10+ord(pc[i])-48;
    i:=i+1;
  end;
end;

function s2pc(s:string):pchar;inline;
begin
  s:=s+#0;
  s2pc:=@s[1];
end;

function mcisendstring(lpszcommand:lpctstr;lpszreturnstring:lptstr;cchreturn:longword;hwndcallback:handle):dword;cdecl;
external 'winmm.dll'
name 'mcisendstringa';

function sendstring(s:string):longword;
begin
  getmem(_ca,_cam);
  mcisendstring(s2pc(s),_ca,_cam,0);
  sendstring:=pc2i(_ca);
end;

procedure sm(x1,y1,x2,y2,val:shortint);
begin
  smid:=smid+1;
  bdk[smid].x1:=x1;
  bdk[smid].x2:=x2;
  bdk[smid].y1:=y1;
  bdk[smid].y2:=y2;
  bdk[smid].val:=val;
end;

var winb:boolean;
    spd:longint;
    spn:longint;
    fw,fh:real;
    fl:shortint;
procedure clearbd;
begin
  bar(0,0,maxlen,maxlen,clg,clg);
end;

procedure restart(rl,sz:shortint);
begin
  winb:=false;
  rule:=rl;
  size:=sz;
  if size<minsize then
    size:=minsize;
  if size>maxsize then
    size:=maxsize;
  len:=maxlen/size;
  smid:=-1;
  clearbd;
  for i:=1 to size do
    for j:=1 to size do
      bd[i,j]:=0;
end;

var nx,ny,nv:shortint;
procedure new;
begin
  smid:=0;
  spn:=2048 div size;
  k:=0;
  for i:=1 to size do
    for j:=1 to size do
      if bd[i,j]=0 then k:=k+1;
        k:=random(k);
  for i:=1 to size do
    for j:=1 to size do
      if bd[i,j]=0 then
      begin
        if k=0 then
        begin
          nx:=i;
          ny:=j;
        end;
        k:=k-1;
      end;
  case rule of
    4:nv:=1;
    7:nv:=32-round(sqrt(random(961)+1));
    else nv:=(random(10)+11) div 10;
  end;
  if rule=9 then
    nv:=nv+random(2)*12;
  if not(winb) then
    bd[nx,ny]:=nv;
end;

var nomerge:boolean;
function merge(val1,val2:shortint):shortint;
begin
  merge:=0;
  case rule of
    5:begin
        if abs(val1-val2)=1 then
          merge:=max(val1,val2)+1;
        if (val1=1) and (val2=1) then
          merge:=2;
      end;
    6:begin
        if val1=val2 then
          merge:=val1+1
        else
          merge:=0;
        if (val1=1) and (val2=2) then
          merge:=3;
        if (val1=2) and (val2=1) then
          merge:=3;
        if (val1=2) and (val2=2) then
          merge:=0;
      end;
    9:begin
        if val1=val2 then
          merge:=val1+1
        else
          merge:=0;
        if abs(val1-val2)=12 then
          merge:=25;
        if (val1=12) and (val2=12) then
          merge:=0;
        if (val1=24) and (val2=24) then
          merge:=0;
        if max(val1,val2)=25 then
          merge:=min(val1,val2);
      end;
    else
      if val1=val2 then
        merge:=val1+1
      else
        merge:=0;
  end;
  if val1=0 then
    merge:=0;
  if val2=0 then
    merge:=0;
  if merge=rulen[rule] then
    winb:=true;
end;

procedure move(dir:shortint);
begin
  case dir of
    1:begin
        for j:=1 to size do
        begin
          l:=0;
          nomerge:=false;
          for i:=1 to size do
            if (bd[i,j]<>0) and (i<>l) then
            begin
              if (merge(bd[i,j],bd[l,j])=0) or nomerge then
              begin
                l:=l+1;
                bd[l,j]:=bd[i,j];
                nomerge:=false;
              end
              else
              begin
                bd[l,j]:=merge(bd[i,j],bd[l,j]);
                nomerge:=true;
              end;
            if i<>l then
            begin
              sm(i,j,l,j,bd[i,j]);
              bd[i,j]:=0;
            end;
          end;
        end;
      end;
    2:begin
        for i:=size downto 1 do
        begin
          l:=0;
          nomerge:=false;
          for j:=1 to size do
            if bd[i,j]<>0 then
            begin
              if (merge(bd[i,j],bd[i,l])=0) or nomerge then
              begin
                l:=l+1;
                bd[i,l]:=bd[i,j];
                nomerge:=false;
              end
              else
              begin
                bd[i,l]:=merge(bd[i,j],bd[i,l]);
                nomerge:=true;
              end;
              if j<>l then
          begin
                sm(i,j,i,l,bd[i,j]);
                bd[i,j]:=0;
          end;
           end;
        end;
      end;
    3:begin
        for j:=size downto 1 do
        begin
          l:=size+1;
          nomerge:=false;
          for i:=size downto 1 do
            if bd[i,j]<>0 then
            begin
              if (merge(bd[i,j],bd[l,j])=0) or nomerge then
              begin
                l:=l-1;
                bd[l,j]:=bd[i,j];
                nomerge:=false;
              end
              else
              begin
                bd[l,j]:=merge(bd[i,j],bd[l,j]);
                nomerge:=true;
              end;
              if i<>l then
              begin
                sm(i,j,l,j,bd[i,j]);
                bd[i,j]:=0;
              end;
           end;
        end;
      end;
    4:begin
        for i:=1 to size do
        begin
          l:=size+1;
          nomerge:=false;
          for j:=size downto 1 do
            if bd[i,j]<>0 then
            begin
              if (merge(bd[i,j],bd[i,l])=0) or nomerge then
              begin
                l:=l-1;
                bd[i,l]:=bd[i,j];
                nomerge:=false;
              end
              else
              begin
                bd[i,l]:=merge(bd[i,j],bd[i,l]);
                nomerge:=true;
              end;
              if j<>l then
              begin
                sm(i,j,i,l,bd[i,j]);
                bd[i,j]:=0;
              end;
            end;
        end;
      end;
  end;
end;

procedure drawk(x,y:real;val:shortint;zm:real);
begin
  case val of
    -1:clbg:=clg;
    00:clbg:=$b3c0cc;
    01:clbg:=$dae4ee;
    02:clbg:=$c8e0ed;
    03:clbg:=$79b1f2;
    04:clbg:=$6395f5;
    05:clbg:=$5f7cf6;
    06:clbg:=$3b5ef6;
    07:clbg:=$72cfed;
    08:clbg:=$61cced;
    09:clbg:=$50c8ed;
    10:clbg:=$3fc5ed;
    11:clbg:=$2ec2ed;
    12:clbg:=$ab84b7;
    13:clbg:=$a86cae;
    14:clbg:=$a660aa;
    15:clbg:=$a453a6;
    16:clbg:=$a449a3;
    17:clbg:=$c17776;
    18:clbg:=$c46b68;
    19:clbg:=$c7605b;
    20:clbg:=$c9544d;
    21:clbg:=$cc483f;
    22:clbg:=$100d6b;
    23:clbg:=$0e0b5f;
    24:clbg:=$0d0a53;
    25:clbg:=$0b0847;
    26:clbg:=$09073b;
    27:clbg:=$07062f;
    28:clbg:=$050424;
    29:clbg:=$040318;
    30:clbg:=$02010c;
    31:clbg:=$000000;
    else clbg:=$241ced;
  end;
  case val of
    -1:clfg:=clg;
    0:clfg:=$b3c0cc;
    1:clfg:=$656e77;
    2:clfg:=$656e77;
    else clfg:=$f2f6f9;
  end;
  bar(round((x-1+zm)*len),round((y-1+zm)*len),round(len*(1-2*zm)),round(len*(1-2*zm)),clbg);
  if val>0 then
  begin
    fl:=length(rulest[rule,val]);
    if fl=0 then
      fl:=1;
    fw:=len*(1-szm*3)/fl*(1-zm*2)/(1-szm*2);
    if fw>len*(1-szm*2)/3*(1-zm*2)/(1-szm*2) then
      fw:=len*(1-szm*2)/3*(1-zm*2)/(1-szm*2);
    if fw<1 then
      fw:=1;
    fh:=fw*2.25;
    setfontsize(round(fw),round(fh));
    drawtextxy_4(rulest[rule,val],round((x-0.5)*len-fw*fl/2),round((y-0.5)*len-fh/2),clfg);
  end;
end;

procedure drawnew;
begin
  for m:=1 to spn do
    drawk(nx,ny,nv,0.5-(0.5-szm)*m/spn);
end;

procedure drawbd;
begin
  for i:=1 to size do
    for j:=1 to size do
      drawk(i,j,bd[i,j],szm);
end;

procedure drawmove;
begin
  spd:=2048 div (smid+2);
  for m:=1 to spd do
  begin
    n:=m-1;
    for k:=1 to smid do
      with bdk[k] do
      begin
        drawk((x1*(1-n/spd)+x2*(n/spd)),(y1*(1-n/spd)+y2*(n/spd)),-1,1);
        if x2>x1 then
          drawk(trunc(x1*(1-n/spd)+x2*(n/spd)+0.001),y1*(1-n/spd)+y2*(n/spd),0,szm);
        if x1>x2 then
          drawk(trunc(x1*(1-n/spd)+x2*(n/spd)+0.999),y1*(1-n/spd)+y2*(n/spd),0,szm);
        if y2>y1 then
          drawk(x1*(1-n/spd)+x2*(n/spd),trunc(y1*(1-n/spd)+y2*(n/spd)+0.001),0,szm);
        if y1>y2 then
          drawk(x1*(1-n/spd)+x2*(n/spd),trunc(y1*(1-n/spd)+y2*(n/spd)+0.999),0,szm);
        drawk((x1*(1-m/spd)+x2*(m/spd)),(y1*(1-m/spd)+y2*(m/spd)),val,szm);
      end;
  end;
end;

var key:byte;
    strin:string;
    tttt:longint;
    yy,mm,dd,dow:word;
begin
  strin:='本颓废游戏功能：'+chr(13)+'f5->假装自己是未响应的freepascal，按下任意键接着玩';
  strin:=strin+chr(13)+'f6->在f5的基础上加上自毁功能，再按下f6的1秒后201错误，请注意：存档会重置';
  messagebox(0,s2pc(strin),'2048',0);
  getdate(yy,mm,dd,dow);
  if (yy>2019) and (dd>13) then
    messagebox(0,'windwos7一路走好','作',0)
  else
    messagebox(0,'在2020.1.14到来之前多陪陪windows7吧','作者',0);
  randomize;
  clg:=$a0adbb;
  createwin(maxlen,maxlen,clg,clg);
  setfontname('consolas');
  setfresh(1);
  restart(1,4);
  repeat
    if (smid<>0) then
    begin
      drawbd;
      new;
      if not(winb) then
        drawnew;
    end;
    repeat
      nextmsg;
      if ismsg([15]) then
      begin
        clearbd;
        drawbd;
      end;
    until iskey;
    key:=getkey;
    if (key=k_f5) or (key=k_f6) then
    begin
      setfontwidth(7);
      setfontheight(17);
      bar(0,0,1000,1000,$9b9b9b);
      drawtextxy_4('free pascal ide version 1.0.12 [2017/10/06]',0,0,white);
      drawtextxy_4('compiler version 3.0.4',0,17,white);
      drawtextxy_4('gdb version gdb 7.4',0,34,white);
      drawtextxy_4('using configuration files from: c:\fpc\3.0.4\bin\i386-win32\',0,51,white);
      drawtextxy_4('running "c:\fpc\3.0.4\bin\i386-win32\',0,68,white);
      if key=k_f6 then
      begin
        tttt:=-maxlongint-1;
        while true do
        begin
          inc(tttt);
        end;
      end;
    end;
    case key of
      k_left:move(1);
      k_up:move(2);
      k_right:move(3);
      k_down:move(4);
      k_space:restart(rule,size);
      k_return:restart(rule,size);
      k_escape:halt;
      k_back:smid:=-1;
      107:restart(rule,size+1);
      108:restart(rule,size+0);
      109:restart(rule,size-1);
      187:restart(rule,size+1);
      189:restart(rule,size-1);
      229:
      begin
        setfontsize(9,20);
        drawtextxy('ime deceted. please close the input method software!',0,0,red,yellow);
      end;
    end;
    if (key>48) and (key<=57) then
      restart(key-48,size);
    if (key>96) and (key<=105) then
      restart(key-96,size);
    if smid>0 then drawmove;
  until false;
end.
