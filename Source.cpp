
*{
    margin:0px;
    padding:0px;
    box-sizing:border-box;
}

:root {
    --main-color: #790D16;
    --second-color: #E5D3AF;
    --blue-color: #AEC4D4;
    --bg-color: #F5EFE1;
    --box-color: #FFFFFF;
    --text-color: #382C2D;

    --border-radius: 10px;
    --font-heading: Georgia, "Times New Roman", serif;
    --font-body: "Segoe UI", Arial, Helvetica, sans-serif; 
    
    --text-xs: 13px; 
    --text-sm: 15px;
    --text-base: 16px; 
    --text-lg: 20px;
    --text-xl: 26px; 
    --text-xxl: 34px; 
}
*{
    margin:0px;
    padding:0px;
    box-sizing:border-box;
}

:root {
    --main-color: #790D16;
    --second-color: #E5D3AF;
    --blue-color: #AEC4D4;
    --bg-color: #F5EFE1;
    --box-color: #FFFFFF;
    --text-color: #382C2D;

    --border-radius: 10px;
    --font-heading: Georgia, "Times New Roman", serif;
    --font-body: "Segoe UI", Arial, Helvetica, sans-serif; 
    
    --text-xs: 13px; 
    --text-sm: 15px;
    --text-base: 16px; 
    --text-lg: 20px;
    --text-xl: 26px; 
    --text-xxl: 34px; 
}
body {
    min-height: 100vh;
    display: flex;
    flex-direction: column;
    background-color: var(--bg-color);
    color: var(--text-color);
    font-family: var(--font-body);
    font-size: var(--text-base);   
    line-height:1.6;
}

h1, h2, h3, h4, h5, h6 {
    font-family: var(--font-heading);
    font-weight: bold;
    color: var(--main-color);
}

button{
    font-family:inherit;
    cursor:pointer;
}

header{
    background-color:var(--box-color);
    border-bottom:1px solid var(--second-color);
}

.header-content{
    max-width:1200px;
    margin:auto;
    padding:5px 15px;;
    display:flex;
    justify-content:flex-start;
    align-items:center;
    gap:15px;
}

.logo{
    display:flex;
    align-items:center;
    gap:15px;
    text-decoration:none;
    color:var(--text-color);
}

.logo img{
    width:45px;
    height:45px;
    object-fit:cover;
    border-radius:50%;
}

.logo h3{
    color:var(--main-color);
    font-size:18px;
    margin-bottom:7px;
}

.logo p{
    font-size:13px;
    color:var(--main-color);
}
.box{
    display:flex;
    align-items:center;
    gap:18px;
}

.avatar-sv{
    display:flex;
    align-items:center;
    gap:15px;
    text-decoration:none;
    color:var(--text-color);
}

.avatar-sv img{
    width:100px;
    height:150px;
    object-fit:cover;
    border-radius:10%;
    
}





.sv-box{
    display:flex;
    align-items:center;
    gap:30px;
}
.sv-info h3{
    color:var(--main-color);
    font-size:28px;
    margin-bottom:12px;
}

.sv-info p{
    color:var(--text-color);
    font-size:16px;
    line-height:1.8;
}

.sv-info strong{
    color:var(--main-color);
}

.nut-menu {
    width: 40px;
    height: 40px;
    padding: 9px;
    display: flex;
    align-items: center;
    justify-content: center;
    flex-shrink: 0;

    background: rgba(127, 125, 135, 0.541);
    border: 1px solid rgba(255, 255, 255, 0.6);
    border-radius: var(--border-radius); 
    
    cursor: pointer;
    transition: 0.3s;
    filter: none; 
}

.nut-menu img {
    width: 23px;
    height: 23px;
    object-fit: contain;
    filter: brightness(0) invert(1);
}

.nut-menu:hover {
    background: rgba(157, 29, 29, 0.363); 
    transform: translateY(-3px); 
}

.menu-ben {
    width: 250px;
    max-width: 85%;
    height:100%;
    position: fixed;
    top: 0;
    right: 0; 
    left: auto;
    padding: 25px 20px;
    background: #94868a; 
    
    color: white;
    display: flex;
    flex-direction: column;
    overflow-y: auto;
    z-index: 1001;
    
    transform: translateX(100%); 
    transition: 0.3s;
    border-radius:10px;
}

.menu-ben.mo{
    transform:translateX(0);
}

.dau-menu{
    display:flex;
    justify-content:space-between;
    align-items:center;
    gap:10px;
    margin-bottom:35px;
}

.logo-menu{
    display:flex;
    align-items:center;
    gap:10px;
}

.logo-menu img{
    width:40px;
    height:40px;
    object-fit:cover;
    border-radius:50%;
}

.logo-menu h3{
    color:#FFFFFF;
    font-size:13px;
}


.logo-menu p{
    font-size:11px;
    color:var(--second-color);
    margin-top:5px;
}


#nut-dong-menu{
    width:32px;
    height:32px;
    display:flex;
    align-items:center;
    justify-content:center;
    background:none;
    border:none;
    cursor:pointer;
    flex-shrink:0;
}

#nut-dong-menu img{
    width:22px;
    height:22px;
    object-fit:contain;
    filter:brightness(0) invert(1);
}


.anh-menu {
    width: 24px;  
    height: 24px;
    object-fit: contain;
    flex-shrink: 0;
    filter: invert(1);
}

.danh-sach-menu button,
.danh-sach-menu a{
    width: 100%;
    display: flex;
    align-items: center;
    gap: 18px;
    padding: 15px 12px;
    background: transparent;
    border: none;
    border-radius: 12px; 
    color: white;
    text-decoration: none;
    text-align: left;
    font-size: var(--text-base);
    cursor: pointer;
    transition: all 0.3s ease; 
}

.danh-sach-menu button:hover,
.danh-sach-menu a:hover {
    background: rgba(255, 255, 255, 0.15); 
    transform: translateX(-5px); 
}

.duong-ke{
    border-top:1px solid rgba(255,255,255,0.3);
    margin:25px 0;
}

.cuoi-menu{
    margin-top:auto;
    padding-top:25px;
    border-top:1px solid rgba(255,255,255,0.3);
}

.cuoi-menu h3{
    font-size:21px;
    font-style:italic;
}

.cuoi-menu p{
    color:var(--second-color);
    font-size: var(--text-xs);
    margin-top:10px;
}



main{
    flex:1;
}

#trang-chu{
    padding:55px 0px 45px;
    overflow:hidden;
}

body.trang-chu{
    background-image:
            linear-gradient(
                rgba(225, 245, 244, 0.677),
                rgba(245,239,225,0.3)
            ),
        url("image/nentrangchu.jpg");

    background-size:cover;
    background-position:center;
    background-repeat:no-repeat;
    background-attachment:fixed;
}

.gioi-thieu {
    text-align:center;
    padding:0px 15px;
}

.gioi-thieu > p:first-child{
    font-size:13px;
    color:var(--main-color);
    letter-spacing:2px;
    margin-bottom:15px;
}

.gioi-thieu h1{
    font-size:30px;
    margin-bottom:15px;
    color:var(--main-color);
}
.gioi-thieu h1 span{
    color:var(--main-color);
}

.khu-carousel{
    width:100%;
    max-width:1200px;
    height:580px;
    margin:20px auto 0px;
    position:relative;
}

.khung-the{
    width:100%;
    height:100%;
    position:relative;
}

.the-bai{
    position:absolute;
    left:50%;
    top:50%;
    width:350px;
    height:430px;
    padding:25px;
    background-color:var(--box-color);
    border:1px solid var(--second-color);
    border-radius:var(--border-radius);
    box-shadow:0px 8px 25px rgba(121,13,22,0.10);
    display:flex;
    flex-direction:column;
    justify-content:center;
    align-items:center;
    gap:15px;
    text-align:center;
    color:var(--text-color);
    opacity:0;
    pointer-events:none;
    transform:translate(-50%,-50%);
    transition:0.4s;
}

.the-bai.giua{
    opacity:1;
    z-index:3;
    pointer-events:auto;
    background-color:var(--box-color);
    filter:blur(0px)
}

.the-bai.trai{
    opacity:0.2;
    z-index:1;
    pointer-events:auto;
    background-color:var(--second-color);
    transform:translate(calc(-50% - 350px),-50%) scale(0.8);
}

.the-bai.phai{
    opacity:0.2;
    z-index:1;
    pointer-events:auto;
    filter:blur(2px);
    background-color:var(--blue-color);
    transform:translate(calc(-50% + 350px),-50%) scale(0.8);
}

.the-bai.an{
    opacity:0;
    z-index:0;
}

.the-bai:hover{
    box-shadow:0px 12px 30px rgba(121,13,22,0.20);
}

.so-thu-tu{
    padding:8px 14px;
    background-color:var(--bg-color);
    color:var(--main-color);
    border-radius:30px;
    font-size:12px;
    font-weight:bold;
}


.hinh{
    width:300px;
    height:200px;
    margin:0 auto;
    display:flex;
    align-items:center;
    justify-content:center;
    background-color:white;
    border:1px solid var(--second-color);
    border-radius:12px;
    overflow:hidden;
    flex-shrink:0;
}

.hinh img{
    width:100%;
    height:100%;
    object-fit:contain;
    padding:10px;
    display:block;
}


.ten-bai{
    font-size: var(--text-lg);
    font-weight:bold;
    color:var(--main-color);
}

.noi-dung{
    font-size: var(--text-sm);
    color:#645655;
    line-height:1.6;
    min-height:45px;
}

.nut-mo{
    background-color:var(--main-color);
    color:white;
    padding:12px 20px;
    border-radius:10px;
    font-size:14px;
    margin-top:auto;
    transition: transform 0.3s ease, background-color 0.3s ease;
}

.the-bai:hover .nut-mo{
    background-color:#5D0B12;
    transform: skew(-15deg); 
    background-color: rgb(213, 127, 56);
    box-shadow: 0 4px 10px rgba(102, 28, 7, 0.675);
    
}

.nut-chuyen{
    position:absolute;
    top:50%;
    z-index:4;
    width:40px;
    height:40px;
    border-radius:50%;
    border:1px solid var(--second-color);
    background-color:rgba(255, 255, 255, 0.763);
    color:var(--main-color);
    font-size:24px;
    box-shadow:0px 3px 12px rgba(121,13,22,0.12);
    display:flex;
    align-items:center;
    justify-content:center;
}

.nut-chuyen img{
    width:22px;
    height:22px;
    object-fit:contain;
}

.nut-phai img{
    transform:rotate(180deg);
}

.nut-chuyen:hover{
    background-color:var(--second-color);
}

.nut-trai{
    left:calc(50% - 230px);
}

.nut-phai{
    right:calc(50% - 230px);
}

.huong-dan{
    text-align:center;
    color:#645655;
    line-height:1.8;
    font-size:13px;
}

#so-bai{
    color:var(--main-color);
    font-weight:bold;
}

#trang-bai{
    display:none;
    width:90%;
    max-width:1000px;
    margin:50px auto;
}


.noi-dung-bai{
    display:none;
    min-height:350px;
    padding:40px;
    background-color:var(--box-color);
    border:1px solid var(--second-color);
    border-radius:var(--border-radius);
    box-shadow:0px 5px 20px rgba(121,13,22,0.07);
}

.noi-dung-bai h2{
    margin-bottom:20px;
    color:var(--main-color);
}

.noi-dung-bai p{
    line-height:1.7;
}

.site-footer{
    background-color:var(--main-color);
    color:white;
}

.footer-content{
    max-width:1200px;
    height:fit-content;
    margin:auto;
    padding:10px 20px;
    display:flex;
    justify-content:space-between;
    align-items:center;
    gap:20px;
}

.footer-logo{
    display:flex;
    align-items:center;
    gap:12px;
}

.footer-logo img{
    width:55px;
    height:55px;
    object-fit:cover;
    border-radius:50%;
    border: 2px rgb(190, 222, 255) solid;
}

.footer-logo h3{
    color:#FFFFFF;
    font-size:17px;
    margin-bottom:7px;
}

.footer-logo p{
    font-size:13px;
    color:var(--second-color);
}

.copyright{
    font-size:13px;
    color:var(--bg-color);
    text-align:right;
}


body:not(.trang-chu) .header-content{
    justify-content:space-between;
}

body.trang-chu > header{
    position:absolute;
    top:0;
    left:0;
    right:0;
    z-index:20;
    background:transparent;
    border:none;
}

body.trang-chu .header-content{
    width:94%;
    max-width:1450px;
    min-height:82px;
    margin:auto;
    padding:14px 0;
    display:flex;
    align-items:center;
    justify-content:space-between;
    gap:16px;
    border-bottom:1px solid rgba(255,255,255,0.3);
}

body.trang-chu .logo{
    gap:12px;
    min-width:0;
    color:white;
}

body.trang-chu .logo img{
    width:52px;
    height:52px;
    object-fit:cover;
    border:2px solid white;
    border-radius:50%;
    background:rgba(255,255,255,0.15);
}

body.trang-chu .logo h3{
    color:white;
    font-size:19px;
    text-shadow:0 2px 6px rgba(0,0,0,0.25);
}

body.trang-chu .logo p{
    color:#FFEBF5;
    font-size:12px;
}

body.trang-chu .nut-menu{
    width:47px;
    height:47px;
    padding:9px;
    display:flex;
    align-items:center;
    justify-content:center;
    flex-shrink:0;
    background:rgba(255,255,255,0.2);
    border:1px solid rgba(255,255,255,0.6);
    border-radius:var(--border-radius);
    filter:none;
    transition:0.3s;
}

body.trang-chu .nut-menu img{
    width:26px;
    height:26px;
    object-fit:contain;
    filter:brightness(0) invert(1);
}

body.trang-chu .nut-menu:hover{
    background:rgba(255,255,255,0.35);
    transform:translateY(-3px);
}


body.trang-chu .thong-tin-sv{
    position:relative;
    isolation:isolate;
    width:100%;
    max-width:none;
    min-height:470px;
    margin:0;
    padding:130px 6% 110px;
    overflow:hidden;

    border:none;
    border-radius:0;
    box-shadow:none;

    background-color:#4D4F75;
    background-image:
        linear-gradient(
            90deg,
            rgba(26,28,57,0.48),
            rgba(64,37,74,0.06)
        ),
        url("image/nenherotrangchu.jpg"),
        radial-gradient(
            ellipse at 77% 73%,
            #F6B5B3 0%,
            transparent 42%
        ),
        linear-gradient(
            155deg,
            #292D54 0%,
            #5E547F 45%,
            #BB82A2 78%,
            #E8A0A3 100%
        );

    background-size:cover;
    background-position:center;
    background-repeat:no-repeat;

    color:white;
    animation:none;
    transform:none;
}

body.trang-chu .thong-tin-sv:hover{
    transform:none;
    box-shadow:none;
}


body.trang-chu .thong-tin-sv::before,
body.trang-chu .thong-tin-sv::after{
    content:"";
    position:absolute;
    left:0;
    right:0;
    bottom:0;
    pointer-events:none;
    z-index:0;
}

body.trang-chu .thong-tin-sv::before{
    height:150px;
    opacity:0.44;
    background:#666489;
    clip-path:polygon(
        0 60%,12% 20%,24% 66%,37% 13%,
        49% 64%,64% 15%,77% 63%,90% 18%,
        100% 55%,100% 100%,0 100%
    );
}

body.trang-chu .thong-tin-sv::after{
    height:86px;
    opacity:0.63;
    background:linear-gradient(180deg,#3B476D,#303B62);
    clip-path:polygon(
        0 70%,13% 27%,28% 76%,42% 21%,
        55% 79%,69% 23%,83% 68%,94% 25%,
        100% 46%,100% 100%,0 100%
    );
}

body.trang-chu .hero-mat-troi{
    position:absolute;
    z-index:0;
    width:88px;
    height:88px;
    right:16%;
    bottom:16%;
    border-radius:50%;
    background:#FFE1BD;
    box-shadow:0 0 78px 28px rgba(255,214,172,0.55);
}

body.trang-chu .hero-canh-hoa{
    position:absolute;
    z-index:1;
    width:14px;
    height:9px;
    border-radius:95% 0 95% 0;
    background:rgba(255,213,229,0.72);
    transform:rotate(-30deg);
    pointer-events:none;
}

body.trang-chu .hoa-1{
    top:22%;
    left:6%;
}

body.trang-chu .hoa-2{
    top:49%;
    left:17%;
}

body.trang-chu .hoa-3{
    top:27%;
    right:11%;
}

body.trang-chu .hoa-4{
    bottom:13%;
    right:26%;
}


body.trang-chu .sv-box{
    position:relative;
    z-index:2;
    display:grid;
    grid-template-columns:130px minmax(0,1fr) 165px;
    align-items:center;
    gap:25px;
    max-width:1240px;
    margin:auto;
}

body.trang-chu .avatar-sv{
    position:relative;
    width:130px;
    height:130px;
    display:flex;
    align-items:center;
    justify-content:center;
    border-radius:50%;
    transition:0.3s;
}

body.trang-chu .avatar-sv:hover{
    transform:scale(1.05);
}

body.trang-chu .avatar-sv::before{
    content:"";
    position:absolute;
    inset:-2px;
    border-radius:50%;
    background:conic-gradient(
        #FFFDF7,
        #E5D3AF,
        #AEC4D4,
        #FFFDF7
    );
    animation:heroVienXoay 7s linear infinite;
}

@keyframes heroVienXoay{
    to{
        transform:rotate(360deg);
    }
}

body.trang-chu .avatar-sv img{
    position:relative;
    z-index:1;
    width:122px;
    height:122px;
    display:block;
    object-fit:cover;
    border:2px solid white;
    border-radius:50%;
    background:#D7C6DB;
    box-shadow:0 8px 26px rgba(21,18,48,0.24);
}

body.trang-chu .sv-info{
    min-width:0;
    color:white;
}

body.trang-chu .hero-nhan{
    display:inline-block;
    padding:8px 12px;
    border:1px solid rgba(255,255,255,0.28);
    border-radius:20px;
    background:rgba(255,255,255,0.15);
    color:#FFF1F6;
    font-size:11px;
    font-weight:600;
}

body.trang-chu .sv-info h1{
    margin:10px 0 6px;
    font-size:clamp(26px,3.4vw,36px);
    line-height:1.15;
    color:white;
    text-shadow:0 2px 9px rgba(13,16,44,0.34);
}

body.trang-chu .sv-info p{
    color:#FFF5FA;
}

body.trang-chu .sv-info .hero-nganh{
    font-size: var(--text-sm);
    font-weight:600;
    line-height:1.5;
}

body.trang-chu .sv-info .hero-truong,
body.trang-chu .sv-info .hero-mssv{
    font-size: var(--text-xs);
    line-height:1.6;
}

body.trang-chu .sv-info .hero-mo-ta{
    max-width:590px;
    margin:14px 0 18px;
    font-size:13px;
    line-height:1.7;
}


body.trang-chu .hero-nhom-nut{
    display:flex;
    align-items:center;
    flex-wrap:wrap;
    gap:12px;
}

body.trang-chu .hero-nhom-nut a,
body.trang-chu .hero-nhom-nut button{
    display:inline-flex;
    align-items:center;
    justify-content:center;
    min-height:43px;
    padding:11px 17px;
    border-radius:25px;
    font-size:13px;
    font-weight:700;
    text-decoration:none;
    font-family:var(--font-body);
    transition:0.3s;
}

body.trang-chu .hero-nhom-nut a:hover,
body.trang-chu .hero-nhom-nut button:hover{
    transform:translateY(-3px);
    box-shadow:0 7px 20px rgba(15,16,43,0.2);
}

body.trang-chu .hero-nut-kham-pha{
    background:#F8C2D9;
    border:1px solid #F8C2D9;
    color:#693049;
}

body.trang-chu .hero-nut-ho-so{
    background:rgba(255,255,255,0.14);
    border:1px solid rgba(255,255,255,0.85);
    color:white;
}


body.trang-chu .hero-thong-tin-them{
    width:100%;
    margin-top:20px;
    padding:25px 28px;

    background:rgba(35,30,60,0.55);
    backdrop-filter:blur(12px);
    -webkit-backdrop-filter:blur(12px);

    border:1px solid rgba(255,255,255,0.28);
    border-radius:var(--border-radius);

    box-shadow:0 8px 30px rgba(0,0,0,0.15);

    color:white;

    animation:heroHoSoHien 0.35s ease;
}

body.trang-chu .hero-thong-tin-them[hidden]{
    display:none;
}

body.trang-chu .hero-thong-tin-them h2{
    margin:0 0 22px;
    padding-bottom:15px;

    color:#F5E3C3;
    font-family:Georgia,"Times New Roman",serif;
    font-size:23px;
    font-weight:700;
    letter-spacing:1px;

    border-bottom:1px solid rgba(255,255,255,0.25);
}

body.trang-chu .hero-ho-so-grid{
    display:grid;
    grid-template-columns:repeat(2,minmax(0,1fr));
    gap:25px;
}

body.trang-chu .hero-ho-so-cot{
    display:flex;
    flex-direction:column;
    gap:17px;
}

body.trang-chu .hero-ho-so-cot p{
    margin:0;
    font-size:15px;
    line-height:1.6;
}

body.trang-chu .hero-ho-so-cot strong{
    color:#BFDCEB;
    font-weight:700;
}

body.trang-chu .hero-ho-so-cot span{
    color:#FFFFFF;
    font-weight:400;
}

body.trang-chu .hero-ho-so-cot p:hover strong{
    color:#FFE0A8;
}

@keyframes heroHoSoHien{
    from{
        opacity:0;
        transform:translateY(12px);
    }
    to{
        opacity:1;
        transform:translateY(0);
    }
}

body.trang-chu .hero-code-panel{
    width:165px;
    min-height:142px;
    padding:16px;
    border:1px solid rgba(191,213,246,0.67);
    border-radius:12px;
    background:rgba(30,40,71,0.59);
    box-shadow:0 12px 28px rgba(18,20,40,0.25);
    transform:rotate(-7deg);
    backdrop-filter:blur(5px);
    transition:0.3s;
}

body.trang-chu .hero-code-panel:hover{
    transform:rotate(-2deg) translateY(-3px);
}

body.trang-chu .hero-code-cham{
    display:flex;
    gap:6px;
    margin-bottom:18px;
}

body.trang-chu .hero-code-cham i{
    width:7px;
    height:7px;
    border-radius:50%;
    background:#F5B6CF;
}

body.trang-chu .hero-code-cham i:nth-child(2){
    background:#EED698;
}

body.trang-chu .hero-code-cham i:nth-child(3){
    background:#A2D9CC;
}

body.trang-chu .hero-code-panel > span{
    display:block;
    width:77%;
    height:5px;
    margin-bottom:10px;
    border-radius:4px;
    background:#76B8D6;
}

body.trang-chu .hero-code-panel > span:nth-of-type(2){
    width:51%;
    margin-left:14px;
    background:#D5A2CF;
}

body.trang-chu .hero-code-panel > span:nth-of-type(3){
    width:85%;
    background:#AAA4E0;
}

body.trang-chu .hero-code-panel > span:nth-of-type(4){
    width:58%;
    margin-left:14px;
    background:#F0C09D;
}

body.trang-chu .hero-code-panel > span:nth-of-type(5){
    width:70%;
    background:#A5D9C8;
}

body.trang-chu .hero-code-panel small{
    display:block;
    margin-top:6px;
    text-align:right;
    font-size:9px;
    color:#D7DEFA;
}


body.trang-chu #trang-chu{
    position:relative;
    z-index:1;
    margin-top:-32px;
    padding:49px 0 45px;
    border-radius:36px 36px 0 0;
    background-color:var(--bg-color);
    background-image:
        linear-gradient(
            rgba(255,249,246,0.89),
            rgba(245,239,225,0.91)
        ),
        url("image/nentrangchu.jpg");
    background-size:cover;
    background-position:center;
}


/*-- Cung hoàng đạo -------------------------------------------------------------------------*/


body.dang-xem-cung #trang-bai{
    width:100%;
    max-width:none;
    margin:0;
    position:relative;
}

#bai-1{
    --nen:#181331;
    --vang:#E9D28A;

    width:100%;
    min-height:100vh;
    padding:80px 4% 60px;
    border:0;
    border-radius:0;
    box-shadow:none;
    position:relative;
    overflow:hidden;
    background-color:var(--nen);
    color:white;
    transition:background-color 0.5s;
}

#bai-1.nen-lua{
    --nen:#542334;
    --vang:#FFD18A;
}

#bai-1.nen-dat{
    --nen:#234A43;
    --vang:#E7DBAE;
}

#bai-1.nen-khi{
    --nen:#294C77;
    --vang:#E0F0FF;
}

#bai-1.nen-nuoc{
    --nen:#302B67;
    --vang:#DCCBFF;
}

#bai-1::before{
    content:"";
    position:absolute;
    inset:0;
    background:url("image/nencung.jpg") center top/cover no-repeat;
    opacity:0.48;
    pointer-events:none;
}

#bai-1::after{
    content:"";
    position:absolute;
    inset:0;
    background-image:radial-gradient(circle,white 1px,transparent 2px);
    background-size:100px 100px;
    opacity:0.18;
    animation:saoBay 30s linear infinite;
    pointer-events:none;
}

@keyframes saoBay{
    to{
        background-position:200px 200px;
    }
}

#bai-1 > div{
    max-width:1250px;
    margin:0 auto 28px;
    position:relative;
    z-index:1;
}

#bai-1 .cung-dau{
    text-align:center;
    padding:10px 0 20px;


}

#bai-1 .cung-dau h2{
    color:var(--vang);
    font-size:clamp(28px,4vw,34px);
    line-height:1.2;
    margin-bottom:20px;
}

#bai-1 .cung-dau p{
    font-size:16px;
    line-height:1.7;
}



#bai-1 .cung-khung h3{
    color:var(--vang);
    font-size:25px;
    margin-bottom:18px;
}

#bai-1 .cung-o{
    display:flex;
    flex-direction:column;
    gap:10px;
    margin-top:22px;
}

#bai-1 .cung-o label{
    color:var(--vang);
    font-weight:bold;
}

#bai-1 .cung-hang,
#bai-1 .cung-so{
    display:grid;
    grid-template-columns:repeat(3,minmax(0,1fr));
    gap:18px;
}

#bai-1 input,
#bai-1 select{
    width:100%;
    padding:18px;
    border:1px solid rgba(255,255,255,0.3);
    border-radius:12px;
    background:rgba(10,10,30,0.55);
    color:white;
    font:inherit;
    outline:none;
}

#bai-1 input::placeholder{
    color:#BDB6CF;
}

#bai-1 input:focus,
#bai-1 select:focus{
    border-color:var(--vang);
}

#bai-1 select option{
    background:#19152E;
    color:white;
}

#bai-1 .cung-nut{
    width:100%;
    margin-top:28px;
    padding:20px;
    border:0;
    border-radius:12px;
    background:linear-gradient(90deg,#FFE9A8,#D4B96B);
    color:#181331;
    font-size:16px;
    font-weight:bold;
    box-shadow:0 0 20px rgba(233,210,138,0.25);
}

#bai-1 .cung-nut:hover{
    filter:brightness(1.08);
}

#bai-1 #loi-cung{
    color:#FFC4C4;
    margin-top:12px;
}

#bai-1 [hidden]{
    display:none !important;
}

#bai-1 .cung-kq,
#bai-1 .cung-chi-tiet{
    display:flex;
    align-items:center;
    gap:25px;
}

#bai-1 .cung-kq img,
#bai-1 .cung-chi-tiet img{
    width:110px;
    height:110px;
    object-fit:contain;
    flex-shrink:0;
}

#bai-1 .cung-kq h3{
    font-size:30px;
}

#bai-1 .cung-so{
    margin-top:22px;
}

#bai-1 .cung-so.hai-o{
    grid-template-columns:repeat(2,minmax(0,1fr));
}

#bai-1 .cung-so > div,
#bai-1 .cung-chi-tiet{
    padding:20px;
    background:rgba(255,255,255,0.08);
    border:1px solid rgba(255,255,255,0.15);
    border-radius:12px;
}

#bai-1 .cung-so span{
    display:block;
    margin-bottom:10px;
}

#bai-1 .cung-so strong{
    color:var(--vang);
    font-size:20px;
}

#bai-1 .cung-ghi-chu{
    margin-top:20px;
    color:#D5CEE1;
    font-size:13px;
}

#bai-1 .cung-luoi{
    display:grid;
    grid-template-columns:repeat(3,minmax(0,1fr));
    gap:16px;
    margin-top:25px;
}

#bai-1 .the-cung{
    display:flex;
    flex-direction:column;
    align-items:flex-start;
    gap:8px;
    min-height:200px;
    padding:16px 20px;
    border:1px solid rgba(255,255,255,0.18);
    border-radius:12px;
    background:rgba(255,255,255,0.08);
    color:white;
    text-align:left;
    transition:0.25s;
}

#bai-1 .the-cung:hover,
#bai-1 .the-cung.chon{
    border-color:var(--vang);
    background:rgba(255,255,255,0.15);
    transform:translateY(-3px);
}

#bai-1 .the-cung img{
    width:70px;
    height:70px;
    object-fit:contain;
}

#bai-1 .the-cung .ten-the-cung{
    display:block;
    color:var(--vang);
    font-size:18px;
    font-weight:700;
}


#bai-1 .the-cung small{
    color:#DAD4E6;
}

#bai-1 .the-cung span{
    color:var(--vang);
}

#bai-1 .the-cung .mo-ta-the-cung{
    display:block;
    margin-top:auto;
    font-size:14px;
    color:white;
}

#bai-1 .cung-chi-tiet{
    margin-top:25px;
}

#bai-1 .cung-chi-tiet p{
    margin-top:8px;
}

#bai-1 .cung-khung,
#bai-1 #ket-qua-cung{
    width:100%;
    padding:35px;
    margin: 0 auto 30px;
    margin-bottom:30px;
    background:none;
    border:1px solid rgba(233,210,138,0.5);
    border-radius:20px;
    box-shadow:0 8px 25px rgba(59, 53, 122, 0.63);
}

#bai-1 .cung-khung.kham-pha-cung{
    background:transparent;
    border:none;
    border-radius:0;
    box-shadow:none;
    padding:0;
}

/* 4 nguyên tố */

#bai-1 .khu-nguyen-to{
    padding:35px 0;
}

#bai-1 .dau-nguyen-to{
    margin-bottom:30px;
    
}

#bai-1 .dau-nguyen-to > p:first-child{
    color:var(--vang);
    font-weight:bold;
    letter-spacing:2px;
    margin-bottom:15px;
}

#bai-1 .dau-nguyen-to h3{
    color:var(--vang);
    font-size:26px;
    margin-bottom:20px;
}

#bai-1 .dau-nguyen-to > p:last-child{
    color:#DAD4E6;
    font-size:15px;
    line-height:1.8;
}

#bai-1 .ds-nguyen-to{
    display: grid;
    grid-template-columns: repeat(2, minmax(0, 1fr));
    gap: 20px; /* Giảm khoảng cách giữa các hộp một chút */
    max-width: 1200px; /* CHÍNH LÀ DÒNG NÀY: Ép cụm này nhỏ lại, không cho giãn to đùng nữa */
    margin: 0 auto
}

#bai-1 .the-nguyen-to{
    padding:22px 26px;;
    background:rgba(207, 185, 179, 0.345);
    border:1px solid rgba(233,210,138,0.3);
    border-radius:10px;
    transition:0.3s;
}

#bai-1 .the-nguyen-to:hover{
    transform:translateY(-4px);
    border-color:var(--vang);
    background:rgba(94, 95, 101, 0.464);
    box-shadow:0 8px 25px rgba(53, 74, 122, 0.63);
}


#bai-1 .the-nguyen-to h4{
    display:flex;
    align-items:center;
    gap:15px;
    color:white;
    font-size:20px;
    margin-bottom:15px;
}

#bai-1 .the-nguyen-to h4 img{
    width:35px;
    height:35px;
    object-fit:contain;
    flex-shrink:0;
    background:transparent;
    border:none;
    border-radius:0;
}

#bai-1 .the-nguyen-to h5{
    color:var(--vang);
    font-size:16px;
    margin-bottom:20px;
}

#bai-1 .the-nguyen-to p{
    color:#DAD4E6;
    font-size:15px;
    line-height:1.8;
}

#bai-1 #ket-qua-cung{
    width:100%;
    padding:0;
    margin:0 auto 30px;
    background:transparent;
    border:none;
    border-radius:0;
    box-shadow:none;
}

#bai-1 #ket-qua-cung[hidden]{
    display:none;
}

#bai-1 .ket-khung{
    padding:15px 28px;
    margin-bottom:15px;

    background:transparent;
    border:1px solid rgba(233,210,138,0.5);
    border-radius:var(--border-radius);

    box-shadow:0 8px 25px rgba(59,53,122,0.63);
}

#bai-1 .ket-dau{
    display:flex;
    justify-content:space-between;
    align-items:center;
    gap:15px;
    padding-bottom: 10px;
    margin-bottom: 15px;
    border-bottom:1px solid rgba(233,210,138,0.3);
}

#bai-1 .ket-dau h3{
    color:var(--vang);
    font-size:27px;
}

#bai-1 .ket-dau span{
    padding:8px 15px;
    border:1px solid rgba(233,210,138,0.4);
    border-radius:10px;
    color:var(--vang);
    font-size:14px;
}

#bai-1 .ket-hang{
    width: 100%;
    display:grid;
    grid-template-columns: 130px minmax(0,1fr); /* Cột chứa ảnh thu gọn còn 130px */
    gap: 20px;
    align-items:start;
}

#bai-1 .ket-anh{
    width: 100%;
    height: 130px;
    align-items: center;
    justify-content: center;
    background: rgba(255,255,255,0.07);
    border: 1px solid rgba(233,210,138,0.3);
    border-radius: 50%;
    overflow: hidden;
}

#bai-1 .ket-anh img{
    width:55%;
    height:55%;
    object-fit:contain;
    background:transparent;
    border:none;
}

#bai-1 .ket-thong-tin{
    min-width:0;
}

#bai-1 .ket-thong-tin > p{
    color:#DAD4E6;
    margin-bottom: 5px;
}


#bai-1 .ket-thong-tin h4{
    color:var(--vang);
    font-size:24px;
    margin:4px 0;
}


#bai-1 .ket-hai-o{
    display:grid;
    grid-template-columns:repeat(2,minmax(0,1fr));
    gap:12px;
    margin-top:10px;
}

#bai-1 .ket-hai-o > div,
#bai-1 .ket-mo-ta{
    padding:10px 15px;
    background:rgba(255,255,255,0.08);
    border:1px solid rgba(255,255,255,0.12);
    border-radius:12px;
}

#bai-1 .ket-hai-o span{
    display:block;
    color:#DAD4E6;
    margin-bottom:2px;
}

#bai-1 .ket-hai-o strong,
#bai-1 .ket-mo-ta strong{
    color:var(--vang);
    font-size:15px;
}

#bai-1 .ket-hai-o p{
    color:white;
    line-height:1.6;
    margin-top: 4px;
}

#bai-1 .ket-mo-ta{
    margin-top:10px;
}


#bai-1 .ket-mo-ta p{
    margin-top:4px;
    line-height:1.7;
    color:#E8E2EF;
}


#bai-1 .ket-ghi-chu{
    color:#D0C7DC;
    font-size:13px;
    text-align:center;
    margin:20px 0;
}

#bai-1 .the-cung img,
#bai-1 .the-cung video{
    width:100px;
    height:100px;
    border-radius:50%;
    object-fit:cover;
    border:1px solid var(--vang);
}

#bai-1 .ket-anh{
    border-radius:50%;
    overflow:hidden;
}

#bai-1 .ket-anh img,
#bai-1 .ket-anh video{
    width:100%;
    height:100%;
    border-radius:50%;
    object-fit:cover;
}

#bai-1 .media-chi-tiet{
    width:110px;
    height:110px;
    border-radius:50%;
    overflow:hidden;
    flex-shrink:0;
}

#bai-1 .media-chi-tiet img,
#bai-1 .media-chi-tiet video{
    width:100%;
    height:100%;
    object-fit:cover;
}

#bai-1 video{
    pointer-events:none;
}


/* danh bạ ngẫu nhiên -----------------------------//-------------------------*/


body.dang-xem-danh-ba #trang-bai{
    width:100%;
    max-width:none;
    margin:0;
    position:relative;
}

#bai-2{
    width:100%;
    min-height:100vh;
    padding:95px 4% 60px;
    background:#F5EFE1;
    border:none;
    border-radius:0;
    box-shadow:none;
    color:#382C2D;
}
#bai-2{
    background-image:url("image/nendanhba.jpg");
    background-size:cover;
    background-position:center;
    background-repeat:no-repeat;
    background-attachment:fixed;
}
#bai-2 .db-noi-dung{
    max-width:1450px;
    margin:auto;
}

#bai-2 .db-dau-trang{
    display:flex;
    align-items:center;
    justify-content:space-between;
    gap:20px;
    margin-bottom:30px;
}

#bai-2 .db-phu-de{
    color:#790D16;
    font-size:12px;
    font-weight:bold;
    letter-spacing:2px;
    margin-bottom:12px;
}

#bai-2 .db-dau-trang h2{
    color:#790D16;
    font-size:30px;
    margin-bottom:12px;

}

#bai-2 .db-dau-trang > div > p:last-child{
    color:#71686A;
    font-size:15px;
}

#bai-2 .db-thong-ke{
    min-width:110px;
    padding:15px;
    text-align:center;
    background:white;
    border:1px solid #E5D3AF;
    border-radius:10px;
}

#bai-2 .db-thong-ke strong{
    display:block;
    color:#790D16;
    font-size:32px;
}

#bai-2 .db-thong-ke span{
    color:#71686A;
    font-size:12px;
}


#bai-2 .db-thanh-cong-cu{
    display:grid;
    grid-template-columns:minmax(0,2fr) minmax(0,1.1fr) minmax(0,1.1fr) 120px;
    align-items:center;
    gap:12px;
    padding:20px;
    background:white;
    border:1px solid var(--second-color);
    border-radius:var(--border-radius);
    box-shadow:0 3px 12px rgba(0,0,0,0.05);
}

#bai-2 .db-thanh-cong-cu > *{
    min-width:0;
}


#bai-2 .db-o-tim{
    position:relative;
    min-width:0;
}

#bai-2 .db-o-tim > img{
    position:absolute;
    left:14px;
    top:50%;
    transform:translateY(-50%);
    width:20px;
    height:20px;
    object-fit:contain;
    pointer-events:none;
}

#bai-2 .db-o-tim input{
    width:100%;
    height:46px;
    padding:0 15px 0 45px;
    border:1px solid #E5D3AF;
    border-radius:10px;
    background:#F9F6EF;
    font-size:13px;
    outline:none;
}

#bai-2 .db-bo-loc{
    display:flex;
    align-items:center;
    gap:10px;
    min-width:0;
}

#bai-2 .db-bo-loc > img{
    width:20px;
    height:20px;
    object-fit:contain;
    flex-shrink:0;
}

#bai-2 .db-o-chon{
    position:relative;
    min-width:0;
    width:100%;
}

#bai-2 .db-o-chon select{
    width:100%;
    height:46px;
    padding:0 34px 0 12px;
    border:1px solid #E5D3AF;
    border-radius:10px;
    background:#F9F6EF;
    color:#382C2D;
    font-size:13px;
    appearance:none;
    -webkit-appearance:none;
    outline:none;
    cursor:pointer;
}

#bai-2 .db-o-chon > img{
    position:absolute;
    right:12px;
    top:50%;
    transform:translateY(-50%);
    width:15px;
    height:15px;
    object-fit:contain;
    pointer-events:none;
}

#bai-2 .db-o-tim input:focus,
#bai-2 .db-o-chon select:focus{
    border-color:#790D16;
    box-shadow:0 0 0 3px rgba(121,13,22,0.1);
}

#bai-2 #db-lay-moi{
    height:46px;
    display:flex;
    justify-content:center;
    align-items:center;
    gap:9px;
    padding:0 12px;
    background:#790D16;
    color:white;
    border:none;
    border-radius:10px;
    font-size:14px;
    font-weight:bold;
    transition:0.3s;
    


}

#bai-2 #db-lay-moi img{
    width:18px;
    height:18px;
    object-fit:contain;
    filter: grayscale(1) invert(1)
}

#bai-2 #db-lay-moi:hover{
    background:#A43B44;
    transform:translateY(-3px);
    box-shadow:0 6px 15px rgba(46, 170, 201, 0.448);
}

#bai-2 #db-lay-moi:disabled{
    opacity:0.6;
    cursor:wait;
    transform:none;
}

#bai-2 .db-thanh-thong-tin{
    display:flex;
    justify-content:space-between;
    gap:15px;
    margin:25px 0 20px;
    color:#8291A9;
    font-size:14px;
}

#bai-2 #db-thong-bao{
    color:#790D16;
    font-size:14px;
    margin-bottom:15px;
}

#bai-2 #db-thong-bao:empty{
    display:none;
}

#bai-2 .db-danh-sach{
    display:grid;
    grid-template-columns:repeat(5,minmax(0,1fr));
    gap:16px;
}

#bai-2 .db-the{
    position:relative;
    display:flex;
    flex-direction:column;
    align-items:center;
    min-width:0;
    min-height:320px;
    padding:22px 12px 18px;
    background:white;
    border:1px solid #E5D3AF;
    border-radius:10px;
    text-align:center;
    cursor:pointer;
    transition:0.3s;
}

#bai-2 .db-the:hover,
#bai-2 .db-the:focus-visible{
    border-color:#790D16;
    transform:translateY(-5px);
    box-shadow:0 9px 22px rgba(121,13,22,0.15);
    outline:none;
}


#bai-2 .db-ma-nuoc{
    position:absolute;
    top:12px;
    right:12px;
    min-width:45px;
    height:35px;
    padding:5px 10px;
    display:flex;
    align-items:center;
    justify-content:center;
    background:#F5EFE1;
    color:#790D16;
    border:1px solid #E5D3AF;
    border-radius:10px;
    font-size:13px;
    font-weight:bold;
}


#bai-2 .db-anh{
    width:100px;
    height:100px;
    margin:0 auto 18px;
    flex-shrink:0;
}

#bai-2 .db-anh img{
    width:100%;
    height:100%;
    display:block;
    object-fit:cover;
    border:3px solid #AEC4D4;
    border-radius:50%;
}

#bai-2 .db-the h3{

    max-width:100%;
    min-height:2.8em;
    margin-bottom:8px;

    color:#271F2A;
    font-family:var(--font-body);
    font-size:16px;
    font-weight:700;
    line-height:1.4;

    display:-webkit-box;
    -webkit-box-orient:vertical;
    -webkit-line-clamp:2;
    line-clamp: 2;

    white-space:normal;
    overflow:hidden;
    overflow-wrap:anywhere;
}


#bai-2 .db-tuoi{
    max-width:100%;
    margin-bottom:15px;
    color:#91A0B9;
    font-size:var(--text-xs);
    white-space:nowrap;
    overflow:hidden;
    text-overflow:ellipsis;
}

#bai-2 .db-email{
    width:100%;
    display:flex;
    align-items:center;
    gap:7px;
    padding:8px;
    background:#F5EFE1;
    border:1px solid #E5D3AF;
    border-radius:10px;
}

#bai-2 .db-email > img{
    width:17px;
    height:17px;
    object-fit:contain;
    flex-shrink:0;
}

#bai-2 .db-email > span{
    min-width:0;
    flex:1;
    color:#475A73;
    font-size:11px;
    white-space:nowrap;
    overflow:hidden;
    text-overflow:ellipsis;
    text-align:left;
}

#bai-2 .db-sao-chep{
    width:26px;
    height:26px;
    display:flex;
    align-items:center;
    justify-content:center;
    flex-shrink:0;
    padding:5px;
    border:1px solid transparent;
    border-radius:7px;
    background:transparent;
    transition:0.2s;
}

#bai-2 .db-sao-chep img{
    width:16px;
    height:16px;
    object-fit:contain;
}

#bai-2 .db-sao-chep:hover,
#bai-2 .db-sao-chep.da-chep{
    background:#E5D3AF;
    border-color:#D4B990;
}

#bai-2 .db-quoc-gia{
    width:100%;
    display:flex;
    align-items:center;
    justify-content:center;
    gap:8px;
    margin-top:auto;
    padding:15px 0;
    border-bottom:1px solid #E5D3AF;
    color:#475A73;
    font-size:13px;
}

#bai-2 .db-quoc-gia img{
    width:17px;
    height:17px;
    object-fit:contain;
    flex-shrink:0;
}

#bai-2 .db-quoc-gia span{
    overflow:hidden;
    text-overflow:ellipsis;
    white-space:nowrap;
}

#bai-2 .db-chi-tiet{
    display:flex;
    justify-content:center;
    align-items:center;
    gap:7px;
    padding:13px 5px 0;
    background:transparent;
    border:none;
    color:#790D16;
    font-size:13px;
    cursor:pointer;
}

#bai-2 .db-chi-tiet img{
    width:17px;
    height:17px;
    object-fit:contain;
}

#bai-2 .db-chi-tiet span{
    text-decoration:none;
}

#bai-2 .db-chi-tiet:hover span,
#bai-2 .db-chi-tiet:focus-visible span{
    text-decoration:underline;
    text-underline-offset:4px;
}

#bai-2 .db-khong-co{
    grid-column:1/-1;
    padding:40px;
    background:white;
    border:1px solid #E5D3AF;
    border-radius:10px;
    text-align:center;
}

#bai-2 .db-ghi-chu{
    margin-top:25px;
    color:#817775;
    font-size:12px;
}

#bai-2 .db-modal{
    position:fixed;
    inset:0;
    z-index:2000;
    display:flex;
    justify-content:center;
    align-items:center;
    padding:18px;
    background:rgba(24,20,34,0.65);
    backdrop-filter:blur(7px);
    -webkit-backdrop-filter:blur(7px);
}

#bai-2 .db-modal[hidden]{
    display:none;
}

#bai-2 .db-hop-thoai{
    position:relative;
    width:100%;
    max-width:530px;
    max-height:90vh;
    overflow-y:auto;
    padding:32px;
    background:white;
    border:1px solid #E5D3AF;
    border-radius:10px;
    box-shadow:0 15px 45px rgba(0,0,0,0.3);
}

#bai-2 .db-nut-dong{
    position:absolute;
    top:12px;
    right:12px;
    width:32px;
    height:32px;
    padding:6px;
    border:none;
    border-radius:10px;
    background:transparent;
}

#bai-2 .db-nut-dong img{
    width:100%;
    height:100%;
    object-fit:contain;
}

#bai-2 .db-nut-dong:hover{
    background:#F5EFE1;
}

#bai-2 .db-modal-dau{
    text-align:center;
    margin-bottom:25px;
}

#bai-2 .db-modal-dau img{
    width:110px;
    height:110px;
    object-fit:cover;
    border:4px solid #AEC4D4;
    border-radius:50%;
    margin-bottom:15px;
}

#bai-2 .db-modal-dau h3{
    color:#261F2A;
    font-size:24px;
    margin-bottom:8px;
}

#bai-2 .db-modal-dau p{
    color:#8291A9;
    font-size:13px;
}

#bai-2 .db-hang-modal{
    display:flex;
    justify-content:space-between;
    align-items:flex-start;
    gap:15px;
    padding:15px;
    margin-bottom:10px;
    background:#F5EFE1;
    border:1px solid #E5D3AF;
    border-radius:10px;
    font-size:13px;
}

#bai-2 .db-hang-nhan{
    display:flex;
    align-items:center;
    gap:9px;
    flex-shrink:0;
    color:#697388;
}

#bai-2 .db-hang-nhan img{
    width:18px;
    height:18px;
    object-fit:contain;
}

#bai-2 .db-hang-modal strong{
    color:#302C38;
    text-align:right;
    overflow-wrap:anywhere;
}

#bai-2 .db-cuoi-modal{
    display:flex;
    justify-content:flex-end;
    padding-top:18px;
    margin-top:22px;
    border-top:1px solid #E5D3AF;
}

#bai-2 #db-dong-duoi{
    padding:11px 20px;
    background:#F5EFE1;
    border:1px solid #E5D3AF;
    border-radius:10px;
    color:#790D16;
    transition:0.2s;
}

#bai-2 #db-dong-duoi:hover{
    background:#E5D3AF;
}

body.db-khoa-cuon{
    overflow:hidden;
}


/*-------------------------------------kết thúc danh bạ------------------------------*/


/*đăng kí cư trú -------------------------------------------------------------------*/

body.dang-xem-cu-tru #trang-bai{
    position:relative;
    width:100%;
    max-width:none;
    margin:0;
}


#bai-3{
    width:100%;
    min-height:100vh;
    padding:90px 4% 55px;   
    background: url("image/nendanhba.jpg") center/cover no-repeat fixed;
    border:0;
    border-radius:0;
    box-shadow:none;
    font-family:var(--font-body);
    color:var(--text-color);
}

#bai-3 .ct-noi-dung{
    max-width:1450px;
    margin:auto;
}


body.dang-xem-cu-tru #trang-bai{
    width:100%;
    max-width:none;
    margin:0;
    padding:0;
}


body.dang-xem-cu-tru #bai-3{
    padding:0 0 32px;
}

body.dang-xem-cu-tru #bai-3 .ct-noi-dung{
    padding:0 12px;
}


/* banner bài 3 */


#bai-3 .ct-banner{
    width:100%;
    min-height:230px;
    margin:0 0 30px;
    padding:30px 4%;
    display:flex;
    align-items:center;
    gap:28px;

    background-color:#3153249b;
    background-image:url("image/nenbannerbai3.jpg");
    background-size:cover;
    background-position:center;
    background-repeat:no-repeat;

    border:none;
    border-radius:0;
    overflow:hidden;
}


#bai-3 .ct-nguon{
    display:none;
}

#bai-3 #ct-api-thong-bao.ct-loi-api{
    display:block;
    width:100%;
    margin-top:8px;
    padding:9px 12px;

    color:var(--main-color);
    background:#FFF0F0;

    border:1px solid #E5B4B9;
    border-radius:var(--border-radius);

    font-size:13px;
    line-height:1.5;
}

#bai-3 .ct-banner-anh{
    width:100px;
    height:105px;
    flex-shrink:0;

    display:flex;
    align-items:center;
    justify-content:center;

    border-radius:50%;
    background:rgba(255,255,255,0.22);
    overflow:hidden;

    box-shadow:0 4px 15px rgba(0,0,0,0.2);
    transition:transform 0.3s ease;
}

#bai-3 .ct-banner-anh:hover{
    transform:scale(1.06);
}

#bai-3 .ct-banner-anh img{
    width:100%;
    height:100%;
    display:block;
    object-fit:cover;
}

#bai-3 .ct-banner-chu{
    min-width:0;
}

#bai-3 .ct-banner-chu p{
    margin-bottom:12px;
    font-size:13px;
    font-weight:600;
    letter-spacing:1.4px;
    color:#F1E5C9;
}

#bai-3 .ct-banner-chu h1{
    margin:0;
    padding:0;
    color:white;
    font-size:clamp(23px,3vw,32px);
    font-family:Georgia,"Times New Roman",serif;
    font-weight:bold;
    line-height:1.3;
    text-align:left;
    text-shadow:0 2px 6px rgba(0,0,0,0.2);
}
#bai-3 .ct-khung{
    margin-bottom:26px;
    padding:30px;
    background:var(--box-color);
    border:1px solid var(--second-color);
    border-radius:var(--border-radius);
    box-shadow:0 3px 12px rgba(0,0,0,0.05);
    transition:box-shadow 0.25s;
}

#bai-3 .ct-khung:hover{
    box-shadow:0 8px 25px rgba(121,13,22,0.09);
}

#bai-3 .ct-dau-khung{
    display:flex;
    justify-content:space-between;
    align-items:center;
    gap:16px;
    padding-bottom:17px;
    margin-bottom:24px;
    border-bottom:1px solid var(--second-color);
}

#bai-3 .ct-tieu-de{
    display:flex;
    align-items:center;
    gap:12px;
    min-width:0;
}

#bai-3 .ct-tieu-de h2,
#bai-3 .ct-tieu-de h3{
    font-size:20px;
    margin:0;
    color:#201E29;
    line-height:1.35;
}

#bai-3 .ct-dau-khung small{
    color:#8694AA;
    font-size:12px;
    text-align:right;
}

#bai-3 .ct-so{
    display:flex;
    align-items:center;
    justify-content:center;
    width:34px;
    height:36px;
    flex-shrink:0;
    border-radius:var(--border-radius);
    background:var(--main-color);
    color:white;
    font-size:15px;
    font-weight:bold;
}

#bai-3 .ct-so-xanh{
    background:var(--blue-color);
    color:#213246;
}

#bai-3 .ct-dau-phu{
    margin-top:34px;
}

/* form----- */

#bai-3 .ct-luoi{
    display:grid;
    grid-template-columns:repeat(3,minmax(0,1fr));
    gap:20px;
}

#bai-3 .ct-luoi-dia-chi{
    grid-template-columns:repeat(6,minmax(0,1fr));
}

#bai-3 .ct-luoi-dia-chi .ct-truong:nth-child(1),
#bai-3 .ct-luoi-dia-chi .ct-truong:nth-child(2){
    grid-column:span 3;
}

#bai-3 .ct-luoi-dia-chi .ct-truong:nth-child(3){
    grid-column:span 4;
}

#bai-3 .ct-luoi-dia-chi .ct-truong:nth-child(4){
    grid-column:span 2;
}

#bai-3 .ct-truong{
    min-width:0;
    display:flex;
    flex-direction:column;
    gap:8px;
}

#bai-3 .ct-truong label,
#bai-3 .ct-nhom-loai legend{
    font-size:13px;
    letter-spacing:0.6px;
    text-transform:uppercase;
    font-weight:700;
    color:#46516A;
    line-height:1.55;
}

#bai-3 .ct-truong input,
#bai-3 .ct-truong select{
    width:100%;
    height:50px;
    padding:0 16px;
    border:1px solid var(--second-color);
    border-radius:var(--border-radius);
    outline:none;
    background:#FAF7F0;
    color:#253047;
    font-size:15px;
    font-family:inherit;
    transition:background 0.25s,border-color 0.25s,
               box-shadow 0.25s,transform 0.25s;
}

#bai-3 .ct-truong input:hover,
#bai-3 .ct-truong select:hover{
    background:white;
    border-color:#C9AEB2;
}

#bai-3 .ct-truong input:focus,
#bai-3 .ct-truong select:focus{
    background:white;
    border-color:var(--main-color);
    box-shadow:0 0 0 3px rgba(121,13,22,0.1);
}

#bai-3 .ct-truong input::placeholder{
    color:#9B9CAD;
}

#bai-3 .ct-truong select:disabled{
    cursor:not-allowed;
    opacity:0.65;
}

#bai-3 .ct-chon{
    position:relative;
}

#bai-3 .ct-chon select{
    appearance:none;
    -webkit-appearance:none;
    padding-right:42px;
    cursor:pointer;
}

#bai-3 .ct-chon img{
    position:absolute;
    top:50%;
    right:15px;
    transform:translateY(-50%);
    width:15px;
    height:15px;
    object-fit:contain;
    pointer-events:none;
}

#bai-3 .ct-nguon{
    font-size:11px;
    line-height:1.5;
    color:#8894AC;
}


#bai-3 .ct-nhom-loai{
    padding:0;
    margin:0 0 22px;
    border:0;
    min-width:0;
}

#bai-3 .ct-nhom-loai legend{
    margin-bottom:10px;
}

#bai-3 .ct-lua-chon{
    display:grid;
    grid-template-columns:repeat(3,minmax(0,1fr));
    gap:12px;
}

#bai-3 .ct-radio{
    display:flex;
    align-items:center;
    gap:10px;
    min-height:50px;
    padding:10px 13px;
    border:1px solid var(--second-color);
    border-radius:var(--border-radius);
    background:#FAF7F0;
    color:#455069;
    font-size:13px;
    line-height:1.5;
    cursor:pointer;
    transition:0.25s;
}

#bai-3 .ct-radio input{
    accent-color:var(--main-color);
    width:16px;
    height:16px;
    flex-shrink:0;
}

#bai-3 .ct-radio:hover{
    transform:translateY(-2px);
    background:white;
    border-color:var(--main-color);
    box-shadow:0 4px 12px rgba(121,13,22,0.09);
}

#bai-3 .ct-radio:has(input:checked){
    background:#F4ECDE;
    border-color:var(--main-color);
    color:var(--main-color);
    font-weight:600;
}


#bai-3 .ct-cuoi-form{
    display:flex;
    justify-content:space-between;
    align-items:center;
    gap:14px;
    margin-top:28px;
    flex-wrap:wrap;
}

#bai-3 .ct-nhom-nut{
    display:flex;
    gap:12px;
    align-items:center;
    margin-left:auto;
}

#bai-3 .ct-nut-chinh,
#bai-3 .ct-nut-phu,
#bai-3 .ct-thu-lai{
    display:inline-flex;
    align-items:center;
    justify-content:center;
    gap:9px;
    min-height:46px;
    padding:11px 18px;
    border-radius:var(--border-radius);
    font-family:inherit;
    font-weight:700;
    font-size:14px;
    transition:transform 0.25s,box-shadow 0.25s,
               background 0.25s;
}

#bai-3 .ct-nut-chinh{
    border:1px solid var(--main-color);
    background:var(--main-color);
    color:white;
    box-shadow:0 4px 12px rgba(121,13,22,0.16);
}

#bai-3 .ct-nut-phu,
#bai-3 .ct-thu-lai{
    border:1px solid var(--second-color);
    background:white;
    color:var(--main-color);
}

#bai-3 .ct-nut-chinh:hover,
#bai-3 .ct-nut-phu:hover,
#bai-3 .ct-thu-lai:hover{
    transform:translateY(-3px);
    box-shadow:0 6px 16px rgba(121,13,22,0.17);
}


#bai-3 .ct-nut-chinh img{
    width:18px;
    height:18px;
    object-fit:contain;
    filter:brightness(0) invert(1);
}

#bai-3 .ct-thu-lai img{
    width:18px;
    height:18px;
    object-fit:contain;
    filter:brightness(0);
}


#bai-3 .ct-thu-lai{
    margin-top:16px;
}

#bai-3 .ct-thu-lai[hidden]{
    display:none;
}

#bai-3 #ct-thong-bao-form{
    font-size:13px;
    color:var(--main-color);
}

/* DANH SACH HO SO */

#bai-3 .ct-icon-tieu-de{
    width:25px;
    height:25px;
    object-fit:contain;
    flex-shrink:0;
}

#bai-3 .ct-khung-danh-sach .ct-tieu-de p{
    margin-top:4px;
    color:#8590A6;
    font-size:13px;
}

#bai-3 .ct-bang-cuon{
    width:100%;
    overflow-x:auto;
}

#bai-3 .ct-bang{
    width:100%;
    min-width:950px;
    border-collapse:collapse;
    font-size:13px;
    text-align:left;
}

#bai-3 .ct-bang th{
    padding:17px 13px;
    background:var(--bg-color);
    border-top:1px solid var(--second-color);
    border-bottom:1px solid var(--second-color);
    color:var(--main-color);
    text-transform:uppercase;
    font-size:12px;
}

#bai-3 .ct-bang td{
    padding:18px 13px;
    border-bottom:1px solid #EDE6DA;
    vertical-align:middle;
    max-width:255px;
}

#bai-3 .ct-bang tbody tr{
    transition:background 0.25s;
}

#bai-3 .ct-bang tbody tr:hover{
    background:#FCF7ED;
}

#bai-3 .ct-bang .ct-ma{
    color:var(--main-color);
    font-weight:700;
    white-space:nowrap;
}

#bai-3 .ct-bang .ct-nguoi strong{
    display:block;
    color:#252535;
    margin-bottom:6px;
    font-size:14px;
}

#bai-3 .ct-bang .ct-nguoi small{
    display:block;
    color:#8A95A9;
    font-size:12px;
}

#bai-3 .ct-bang .ct-dia-chi{
    max-width:235px;
    white-space:nowrap;
    overflow:hidden;
    text-overflow:ellipsis;
}

#bai-3 .ct-bang .ct-thoi-gian{
    color:#8490A5;
    white-space:nowrap;
}

#bai-3 .ct-the-loai{
    display:inline-block;
    padding:7px 10px;
    background:#F3EDDF;
    color:var(--main-color);
    border-radius:10px;
    white-space:nowrap;
}

#bai-3 .ct-trang-thai{
    display:inline-block;
    padding:7px 10px;
    border-radius:10px;
    background:#EAF0F1;
    color:#375B54;
    font-weight:600;
    white-space:nowrap;
}

#bai-3 .ct-thao-tac{
    display:flex;
    gap:8px;
    justify-content:flex-end;
}

#bai-3 .ct-thao-tac button{
    width:36px;
    height:36px;
    display:flex;
    align-items:center;
    justify-content:center;
    padding:7px;
    background:#F6F0E4;
    border:0;
    border-radius:var(--border-radius);
    transition:0.25s;
}

#bai-3 .ct-thao-tac button:hover{
    background:#E9D8C2;
    transform:translateY(-3px);
    box-shadow:0 4px 10px rgba(0,0,0,0.1);
}

#bai-3 .ct-thao-tac img{
    width:20px;
    height:20px;
    object-fit:contain;
    
}

#bai-3 .ct-trong{
    text-align:center;
    padding:28px 10px!important;
    color:#8992A4;
}

#bai-3 .ct-ghi-chu{
    font-size:12px;
    color:#9198A6;
    margin-top:17px;
}


#bai-3 .ct-modal{
    position:fixed;
    inset:0;
    z-index:3000;
    display:flex;
    justify-content:center;
    align-items:center;
    padding:18px;
    background:rgba(29,30,44,0.64);
    backdrop-filter:blur(6px);
    -webkit-backdrop-filter:blur(6px);
}

#bai-3 .ct-modal[hidden]{
    display:none;
}

body.ct-khoa-cuon{
    overflow:hidden;
}

#bai-3 .ct-hop-modal{
    position:relative;
    width:100%;
    max-width:560px;
    max-height:92vh;
    overflow-y:auto;
    padding:32px 28px 23px;
    background:white;
    border:1px solid var(--second-color);
    border-radius:var(--border-radius);
    box-shadow:0 16px 50px rgba(0,0,0,0.25);
}

#bai-3 .ct-nut-dong{
    position:absolute;
    top:14px;
    right:15px;
    display:flex;
    align-items:center;
    justify-content:center;
    width:30px;
    height:30px;
    padding:6px;
    background:#F7F4EE;
    border:0;
    border-radius:10px;
    transition:0.25s;
}

#bai-3 .ct-nut-dong:hover{
    transform:rotate(90deg);
    background:#F0E2DA;
}

#bai-3 .ct-nut-dong img{
    width:16px;
    height:16px;
    object-fit:contain;
}

#bai-3 .ct-modal-cuoi{
    display:flex;
    justify-content:flex-end;
    margin-top:20px;
}

#bai-3 .ct-modal-kieu{
    padding:0 20px;
    text-align:center;
    font-size:12px;
    color:#8090A4;
    font-weight:700;
    letter-spacing:0.4px;
}

#bai-3 .ct-modal-tieu-de{
    margin:10px 0;
    color:#202537;
    text-align:center;
    font-size:20px;
    line-height:1.4;
}

#bai-3 .ct-modal-phu{
    font-size:12px;
    text-align:center;
    color:var(--main-color);
    margin-bottom:18px;
}

/* thẻ mô phỏng */

#bai-3 .ct-the-giay{
    margin-top:12px;
    padding:20px;
    border:1px solid #D1C379;
    border-radius:var(--border-radius);
    background:linear-gradient(120deg,#FFF6D3,#E0EDF8,#EFF0FA);
}

#bai-3 .ct-the-giay h4{
    text-align:center;
    color:#344B88;
    font-size:15px;
    letter-spacing:1px;
    margin-bottom:18px;
}

#bai-3 .ct-the-noi-dung{
    display:flex;
    gap:15px;
    align-items:flex-start;
}

#bai-3 .ct-anh-giay{
    flex:0 0 90px;
    height:116px;
    background:#E9EDF2;
    border:1px solid #D4DBE7;
    border-radius:10px;
    display:flex;
    align-items:center;
    justify-content:center;
    color:#9EAABA;
    font-weight:700;
    font-size:12px;
    text-align:center;
}

#bai-3 .ct-the-thong-tin{
    min-width:0;
    flex:1;
    font-size:12px;
    line-height:1.6;
    overflow-wrap:anywhere;
}

#bai-3 .ct-the-thong-tin strong{
    color:#1F304D;
}

#bai-3 .ct-the-thong-tin p{
    margin-bottom:7px;
    line-height:1.5;
}

#bai-3 .ct-phieu-hang{
    display:flex;
    justify-content:space-between;
    align-items:flex-start;
    gap:16px;
    padding:11px 0;
    border-bottom:1px solid #EDF0F4;
    font-size:13px;
}

#bai-3 .ct-phieu-hang span{
    color:#8992A8;
    flex-shrink:0;
}

#bai-3 .ct-phieu-hang strong{
    text-align:right;
    overflow-wrap:anywhere;
    color:#273044;
}

#bai-3 .ct-phieu-hang.ct-hang-dia-chi{
    display:block;
}

#bai-3 .ct-phieu-hang.ct-hang-dia-chi strong{
    display:block;
    text-align:left;
    margin-top:8px;
}

#bai-3 .ct-phan-biet{
    font-size:11px;
    color:#9A7780;
    text-align:center;
    margin-top:16px;
}

/*-------------------------------------kết thúc đăng kí------------------------------*/
/* bài 4 dự báo thời tiết----------------------------------------------------------------------------------*/

body.dang-xem-thoi-tiet #trang-bai{
    width:100%;
    max-width:none;
    margin:0;
    position:relative;
}

#bai-4{
    --tt-chu:#FFFFFF;
    --tt-phu:#DDE8FA;
    --tt-kinh:rgba(78,104,157,0.28);
    --tt-vien:rgba(207,223,255,0.28);

    position:relative;
    isolation:isolate;
    overflow:hidden;
    width:100%;
    min-height:100vh;
    padding:88px 4% 50px;

    border:0;
    border-radius:0;
    box-shadow:none;

    font-family:var(--font-body);
    color:var(--tt-chu);
    background-color:#101F41;
    background-image:
        linear-gradient(145deg,rgba(10,23,49,.86),rgba(28,50,98,.72)),
        url("image/tt-dem.jpg");
    background-size:cover;
    background-position:center;
}

#bai-4.tt-nang{
    --tt-chu:#203751;
    --tt-phu:#405771;
    --tt-kinh:rgba(255,255,255,.52);
    --tt-vien:rgba(255,255,255,.76);

    background-color:#A8D4EA;
    background-image:
        linear-gradient(155deg,rgba(182,222,243,.50),rgba(248,235,201,.62)),
        url("image/tt-nang.jpg");
}

#bai-4.tt-may{
    background-color:#304D78;
    background-image:
        linear-gradient(140deg,rgba(25,47,80,.74),rgba(70,91,137,.56)),
        url("image/tt-may.jpg");
}

#bai-4.tt-mua{
    background-color:#293C58;
    background-image:
        linear-gradient(140deg,rgba(18,31,56,.82),rgba(52,76,105,.68)),
        url("image/tt-mua.jpg");
}

#bai-4.tt-dem{
    background-color:#101F41;
    background-image:
        linear-gradient(145deg,rgba(10, 23, 49, 0.681),rgba(28,50,98,.72)),
        url("image/tt-dem.jpg");
}

#bai-4 .tt-hieu-ung-mua{
    position:absolute;
    inset:0;
    z-index:0;
    pointer-events:none;
    opacity:0;
    overflow:hidden;
    transition:opacity .7s ease;
}

#bai-4.tt-co-mua .tt-hieu-ung-mua{
    opacity:1;
}

#bai-4 .tt-hieu-ung-mua::before,
#bai-4 .tt-hieu-ung-mua::after{
    content:"";
    position:absolute;
    top:0;
    left:0;
    border-radius:2px;
    pointer-events:none;
    will-change:transform;
}

#bai-4 .tt-hieu-ung-mua::before{
    width:1px;
    height:13px;
    background:rgba(224,240,255,.25);
    box-shadow:
        32.26vw 54.52vh 0 0 rgba(224,240,255,0.15),
        57.30vw 91.75vh 0 0 rgba(224,240,255,0.20),
        59.51vw 26.14vh 0 0 rgba(224,240,255,0.23),
        68.26vw 174.63vh 0 0 rgba(224,240,255,0.20),
        44.72vw 85.22vh 0 0 rgba(224,240,255,0.14),
        27.84vw 174.22vh 0 0 rgba(224,240,255,0.14),
        98.91vw 156.88vh 0 0 rgba(224,240,255,0.20),
        78.58vw 184.03vh 0 0 rgba(224,240,255,0.28),
        75.14vw 38.48vh 0 0 rgba(224,240,255,0.30),
        84.77vw 193.63vh 0 0 rgba(224,240,255,0.20),
        15.71vw 173.80vh 0 0 rgba(224,240,255,0.19),
        73.22vw 104.66vh 0 0 rgba(224,240,255,0.19),
        85.08vw 187.53vh 0 0 rgba(224,240,255,0.24),
        82.41vw 114.73vh 0 0 rgba(224,240,255,0.27),
        98.70vw 31.62vh 0 0 rgba(224,240,255,0.20),
        24.52vw 203.76vh 0 0 rgba(224,240,255,0.16),
        47.65vw 92.57vh 0 0 rgba(224,240,255,0.24),
        36.45vw 5.70vh 0 0 rgba(224,240,255,0.22),
        49.90vw 74.50vh 0 0 rgba(224,240,255,0.20),
        66.62vw 199.67vh 0 0 rgba(224,240,255,0.22),
        89.76vw 200.97vh 0 0 rgba(224,240,255,0.23),
        83.44vw 27.71vh 0 0 rgba(224,240,255,0.21),
        98.41vw 14.70vh 0 0 rgba(224,240,255,0.19),
        15.98vw 94.97vh 0 0 rgba(224,240,255,0.18),
        31.37vw 55.27vh 0 0 rgba(224,240,255,0.14),
        53.01vw 184.34vh 0 0 rgba(224,240,255,0.27),
        54.58vw 169.02vh 0 0 rgba(224,240,255,0.20),
        76.72vw 7.90vh 0 0 rgba(224,240,255,0.27),
        13.60vw 176.62vh 0 0 rgba(224,240,255,0.19),
        50.15vw 21.81vh 0 0 rgba(224,240,255,0.25),
        48.26vw 168.48vh 0 0 rgba(224,240,255,0.16),
        69.66vw 62.83vh 0 0 rgba(224,240,255,0.15),
        25.09vw 110.60vh 0 0 rgba(224,240,255,0.24),
        64.06vw 84.26vh 0 0 rgba(224,240,255,0.29),
        40.22vw 103.08vh 0 0 rgba(224,240,255,0.26),
        54.45vw 156.52vh 0 0 rgba(224,240,255,0.15),
        66.83vw 174.83vh 0 0 rgba(224,240,255,0.20),
        94.54vw 200.55vh 0 0 rgba(224,240,255,0.19),
        97.68vw 155.59vh 0 0 rgba(224,240,255,0.23),
        91.24vw 58.86vh 0 0 rgba(224,240,255,0.16),
        36.77vw 98.80vh 0 0 rgba(224,240,255,0.17),
        54.36vw 43.07vh 0 0 rgba(224,240,255,0.25),
        8.35vw 59.01vh 0 0 rgba(224,240,255,0.24),
        36.27vw 45.61vh 0 0 rgba(224,240,255,0.31),
        68.02vw 51.75vh 0 0 rgba(224,240,255,0.22),
        33.08vw 137.40vh 0 0 rgba(224,240,255,0.24),
        40.72vw 6.78vh 0 0 rgba(224,240,255,0.28),
        75.81vw 110.27vh 0 0 rgba(224,240,255,0.18),
        17.81vw 51.78vh 0 0 rgba(224,240,255,0.24),
        4.97vw 151.60vh 0 0 rgba(224,240,255,0.22),
        44.45vw 119.03vh 0 0 rgba(224,240,255,0.26),
        55.67vw 86.81vh 0 0 rgba(224,240,255,0.21),
        75.23vw 81.09vh 0 0 rgba(224,240,255,0.30),
        70.05vw 134.97vh 0 0 rgba(224,240,255,0.19),
        8.29vw 59.68vh 0 0 rgba(224,240,255,0.29),
        61.46vw 199.08vh 0 0 rgba(224,240,255,0.26),
        65.59vw 79.24vh 0 0 rgba(224,240,255,0.31),
        7.43vw 68.90vh 0 0 rgba(224,240,255,0.31),
        54.34vw 109.88vh 0 0 rgba(224,240,255,0.31),
        70.18vw 131.20vh 0 0 rgba(224,240,255,0.27),
        77.31vw 86.37vh 0 0 rgba(224,240,255,0.19),
        6.78vw 62.61vh 0 0 rgba(224,240,255,0.24),
        78.24vw 77.97vh 0 0 rgba(224,240,255,0.17),
        60.55vw 139.47vh 0 0 rgba(224,240,255,0.23),
        3.53vw 58.38vh 0 0 rgba(224,240,255,0.13),
        97.18vw 55.62vh 0 0 rgba(224,240,255,0.26),
        70.34vw 13.20vh 0 0 rgba(224,240,255,0.22),
        93.82vw 152.12vh 0 0 rgba(224,240,255,0.15),
        38.04vw 171.30vh 0 0 rgba(224,240,255,0.25),
        11.84vw 177.38vh 0 0 rgba(224,240,255,0.30),
        28.73vw 87.67vh 0 0 rgba(224,240,255,0.31),
        69.49vw 115.51vh 0 0 rgba(224,240,255,0.20),
        49.49vw 126.33vh 0 0 rgba(224,240,255,0.15),
        83.35vw 9.12vh 0 0 rgba(224,240,255,0.22),
        8.98vw 90.35vh 0 0 rgba(224,240,255,0.30),
        32.95vw 101.91vh 0 0 rgba(224,240,255,0.19),
        80.87vw 151.95vh 0 0 rgba(224,240,255,0.21),
        55.12vw 158.01vh 0 0 rgba(224,240,255,0.26),
        80.67vw 61.35vh 0 0 rgba(224,240,255,0.19),
        96.19vw 117.05vh 0 0 rgba(224,240,255,0.26);
    filter:blur(.45px);
    animation:ttMuaXa 1.75s linear infinite;
}

#bai-4 .tt-hieu-ung-mua::after{
    width:1.5px;
    height:23px;
    background:rgba(224,240,255,.4);
    box-shadow:
        97.92vw 54.23vh 0 0 rgba(224,240,255,0.34),
        54.00vw 100.67vh 0 0 rgba(224,240,255,0.32),
        68.66vw 166.49vh 0 0 rgba(224,240,255,0.46),
        29.34vw 85.14vh 0 0 rgba(224,240,255,0.25),
        16.75vw 116.91vh 0 0 rgba(224,240,255,0.28),
        55.24vw 120.46vh 0 0 rgba(224,240,255,0.39),
        13.40vw 174.96vh 0 0 rgba(224,240,255,0.29),
        59.45vw 103.26vh 0 0 rgba(224,240,255,0.43),
        5.56vw 111.05vh 0 0 rgba(224,240,255,0.42),
        42.31vw 146.47vh 0 0 rgba(224,240,255,0.38),
        74.63vw 125.45vh 0 0 rgba(224,240,255,0.29),
        45.80vw 163.95vh 0 0 rgba(224,240,255,0.36),
        72.63vw 7.85vh 0 0 rgba(224,240,255,0.34),
        41.21vw 94.76vh 0 0 rgba(224,240,255,0.46),
        67.19vw 148.21vh 0 0 rgba(224,240,255,0.27),
        18.03vw 198.13vh 0 0 rgba(224,240,255,0.40),
        76.71vw 193.93vh 0 0 rgba(224,240,255,0.27),
        99.16vw 16.44vh 0 0 rgba(224,240,255,0.45),
        30.51vw 154.40vh 0 0 rgba(224,240,255,0.25),
        30.23vw 16.75vh 0 0 rgba(224,240,255,0.41),
        92.31vw 122.36vh 0 0 rgba(224,240,255,0.40),
        30.69vw 134.02vh 0 0 rgba(224,240,255,0.40),
        80.73vw 113.44vh 0 0 rgba(224,240,255,0.43),
        94.37vw 200.20vh 0 0 rgba(224,240,255,0.27),
        63.33vw 172.16vh 0 0 rgba(224,240,255,0.24),
        28.77vw 142.97vh 0 0 rgba(224,240,255,0.27),
        15.18vw 187.40vh 0 0 rgba(224,240,255,0.28),
        30.49vw 82.13vh 0 0 rgba(224,240,255,0.33),
        46.24vw 58.32vh 0 0 rgba(224,240,255,0.45),
        43.14vw 142.16vh 0 0 rgba(224,240,255,0.26),
        11.31vw 114.92vh 0 0 rgba(224,240,255,0.34),
        71.45vw 163.43vh 0 0 rgba(224,240,255,0.25),
        78.49vw 198.88vh 0 0 rgba(224,240,255,0.26),
        8.95vw 199.59vh 0 0 rgba(224,240,255,0.30),
        95.53vw 87.07vh 0 0 rgba(224,240,255,0.36),
        30.17vw 88.34vh 0 0 rgba(224,240,255,0.41),
        6.61vw 120.54vh 0 0 rgba(224,240,255,0.43),
        39.70vw 195.29vh 0 0 rgba(224,240,255,0.26),
        94.24vw 4.46vh 0 0 rgba(224,240,255,0.28),
        3.60vw 101.75vh 0 0 rgba(224,240,255,0.43),
        36.26vw 184.41vh 0 0 rgba(224,240,255,0.25),
        35.49vw 137.23vh 0 0 rgba(224,240,255,0.40),
        41.40vw 146.26vh 0 0 rgba(224,240,255,0.37);
    filter:blur(.3px);
    animation:ttMuaGan 1.1s linear infinite;
}

@keyframes ttMuaXa{
    from{transform:translate3d(35px,-100vh,0) rotate(8deg);}
    to{transform:translate3d(-35px,0,0) rotate(8deg);}
}

@keyframes ttMuaGan{
    from{transform:translate3d(55px,-100vh,0) rotate(12deg);}
    to{transform:translate3d(-55px,0,0) rotate(12deg);}
}

@media(prefers-reduced-motion:reduce){
    #bai-4 .tt-hieu-ung-mua::before,
    #bai-4 .tt-hieu-ung-mua::after{
        animation:none;
        opacity:0;
    }
}

#bai-4 .tt-noi-dung{
    max-width:none;
    width:100%;
    margin:auto;
    position:relative;
    z-index:1;
}

#bai-4 [hidden]{
    display:none!important;
}

#bai-4 .tt-tieu-de{
    text-align:center;
    margin:0 auto 20px;
}

#bai-4 .tt-tieu-de h2{
    color:var(--tt-chu);
    font-family:var(--font-heading);
    font-size:clamp(28px,3.5vw,36px);
    margin:0 0 7px;
}

#bai-4 .tt-tieu-de p{
    color:var(--tt-phu);
    font-size:14px;
}

#bai-4 .tt-thanh-tim{
    display:grid;
    grid-template-columns:minmax(0,1fr) 170px;
    gap:12px;
    max-width:900px;
    margin:0 auto;
}

#bai-4 .tt-o-tim{
    height:52px;
    display:flex;
    align-items:center;
    gap:12px;
    min-width:0;
    padding:0 15px;
    border:1px solid var(--tt-vien);
    border-radius:var(--border-radius);
    background:var(--tt-kinh);
    backdrop-filter:blur(12px);
}

#bai-4 .tt-o-tim:focus-within{
    border-color:#D5E5FF;
    box-shadow:0 0 0 3px rgba(182,206,255,.18);
}

#bai-4 .tt-o-tim img{
    width:21px;
    height:21px;
    object-fit:contain;
    filter:brightness(0) invert(1);
}

#bai-4.tt-nang .tt-o-tim img{
    filter:brightness(0);
}

#bai-4 .tt-o-tim input{
    width:100%;
    min-width:0;
    height:100%;
    border:0;
    outline:0;
    background:none;
    color:var(--tt-chu);
    font-family:var(--font-body);
    font-size:15px;
}

#bai-4 .tt-o-tim input::placeholder{
    color:var(--tt-phu);
}

#bai-4 .tt-o-tim input::-webkit-search-cancel-button{
    cursor:pointer;
}

#bai-4 #tt-nut-xem{
    display:flex;
    align-items:center;
    justify-content:center;
    gap:9px;
    height:52px;
    padding:0 14px;
    color:#FFFFFF;
    border:0;
    border-radius:var(--border-radius);
    background:linear-gradient(120deg,#767BDA,#6456CC);
    font-weight:700;
    font-size:14px;
    white-space:nowrap;
    transition:.25s;
}

#bai-4 #tt-nut-xem img{
    width:20px;
    height:20px;
    object-fit:contain;
    filter:brightness(0) invert(1);
}

#bai-4 #tt-nut-xem:hover:not(:disabled){
    transform:translateY(-3px);
    box-shadow:0 8px 20px rgba(18,21,72,.3);
}

#bai-4 #tt-nut-xem:disabled{
    opacity:.65;
    cursor:wait;
}

#bai-4 .tt-goi-y{
    display:flex;
    justify-content:center;
    align-items:center;
    flex-wrap:wrap;
    gap:8px;
    margin:13px auto 0;
    font-size:12px;
    color:var(--tt-phu);
}

#bai-4 .tt-goi-y button{
    padding:8px 14px;
    color:var(--tt-chu);
    font-size:13px;
    border:1px solid var(--tt-vien);
    border-radius:var(--border-radius);
    background:var(--tt-kinh);
    transition:.2s;
}

#bai-4 .tt-goi-y button:hover{
    transform:translateY(-2px);
    border-color:var(--tt-chu);
}

#bai-4 .tt-vung-dia-diem{
    max-width:820px;
    margin:14px auto 0;
    font-size:13px;
}

#bai-4 .tt-vung-dia-diem label{
    display:block;
    margin-bottom:7px;
    color:var(--tt-phu);
}

#bai-4 .tt-vung-dia-diem select{
    width:100%;
    min-height:43px;
    padding:8px 12px;
    border:1px solid var(--tt-vien);
    border-radius:var(--border-radius);
    color:var(--tt-chu);
    background:rgba(38,56,100,.72);
    font:inherit;
}

#bai-4 .tt-vung-dia-diem select option{
    background:#243456;
    color:white;
}

#bai-4.tt-nang .tt-vung-dia-diem select{
    background:rgba(255,255,255,.78);
    color:#243456;
}

#bai-4 .tt-thong-bao{
    text-align:center;
    color:var(--tt-phu);
    margin:12px auto 20px;
    min-height:22px;
    font-size:12px;
}

#bai-4 .tt-thong-bao.tt-loi{
    max-width:820px;
    border:1px solid rgba(255,210,210,.55);
    background:rgba(121,13,22,.7);
    color:white;
    border-radius:var(--border-radius);
    padding:9px 12px;
}

#bai-4 .tt-kinh{
    border:1px solid var(--tt-vien);
    border-radius:var(--border-radius);
    background:var(--tt-kinh);
    backdrop-filter:blur(13px);
    -webkit-backdrop-filter:blur(13px);
    box-shadow:0 10px 27px rgba(10,21,46,.16);
}

#bai-4 .tt-hang-tren{
    display:grid;
    grid-template-columns:minmax(0,1.4fr) minmax(0,1fr);
    gap:16px;
    margin-bottom:16px;
}

#bai-4 .tt-thoi-tiet-hien-tai{
    min-height:255px;
    display:flex;
    flex-direction:column;
    align-items:center;
    justify-content:center;
    text-align:center;
    padding:24px 18px;
    background-image:linear-gradient(
        145deg,rgba(137,162,227,.16),transparent
    );
}

#bai-4 .tt-ten-dia-diem{
    display:flex;
    align-items:center;
    justify-content:center;
    gap:7px;
}

#bai-4 .tt-ten-dia-diem img{
    width:18px;
    height:18px;
    object-fit:contain;
    filter:brightness(0) invert(1);
}

#bai-4.tt-nang .tt-ten-dia-diem img{
    filter:brightness(0);
}

#bai-4 .tt-ten-dia-diem h3{
    margin:0;
    color:var(--tt-chu);
    font-family:var(--font-body);
    font-size:17px;
    font-weight:700;
}

#bai-4 .tt-cap-nhat{
    color:var(--tt-phu);
    font-size:11px;
    margin-top:5px;
}

#bai-4 .tt-nhiet-do{
    display:flex;
    align-items:flex-start;
    justify-content:center;
    margin:8px 0 3px;
    line-height:1;
}

#bai-4 .tt-nhiet-do strong{
    font-size:clamp(55px,7vw,76px);
    font-weight:400;
    letter-spacing:-2px;
    color:var(--tt-chu);
}

#bai-4 .tt-nhiet-do span{
    font-size:27px;
    margin-top:8px;
}

#bai-4 .tt-trang-thai{
    display:flex;
    align-items:center;
    justify-content:center;
    gap:10px;
}

#bai-4 .tt-trang-thai img{
    width:39px;
    height:39px;
    object-fit:contain;
}

#bai-4 .tt-trang-thai strong{
    font-size:16px;
}

#bai-4 .tt-cao-thap{
    font-size:12px;
    color:var(--tt-phu);
    margin-top:6px;
}



#bai-4 .tt-thong-so{
    display:grid;
    grid-template-columns:repeat(2,minmax(0,1fr));
    grid-template-rows:repeat(2,minmax(0,1fr));
    gap:14px;
    min-height:255px;
    padding:0;
}



 
#bai-4 .tt-o-thong-so{
    display:grid;
    grid-template-columns:40px minmax(0,1fr);
    align-items:center;
    column-gap:12px;
    min-width:0;
    padding:18px 16px;
    text-align:left;
    transition:transform .3s ease, box-shadow .3s ease;
}

#bai-4 .tt-o-thong-so > div{
    display:flex;
    flex-direction:column;
    align-items:flex-start;
    justify-content:center;
    gap:4px;
    min-width:0;
}

#bai-4 .tt-o-thong-so img{
    width:40px;
    height:40px;
    padding:7px;
    object-fit:contain;
    border-radius:50%;
    background:rgba(215,224,255,.14);
}

#bai-4 .tt-o-thong-so span{
    display:block;
    font-size:13px;
    color:var(--tt-phu);
    line-height:1.4;
}

#bai-4 .tt-o-thong-so strong{
    display:block;
    font-size:21px;
    font-weight:700;
    color:var(--tt-chu);
    line-height:1.3;
    white-space:nowrap;
}

#bai-4 .tt-o-thong-so:hover{
    transform:translateY(-4px);
    box-shadow:0 12px 25px rgba(10,21,46,.22);
}


#bai-4 .tt-hang-duoi{
    display:grid;
    grid-template-columns:repeat(2,minmax(0,1fr));
    gap:16px;
    width:100%;
}

#bai-4 .tt-du-bao-gio,
#bai-4 .tt-du-bao-ngay{
    padding:20px;
    min-width:0;
}

#bai-4 .tt-hang-duoi h3{
    color:var(--tt-chu);
    font-family:var(--font-body);
    font-size:16px;
    margin:0 0 16px;
}


#bai-4 .tt-danh-sach-gio{
    display:grid;
    grid-template-columns:repeat(8,minmax(0,1fr));
    gap:8px;
    width:100%;
    overflow-x:visible;
    padding-bottom:7px;
}


#bai-4 .tt-the-gio{
    display:flex;
    flex-direction:column;
    align-items:center;
    gap:14px;
    min-width:0;
    font-size:12px;
}

#bai-4 .tt-the-gio img{
    width:35px;
    height:35px;
    object-fit:contain;
}

#bai-4 .tt-the-gio strong{
    font-size:14px;
    color:var(--tt-chu);
}


#bai-4 .tt-danh-sach-ngay{
    display:grid;
    grid-template-columns:repeat(5,minmax(0,1fr));
    gap:7px;
    width:100%;
    overflow-x:visible;
    padding-bottom:7px;
}


#bai-4 .tt-the-ngay{
    display:flex;
    flex-direction:column;
    align-items:center;
    justify-content:center;
    gap:7px;
    padding:12px 6px;
    min-width:0;
    border:1px solid rgba(200,215,255,.12);
    border-radius:var(--border-radius);
    background:rgba(184,202,247,.10);
    text-align:center;
    font-size:12px;
}

#bai-4 .tt-the-ngay strong{
    color:var(--tt-chu);
    font-size:13px;
}

#bai-4 .tt-the-ngay span{
    color:var(--tt-phu);
    white-space:nowrap;
}

#bai-4 .tt-the-ngay img{
    width:35px;
    height:35px;
    object-fit:contain;
}

#bai-4 .tt-nguon{
    text-align:center;
    color:var(--tt-phu);
    font-size:11px;
    margin-top:22px;
}

/*-------------------------------------kết thúc đăng kí------------------------------*/


#nut-quay-ve{
    position:fixed;
    top:120px;
    left:20px;
    z-index:900;

    width:50px;
    height:45px;
    padding:10px;

    display:flex;
    align-items:center;
    justify-content:center;

    background:#f5f5f397;
    border:1px solid var(--second-color);
    border-radius:20px;

    box-shadow:0 5px 15px rgba(0,0,0,0.12);
    cursor:pointer;
    transition:0.3s ease;
}

#nut-quay-ve img{
    width:100%;
    height:100%;
    display:block;
    object-fit:contain;
    filter:brightness(0);
}

#nut-quay-ve:hover{
    background:var(--second-color);
    transform:translateX(-4px) scale(1.05);
    box-shadow:0 8px 20px rgba(121,13,22,0.18);
}

#nut-quay-ve:active{
    transform:scale(0.95);
}

#nut-quay-ve:focus-visible{
    outline:3px solid var(--main-color);
    outline-offset:3px;
}



/* nút top -----------------------------//-------------------------*/



#nut-top{
    position:fixed;
    right:25px;
    bottom:25px;
    width:50px;
    height:50px;
    display:flex;
    align-items:center;
    justify-content:center;
    padding:0;
    border:none;
    border-radius:50%;
    background:var(--blue-color);
    box-shadow:0 4px 12px rgba(0,0,0,0.2);
    cursor:pointer;
    z-index:1000;

    opacity:0;
    visibility:hidden;
    pointer-events:none;
    transform:translateY(15px) scale(0.9);
    transition:all 0.3s ease;
}

#nut-top img{
    width:45%;
    height:45%;
    object-fit:contain;
    display:block;
    filter: grayscale(1) invert(1)
}

#nut-top.hien{
    opacity:1;
    visibility:visible;
    pointer-events:auto;
    transform:translateY(0) scale(1);
}

#nut-top.hien:hover{
    background:#344d7f;
    box-shadow:0 10px 25px rgba(0,0,0,0.35);
    transform:translateY(-7px) scale(1.08);
}


/*======================================//====================================================*/

@media(min-width:801px) and (max-width:1100px){

    body.trang-chu .sv-box{
        grid-template-columns:130px minmax(0,1fr);
    }

    body.trang-chu .hero-code-panel{
        display:none;
    }

    #bai-2 .db-thanh-cong-cu{
        grid-template-columns:repeat(2,minmax(0,1fr));
    }

    #bai-2 .db-o-tim,
    #bai-2 #db-lay-moi{
        grid-column:1/-1;
    }

    #bai-2 .db-danh-sach{
        grid-template-columns:repeat(3,minmax(0,1fr));
    }

    #bai-3 .ct-luoi{
        grid-template-columns:repeat(2,minmax(0,1fr));
    }

    #bai-3 .ct-luoi-dia-chi{
        grid-template-columns:repeat(2,minmax(0,1fr));
    }

    #bai-3 .ct-luoi-dia-chi .ct-truong:nth-child(n){
        grid-column:auto;
    }
    #bai-4 .tt-hang-duoi{
    grid-template-columns:1fr;
    }
}


@media(max-width:800px){
    .header-content{
        padding:15px;
    }

    .logo h3{
        font-size:15px;
    }

    .gioi-thieu h1{
        font-size:30px;
    }

    .the-bai.trai,
    .the-bai.phai{
        opacity:0;
        pointer-events:none;
    }

    .nut-trai{
        left:10px;
    }

    .nut-phai{
        right:10px;
    }
    
    
    body.trang-chu .header-content{
        width:94%;
        min-height:74px;
        padding:12px 0;
        gap:12px;
    }
    body.trang-chu .logo h3{
        font-size:16px;
    }

    body.trang-chu .thong-tin-sv{
        min-height:0;
        padding:115px 4% 85px;
    }

    body.trang-chu .sv-box{
        display:grid;
        grid-template-columns:110px minmax(0,1fr);
        align-items:start;
        gap:20px;
    }

    body.trang-chu .avatar-sv{
        width:110px;
        height:110px;
    }

    body.trang-chu .avatar-sv img{
        width:103px;
        height:103px;
    }

    body.trang-chu .sv-info{
        width:100%;
        min-width:0;
    }

    body.trang-chu .sv-info h1{
        font-size:32px;
    }

    body.trang-chu .sv-info .hero-nganh{
        font-size:15px;
    }

    body.trang-chu .hero-code-panel{
        display:none;
    }

    body.trang-chu .hero-thong-tin-them{
        width:100%;
        max-width:none;
        margin-top:16px;
        padding:20px;
    }

    body.trang-chu .hero-thong-tin-them h2{
        font-size:21px;
    }

    body.trang-chu .hero-ho-so-grid{
        grid-template-columns:1fr;
        gap:15px;
    }

    body.trang-chu .hero-ho-so-cot{
        gap:13px;
    }

    body.trang-chu .hero-ho-so-cot p{
        font-size:14px;
        line-height:1.6;
    }

    body.trang-chu #trang-chu{
        margin-top:-25px;
        padding-top:45px;
    }

    #bai-1 .cung-khung{
        padding:25px;
    }

    #bai-1 .cung-luoi{
        grid-template-columns:repeat(2,minmax(0,1fr));
    }
    #bai-1 .dau-nguyen-to h3{
        font-size:24px;
    }

    #bai-1 .the-nguyen-to{
        padding:22px;
    }
    
    #bai-1 .media-chi-tiet{
        width:150px;
        height:150px;
        border-radius:50%;
        overflow:hidden;
        border:2px solid var(--vang);
        flex-shrink:0;
    }

    #bai-1 .media-chi-tiet img,
    #bai-1 .media-chi-tiet video{
        width:100%;
        height:100%;
        display:block;
        object-fit:cover;
        border-radius:50%;
    }
    body.dang-xem-danh-ba #bai-2{
        padding:85px 3% 40px;
    }

    #bai-2 .db-thanh-cong-cu{
        grid-template-columns:repeat(2,minmax(0,1fr));
    }

    #bai-2 .db-o-tim,
    #bai-2 #db-lay-moi{
        grid-column:1/-1;
    }

    #bai-2 .db-danh-sach{
        grid-template-columns:repeat(2,minmax(0,1fr));
    }
        #bai-3 .ct-luoi{
        grid-template-columns:repeat(2,minmax(0,1fr));
    }

    #bai-3 .ct-luoi-dia-chi{
        grid-template-columns:repeat(2,minmax(0,1fr));
    }


    #bai-3 .ct-luoi-dia-chi .ct-truong:nth-child(n){
        grid-column:auto;
    }

    #bai-3 .ct-lua-chon{
        grid-template-columns:1fr;
    }

    #bai-3 .ct-khung{
        padding:24px 20px;
    }

    #bai-3 .ct-tieu-de h2,
    #bai-3 .ct-tieu-de h3{
        font-size:18px;
    }

    #nut-quay-ve{
    width:50px;
    height:45px;
    padding:14px;
    top:105px;
    left:14px;
    border-radius:18px;
    }
    #bai-4{
        padding:85px 3% 45px;
    }

    #bai-4 .tt-hang-tren,
    #bai-4 .tt-hang-duoi{
        grid-template-columns:1fr;
    }

    #bai-4 .tt-thong-so{
        gap:8px;
        grid-template-columns:repeat(2,minmax(0,1fr));
    }

    #bai-4 .tt-thoi-tiet-hien-tai{
        min-height:230px;
    }
    
    #bai-4 .tt-danh-sach-gio{
        grid-template-columns:repeat(8,minmax(62px,1fr));
        overflow-x:auto;
    }

    #bai-4 .tt-danh-sach-ngay{
        grid-template-columns:repeat(5,minmax(75px,1fr));
        overflow-x:auto;
    }


}


/*===================================//------------------------*/


@media(max-width:500px) {
    .header-content{
        max-width:none;
        margin:0;
        padding:15px 20px;
        display:flex;
        align-items:center;
        justify-content:flex-start;
        gap:15px;
    }

    .logo h3{
        font-size:13px;
    }


    .avatar-sv{
        width:75px;
        height:75px;
    }

    .thong-tin-sv{
    width:95%;
    padding:25px 20px;
    }

    .sv-box{
        flex-direction:column;
        align-items:flex-start;
        gap:15px;
    }

    .avatar-sv{
        width:90px;
        height:90px;
    }

    .sv-info p{
        font-size:14px;
    }
    #trang-chu{
        padding:35px 0px;
    }

    .gioi-thieu h1{
        font-size:25px;
    }

    .khu-carousel{
        height:450px;
    }

    .the-bai{
        width:80%;
        height:400px;
        padding:18px;
    }


    .ten-bai{
        font-size:20px;
    }

    .noi-dung{
        font-size:13px;
    }

    .nut-mo{
        padding:10px 12px;
        font-size:12px;
    }

    .nut-chuyen{
        width:38px;
        height:38px;
        font-size:20px;
    }

    #trang-bai{
        width:94%;
        margin:30px auto;
    }

    .noi-dung-bai{
        padding:25px 18px;
    }

    .footer-content{
        flex-direction:column;
        align-items:flex-start;
    }

    .copyright{
        text-align:left;
    }
    html{
        overflow-x:hidden;
    }
    .menu-ben{
        transition:transform 0.35s ease;
    }

    .menu-ben.mo{
        transform:translateX(0);
    }

    .nut-menu{
        width:45px;
        height:45px;
        padding:8px;
        display:flex;
        justify-content:center;
        align-items:center;
        flex-shrink:0;
        background:var(--bg-color);
        border:1px solid var(--second-color);
        border-radius:10px;
    }

    body.trang-chu .header-content{
        width:94%;
        min-height:72px;
        padding:10px 0;
        justify-content:space-between;
        gap:10px;
    }

    body.trang-chu .logo{
        min-width:0;
        gap:8px;
    }

    body.trang-chu .logo img{
        width:42px;
        height:42px;
        flex-shrink:0;
    }

    body.trang-chu .logo h3{
        font-size:12px;
        line-height:1.3;
        white-space:normal;
    }

    body.trang-chu .logo p{
        font-size:10px;
    }

    body.trang-chu .nut-menu{
        width:42px;
        height:42px;
        padding:8px;
        flex-shrink:0;
    }

    body.trang-chu .thong-tin-sv{
        min-height:0;
        padding:100px 5% 75px;
        background-position:center;
        background-attachment:scroll;
    }

    body.trang-chu .sv-box{
        display:flex;
        flex-direction:column;
        align-items:flex-start;
        gap:16px;
    }

    body.trang-chu .avatar-sv{
        width:94px;
        height:94px;
    }

    body.trang-chu .avatar-sv img{
        width:88px;
        height:88px;
        border-width:3px;
    }

    body.trang-chu .sv-info{
        width:100%;
        min-width:0;
    }

    body.trang-chu .hero-nhan{
        font-size:9px;
        padding:7px 10px;
        letter-spacing:0;
    }

    body.trang-chu .sv-info h1{
        font-size:29px;
        line-height:1.2;
    }

    body.trang-chu .sv-info .hero-nganh{
        font-size:14px;
    }

    body.trang-chu .sv-info .hero-truong,
    body.trang-chu .sv-info .hero-mssv{
        font-size:12px;
    }

    body.trang-chu .sv-info .hero-mo-ta{
        font-size:12px;
        line-height:1.7;
    }

    body.trang-chu .hero-nhom-nut{
        display:flex;
        flex-wrap:wrap;
        gap:9px;
    }

    body.trang-chu .hero-nhom-nut a,
    body.trang-chu .hero-nhom-nut button{
        flex:1 1 155px;
        min-height:40px;
        padding:10px 12px;
        font-size:11px;
        text-align:center;
    }

    body.trang-chu .hero-thong-tin-them{
        width:100%;
        max-width:none;
        margin-top:16px;
        padding:18px 15px;
        border-radius:var(--border-radius);
        backdrop-filter:blur(8px);
    }

    body.trang-chu .hero-thong-tin-them h2{
        margin-bottom:16px;
        padding-bottom:12px;
        font-size:19px;
        line-height:1.4;
    }

    body.trang-chu .hero-ho-so-grid{
        grid-template-columns:1fr;
        gap:12px;
    }

    body.trang-chu .hero-ho-so-cot{
        gap:11px;
    }

    body.trang-chu .hero-ho-so-cot p{
        font-size:13px;
        line-height:1.6;
        overflow-wrap:anywhere;
    }

    body.trang-chu .hero-ho-so-cot strong{
        color:#BFDCEB;
    }

    body.trang-chu .hero-ho-so-cot span{
        color:#FFFFFF;
    }

    body.trang-chu .hero-code-panel{
        display:none;
    }

    body.trang-chu .hero-mat-troi{
        width:60px;
        height:60px;
        right:8%;
        bottom:10%;
    }

    body.trang-chu #trang-chu{
        margin-top:-25px;
        padding-top:44px;
        border-radius:26px 26px 0 0;
    }

    .nut-menu img{
        width:26px;
        height:26px;
        object-fit:contain;
    }

    body.menu-mo .nut-menu{
        visibility:hidden;
    }

    .dau-menu{
        position:relative;
        padding-right:30px;
    }

    #nut-dong-menu{
        display:block;
        position:absolute;
        top:0;
        right:0;
        background:none;
        border:none;
        color:white;
        font-size:30px;
        cursor:pointer;
    }
    
    .the-bai .hinh{
        width:100%;
        max-width:100%;
        height:160px;
    }

    .the-bai .hinh img{
        width:100%;
        height:100%;
        padding:6px;
        object-fit:contain;
    }


    body.dang-xem-cung #bai-1{
        padding:65px 12px 30px;
    }
  
    #bai-1 .ds-nguyen-to{
        grid-template-columns:1fr;
        gap:15px;
    }

    #bai-1 .dau-nguyen-to h3{
        font-size:27px;
    }

    #bai-1 .dau-nguyen-to > p:last-child{
        font-size:15px;
    }

    #bai-1 .the-nguyen-to h4 img{
        width:34px;
        height:34px;
    }

    #bai-1 .the-nguyen-to h5{
        font-size:15px;
    }


    #nut-top{
        width:48px;
        height:48px;
        right:15px;
        bottom:15px;
    }

    
    #bai-1 .cung-hang {

        gap: 12px;    grid-template-columns: 1fr;  
    }
    #bai-1 .ket-hang {
        grid-template-columns: 1fr;  
        text-align: center;       
    }
    #bai-1 .ket-hai-o {
        grid-template-columns: 1fr;  
        text-align: left;    
    }
    #bai-1 .cung-luoi {
        grid-template-columns: repeat(2, minmax(0, 1fr)); 
        gap: 12px;
    }
    #bai-1 .ket-dau{
        flex-direction:column;
        align-items:flex-start;
    }

    #bai-1 .ket-anh{
        width:130px;
        height:130px;
        margin:0 auto;
    }

    #bai-1 .cung-chi-tiet{
        flex-direction:column;
        align-items:flex-start;
    }
    #bai-1 .media-chi-tiet{
    width:120px;
    height:120px;
    }

    body.dang-xem-danh-ba #bai-2{
    padding:80px 12px 30px;
    }

    #bai-2 .db-dau-trang{
        align-items:flex-start;
        gap:10px;
    }

    #bai-2 .db-dau-trang h2{
        font-size:25px;
    }

    #bai-2 .db-thong-ke{
        min-width:75px;
        padding:10px;
    }

    #bai-2 .db-thong-ke strong{
        font-size:25px;
    }

    #bai-2 .db-thanh-cong-cu,
    #bai-2 .db-danh-sach{
        grid-template-columns:1fr;
    }

    #bai-2 .db-o-tim,
    #bai-2 #db-lay-moi{
        grid-column:auto;
    }

    #bai-2 .db-thanh-thong-tin{
        flex-direction:column;
        gap:5px;
    }

    #bai-2 .db-hop-thoai{
        padding:25px 18px;
    }

    #bai-2 .db-hang-modal{
        flex-direction:column;
        gap:8px;
    }

    #bai-2 .db-hang-modal strong{
        text-align:left;
    }
    body.dang-xem-cu-tru #bai-3{
        padding:0 0 32px;
    }


    #bai-3 .ct-banner{
        min-height:165px;
        padding:22px 14px;
        gap:12px;
    }

    #bai-3 .ct-banner-anh{
        width:65px;
        height:65px;
    }

    #bai-3 .ct-banner-chu p{
        font-size:10px;
        letter-spacing:0.5px;
    }

    #bai-3 .ct-banner-chu h1{
        font-size:clamp(17px,5vw,23px);
    }


    #bai-3 .ct-khung{
        padding:19px 14px;
    }

    #bai-3 .ct-dau-khung{
        flex-direction:column;
        align-items:flex-start;
        gap:10px;
    }

    #bai-3 .ct-dau-khung small{
        text-align:left;
    }

    #bai-3 .ct-tieu-de h2,
    #bai-3 .ct-tieu-de h3{
        font-size:16px;
    }

    #bai-3 .ct-luoi,
    #bai-3 .ct-luoi-dia-chi{
        grid-template-columns:1fr;
    }
    
    #bai-3 .ct-luoi-dia-chi .ct-truong:nth-child(n){
        grid-column:1/-1;
    }

    #bai-3 .ct-lua-chon{
        grid-template-columns:1fr;
    }

    #bai-3 .ct-cuoi-form{
        align-items:stretch;
    }

    #bai-3 .ct-nhom-nut{
        flex-direction:column;
        align-items:stretch;
        width:100%;
    }

    #bai-3 .ct-nhom-nut button{
        width:100%;
    }

    #bai-3 .ct-hop-modal{
        padding:28px 17px 20px;
    }

    #bai-3 .ct-the-noi-dung{
        flex-direction:column;
    }

    #bai-3 .ct-phieu-hang{
        flex-direction:column;
        gap:5px;
    }

    #bai-3 .ct-phieu-hang strong{
        text-align:left;
    }

    #nut-quay-ve{
        width:50px;
        height:45px;
        padding:12px;
        top:90px;
        left:10px;
        border-radius:15px;
    }
    
    #bai-4{
        padding:80px 12px 35px;
    }

    #bai-4 .tt-tieu-de h2{
        font-size:28px;
    }

    #bai-4 .tt-thanh-tim{
        grid-template-columns:1fr;
    }

    #bai-4 #tt-nut-xem{
        width:100%;
    }

    #bai-4 .tt-goi-y{
        justify-content:flex-start;
    }

    #bai-4 .tt-kinh{
        border-radius:var(--border-radius);
    }

    #bai-4 .tt-o-thong-so{
        padding:12px 8px;
        gap:7px;
    }

    #bai-4 .tt-o-thong-so img{
        width:34px;
        height:34px;
        padding:6px;
    }

    #bai-4 .tt-o-thong-so strong{
        font-size:15px;
    }

    #bai-4 .tt-du-bao-gio,
    #bai-4 .tt-du-bao-ngay{
        padding:15px 10px;
    }

}

@media print{
    body *{
        visibility:hidden!important;
    }

    #bai-3 .ct-modal,
    #bai-3 .ct-modal *{
        visibility:visible!important;
    }

    #bai-3 .ct-modal{
        position:absolute;
        inset:0;
        background:white;
        padding:0;
        backdrop-filter:none;
    }

    #bai-3 .ct-hop-modal{
        width:100%;
        max-width:none;
        max-height:none;
        overflow:visible;
        border:0;
        box-shadow:none;
        padding:15px;
    }

    #bai-3 .ct-nut-dong,
    #bai-3 .ct-modal-cuoi{
        display:none!important;
    }
}

body {
    min-height: 100vh;
    display: flex;
    flex-direction: column;
    background-color: var(--bg-color);
    color: var(--text-color);
    font-family: var(--font-body);
    font-size: var(--text-base);   
    line-height:1.6;
}

h1, h2, h3, h4, h5, h6 {
    font-family: var(--font-heading);
    font-weight: bold;
    color: var(--main-color);
}

button{
    font-family:inherit;
    cursor:pointer;
}

header{
    background-color:var(--box-color);
    border-bottom:1px solid var(--second-color);
}

.header-content{
    max-width:1200px;
    margin:auto;
    padding:5px 15px;;
    display:flex;
    justify-content:flex-start;
    align-items:center;
    gap:15px;
}

.logo{
    display:flex;
    align-items:center;
    gap:15px;
    text-decoration:none;
    color:var(--text-color);
}

.logo img{
    width:45px;
    height:45px;
    object-fit:cover;
    border-radius:50%;
}

.logo h3{
    color:var(--main-color);
    font-size:18px;
    margin-bottom:7px;
}

.logo p{
    font-size:13px;
    color:var(--main-color);
}
.box{
    display:flex;
    align-items:center;
    gap:18px;
}

.avatar-sv{
    display:flex;
    align-items:center;
    gap:15px;
    text-decoration:none;
    color:var(--text-color);
}

.avatar-sv img{
    width:100px;
    height:150px;
    object-fit:cover;
    border-radius:10%;
    
}





.sv-box{
    display:flex;
    align-items:center;
    gap:30px;
}
.sv-info h3{
    color:var(--main-color);
    font-size:28px;
    margin-bottom:12px;
}

.sv-info p{
    color:var(--text-color);
    font-size:16px;
    line-height:1.8;
}

.sv-info strong{
    color:var(--main-color);
}

.nut-menu {
    width: 40px;
    height: 40px;
    padding: 9px;
    display: flex;
    align-items: center;
    justify-content: center;
    flex-shrink: 0;

    background: rgba(127, 125, 135, 0.541);
    border: 1px solid rgba(255, 255, 255, 0.6);
    border-radius: var(--border-radius); 
    
    cursor: pointer;
    transition: 0.3s;
    filter: none; 
}

.nut-menu img {
    width: 23px;
    height: 23px;
    object-fit: contain;
    filter: brightness(0) invert(1);
}

.nut-menu:hover {
    background: rgba(157, 29, 29, 0.363); 
    transform: translateY(-3px); 
}

.menu-ben {
    width: 250px;
    max-width: 85%;
    height:100%;
    position: fixed;
    top: 0;
    right: 0; 
    left: auto;
    padding: 25px 20px;
    background: #94868a; 
    
    color: white;
    display: flex;
    flex-direction: column;
    overflow-y: auto;
    z-index: 1001;
    
    transform: translateX(100%); 
    transition: 0.3s;
    border-radius:10px;
}

.menu-ben.mo{
    transform:translateX(0);
}

.dau-menu{
    display:flex;
    justify-content:space-between;
    align-items:center;
    gap:10px;
    margin-bottom:35px;
}

.logo-menu{
    display:flex;
    align-items:center;
    gap:10px;
}

.logo-menu img{
    width:40px;
    height:40px;
    object-fit:cover;
    border-radius:50%;
}

.logo-menu h3{
    color:#FFFFFF;
    font-size:13px;
}


.logo-menu p{
    font-size:11px;
    color:var(--second-color);
    margin-top:5px;
}


#nut-dong-menu{
    width:32px;
    height:32px;
    display:flex;
    align-items:center;
    justify-content:center;
    background:none;
    border:none;
    cursor:pointer;
    flex-shrink:0;
}

#nut-dong-menu img{
    width:22px;
    height:22px;
    object-fit:contain;
    filter:brightness(0) invert(1);
}


.anh-menu {
    width: 24px;  
    height: 24px;
    object-fit: contain;
    flex-shrink: 0;
    filter: invert(1);
}

.danh-sach-menu button,
.danh-sach-menu a{
    width: 100%;
    display: flex;
    align-items: center;
    gap: 18px;
    padding: 15px 12px;
    background: transparent;
    border: none;
    border-radius: 12px; 
    color: white;
    text-decoration: none;
    text-align: left;
    font-size: var(--text-base);
    cursor: pointer;
    transition: all 0.3s ease; 
}

.danh-sach-menu button:hover,
.danh-sach-menu a:hover {
    background: rgba(255, 255, 255, 0.15); 
    transform: translateX(-5px); 
}

.duong-ke{
    border-top:1px solid rgba(255,255,255,0.3);
    margin:25px 0;
}

.cuoi-menu{
    margin-top:auto;
    padding-top:25px;
    border-top:1px solid rgba(255,255,255,0.3);
}

.cuoi-menu h3{
    font-size:21px;
    font-style:italic;
}

.cuoi-menu p{
    color:var(--second-color);
    font-size: var(--text-xs);
    margin-top:10px;
}



main{
    flex:1;
}

#trang-chu{
    padding:55px 0px 45px;
    overflow:hidden;
}

body.trang-chu{
    background-image:
            linear-gradient(
                rgba(225, 245, 244, 0.677),
                rgba(245,239,225,0.3)
            ),
        url("image/nentrangchu.jpg");

    background-size:cover;
    background-position:center;
    background-repeat:no-repeat;
    background-attachment:fixed;
}

.gioi-thieu {
    text-align:center;
    padding:0px 15px;
}

.gioi-thieu > p:first-child{
    font-size:13px;
    color:var(--main-color);
    letter-spacing:2px;
    margin-bottom:15px;
}

.gioi-thieu h1{
    font-size:30px;
    margin-bottom:15px;
    color:var(--main-color);
}
.gioi-thieu h1 span{
    color:var(--main-color);
}

.khu-carousel{
    width:100%;
    max-width:1200px;
    height:580px;
    margin:20px auto 0px;
    position:relative;
}

.khung-the{
    width:100%;
    height:100%;
    position:relative;
}

.the-bai{
    position:absolute;
    left:50%;
    top:50%;
    width:350px;
    height:430px;
    padding:25px;
    background-color:var(--box-color);
    border:1px solid var(--second-color);
    border-radius:var(--border-radius);
    box-shadow:0px 8px 25px rgba(121,13,22,0.10);
    display:flex;
    flex-direction:column;
    justify-content:center;
    align-items:center;
    gap:15px;
    text-align:center;
    color:var(--text-color);
    opacity:0;
    pointer-events:none;
    transform:translate(-50%,-50%);
    transition:0.4s;
}

.the-bai.giua{
    opacity:1;
    z-index:3;
    pointer-events:auto;
    background-color:var(--box-color);
    filter:blur(0px)
}

.the-bai.trai{
    opacity:0.2;
    z-index:1;
    pointer-events:auto;
    background-color:var(--second-color);
    transform:translate(calc(-50% - 350px),-50%) scale(0.8);
}

.the-bai.phai{
    opacity:0.2;
    z-index:1;
    pointer-events:auto;
    filter:blur(2px);
    background-color:var(--blue-color);
    transform:translate(calc(-50% + 350px),-50%) scale(0.8);
}

.the-bai.an{
    opacity:0;
    z-index:0;
}

.the-bai:hover{
    box-shadow:0px 12px 30px rgba(121,13,22,0.20);
}

.so-thu-tu{
    padding:8px 14px;
    background-color:var(--bg-color);
    color:var(--main-color);
    border-radius:30px;
    font-size:12px;
    font-weight:bold;
}


.hinh{
    width:300px;
    height:200px;
    margin:0 auto;
    display:flex;
    align-items:center;
    justify-content:center;
    background-color:white;
    border:1px solid var(--second-color);
    border-radius:12px;
    overflow:hidden;
    flex-shrink:0;
}

.hinh img{
    width:100%;
    height:100%;
    object-fit:contain;
    padding:10px;
    display:block;
}


.ten-bai{
    font-size: var(--text-lg);
    font-weight:bold;
    color:var(--main-color);
}

.noi-dung{
    font-size: var(--text-sm);
    color:#645655;
    line-height:1.6;
    min-height:45px;
}

.nut-mo{
    background-color:var(--main-color);
    color:white;
    padding:12px 20px;
    border-radius:10px;
    font-size:14px;
    margin-top:auto;
    transition: transform 0.3s ease, background-color 0.3s ease;
}

.the-bai:hover .nut-mo{
    background-color:#5D0B12;
    transform: skew(-15deg); 
    background-color: rgb(213, 127, 56);
    box-shadow: 0 4px 10px rgba(102, 28, 7, 0.675);
    
}

.nut-chuyen{
    position:absolute;
    top:50%;
    z-index:4;
    width:40px;
    height:40px;
    border-radius:50%;
    border:1px solid var(--second-color);
    background-color:rgba(255, 255, 255, 0.763);
    color:var(--main-color);
    font-size:24px;
    box-shadow:0px 3px 12px rgba(121,13,22,0.12);
    display:flex;
    align-items:center;
    justify-content:center;
}

.nut-chuyen img{
    width:22px;
    height:22px;
    object-fit:contain;
}

.nut-phai img{
    transform:rotate(180deg);
}

.nut-chuyen:hover{
    background-color:var(--second-color);
}

.nut-trai{
    left:calc(50% - 230px);
}

.nut-phai{
    right:calc(50% - 230px);
}

.huong-dan{
    text-align:center;
    color:#645655;
    line-height:1.8;
    font-size:13px;
}

#so-bai{
    color:var(--main-color);
    font-weight:bold;
}

#trang-bai{
    display:none;
    width:90%;
    max-width:1000px;
    margin:50px auto;
}


.noi-dung-bai{
    display:none;
    min-height:350px;
    padding:40px;
    background-color:var(--box-color);
    border:1px solid var(--second-color);
    border-radius:var(--border-radius);
    box-shadow:0px 5px 20px rgba(121,13,22,0.07);
}

.noi-dung-bai h2{
    margin-bottom:20px;
    color:var(--main-color);
}

.noi-dung-bai p{
    line-height:1.7;
}

.site-footer{
    background-color:var(--main-color);
    color:white;
}

.footer-content{
    max-width:1200px;
    height:fit-content;
    margin:auto;
    padding:10px 20px;
    display:flex;
    justify-content:space-between;
    align-items:center;
    gap:20px;
}

.footer-logo{
    display:flex;
    align-items:center;
    gap:12px;
}

.footer-logo img{
    width:55px;
    height:55px;
    object-fit:cover;
    border-radius:50%;
    border: 2px rgb(190, 222, 255) solid;
}

.footer-logo h3{
    color:#FFFFFF;
    font-size:17px;
    margin-bottom:7px;
}

.footer-logo p{
    font-size:13px;
    color:var(--second-color);
}

.copyright{
    font-size:13px;
    color:var(--bg-color);
    text-align:right;
}


body:not(.trang-chu) .header-content{
    justify-content:space-between;
}

body.trang-chu > header{
    position:absolute;
    top:0;
    left:0;
    right:0;
    z-index:20;
    background:transparent;
    border:none;
}

body.trang-chu .header-content{
    width:94%;
    max-width:1450px;
    min-height:82px;
    margin:auto;
    padding:14px 0;
    display:flex;
    align-items:center;
    justify-content:space-between;
    gap:16px;
    border-bottom:1px solid rgba(255,255,255,0.3);
}

body.trang-chu .logo{
    gap:12px;
    min-width:0;
    color:white;
}

body.trang-chu .logo img{
    width:52px;
    height:52px;
    object-fit:cover;
    border:2px solid white;
    border-radius:50%;
    background:rgba(255,255,255,0.15);
}

body.trang-chu .logo h3{
    color:white;
    font-size:19px;
    text-shadow:0 2px 6px rgba(0,0,0,0.25);
}

body.trang-chu .logo p{
    color:#FFEBF5;
    font-size:12px;
}

body.trang-chu .nut-menu{
    width:47px;
    height:47px;
    padding:9px;
    display:flex;
    align-items:center;
    justify-content:center;
    flex-shrink:0;
    background:rgba(255,255,255,0.2);
    border:1px solid rgba(255,255,255,0.6);
    border-radius:var(--border-radius);
    filter:none;
    transition:0.3s;
}

body.trang-chu .nut-menu img{
    width:26px;
    height:26px;
    object-fit:contain;
    filter:brightness(0) invert(1);
}

body.trang-chu .nut-menu:hover{
    background:rgba(255,255,255,0.35);
    transform:translateY(-3px);
}


body.trang-chu .thong-tin-sv{
    position:relative;
    isolation:isolate;
    width:100%;
    max-width:none;
    min-height:470px;
    margin:0;
    padding:130px 6% 110px;
    overflow:hidden;

    border:none;
    border-radius:0;
    box-shadow:none;

    background-color:#4D4F75;
    background-image:
        linear-gradient(
            90deg,
            rgba(26,28,57,0.48),
            rgba(64,37,74,0.06)
        ),
        url("image/nenherotrangchu.jpg"),
        radial-gradient(
            ellipse at 77% 73%,
            #F6B5B3 0%,
            transparent 42%
        ),
        linear-gradient(
            155deg,
            #292D54 0%,
            #5E547F 45%,
            #BB82A2 78%,
            #E8A0A3 100%
        );

    background-size:cover;
    background-position:center;
    background-repeat:no-repeat;

    color:white;
    animation:none;
    transform:none;
}

body.trang-chu .thong-tin-sv:hover{
    transform:none;
    box-shadow:none;
}


body.trang-chu .thong-tin-sv::before,
body.trang-chu .thong-tin-sv::after{
    content:"";
    position:absolute;
    left:0;
    right:0;
    bottom:0;
    pointer-events:none;
    z-index:0;
}

body.trang-chu .thong-tin-sv::before{
    height:150px;
    opacity:0.44;
    background:#666489;
    clip-path:polygon(
        0 60%,12% 20%,24% 66%,37% 13%,
        49% 64%,64% 15%,77% 63%,90% 18%,
        100% 55%,100% 100%,0 100%
    );
}

body.trang-chu .thong-tin-sv::after{
    height:86px;
    opacity:0.63;
    background:linear-gradient(180deg,#3B476D,#303B62);
    clip-path:polygon(
        0 70%,13% 27%,28% 76%,42% 21%,
        55% 79%,69% 23%,83% 68%,94% 25%,
        100% 46%,100% 100%,0 100%
    );
}

body.trang-chu .hero-mat-troi{
    position:absolute;
    z-index:0;
    width:88px;
    height:88px;
    right:16%;
    bottom:16%;
    border-radius:50%;
    background:#FFE1BD;
    box-shadow:0 0 78px 28px rgba(255,214,172,0.55);
}

body.trang-chu .hero-canh-hoa{
    position:absolute;
    z-index:1;
    width:14px;
    height:9px;
    border-radius:95% 0 95% 0;
    background:rgba(255,213,229,0.72);
    transform:rotate(-30deg);
    pointer-events:none;
}

body.trang-chu .hoa-1{
    top:22%;
    left:6%;
}

body.trang-chu .hoa-2{
    top:49%;
    left:17%;
}

body.trang-chu .hoa-3{
    top:27%;
    right:11%;
}

body.trang-chu .hoa-4{
    bottom:13%;
    right:26%;
}


body.trang-chu .sv-box{
    position:relative;
    z-index:2;
    display:grid;
    grid-template-columns:130px minmax(0,1fr) 165px;
    align-items:center;
    gap:25px;
    max-width:1240px;
    margin:auto;
}

body.trang-chu .avatar-sv{
    position:relative;
    width:130px;
    height:130px;
    display:flex;
    align-items:center;
    justify-content:center;
    border-radius:50%;
    transition:0.3s;
}

body.trang-chu .avatar-sv:hover{
    transform:scale(1.05);
}

body.trang-chu .avatar-sv::before{
    content:"";
    position:absolute;
    inset:-2px;
    border-radius:50%;
    background:conic-gradient(
        #FFFDF7,
        #E5D3AF,
        #AEC4D4,
        #FFFDF7
    );
    animation:heroVienXoay 7s linear infinite;
}

@keyframes heroVienXoay{
    to{
        transform:rotate(360deg);
    }
}

body.trang-chu .avatar-sv img{
    position:relative;
    z-index:1;
    width:122px;
    height:122px;
    display:block;
    object-fit:cover;
    border:2px solid white;
    border-radius:50%;
    background:#D7C6DB;
    box-shadow:0 8px 26px rgba(21,18,48,0.24);
}

body.trang-chu .sv-info{
    min-width:0;
    color:white;
}

body.trang-chu .hero-nhan{
    display:inline-block;
    padding:8px 12px;
    border:1px solid rgba(255,255,255,0.28);
    border-radius:20px;
    background:rgba(255,255,255,0.15);
    color:#FFF1F6;
    font-size:11px;
    font-weight:600;
}

body.trang-chu .sv-info h1{
    margin:10px 0 6px;
    font-size:clamp(26px,3.4vw,36px);
    line-height:1.15;
    color:white;
    text-shadow:0 2px 9px rgba(13,16,44,0.34);
}

body.trang-chu .sv-info p{
    color:#FFF5FA;
}

body.trang-chu .sv-info .hero-nganh{
    font-size: var(--text-sm);
    font-weight:600;
    line-height:1.5;
}

body.trang-chu .sv-info .hero-truong,
body.trang-chu .sv-info .hero-mssv{
    font-size: var(--text-xs);
    line-height:1.6;
}

body.trang-chu .sv-info .hero-mo-ta{
    max-width:590px;
    margin:14px 0 18px;
    font-size:13px;
    line-height:1.7;
}


body.trang-chu .hero-nhom-nut{
    display:flex;
    align-items:center;
    flex-wrap:wrap;
    gap:12px;
}

body.trang-chu .hero-nhom-nut a,
body.trang-chu .hero-nhom-nut button{
    display:inline-flex;
    align-items:center;
    justify-content:center;
    min-height:43px;
    padding:11px 17px;
    border-radius:25px;
    font-size:13px;
    font-weight:700;
    text-decoration:none;
    font-family:var(--font-body);
    transition:0.3s;
}

body.trang-chu .hero-nhom-nut a:hover,
body.trang-chu .hero-nhom-nut button:hover{
    transform:translateY(-3px);
    box-shadow:0 7px 20px rgba(15,16,43,0.2);
}

body.trang-chu .hero-nut-kham-pha{
    background:#F8C2D9;
    border:1px solid #F8C2D9;
    color:#693049;
}

body.trang-chu .hero-nut-ho-so{
    background:rgba(255,255,255,0.14);
    border:1px solid rgba(255,255,255,0.85);
    color:white;
}


body.trang-chu .hero-thong-tin-them{
    width:100%;
    margin-top:20px;
    padding:25px 28px;

    background:rgba(35,30,60,0.55);
    backdrop-filter:blur(12px);
    -webkit-backdrop-filter:blur(12px);

    border:1px solid rgba(255,255,255,0.28);
    border-radius:var(--border-radius);

    box-shadow:0 8px 30px rgba(0,0,0,0.15);

    color:white;

    animation:heroHoSoHien 0.35s ease;
}

body.trang-chu .hero-thong-tin-them[hidden]{
    display:none;
}

body.trang-chu .hero-thong-tin-them h2{
    margin:0 0 22px;
    padding-bottom:15px;

    color:#F5E3C3;
    font-family:Georgia,"Times New Roman",serif;
    font-size:23px;
    font-weight:700;
    letter-spacing:1px;

    border-bottom:1px solid rgba(255,255,255,0.25);
}

body.trang-chu .hero-ho-so-grid{
    display:grid;
    grid-template-columns:repeat(2,minmax(0,1fr));
    gap:25px;
}

body.trang-chu .hero-ho-so-cot{
    display:flex;
    flex-direction:column;
    gap:17px;
}

body.trang-chu .hero-ho-so-cot p{
    margin:0;
    font-size:15px;
    line-height:1.6;
}

body.trang-chu .hero-ho-so-cot strong{
    color:#BFDCEB;
    font-weight:700;
}

body.trang-chu .hero-ho-so-cot span{
    color:#FFFFFF;
    font-weight:400;
}

body.trang-chu .hero-ho-so-cot p:hover strong{
    color:#FFE0A8;
}

@keyframes heroHoSoHien{
    from{
        opacity:0;
        transform:translateY(12px);
    }
    to{
        opacity:1;
        transform:translateY(0);
    }
}

body.trang-chu .hero-code-panel{
    width:165px;
    min-height:142px;
    padding:16px;
    border:1px solid rgba(191,213,246,0.67);
    border-radius:12px;
    background:rgba(30,40,71,0.59);
    box-shadow:0 12px 28px rgba(18,20,40,0.25);
    transform:rotate(-7deg);
    backdrop-filter:blur(5px);
    transition:0.3s;
}

body.trang-chu .hero-code-panel:hover{
    transform:rotate(-2deg) translateY(-3px);
}

body.trang-chu .hero-code-cham{
    display:flex;
    gap:6px;
    margin-bottom:18px;
}

body.trang-chu .hero-code-cham i{
    width:7px;
    height:7px;
    border-radius:50%;
    background:#F5B6CF;
}

body.trang-chu .hero-code-cham i:nth-child(2){
    background:#EED698;
}

body.trang-chu .hero-code-cham i:nth-child(3){
    background:#A2D9CC;
}

body.trang-chu .hero-code-panel > span{
    display:block;
    width:77%;
    height:5px;
    margin-bottom:10px;
    border-radius:4px;
    background:#76B8D6;
}

body.trang-chu .hero-code-panel > span:nth-of-type(2){
    width:51%;
    margin-left:14px;
    background:#D5A2CF;
}

body.trang-chu .hero-code-panel > span:nth-of-type(3){
    width:85%;
    background:#AAA4E0;
}

body.trang-chu .hero-code-panel > span:nth-of-type(4){
    width:58%;
    margin-left:14px;
    background:#F0C09D;
}

body.trang-chu .hero-code-panel > span:nth-of-type(5){
    width:70%;
    background:#A5D9C8;
}

body.trang-chu .hero-code-panel small{
    display:block;
    margin-top:6px;
    text-align:right;
    font-size:9px;
    color:#D7DEFA;
}


body.trang-chu #trang-chu{
    position:relative;
    z-index:1;
    margin-top:-32px;
    padding:49px 0 45px;
    border-radius:36px 36px 0 0;
    background-color:var(--bg-color);
    background-image:
        linear-gradient(
            rgba(255,249,246,0.89),
            rgba(245,239,225,0.91)
        ),
        url("image/nentrangchu.jpg");
    background-size:cover;
    background-position:center;
}


/*-- Cung hoàng đạo -------------------------------------------------------------------------*/


body.dang-xem-cung #trang-bai{
    width:100%;
    max-width:none;
    margin:0;
    position:relative;
}

#bai-1{
    --nen:#181331;
    --vang:#E9D28A;

    width:100%;
    min-height:100vh;
    padding:80px 4% 60px;
    border:0;
    border-radius:0;
    box-shadow:none;
    position:relative;
    overflow:hidden;
    background-color:var(--nen);
    color:white;
    transition:background-color 0.5s;
}

#bai-1.nen-lua{
    --nen:#542334;
    --vang:#FFD18A;
}

#bai-1.nen-dat{
    --nen:#234A43;
    --vang:#E7DBAE;
}

#bai-1.nen-khi{
    --nen:#294C77;
    --vang:#E0F0FF;
}

#bai-1.nen-nuoc{
    --nen:#302B67;
    --vang:#DCCBFF;
}

#bai-1::before{
    content:"";
    position:absolute;
    inset:0;
    background:url("image/nencung.jpg") center top/cover no-repeat;
    opacity:0.48;
    pointer-events:none;
}

#bai-1::after{
    content:"";
    position:absolute;
    inset:0;
    background-image:radial-gradient(circle,white 1px,transparent 2px);
    background-size:100px 100px;
    opacity:0.18;
    animation:saoBay 30s linear infinite;
    pointer-events:none;
}

@keyframes saoBay{
    to{
        background-position:200px 200px;
    }
}

#bai-1 > div{
    max-width:1250px;
    margin:0 auto 28px;
    position:relative;
    z-index:1;
}

#bai-1 .cung-dau{
    text-align:center;
    padding:10px 0 20px;


}

#bai-1 .cung-dau h2{
    color:var(--vang);
    font-size:clamp(28px,4vw,34px);
    line-height:1.2;
    margin-bottom:20px;
}

#bai-1 .cung-dau p{
    font-size:16px;
    line-height:1.7;
}



#bai-1 .cung-khung h3{
    color:var(--vang);
    font-size:25px;
    margin-bottom:18px;
}

#bai-1 .cung-o{
    display:flex;
    flex-direction:column;
    gap:10px;
    margin-top:22px;
}

#bai-1 .cung-o label{
    color:var(--vang);
    font-weight:bold;
}

#bai-1 .cung-hang,
#bai-1 .cung-so{
    display:grid;
    grid-template-columns:repeat(3,minmax(0,1fr));
    gap:18px;
}

#bai-1 input,
#bai-1 select{
    width:100%;
    padding:18px;
    border:1px solid rgba(255,255,255,0.3);
    border-radius:12px;
    background:rgba(10,10,30,0.55);
    color:white;
    font:inherit;
    outline:none;
}

#bai-1 input::placeholder{
    color:#BDB6CF;
}

#bai-1 input:focus,
#bai-1 select:focus{
    border-color:var(--vang);
}

#bai-1 select option{
    background:#19152E;
    color:white;
}

#bai-1 .cung-nut{
    width:100%;
    margin-top:28px;
    padding:20px;
    border:0;
    border-radius:12px;
    background:linear-gradient(90deg,#FFE9A8,#D4B96B);
    color:#181331;
    font-size:16px;
    font-weight:bold;
    box-shadow:0 0 20px rgba(233,210,138,0.25);
}

#bai-1 .cung-nut:hover{
    filter:brightness(1.08);
}

#bai-1 #loi-cung{
    color:#FFC4C4;
    margin-top:12px;
}

#bai-1 [hidden]{
    display:none !important;
}

#bai-1 .cung-kq,
#bai-1 .cung-chi-tiet{
    display:flex;
    align-items:center;
    gap:25px;
}

#bai-1 .cung-kq img,
#bai-1 .cung-chi-tiet img{
    width:110px;
    height:110px;
    object-fit:contain;
    flex-shrink:0;
}

#bai-1 .cung-kq h3{
    font-size:30px;
}

#bai-1 .cung-so{
    margin-top:22px;
}

#bai-1 .cung-so.hai-o{
    grid-template-columns:repeat(2,minmax(0,1fr));
}

#bai-1 .cung-so > div,
#bai-1 .cung-chi-tiet{
    padding:20px;
    background:rgba(255,255,255,0.08);
    border:1px solid rgba(255,255,255,0.15);
    border-radius:12px;
}

#bai-1 .cung-so span{
    display:block;
    margin-bottom:10px;
}

#bai-1 .cung-so strong{
    color:var(--vang);
    font-size:20px;
}

#bai-1 .cung-ghi-chu{
    margin-top:20px;
    color:#D5CEE1;
    font-size:13px;
}

#bai-1 .cung-luoi{
    display:grid;
    grid-template-columns:repeat(3,minmax(0,1fr));
    gap:16px;
    margin-top:25px;
}

#bai-1 .the-cung{
    display:flex;
    flex-direction:column;
    align-items:flex-start;
    gap:8px;
    min-height:200px;
    padding:16px 20px;
    border:1px solid rgba(255,255,255,0.18);
    border-radius:12px;
    background:rgba(255,255,255,0.08);
    color:white;
    text-align:left;
    transition:0.25s;
}

#bai-1 .the-cung:hover,
#bai-1 .the-cung.chon{
    border-color:var(--vang);
    background:rgba(255,255,255,0.15);
    transform:translateY(-3px);
}

#bai-1 .the-cung img{
    width:70px;
    height:70px;
    object-fit:contain;
}

#bai-1 .the-cung .ten-the-cung{
    display:block;
    color:var(--vang);
    font-size:18px;
    font-weight:700;
}


#bai-1 .the-cung small{
    color:#DAD4E6;
}

#bai-1 .the-cung span{
    color:var(--vang);
}

#bai-1 .the-cung .mo-ta-the-cung{
    display:block;
    margin-top:auto;
    font-size:14px;
    color:white;
}

#bai-1 .cung-chi-tiet{
    margin-top:25px;
}

#bai-1 .cung-chi-tiet p{
    margin-top:8px;
}

#bai-1 .cung-khung,
#bai-1 #ket-qua-cung{
    width:100%;
    padding:35px;
    margin: 0 auto 30px;
    margin-bottom:30px;
    background:none;
    border:1px solid rgba(233,210,138,0.5);
    border-radius:20px;
    box-shadow:0 8px 25px rgba(59, 53, 122, 0.63);
}

#bai-1 .cung-khung.kham-pha-cung{
    background:transparent;
    border:none;
    border-radius:0;
    box-shadow:none;
    padding:0;
}

/* 4 nguyên tố */

#bai-1 .khu-nguyen-to{
    padding:35px 0;
}

#bai-1 .dau-nguyen-to{
    margin-bottom:30px;
    
}

#bai-1 .dau-nguyen-to > p:first-child{
    color:var(--vang);
    font-weight:bold;
    letter-spacing:2px;
    margin-bottom:15px;
}

#bai-1 .dau-nguyen-to h3{
    color:var(--vang);
    font-size:26px;
    margin-bottom:20px;
}

#bai-1 .dau-nguyen-to > p:last-child{
    color:#DAD4E6;
    font-size:15px;
    line-height:1.8;
}

#bai-1 .ds-nguyen-to{
    display: grid;
    grid-template-columns: repeat(2, minmax(0, 1fr));
    gap: 20px; /* Giảm khoảng cách giữa các hộp một chút */
    max-width: 1200px; /* CHÍNH LÀ DÒNG NÀY: Ép cụm này nhỏ lại, không cho giãn to đùng nữa */
    margin: 0 auto
}

#bai-1 .the-nguyen-to{
    padding:22px 26px;;
    background:rgba(207, 185, 179, 0.345);
    border:1px solid rgba(233,210,138,0.3);
    border-radius:10px;
    transition:0.3s;
}

#bai-1 .the-nguyen-to:hover{
    transform:translateY(-4px);
    border-color:var(--vang);
    background:rgba(94, 95, 101, 0.464);
    box-shadow:0 8px 25px rgba(53, 74, 122, 0.63);
}


#bai-1 .the-nguyen-to h4{
    display:flex;
    align-items:center;
    gap:15px;
    color:white;
    font-size:20px;
    margin-bottom:15px;
}

#bai-1 .the-nguyen-to h4 img{
    width:35px;
    height:35px;
    object-fit:contain;
    flex-shrink:0;
    background:transparent;
    border:none;
    border-radius:0;
}

#bai-1 .the-nguyen-to h5{
    color:var(--vang);
    font-size:16px;
    margin-bottom:20px;
}

#bai-1 .the-nguyen-to p{
    color:#DAD4E6;
    font-size:15px;
    line-height:1.8;
}

#bai-1 #ket-qua-cung{
    width:100%;
    padding:0;
    margin:0 auto 30px;
    background:transparent;
    border:none;
    border-radius:0;
    box-shadow:none;
}

#bai-1 #ket-qua-cung[hidden]{
    display:none;
}

#bai-1 .ket-khung{
    padding:15px 28px;
    margin-bottom:15px;

    background:transparent;
    border:1px solid rgba(233,210,138,0.5);
    border-radius:var(--border-radius);

    box-shadow:0 8px 25px rgba(59,53,122,0.63);
}

#bai-1 .ket-dau{
    display:flex;
    justify-content:space-between;
    align-items:center;
    gap:15px;
    padding-bottom: 10px;
    margin-bottom: 15px;
    border-bottom:1px solid rgba(233,210,138,0.3);
}

#bai-1 .ket-dau h3{
    color:var(--vang);
    font-size:27px;
}

#bai-1 .ket-dau span{
    padding:8px 15px;
    border:1px solid rgba(233,210,138,0.4);
    border-radius:10px;
    color:var(--vang);
    font-size:14px;
}

#bai-1 .ket-hang{
    width: 100%;
    display:grid;
    grid-template-columns: 130px minmax(0,1fr); /* Cột chứa ảnh thu gọn còn 130px */
    gap: 20px;
    align-items:start;
}

#bai-1 .ket-anh{
    width: 100%;
    height: 130px;
    align-items: center;
    justify-content: center;
    background: rgba(255,255,255,0.07);
    border: 1px solid rgba(233,210,138,0.3);
    border-radius: 50%;
    overflow: hidden;
}

#bai-1 .ket-anh img{
    width:55%;
    height:55%;
    object-fit:contain;
    background:transparent;
    border:none;
}

#bai-1 .ket-thong-tin{
    min-width:0;
}

#bai-1 .ket-thong-tin > p{
    color:#DAD4E6;
    margin-bottom: 5px;
}


#bai-1 .ket-thong-tin h4{
    color:var(--vang);
    font-size:24px;
    margin:4px 0;
}


#bai-1 .ket-hai-o{
    display:grid;
    grid-template-columns:repeat(2,minmax(0,1fr));
    gap:12px;
    margin-top:10px;
}

#bai-1 .ket-hai-o > div,
#bai-1 .ket-mo-ta{
    padding:10px 15px;
    background:rgba(255,255,255,0.08);
    border:1px solid rgba(255,255,255,0.12);
    border-radius:12px;
}

#bai-1 .ket-hai-o span{
    display:block;
    color:#DAD4E6;
    margin-bottom:2px;
}

#bai-1 .ket-hai-o strong,
#bai-1 .ket-mo-ta strong{
    color:var(--vang);
    font-size:15px;
}

#bai-1 .ket-hai-o p{
    color:white;
    line-height:1.6;
    margin-top: 4px;
}

#bai-1 .ket-mo-ta{
    margin-top:10px;
}


#bai-1 .ket-mo-ta p{
    margin-top:4px;
    line-height:1.7;
    color:#E8E2EF;
}


#bai-1 .ket-ghi-chu{
    color:#D0C7DC;
    font-size:13px;
    text-align:center;
    margin:20px 0;
}

#bai-1 .the-cung img,
#bai-1 .the-cung video{
    width:100px;
    height:100px;
    border-radius:50%;
    object-fit:cover;
    border:1px solid var(--vang);
}

#bai-1 .ket-anh{
    border-radius:50%;
    overflow:hidden;
}

#bai-1 .ket-anh img,
#bai-1 .ket-anh video{
    width:100%;
    height:100%;
    border-radius:50%;
    object-fit:cover;
}

#bai-1 .media-chi-tiet{
    width:110px;
    height:110px;
    border-radius:50%;
    overflow:hidden;
    flex-shrink:0;
}

#bai-1 .media-chi-tiet img,
#bai-1 .media-chi-tiet video{
    width:100%;
    height:100%;
    object-fit:cover;
}

#bai-1 video{
    pointer-events:none;
}


/* danh bạ ngẫu nhiên -----------------------------//-------------------------*/


body.dang-xem-danh-ba #trang-bai{
    width:100%;
    max-width:none;
    margin:0;
    position:relative;
}

#bai-2{
    width:100%;
    min-height:100vh;
    padding:95px 4% 60px;
    background:#F5EFE1;
    border:none;
    border-radius:0;
    box-shadow:none;
    color:#382C2D;
}
#bai-2{
    background-image:url("image/nendanhba.jpg");
    background-size:cover;
    background-position:center;
    background-repeat:no-repeat;
    background-attachment:fixed;
}
#bai-2 .db-noi-dung{
    max-width:1450px;
    margin:auto;
}

#bai-2 .db-dau-trang{
    display:flex;
    align-items:center;
    justify-content:space-between;
    gap:20px;
    margin-bottom:30px;
}

#bai-2 .db-phu-de{
    color:#790D16;
    font-size:12px;
    font-weight:bold;
    letter-spacing:2px;
    margin-bottom:12px;
}

#bai-2 .db-dau-trang h2{
    color:#790D16;
    font-size:30px;
    margin-bottom:12px;

}

#bai-2 .db-dau-trang > div > p:last-child{
    color:#71686A;
    font-size:15px;
}

#bai-2 .db-thong-ke{
    min-width:110px;
    padding:15px;
    text-align:center;
    background:white;
    border:1px solid #E5D3AF;
    border-radius:10px;
}

#bai-2 .db-thong-ke strong{
    display:block;
    color:#790D16;
    font-size:32px;
}

#bai-2 .db-thong-ke span{
    color:#71686A;
    font-size:12px;
}


#bai-2 .db-thanh-cong-cu{
    display:grid;
    grid-template-columns:minmax(0,2fr) minmax(0,1.1fr) minmax(0,1.1fr) 120px;
    align-items:center;
    gap:12px;
    padding:20px;
    background:white;
    border:1px solid var(--second-color);
    border-radius:var(--border-radius);
    box-shadow:0 3px 12px rgba(0,0,0,0.05);
}

#bai-2 .db-thanh-cong-cu > *{
    min-width:0;
}


#bai-2 .db-o-tim{
    position:relative;
    min-width:0;
}

#bai-2 .db-o-tim > img{
    position:absolute;
    left:14px;
    top:50%;
    transform:translateY(-50%);
    width:20px;
    height:20px;
    object-fit:contain;
    pointer-events:none;
}

#bai-2 .db-o-tim input{
    width:100%;
    height:46px;
    padding:0 15px 0 45px;
    border:1px solid #E5D3AF;
    border-radius:10px;
    background:#F9F6EF;
    font-size:13px;
    outline:none;
}

#bai-2 .db-bo-loc{
    display:flex;
    align-items:center;
    gap:10px;
    min-width:0;
}

#bai-2 .db-bo-loc > img{
    width:20px;
    height:20px;
    object-fit:contain;
    flex-shrink:0;
}

#bai-2 .db-o-chon{
    position:relative;
    min-width:0;
    width:100%;
}

#bai-2 .db-o-chon select{
    width:100%;
    height:46px;
    padding:0 34px 0 12px;
    border:1px solid #E5D3AF;
    border-radius:10px;
    background:#F9F6EF;
    color:#382C2D;
    font-size:13px;
    appearance:none;
    -webkit-appearance:none;
    outline:none;
    cursor:pointer;
}

#bai-2 .db-o-chon > img{
    position:absolute;
    right:12px;
    top:50%;
    transform:translateY(-50%);
    width:15px;
    height:15px;
    object-fit:contain;
    pointer-events:none;
}

#bai-2 .db-o-tim input:focus,
#bai-2 .db-o-chon select:focus{
    border-color:#790D16;
    box-shadow:0 0 0 3px rgba(121,13,22,0.1);
}

#bai-2 #db-lay-moi{
    height:46px;
    display:flex;
    justify-content:center;
    align-items:center;
    gap:9px;
    padding:0 12px;
    background:#790D16;
    color:white;
    border:none;
    border-radius:10px;
    font-size:14px;
    font-weight:bold;
    transition:0.3s;
    


}

#bai-2 #db-lay-moi img{
    width:18px;
    height:18px;
    object-fit:contain;
    filter: grayscale(1) invert(1)
}

#bai-2 #db-lay-moi:hover{
    background:#A43B44;
    transform:translateY(-3px);
    box-shadow:0 6px 15px rgba(46, 170, 201, 0.448);
}

#bai-2 #db-lay-moi:disabled{
    opacity:0.6;
    cursor:wait;
    transform:none;
}

#bai-2 .db-thanh-thong-tin{
    display:flex;
    justify-content:space-between;
    gap:15px;
    margin:25px 0 20px;
    color:#8291A9;
    font-size:14px;
}

#bai-2 #db-thong-bao{
    color:#790D16;
    font-size:14px;
    margin-bottom:15px;
}

#bai-2 #db-thong-bao:empty{
    display:none;
}

#bai-2 .db-danh-sach{
    display:grid;
    grid-template-columns:repeat(5,minmax(0,1fr));
    gap:16px;
}

#bai-2 .db-the{
    position:relative;
    display:flex;
    flex-direction:column;
    align-items:center;
    min-width:0;
    min-height:320px;
    padding:22px 12px 18px;
    background:white;
    border:1px solid #E5D3AF;
    border-radius:10px;
    text-align:center;
    cursor:pointer;
    transition:0.3s;
}

#bai-2 .db-the:hover,
#bai-2 .db-the:focus-visible{
    border-color:#790D16;
    transform:translateY(-5px);
    box-shadow:0 9px 22px rgba(121,13,22,0.15);
    outline:none;
}


#bai-2 .db-ma-nuoc{
    position:absolute;
    top:12px;
    right:12px;
    min-width:45px;
    height:35px;
    padding:5px 10px;
    display:flex;
    align-items:center;
    justify-content:center;
    background:#F5EFE1;
    color:#790D16;
    border:1px solid #E5D3AF;
    border-radius:10px;
    font-size:13px;
    font-weight:bold;
}


#bai-2 .db-anh{
    width:100px;
    height:100px;
    margin:0 auto 18px;
    flex-shrink:0;
}

#bai-2 .db-anh img{
    width:100%;
    height:100%;
    display:block;
    object-fit:cover;
    border:3px solid #AEC4D4;
    border-radius:50%;
}

#bai-2 .db-the h3{

    max-width:100%;
    min-height:2.8em;
    margin-bottom:8px;

    color:#271F2A;
    font-family:var(--font-body);
    font-size:16px;
    font-weight:700;
    line-height:1.4;

    display:-webkit-box;
    -webkit-box-orient:vertical;
    -webkit-line-clamp:2;
    line-clamp: 2;

    white-space:normal;
    overflow:hidden;
    overflow-wrap:anywhere;
}


#bai-2 .db-tuoi{
    max-width:100%;
    margin-bottom:15px;
    color:#91A0B9;
    font-size:var(--text-xs);
    white-space:nowrap;
    overflow:hidden;
    text-overflow:ellipsis;
}

#bai-2 .db-email{
    width:100%;
    display:flex;
    align-items:center;
    gap:7px;
    padding:8px;
    background:#F5EFE1;
    border:1px solid #E5D3AF;
    border-radius:10px;
}

#bai-2 .db-email > img{
    width:17px;
    height:17px;
    object-fit:contain;
    flex-shrink:0;
}

#bai-2 .db-email > span{
    min-width:0;
    flex:1;
    color:#475A73;
    font-size:11px;
    white-space:nowrap;
    overflow:hidden;
    text-overflow:ellipsis;
    text-align:left;
}

#bai-2 .db-sao-chep{
    width:26px;
    height:26px;
    display:flex;
    align-items:center;
    justify-content:center;
    flex-shrink:0;
    padding:5px;
    border:1px solid transparent;
    border-radius:7px;
    background:transparent;
    transition:0.2s;
}

#bai-2 .db-sao-chep img{
    width:16px;
    height:16px;
    object-fit:contain;
}

#bai-2 .db-sao-chep:hover,
#bai-2 .db-sao-chep.da-chep{
    background:#E5D3AF;
    border-color:#D4B990;
}

#bai-2 .db-quoc-gia{
    width:100%;
    display:flex;
    align-items:center;
    justify-content:center;
    gap:8px;
    margin-top:auto;
    padding:15px 0;
    border-bottom:1px solid #E5D3AF;
    color:#475A73;
    font-size:13px;
}

#bai-2 .db-quoc-gia img{
    width:17px;
    height:17px;
    object-fit:contain;
    flex-shrink:0;
}

#bai-2 .db-quoc-gia span{
    overflow:hidden;
    text-overflow:ellipsis;
    white-space:nowrap;
}

#bai-2 .db-chi-tiet{
    display:flex;
    justify-content:center;
    align-items:center;
    gap:7px;
    padding:13px 5px 0;
    background:transparent;
    border:none;
    color:#790D16;
    font-size:13px;
    cursor:pointer;
}

#bai-2 .db-chi-tiet img{
    width:17px;
    height:17px;
    object-fit:contain;
}

#bai-2 .db-chi-tiet span{
    text-decoration:none;
}

#bai-2 .db-chi-tiet:hover span,
#bai-2 .db-chi-tiet:focus-visible span{
    text-decoration:underline;
    text-underline-offset:4px;
}

#bai-2 .db-khong-co{
    grid-column:1/-1;
    padding:40px;
    background:white;
    border:1px solid #E5D3AF;
    border-radius:10px;
    text-align:center;
}

#bai-2 .db-ghi-chu{
    margin-top:25px;
    color:#817775;
    font-size:12px;
}

#bai-2 .db-modal{
    position:fixed;
    inset:0;
    z-index:2000;
    display:flex;
    justify-content:center;
    align-items:center;
    padding:18px;
    background:rgba(24,20,34,0.65);
    backdrop-filter:blur(7px);
    -webkit-backdrop-filter:blur(7px);
}

#bai-2 .db-modal[hidden]{
    display:none;
}

#bai-2 .db-hop-thoai{
    position:relative;
    width:100%;
    max-width:530px;
    max-height:90vh;
    overflow-y:auto;
    padding:32px;
    background:white;
    border:1px solid #E5D3AF;
    border-radius:10px;
    box-shadow:0 15px 45px rgba(0,0,0,0.3);
}

#bai-2 .db-nut-dong{
    position:absolute;
    top:12px;
    right:12px;
    width:32px;
    height:32px;
    padding:6px;
    border:none;
    border-radius:10px;
    background:transparent;
}

#bai-2 .db-nut-dong img{
    width:100%;
    height:100%;
    object-fit:contain;
}

#bai-2 .db-nut-dong:hover{
    background:#F5EFE1;
}

#bai-2 .db-modal-dau{
    text-align:center;
    margin-bottom:25px;
}

#bai-2 .db-modal-dau img{
    width:110px;
    height:110px;
    object-fit:cover;
    border:4px solid #AEC4D4;
    border-radius:50%;
    margin-bottom:15px;
}

#bai-2 .db-modal-dau h3{
    color:#261F2A;
    font-size:24px;
    margin-bottom:8px;
}

#bai-2 .db-modal-dau p{
    color:#8291A9;
    font-size:13px;
}

#bai-2 .db-hang-modal{
    display:flex;
    justify-content:space-between;
    align-items:flex-start;
    gap:15px;
    padding:15px;
    margin-bottom:10px;
    background:#F5EFE1;
    border:1px solid #E5D3AF;
    border-radius:10px;
    font-size:13px;
}

#bai-2 .db-hang-nhan{
    display:flex;
    align-items:center;
    gap:9px;
    flex-shrink:0;
    color:#697388;
}

#bai-2 .db-hang-nhan img{
    width:18px;
    height:18px;
    object-fit:contain;
}

#bai-2 .db-hang-modal strong{
    color:#302C38;
    text-align:right;
    overflow-wrap:anywhere;
}

#bai-2 .db-cuoi-modal{
    display:flex;
    justify-content:flex-end;
    padding-top:18px;
    margin-top:22px;
    border-top:1px solid #E5D3AF;
}

#bai-2 #db-dong-duoi{
    padding:11px 20px;
    background:#F5EFE1;
    border:1px solid #E5D3AF;
    border-radius:10px;
    color:#790D16;
    transition:0.2s;
}

#bai-2 #db-dong-duoi:hover{
    background:#E5D3AF;
}

body.db-khoa-cuon{
    overflow:hidden;
}


/*-------------------------------------kết thúc danh bạ------------------------------*/


/*đăng kí cư trú -------------------------------------------------------------------*/

body.dang-xem-cu-tru #trang-bai{
    position:relative;
    width:100%;
    max-width:none;
    margin:0;
}


#bai-3{
    width:100%;
    min-height:100vh;
    padding:90px 4% 55px;   
    background: url("image/nendanhba.jpg") center/cover no-repeat fixed;
    border:0;
    border-radius:0;
    box-shadow:none;
    font-family:var(--font-body);
    color:var(--text-color);
}

#bai-3 .ct-noi-dung{
    max-width:1450px;
    margin:auto;
}


body.dang-xem-cu-tru #trang-bai{
    width:100%;
    max-width:none;
    margin:0;
    padding:0;
}


body.dang-xem-cu-tru #bai-3{
    padding:0 0 32px;
}

body.dang-xem-cu-tru #bai-3 .ct-noi-dung{
    padding:0 12px;
}


/* banner bài 3 */


#bai-3 .ct-banner{
    width:100%;
    min-height:230px;
    margin:0 0 30px;
    padding:30px 4%;
    display:flex;
    align-items:center;
    gap:28px;

    background-color:#3153249b;
    background-image:url("image/nenbannerbai3.jpg");
    background-size:cover;
    background-position:center;
    background-repeat:no-repeat;

    border:none;
    border-radius:0;
    overflow:hidden;
}


#bai-3 .ct-nguon{
    display:none;
}

#bai-3 #ct-api-thong-bao.ct-loi-api{
    display:block;
    width:100%;
    margin-top:8px;
    padding:9px 12px;

    color:var(--main-color);
    background:#FFF0F0;

    border:1px solid #E5B4B9;
    border-radius:var(--border-radius);

    font-size:13px;
    line-height:1.5;
}

#bai-3 .ct-banner-anh{
    width:100px;
    height:105px;
    flex-shrink:0;

    display:flex;
    align-items:center;
    justify-content:center;

    border-radius:50%;
    background:rgba(255,255,255,0.22);
    overflow:hidden;

    box-shadow:0 4px 15px rgba(0,0,0,0.2);
    transition:transform 0.3s ease;
}

#bai-3 .ct-banner-anh:hover{
    transform:scale(1.06);
}

#bai-3 .ct-banner-anh img{
    width:100%;
    height:100%;
    display:block;
    object-fit:cover;
}

#bai-3 .ct-banner-chu{
    min-width:0;
}

#bai-3 .ct-banner-chu p{
    margin-bottom:12px;
    font-size:13px;
    font-weight:600;
    letter-spacing:1.4px;
    color:#F1E5C9;
}

#bai-3 .ct-banner-chu h1{
    margin:0;
    padding:0;
    color:white;
    font-size:clamp(23px,3vw,32px);
    font-family:Georgia,"Times New Roman",serif;
    font-weight:bold;
    line-height:1.3;
    text-align:left;
    text-shadow:0 2px 6px rgba(0,0,0,0.2);
}
#bai-3 .ct-khung{
    margin-bottom:26px;
    padding:30px;
    background:var(--box-color);
    border:1px solid var(--second-color);
    border-radius:var(--border-radius);
    box-shadow:0 3px 12px rgba(0,0,0,0.05);
    transition:box-shadow 0.25s;
}

#bai-3 .ct-khung:hover{
    box-shadow:0 8px 25px rgba(121,13,22,0.09);
}

#bai-3 .ct-dau-khung{
    display:flex;
    justify-content:space-between;
    align-items:center;
    gap:16px;
    padding-bottom:17px;
    margin-bottom:24px;
    border-bottom:1px solid var(--second-color);
}

#bai-3 .ct-tieu-de{
    display:flex;
    align-items:center;
    gap:12px;
    min-width:0;
}

#bai-3 .ct-tieu-de h2,
#bai-3 .ct-tieu-de h3{
    font-size:20px;
    margin:0;
    color:#201E29;
    line-height:1.35;
}

#bai-3 .ct-dau-khung small{
    color:#8694AA;
    font-size:12px;
    text-align:right;
}

#bai-3 .ct-so{
    display:flex;
    align-items:center;
    justify-content:center;
    width:34px;
    height:36px;
    flex-shrink:0;
    border-radius:var(--border-radius);
    background:var(--main-color);
    color:white;
    font-size:15px;
    font-weight:bold;
}

#bai-3 .ct-so-xanh{
    background:var(--blue-color);
    color:#213246;
}

#bai-3 .ct-dau-phu{
    margin-top:34px;
}

/* form----- */

#bai-3 .ct-luoi{
    display:grid;
    grid-template-columns:repeat(3,minmax(0,1fr));
    gap:20px;
}

#bai-3 .ct-luoi-dia-chi{
    grid-template-columns:repeat(6,minmax(0,1fr));
}

#bai-3 .ct-luoi-dia-chi .ct-truong:nth-child(1),
#bai-3 .ct-luoi-dia-chi .ct-truong:nth-child(2){
    grid-column:span 3;
}

#bai-3 .ct-luoi-dia-chi .ct-truong:nth-child(3){
    grid-column:span 4;
}

#bai-3 .ct-luoi-dia-chi .ct-truong:nth-child(4){
    grid-column:span 2;
}

#bai-3 .ct-truong{
    min-width:0;
    display:flex;
    flex-direction:column;
    gap:8px;
}

#bai-3 .ct-truong label,
#bai-3 .ct-nhom-loai legend{
    font-size:13px;
    letter-spacing:0.6px;
    text-transform:uppercase;
    font-weight:700;
    color:#46516A;
    line-height:1.55;
}

#bai-3 .ct-truong input,
#bai-3 .ct-truong select{
    width:100%;
    height:50px;
    padding:0 16px;
    border:1px solid var(--second-color);
    border-radius:var(--border-radius);
    outline:none;
    background:#FAF7F0;
    color:#253047;
    font-size:15px;
    font-family:inherit;
    transition:background 0.25s,border-color 0.25s,
               box-shadow 0.25s,transform 0.25s;
}

#bai-3 .ct-truong input:hover,
#bai-3 .ct-truong select:hover{
    background:white;
    border-color:#C9AEB2;
}

#bai-3 .ct-truong input:focus,
#bai-3 .ct-truong select:focus{
    background:white;
    border-color:var(--main-color);
    box-shadow:0 0 0 3px rgba(121,13,22,0.1);
}

#bai-3 .ct-truong input::placeholder{
    color:#9B9CAD;
}

#bai-3 .ct-truong select:disabled{
    cursor:not-allowed;
    opacity:0.65;
}

#bai-3 .ct-chon{
    position:relative;
}

#bai-3 .ct-chon select{
    appearance:none;
    -webkit-appearance:none;
    padding-right:42px;
    cursor:pointer;
}

#bai-3 .ct-chon img{
    position:absolute;
    top:50%;
    right:15px;
    transform:translateY(-50%);
    width:15px;
    height:15px;
    object-fit:contain;
    pointer-events:none;
}

#bai-3 .ct-nguon{
    font-size:11px;
    line-height:1.5;
    color:#8894AC;
}


#bai-3 .ct-nhom-loai{
    padding:0;
    margin:0 0 22px;
    border:0;
    min-width:0;
}

#bai-3 .ct-nhom-loai legend{
    margin-bottom:10px;
}

#bai-3 .ct-lua-chon{
    display:grid;
    grid-template-columns:repeat(3,minmax(0,1fr));
    gap:12px;
}

#bai-3 .ct-radio{
    display:flex;
    align-items:center;
    gap:10px;
    min-height:50px;
    padding:10px 13px;
    border:1px solid var(--second-color);
    border-radius:var(--border-radius);
    background:#FAF7F0;
    color:#455069;
    font-size:13px;
    line-height:1.5;
    cursor:pointer;
    transition:0.25s;
}

#bai-3 .ct-radio input{
    accent-color:var(--main-color);
    width:16px;
    height:16px;
    flex-shrink:0;
}

#bai-3 .ct-radio:hover{
    transform:translateY(-2px);
    background:white;
    border-color:var(--main-color);
    box-shadow:0 4px 12px rgba(121,13,22,0.09);
}

#bai-3 .ct-radio:has(input:checked){
    background:#F4ECDE;
    border-color:var(--main-color);
    color:var(--main-color);
    font-weight:600;
}


#bai-3 .ct-cuoi-form{
    display:flex;
    justify-content:space-between;
    align-items:center;
    gap:14px;
    margin-top:28px;
    flex-wrap:wrap;
}

#bai-3 .ct-nhom-nut{
    display:flex;
    gap:12px;
    align-items:center;
    margin-left:auto;
}

#bai-3 .ct-nut-chinh,
#bai-3 .ct-nut-phu,
#bai-3 .ct-thu-lai{
    display:inline-flex;
    align-items:center;
    justify-content:center;
    gap:9px;
    min-height:46px;
    padding:11px 18px;
    border-radius:var(--border-radius);
    font-family:inherit;
    font-weight:700;
    font-size:14px;
    transition:transform 0.25s,box-shadow 0.25s,
               background 0.25s;
}

#bai-3 .ct-nut-chinh{
    border:1px solid var(--main-color);
    background:var(--main-color);
    color:white;
    box-shadow:0 4px 12px rgba(121,13,22,0.16);
}

#bai-3 .ct-nut-phu,
#bai-3 .ct-thu-lai{
    border:1px solid var(--second-color);
    background:white;
    color:var(--main-color);
}

#bai-3 .ct-nut-chinh:hover,
#bai-3 .ct-nut-phu:hover,
#bai-3 .ct-thu-lai:hover{
    transform:translateY(-3px);
    box-shadow:0 6px 16px rgba(121,13,22,0.17);
}


#bai-3 .ct-nut-chinh img{
    width:18px;
    height:18px;
    object-fit:contain;
    filter:brightness(0) invert(1);
}

#bai-3 .ct-thu-lai img{
    width:18px;
    height:18px;
    object-fit:contain;
    filter:brightness(0);
}


#bai-3 .ct-thu-lai{
    margin-top:16px;
}

#bai-3 .ct-thu-lai[hidden]{
    display:none;
}

#bai-3 #ct-thong-bao-form{
    font-size:13px;
    color:var(--main-color);
}

/* DANH SACH HO SO */

#bai-3 .ct-icon-tieu-de{
    width:25px;
    height:25px;
    object-fit:contain;
    flex-shrink:0;
}

#bai-3 .ct-khung-danh-sach .ct-tieu-de p{
    margin-top:4px;
    color:#8590A6;
    font-size:13px;
}

#bai-3 .ct-bang-cuon{
    width:100%;
    overflow-x:auto;
}

#bai-3 .ct-bang{
    width:100%;
    min-width:950px;
    border-collapse:collapse;
    font-size:13px;
    text-align:left;
}

#bai-3 .ct-bang th{
    padding:17px 13px;
    background:var(--bg-color);
    border-top:1px solid var(--second-color);
    border-bottom:1px solid var(--second-color);
    color:var(--main-color);
    text-transform:uppercase;
    font-size:12px;
}

#bai-3 .ct-bang td{
    padding:18px 13px;
    border-bottom:1px solid #EDE6DA;
    vertical-align:middle;
    max-width:255px;
}

#bai-3 .ct-bang tbody tr{
    transition:background 0.25s;
}

#bai-3 .ct-bang tbody tr:hover{
    background:#FCF7ED;
}

#bai-3 .ct-bang .ct-ma{
    color:var(--main-color);
    font-weight:700;
    white-space:nowrap;
}

#bai-3 .ct-bang .ct-nguoi strong{
    display:block;
    color:#252535;
    margin-bottom:6px;
    font-size:14px;
}

#bai-3 .ct-bang .ct-nguoi small{
    display:block;
    color:#8A95A9;
    font-size:12px;
}

#bai-3 .ct-bang .ct-dia-chi{
    max-width:235px;
    white-space:nowrap;
    overflow:hidden;
    text-overflow:ellipsis;
}

#bai-3 .ct-bang .ct-thoi-gian{
    color:#8490A5;
    white-space:nowrap;
}

#bai-3 .ct-the-loai{
    display:inline-block;
    padding:7px 10px;
    background:#F3EDDF;
    color:var(--main-color);
    border-radius:10px;
    white-space:nowrap;
}

#bai-3 .ct-trang-thai{
    display:inline-block;
    padding:7px 10px;
    border-radius:10px;
    background:#EAF0F1;
    color:#375B54;
    font-weight:600;
    white-space:nowrap;
}

#bai-3 .ct-thao-tac{
    display:flex;
    gap:8px;
    justify-content:flex-end;
}

#bai-3 .ct-thao-tac button{
    width:36px;
    height:36px;
    display:flex;
    align-items:center;
    justify-content:center;
    padding:7px;
    background:#F6F0E4;
    border:0;
    border-radius:var(--border-radius);
    transition:0.25s;
}

#bai-3 .ct-thao-tac button:hover{
    background:#E9D8C2;
    transform:translateY(-3px);
    box-shadow:0 4px 10px rgba(0,0,0,0.1);
}

#bai-3 .ct-thao-tac img{
    width:20px;
    height:20px;
    object-fit:contain;
    
}

#bai-3 .ct-trong{
    text-align:center;
    padding:28px 10px!important;
    color:#8992A4;
}

#bai-3 .ct-ghi-chu{
    font-size:12px;
    color:#9198A6;
    margin-top:17px;
}


#bai-3 .ct-modal{
    position:fixed;
    inset:0;
    z-index:3000;
    display:flex;
    justify-content:center;
    align-items:center;
    padding:18px;
    background:rgba(29,30,44,0.64);
    backdrop-filter:blur(6px);
    -webkit-backdrop-filter:blur(6px);
}

#bai-3 .ct-modal[hidden]{
    display:none;
}

body.ct-khoa-cuon{
    overflow:hidden;
}

#bai-3 .ct-hop-modal{
    position:relative;
    width:100%;
    max-width:560px;
    max-height:92vh;
    overflow-y:auto;
    padding:32px 28px 23px;
    background:white;
    border:1px solid var(--second-color);
    border-radius:var(--border-radius);
    box-shadow:0 16px 50px rgba(0,0,0,0.25);
}

#bai-3 .ct-nut-dong{
    position:absolute;
    top:14px;
    right:15px;
    display:flex;
    align-items:center;
    justify-content:center;
    width:30px;
    height:30px;
    padding:6px;
    background:#F7F4EE;
    border:0;
    border-radius:10px;
    transition:0.25s;
}

#bai-3 .ct-nut-dong:hover{
    transform:rotate(90deg);
    background:#F0E2DA;
}

#bai-3 .ct-nut-dong img{
    width:16px;
    height:16px;
    object-fit:contain;
}

#bai-3 .ct-modal-cuoi{
    display:flex;
    justify-content:flex-end;
    margin-top:20px;
}

#bai-3 .ct-modal-kieu{
    padding:0 20px;
    text-align:center;
    font-size:12px;
    color:#8090A4;
    font-weight:700;
    letter-spacing:0.4px;
}

#bai-3 .ct-modal-tieu-de{
    margin:10px 0;
    color:#202537;
    text-align:center;
    font-size:20px;
    line-height:1.4;
}

#bai-3 .ct-modal-phu{
    font-size:12px;
    text-align:center;
    color:var(--main-color);
    margin-bottom:18px;
}

/* thẻ mô phỏng */

#bai-3 .ct-the-giay{
    margin-top:12px;
    padding:20px;
    border:1px solid #D1C379;
    border-radius:var(--border-radius);
    background:linear-gradient(120deg,#FFF6D3,#E0EDF8,#EFF0FA);
}

#bai-3 .ct-the-giay h4{
    text-align:center;
    color:#344B88;
    font-size:15px;
    letter-spacing:1px;
    margin-bottom:18px;
}

#bai-3 .ct-the-noi-dung{
    display:flex;
    gap:15px;
    align-items:flex-start;
}

#bai-3 .ct-anh-giay{
    flex:0 0 90px;
    height:116px;
    background:#E9EDF2;
    border:1px solid #D4DBE7;
    border-radius:10px;
    display:flex;
    align-items:center;
    justify-content:center;
    color:#9EAABA;
    font-weight:700;
    font-size:12px;
    text-align:center;
}

#bai-3 .ct-the-thong-tin{
    min-width:0;
    flex:1;
    font-size:12px;
    line-height:1.6;
    overflow-wrap:anywhere;
}

#bai-3 .ct-the-thong-tin strong{
    color:#1F304D;
}

#bai-3 .ct-the-thong-tin p{
    margin-bottom:7px;
    line-height:1.5;
}

#bai-3 .ct-phieu-hang{
    display:flex;
    justify-content:space-between;
    align-items:flex-start;
    gap:16px;
    padding:11px 0;
    border-bottom:1px solid #EDF0F4;
    font-size:13px;
}

#bai-3 .ct-phieu-hang span{
    color:#8992A8;
    flex-shrink:0;
}

#bai-3 .ct-phieu-hang strong{
    text-align:right;
    overflow-wrap:anywhere;
    color:#273044;
}

#bai-3 .ct-phieu-hang.ct-hang-dia-chi{
    display:block;
}

#bai-3 .ct-phieu-hang.ct-hang-dia-chi strong{
    display:block;
    text-align:left;
    margin-top:8px;
}

#bai-3 .ct-phan-biet{
    font-size:11px;
    color:#9A7780;
    text-align:center;
    margin-top:16px;
}

/*-------------------------------------kết thúc đăng kí------------------------------*/
/* bài 4 dự báo thời tiết----------------------------------------------------------------------------------*/

body.dang-xem-thoi-tiet #trang-bai{
    width:100%;
    max-width:none;
    margin:0;
    position:relative;
}

#bai-4{
    --tt-chu:#FFFFFF;
    --tt-phu:#DDE8FA;
    --tt-kinh:rgba(78,104,157,0.28);
    --tt-vien:rgba(207,223,255,0.28);

    position:relative;
    isolation:isolate;
    overflow:hidden;
    width:100%;
    min-height:100vh;
    padding:88px 4% 50px;

    border:0;
    border-radius:0;
    box-shadow:none;

    font-family:var(--font-body);
    color:var(--tt-chu);
    background-color:#101F41;
    background-image:
        linear-gradient(145deg,rgba(10,23,49,.86),rgba(28,50,98,.72)),
        url("image/tt-dem.jpg");
    background-size:cover;
    background-position:center;
}

#bai-4.tt-nang{
    --tt-chu:#203751;
    --tt-phu:#405771;
    --tt-kinh:rgba(255,255,255,.52);
    --tt-vien:rgba(255,255,255,.76);

    background-color:#A8D4EA;
    background-image:
        linear-gradient(155deg,rgba(182,222,243,.50),rgba(248,235,201,.62)),
        url("image/tt-nang.jpg");
}

#bai-4.tt-may{
    background-color:#304D78;
    background-image:
        linear-gradient(140deg,rgba(25,47,80,.74),rgba(70,91,137,.56)),
        url("image/tt-may.jpg");
}

#bai-4.tt-mua{
    background-color:#293C58;
    background-image:
        linear-gradient(140deg,rgba(18,31,56,.82),rgba(52,76,105,.68)),
        url("image/tt-mua.jpg");
}

#bai-4.tt-dem{
    background-color:#101F41;
    background-image:
        linear-gradient(145deg,rgba(10,23,49,.86),rgba(28,50,98,.72)),
        url("image/tt-dem.jpg");
}

#bai-4::after{
    content:"";
    position:absolute;
    left:0;
    bottom:0;
    width:100%;
    height:150px;
    background:rgba(7,22,54,.30);
    pointer-events:none;
    z-index:0;
    clip-path:polygon(
        0 64%,13% 24%,23% 68%,38% 13%,
        51% 75%,64% 22%,77% 66%,90% 16%,
        100% 63%,100% 100%,0 100%
    );
}

#bai-4 .tt-hieu-ung-mua{
    position:absolute;
    inset:0;
    z-index:0;
    pointer-events:none;
    opacity:0;
    overflow:hidden;
    transition:opacity .7s ease;
}

#bai-4.tt-co-mua .tt-hieu-ung-mua{
    opacity:1;
}

#bai-4 .tt-hieu-ung-mua::before,
#bai-4 .tt-hieu-ung-mua::after{
    content:"";
    position:absolute;
    top:0;
    left:0;
    border-radius:2px;
    pointer-events:none;
    will-change:transform;
}

#bai-4 .tt-hieu-ung-mua::before{
    width:1px;
    height:13px;
    background:rgba(224,240,255,.25);
    box-shadow:
        32.26vw 54.52vh 0 0 rgba(224,240,255,0.15),
        57.30vw 91.75vh 0 0 rgba(224,240,255,0.20),
        59.51vw 26.14vh 0 0 rgba(224,240,255,0.23),
        68.26vw 174.63vh 0 0 rgba(224,240,255,0.20),
        44.72vw 85.22vh 0 0 rgba(224,240,255,0.14),
        27.84vw 174.22vh 0 0 rgba(224,240,255,0.14),
        98.91vw 156.88vh 0 0 rgba(224,240,255,0.20),
        78.58vw 184.03vh 0 0 rgba(224,240,255,0.28),
        75.14vw 38.48vh 0 0 rgba(224,240,255,0.30),
        84.77vw 193.63vh 0 0 rgba(224,240,255,0.20),
        15.71vw 173.80vh 0 0 rgba(224,240,255,0.19),
        73.22vw 104.66vh 0 0 rgba(224,240,255,0.19),
        85.08vw 187.53vh 0 0 rgba(224,240,255,0.24),
        82.41vw 114.73vh 0 0 rgba(224,240,255,0.27),
        98.70vw 31.62vh 0 0 rgba(224,240,255,0.20),
        24.52vw 203.76vh 0 0 rgba(224,240,255,0.16),
        47.65vw 92.57vh 0 0 rgba(224,240,255,0.24),
        36.45vw 5.70vh 0 0 rgba(224,240,255,0.22),
        49.90vw 74.50vh 0 0 rgba(224,240,255,0.20),
        66.62vw 199.67vh 0 0 rgba(224,240,255,0.22),
        89.76vw 200.97vh 0 0 rgba(224,240,255,0.23),
        83.44vw 27.71vh 0 0 rgba(224,240,255,0.21),
        98.41vw 14.70vh 0 0 rgba(224,240,255,0.19),
        15.98vw 94.97vh 0 0 rgba(224,240,255,0.18),
        31.37vw 55.27vh 0 0 rgba(224,240,255,0.14),
        53.01vw 184.34vh 0 0 rgba(224,240,255,0.27),
        54.58vw 169.02vh 0 0 rgba(224,240,255,0.20),
        76.72vw 7.90vh 0 0 rgba(224,240,255,0.27),
        13.60vw 176.62vh 0 0 rgba(224,240,255,0.19),
        50.15vw 21.81vh 0 0 rgba(224,240,255,0.25),
        48.26vw 168.48vh 0 0 rgba(224,240,255,0.16),
        69.66vw 62.83vh 0 0 rgba(224,240,255,0.15),
        25.09vw 110.60vh 0 0 rgba(224,240,255,0.24),
        64.06vw 84.26vh 0 0 rgba(224,240,255,0.29),
        40.22vw 103.08vh 0 0 rgba(224,240,255,0.26),
        54.45vw 156.52vh 0 0 rgba(224,240,255,0.15),
        66.83vw 174.83vh 0 0 rgba(224,240,255,0.20),
        94.54vw 200.55vh 0 0 rgba(224,240,255,0.19),
        97.68vw 155.59vh 0 0 rgba(224,240,255,0.23),
        91.24vw 58.86vh 0 0 rgba(224,240,255,0.16),
        36.77vw 98.80vh 0 0 rgba(224,240,255,0.17),
        54.36vw 43.07vh 0 0 rgba(224,240,255,0.25),
        8.35vw 59.01vh 0 0 rgba(224,240,255,0.24),
        36.27vw 45.61vh 0 0 rgba(224,240,255,0.31),
        68.02vw 51.75vh 0 0 rgba(224,240,255,0.22),
        33.08vw 137.40vh 0 0 rgba(224,240,255,0.24),
        40.72vw 6.78vh 0 0 rgba(224,240,255,0.28),
        75.81vw 110.27vh 0 0 rgba(224,240,255,0.18),
        17.81vw 51.78vh 0 0 rgba(224,240,255,0.24),
        4.97vw 151.60vh 0 0 rgba(224,240,255,0.22),
        44.45vw 119.03vh 0 0 rgba(224,240,255,0.26),
        55.67vw 86.81vh 0 0 rgba(224,240,255,0.21),
        75.23vw 81.09vh 0 0 rgba(224,240,255,0.30),
        70.05vw 134.97vh 0 0 rgba(224,240,255,0.19),
        8.29vw 59.68vh 0 0 rgba(224,240,255,0.29),
        61.46vw 199.08vh 0 0 rgba(224,240,255,0.26),
        65.59vw 79.24vh 0 0 rgba(224,240,255,0.31),
        7.43vw 68.90vh 0 0 rgba(224,240,255,0.31),
        54.34vw 109.88vh 0 0 rgba(224,240,255,0.31),
        70.18vw 131.20vh 0 0 rgba(224,240,255,0.27),
        77.31vw 86.37vh 0 0 rgba(224,240,255,0.19),
        6.78vw 62.61vh 0 0 rgba(224,240,255,0.24),
        78.24vw 77.97vh 0 0 rgba(224,240,255,0.17),
        60.55vw 139.47vh 0 0 rgba(224,240,255,0.23),
        3.53vw 58.38vh 0 0 rgba(224,240,255,0.13),
        97.18vw 55.62vh 0 0 rgba(224,240,255,0.26),
        70.34vw 13.20vh 0 0 rgba(224,240,255,0.22),
        93.82vw 152.12vh 0 0 rgba(224,240,255,0.15),
        38.04vw 171.30vh 0 0 rgba(224,240,255,0.25),
        11.84vw 177.38vh 0 0 rgba(224,240,255,0.30),
        28.73vw 87.67vh 0 0 rgba(224,240,255,0.31),
        69.49vw 115.51vh 0 0 rgba(224,240,255,0.20),
        49.49vw 126.33vh 0 0 rgba(224,240,255,0.15),
        83.35vw 9.12vh 0 0 rgba(224,240,255,0.22),
        8.98vw 90.35vh 0 0 rgba(224,240,255,0.30),
        32.95vw 101.91vh 0 0 rgba(224,240,255,0.19),
        80.87vw 151.95vh 0 0 rgba(224,240,255,0.21),
        55.12vw 158.01vh 0 0 rgba(224,240,255,0.26),
        80.67vw 61.35vh 0 0 rgba(224,240,255,0.19),
        96.19vw 117.05vh 0 0 rgba(224,240,255,0.26);
    filter:blur(.45px);
    animation:ttMuaXa 1.75s linear infinite;
}

#bai-4 .tt-hieu-ung-mua::after{
    width:1.5px;
    height:23px;
    background:rgba(224,240,255,.4);
    box-shadow:
        97.92vw 54.23vh 0 0 rgba(224,240,255,0.34),
        54.00vw 100.67vh 0 0 rgba(224,240,255,0.32),
        68.66vw 166.49vh 0 0 rgba(224,240,255,0.46),
        29.34vw 85.14vh 0 0 rgba(224,240,255,0.25),
        16.75vw 116.91vh 0 0 rgba(224,240,255,0.28),
        55.24vw 120.46vh 0 0 rgba(224,240,255,0.39),
        13.40vw 174.96vh 0 0 rgba(224,240,255,0.29),
        59.45vw 103.26vh 0 0 rgba(224,240,255,0.43),
        5.56vw 111.05vh 0 0 rgba(224,240,255,0.42),
        42.31vw 146.47vh 0 0 rgba(224,240,255,0.38),
        74.63vw 125.45vh 0 0 rgba(224,240,255,0.29),
        45.80vw 163.95vh 0 0 rgba(224,240,255,0.36),
        72.63vw 7.85vh 0 0 rgba(224,240,255,0.34),
        41.21vw 94.76vh 0 0 rgba(224,240,255,0.46),
        67.19vw 148.21vh 0 0 rgba(224,240,255,0.27),
        18.03vw 198.13vh 0 0 rgba(224,240,255,0.40),
        76.71vw 193.93vh 0 0 rgba(224,240,255,0.27),
        99.16vw 16.44vh 0 0 rgba(224,240,255,0.45),
        30.51vw 154.40vh 0 0 rgba(224,240,255,0.25),
        30.23vw 16.75vh 0 0 rgba(224,240,255,0.41),
        92.31vw 122.36vh 0 0 rgba(224,240,255,0.40),
        30.69vw 134.02vh 0 0 rgba(224,240,255,0.40),
        80.73vw 113.44vh 0 0 rgba(224,240,255,0.43),
        94.37vw 200.20vh 0 0 rgba(224,240,255,0.27),
        63.33vw 172.16vh 0 0 rgba(224,240,255,0.24),
        28.77vw 142.97vh 0 0 rgba(224,240,255,0.27),
        15.18vw 187.40vh 0 0 rgba(224,240,255,0.28),
        30.49vw 82.13vh 0 0 rgba(224,240,255,0.33),
        46.24vw 58.32vh 0 0 rgba(224,240,255,0.45),
        43.14vw 142.16vh 0 0 rgba(224,240,255,0.26),
        11.31vw 114.92vh 0 0 rgba(224,240,255,0.34),
        71.45vw 163.43vh 0 0 rgba(224,240,255,0.25),
        78.49vw 198.88vh 0 0 rgba(224,240,255,0.26),
        8.95vw 199.59vh 0 0 rgba(224,240,255,0.30),
        95.53vw 87.07vh 0 0 rgba(224,240,255,0.36),
        30.17vw 88.34vh 0 0 rgba(224,240,255,0.41),
        6.61vw 120.54vh 0 0 rgba(224,240,255,0.43),
        39.70vw 195.29vh 0 0 rgba(224,240,255,0.26),
        94.24vw 4.46vh 0 0 rgba(224,240,255,0.28),
        3.60vw 101.75vh 0 0 rgba(224,240,255,0.43),
        36.26vw 184.41vh 0 0 rgba(224,240,255,0.25),
        35.49vw 137.23vh 0 0 rgba(224,240,255,0.40),
        41.40vw 146.26vh 0 0 rgba(224,240,255,0.37);
    filter:blur(.3px);
    animation:ttMuaGan 1.1s linear infinite;
}

@keyframes ttMuaXa{
    from{transform:translate3d(35px,-100vh,0) rotate(8deg);}
    to{transform:translate3d(-35px,0,0) rotate(8deg);}
}

@keyframes ttMuaGan{
    from{transform:translate3d(55px,-100vh,0) rotate(12deg);}
    to{transform:translate3d(-55px,0,0) rotate(12deg);}
}

@media(prefers-reduced-motion:reduce){
    #bai-4 .tt-hieu-ung-mua::before,
    #bai-4 .tt-hieu-ung-mua::after{
        animation:none;
        opacity:0;
    }
}

#bai-4 .tt-noi-dung{
    max-width:none;
    width:100%;
    margin:auto;
    position:relative;
    z-index:1;
}

#bai-4 [hidden]{
    display:none!important;
}

#bai-4 .tt-tieu-de{
    text-align:center;
    margin:0 auto 20px;
}

#bai-4 .tt-tieu-de h2{
    color:var(--tt-chu);
    font-family:var(--font-heading);
    font-size:clamp(28px,3.5vw,36px);
    margin:0 0 7px;
}

#bai-4 .tt-tieu-de p{
    color:var(--tt-phu);
    font-size:14px;
}

#bai-4 .tt-thanh-tim{
    display:grid;
    grid-template-columns:minmax(0,1fr) 170px;
    gap:12px;
    max-width:900px;
    margin:0 auto;
}

#bai-4 .tt-o-tim{
    height:52px;
    display:flex;
    align-items:center;
    gap:12px;
    min-width:0;
    padding:0 15px;
    border:1px solid var(--tt-vien);
    border-radius:var(--border-radius);
    background:var(--tt-kinh);
    backdrop-filter:blur(12px);
}

#bai-4 .tt-o-tim:focus-within{
    border-color:#D5E5FF;
    box-shadow:0 0 0 3px rgba(182,206,255,.18);
}

#bai-4 .tt-o-tim img{
    width:21px;
    height:21px;
    object-fit:contain;
    filter:brightness(0) invert(1);
}

#bai-4.tt-nang .tt-o-tim img{
    filter:brightness(0);
}

#bai-4 .tt-o-tim input{
    width:100%;
    min-width:0;
    height:100%;
    border:0;
    outline:0;
    background:none;
    color:var(--tt-chu);
    font-family:var(--font-body);
    font-size:15px;
}

#bai-4 .tt-o-tim input::placeholder{
    color:var(--tt-phu);
}

#bai-4 .tt-o-tim input::-webkit-search-cancel-button{
    cursor:pointer;
}

#bai-4 #tt-nut-xem{
    display:flex;
    align-items:center;
    justify-content:center;
    gap:9px;
    height:52px;
    padding:0 14px;
    color:#FFFFFF;
    border:0;
    border-radius:var(--border-radius);
    background:linear-gradient(120deg,#767BDA,#6456CC);
    font-weight:700;
    font-size:14px;
    white-space:nowrap;
    transition:.25s;
}

#bai-4 #tt-nut-xem img{
    width:20px;
    height:20px;
    object-fit:contain;
    filter:brightness(0) invert(1);
}

#bai-4 #tt-nut-xem:hover:not(:disabled){
    transform:translateY(-3px);
    box-shadow:0 8px 20px rgba(18,21,72,.3);
}

#bai-4 #tt-nut-xem:disabled{
    opacity:.65;
    cursor:wait;
}

#bai-4 .tt-goi-y{
    display:flex;
    justify-content:center;
    align-items:center;
    flex-wrap:wrap;
    gap:8px;
    margin:13px auto 0;
    font-size:12px;
    color:var(--tt-phu);
}

#bai-4 .tt-goi-y button{
    padding:8px 14px;
    color:var(--tt-chu);
    font-size:13px;
    border:1px solid var(--tt-vien);
    border-radius:var(--border-radius);
    background:var(--tt-kinh);
    transition:.2s;
}

#bai-4 .tt-goi-y button:hover{
    transform:translateY(-2px);
    border-color:var(--tt-chu);
}

#bai-4 .tt-vung-dia-diem{
    max-width:820px;
    margin:14px auto 0;
    font-size:13px;
}

#bai-4 .tt-vung-dia-diem label{
    display:block;
    margin-bottom:7px;
    color:var(--tt-phu);
}

#bai-4 .tt-vung-dia-diem select{
    width:100%;
    min-height:43px;
    padding:8px 12px;
    border:1px solid var(--tt-vien);
    border-radius:var(--border-radius);
    color:var(--tt-chu);
    background:rgba(38,56,100,.72);
    font:inherit;
}

#bai-4 .tt-vung-dia-diem select option{
    background:#243456;
    color:white;
}

#bai-4.tt-nang .tt-vung-dia-diem select{
    background:rgba(255,255,255,.78);
    color:#243456;
}

#bai-4 .tt-thong-bao{
    text-align:center;
    color:var(--tt-phu);
    margin:12px auto 20px;
    min-height:22px;
    font-size:12px;
}

#bai-4 .tt-thong-bao.tt-loi{
    max-width:820px;
    border:1px solid rgba(255,210,210,.55);
    background:rgba(121,13,22,.7);
    color:white;
    border-radius:var(--border-radius);
    padding:9px 12px;
}

#bai-4 .tt-kinh{
    border:1px solid var(--tt-vien);
    border-radius:var(--border-radius);
    background:var(--tt-kinh);
    backdrop-filter:blur(13px);
    -webkit-backdrop-filter:blur(13px);
    box-shadow:0 10px 27px rgba(10,21,46,.16);
}

#bai-4 .tt-hang-tren{
    display:grid;
    grid-template-columns:minmax(0,1.4fr) minmax(0,1fr);
    gap:16px;
    margin-bottom:16px;
}

#bai-4 .tt-thoi-tiet-hien-tai{
    min-height:255px;
    display:flex;
    flex-direction:column;
    align-items:center;
    justify-content:center;
    text-align:center;
    padding:24px 18px;
    background-image:linear-gradient(
        145deg,rgba(137,162,227,.16),transparent
    );
}

#bai-4 .tt-ten-dia-diem{
    display:flex;
    align-items:center;
    justify-content:center;
    gap:7px;
}

#bai-4 .tt-ten-dia-diem img{
    width:18px;
    height:18px;
    object-fit:contain;
    filter:brightness(0) invert(1);
}

#bai-4.tt-nang .tt-ten-dia-diem img{
    filter:brightness(0);
}

#bai-4 .tt-ten-dia-diem h3{
    margin:0;
    color:var(--tt-chu);
    font-family:var(--font-body);
    font-size:17px;
    font-weight:700;
}

#bai-4 .tt-cap-nhat{
    color:var(--tt-phu);
    font-size:11px;
    margin-top:5px;
}

#bai-4 .tt-nhiet-do{
    display:flex;
    align-items:flex-start;
    justify-content:center;
    margin:8px 0 3px;
    line-height:1;
}

#bai-4 .tt-nhiet-do strong{
    font-size:clamp(55px,7vw,76px);
    font-weight:400;
    letter-spacing:-2px;
    color:var(--tt-chu);
}

#bai-4 .tt-nhiet-do span{
    font-size:27px;
    margin-top:8px;
}

#bai-4 .tt-trang-thai{
    display:flex;
    align-items:center;
    justify-content:center;
    gap:10px;
}

#bai-4 .tt-trang-thai img{
    width:39px;
    height:39px;
    object-fit:contain;
}

#bai-4 .tt-trang-thai strong{
    font-size:16px;
}

#bai-4 .tt-cao-thap{
    font-size:12px;
    color:var(--tt-phu);
    margin-top:6px;
}



#bai-4 .tt-thong-so{
    display:grid;
    grid-template-columns:repeat(2,minmax(0,1fr));
    grid-template-rows:repeat(2,minmax(0,1fr));
    gap:14px;
    min-height:255px;
    padding:0;
}



 
#bai-4 .tt-o-thong-so{
    display:grid;
    grid-template-columns:40px minmax(0,1fr);
    align-items:center;
    column-gap:12px;
    min-width:0;
    padding:18px 16px;
    text-align:left;
    transition:transform .3s ease, box-shadow .3s ease;
}

#bai-4 .tt-o-thong-so > div{
    display:flex;
    flex-direction:column;
    align-items:flex-start;
    justify-content:center;
    gap:4px;
    min-width:0;
}

#bai-4 .tt-o-thong-so img{
    width:40px;
    height:40px;
    padding:7px;
    object-fit:contain;
    border-radius:50%;
    background:rgba(215,224,255,.14);
}

#bai-4 .tt-o-thong-so span{
    display:block;
    font-size:13px;
    color:var(--tt-phu);
    line-height:1.4;
}

#bai-4 .tt-o-thong-so strong{
    display:block;
    font-size:21px;
    font-weight:700;
    color:var(--tt-chu);
    line-height:1.3;
    white-space:nowrap;
}

#bai-4 .tt-o-thong-so:hover{
    transform:translateY(-4px);
    box-shadow:0 12px 25px rgba(10,21,46,.22);
}


#bai-4 .tt-hang-duoi{
    display:grid;
    grid-template-columns:repeat(2,minmax(0,1fr));
    gap:16px;
    width:100%;
}

#bai-4 .tt-du-bao-gio,
#bai-4 .tt-du-bao-ngay{
    padding:20px;
    min-width:0;
}

#bai-4 .tt-hang-duoi h3{
    color:var(--tt-chu);
    font-family:var(--font-body);
    font-size:16px;
    margin:0 0 16px;
}


#bai-4 .tt-danh-sach-gio{
    display:grid;
    grid-template-columns:repeat(8,minmax(0,1fr));
    gap:8px;
    width:100%;
    overflow-x:visible;
    padding-bottom:7px;
}


#bai-4 .tt-the-gio{
    display:flex;
    flex-direction:column;
    align-items:center;
    gap:14px;
    min-width:0;
    font-size:12px;
}

#bai-4 .tt-the-gio img{
    width:35px;
    height:35px;
    object-fit:contain;
}

#bai-4 .tt-the-gio strong{
    font-size:14px;
    color:var(--tt-chu);
}


#bai-4 .tt-danh-sach-ngay{
    display:grid;
    grid-template-columns:repeat(5,minmax(0,1fr));
    gap:7px;
    width:100%;
    overflow-x:visible;
    padding-bottom:7px;
}


#bai-4 .tt-the-ngay{
    display:flex;
    flex-direction:column;
    align-items:center;
    justify-content:center;
    gap:7px;
    padding:12px 6px;
    min-width:0;
    border:1px solid rgba(200,215,255,.12);
    border-radius:var(--border-radius);
    background:rgba(184,202,247,.10);
    text-align:center;
    font-size:12px;
}

#bai-4 .tt-the-ngay strong{
    color:var(--tt-chu);
    font-size:13px;
}

#bai-4 .tt-the-ngay span{
    color:var(--tt-phu);
    white-space:nowrap;
}

#bai-4 .tt-the-ngay img{
    width:35px;
    height:35px;
    object-fit:contain;
}

#bai-4 .tt-nguon{
    text-align:center;
    color:var(--tt-phu);
    font-size:11px;
    margin-top:22px;
}

/*-------------------------------------kết thúc đăng kí------------------------------*/


#nut-quay-ve{
    position:fixed;
    top:120px;
    left:20px;
    z-index:900;

    width:50px;
    height:45px;
    padding:10px;

    display:flex;
    align-items:center;
    justify-content:center;

    background:#f5f5f397;
    border:1px solid var(--second-color);
    border-radius:20px;

    box-shadow:0 5px 15px rgba(0,0,0,0.12);
    cursor:pointer;
    transition:0.3s ease;
}

#nut-quay-ve img{
    width:100%;
    height:100%;
    display:block;
    object-fit:contain;
    filter:brightness(0);
}

#nut-quay-ve:hover{
    background:var(--second-color);
    transform:translateX(-4px) scale(1.05);
    box-shadow:0 8px 20px rgba(121,13,22,0.18);
}

#nut-quay-ve:active{
    transform:scale(0.95);
}

#nut-quay-ve:focus-visible{
    outline:3px solid var(--main-color);
    outline-offset:3px;
}



/* nút top -----------------------------//-------------------------*/



#nut-top{
    position:fixed;
    right:25px;
    bottom:25px;
    width:50px;
    height:50px;
    display:flex;
    align-items:center;
    justify-content:center;
    padding:0;
    border:none;
    border-radius:50%;
    background:var(--blue-color);
    box-shadow:0 4px 12px rgba(0,0,0,0.2);
    cursor:pointer;
    z-index:1000;

    opacity:0;
    visibility:hidden;
    pointer-events:none;
    transform:translateY(15px) scale(0.9);
    transition:all 0.3s ease;
}

#nut-top img{
    width:45%;
    height:45%;
    object-fit:contain;
    display:block;
    filter: grayscale(1) invert(1)
}

#nut-top.hien{
    opacity:1;
    visibility:visible;
    pointer-events:auto;
    transform:translateY(0) scale(1);
}

#nut-top.hien:hover{
    background:#344d7f;
    box-shadow:0 10px 25px rgba(0,0,0,0.35);
    transform:translateY(-7px) scale(1.08);
}


/*======================================//====================================================*/

@media(min-width:801px) and (max-width:1100px){

    body.trang-chu .sv-box{
        grid-template-columns:130px minmax(0,1fr);
    }

    body.trang-chu .hero-code-panel{
        display:none;
    }

    #bai-2 .db-thanh-cong-cu{
        grid-template-columns:repeat(2,minmax(0,1fr));
    }

    #bai-2 .db-o-tim,
    #bai-2 #db-lay-moi{
        grid-column:1/-1;
    }

    #bai-2 .db-danh-sach{
        grid-template-columns:repeat(3,minmax(0,1fr));
    }

    #bai-3 .ct-luoi{
        grid-template-columns:repeat(2,minmax(0,1fr));
    }

    #bai-3 .ct-luoi-dia-chi{
        grid-template-columns:repeat(2,minmax(0,1fr));
    }

    #bai-3 .ct-luoi-dia-chi .ct-truong:nth-child(n){
        grid-column:auto;
    }
    #bai-4 .tt-hang-duoi{
    grid-template-columns:1fr;
    }
}


@media(max-width:800px){
    .header-content{
        padding:15px;
    }

    .logo h3{
        font-size:15px;
    }

    .gioi-thieu h1{
        font-size:30px;
    }

    .the-bai.trai,
    .the-bai.phai{
        opacity:0;
        pointer-events:none;
    }

    .nut-trai{
        left:10px;
    }

    .nut-phai{
        right:10px;
    }
    
    
    body.trang-chu .header-content{
        width:94%;
        min-height:74px;
        padding:12px 0;
        gap:12px;
    }
    body.trang-chu .logo h3{
        font-size:16px;
    }

    body.trang-chu .thong-tin-sv{
        min-height:0;
        padding:115px 4% 85px;
    }

    body.trang-chu .sv-box{
        display:grid;
        grid-template-columns:110px minmax(0,1fr);
        align-items:start;
        gap:20px;
    }

    body.trang-chu .avatar-sv{
        width:110px;
        height:110px;
    }

    body.trang-chu .avatar-sv img{
        width:103px;
        height:103px;
    }

    body.trang-chu .sv-info{
        width:100%;
        min-width:0;
    }

    body.trang-chu .sv-info h1{
        font-size:32px;
    }

    body.trang-chu .sv-info .hero-nganh{
        font-size:15px;
    }

    body.trang-chu .hero-code-panel{
        display:none;
    }

    body.trang-chu .hero-thong-tin-them{
        width:100%;
        max-width:none;
        margin-top:16px;
        padding:20px;
    }

    body.trang-chu .hero-thong-tin-them h2{
        font-size:21px;
    }

    body.trang-chu .hero-ho-so-grid{
        grid-template-columns:1fr;
        gap:15px;
    }

    body.trang-chu .hero-ho-so-cot{
        gap:13px;
    }

    body.trang-chu .hero-ho-so-cot p{
        font-size:14px;
        line-height:1.6;
    }

    body.trang-chu #trang-chu{
        margin-top:-25px;
        padding-top:45px;
    }

    #bai-1 .cung-khung{
        padding:25px;
    }

    #bai-1 .cung-luoi{
        grid-template-columns:repeat(2,minmax(0,1fr));
    }
    #bai-1 .dau-nguyen-to h3{
        font-size:24px;
    }

    #bai-1 .the-nguyen-to{
        padding:22px;
    }
    
    #bai-1 .media-chi-tiet{
        width:150px;
        height:150px;
        border-radius:50%;
        overflow:hidden;
        border:2px solid var(--vang);
        flex-shrink:0;
    }

    #bai-1 .media-chi-tiet img,
    #bai-1 .media-chi-tiet video{
        width:100%;
        height:100%;
        display:block;
        object-fit:cover;
        border-radius:50%;
    }
    body.dang-xem-danh-ba #bai-2{
        padding:85px 3% 40px;
    }

    #bai-2 .db-thanh-cong-cu{
        grid-template-columns:repeat(2,minmax(0,1fr));
    }

    #bai-2 .db-o-tim,
    #bai-2 #db-lay-moi{
        grid-column:1/-1;
    }

    #bai-2 .db-danh-sach{
        grid-template-columns:repeat(2,minmax(0,1fr));
    }
        #bai-3 .ct-luoi{
        grid-template-columns:repeat(2,minmax(0,1fr));
    }

    #bai-3 .ct-luoi-dia-chi{
        grid-template-columns:repeat(2,minmax(0,1fr));
    }


    #bai-3 .ct-luoi-dia-chi .ct-truong:nth-child(n){
        grid-column:auto;
    }

    #bai-3 .ct-lua-chon{
        grid-template-columns:1fr;
    }

    #bai-3 .ct-khung{
        padding:24px 20px;
    }

    #bai-3 .ct-tieu-de h2,
    #bai-3 .ct-tieu-de h3{
        font-size:18px;
    }

    #nut-quay-ve{
    width:50px;
    height:45px;
    padding:14px;
    top:105px;
    left:14px;
    border-radius:18px;
    }
    #bai-4{
        padding:85px 3% 45px;
    }

    #bai-4 .tt-hang-tren,
    #bai-4 .tt-hang-duoi{
        grid-template-columns:1fr;
    }

    #bai-4 .tt-thong-so{
        gap:8px;
        grid-template-columns:repeat(2,minmax(0,1fr));
    }

    #bai-4 .tt-thoi-tiet-hien-tai{
        min-height:230px;
    }
    
    #bai-4 .tt-danh-sach-gio{
        grid-template-columns:repeat(8,minmax(62px,1fr));
        overflow-x:auto;
    }

    #bai-4 .tt-danh-sach-ngay{
        grid-template-columns:repeat(5,minmax(75px,1fr));
        overflow-x:auto;
    }


}


/*===================================//------------------------*/


@media(max-width:500px) {
    .header-content{
        max-width:none;
        margin:0;
        padding:15px 20px;
        display:flex;
        align-items:center;
        justify-content:flex-start;
        gap:15px;
    }

    .logo h3{
        font-size:13px;
    }


    .avatar-sv{
        width:75px;
        height:75px;
    }

    .thong-tin-sv{
    width:95%;
    padding:25px 20px;
    }

    .sv-box{
        flex-direction:column;
        align-items:flex-start;
        gap:15px;
    }

    .avatar-sv{
        width:90px;
        height:90px;
    }

    .sv-info p{
        font-size:14px;
    }
    #trang-chu{
        padding:35px 0px;
    }

    .gioi-thieu h1{
        font-size:25px;
    }

    .khu-carousel{
        height:450px;
    }

    .the-bai{
        width:80%;
        height:400px;
        padding:18px;
    }


    .ten-bai{
        font-size:20px;
    }

    .noi-dung{
        font-size:13px;
    }

    .nut-mo{
        padding:10px 12px;
        font-size:12px;
    }

    .nut-chuyen{
        width:38px;
        height:38px;
        font-size:20px;
    }

    #trang-bai{
        width:94%;
        margin:30px auto;
    }

    .noi-dung-bai{
        padding:25px 18px;
    }

    .footer-content{
        flex-direction:column;
        align-items:flex-start;
    }

    .copyright{
        text-align:left;
    }
    html{
        overflow-x:hidden;
    }
    .menu-ben{
        transition:transform 0.35s ease;
    }

    .menu-ben.mo{
        transform:translateX(0);
    }

    .nut-menu{
        width:45px;
        height:45px;
        padding:8px;
        display:flex;
        justify-content:center;
        align-items:center;
        flex-shrink:0;
        background:var(--bg-color);
        border:1px solid var(--second-color);
        border-radius:10px;
    }

    body.trang-chu .header-content{
        width:94%;
        min-height:72px;
        padding:10px 0;
        justify-content:space-between;
        gap:10px;
    }

    body.trang-chu .logo{
        min-width:0;
        gap:8px;
    }

    body.trang-chu .logo img{
        width:42px;
        height:42px;
        flex-shrink:0;
    }

    body.trang-chu .logo h3{
        font-size:12px;
        line-height:1.3;
        white-space:normal;
    }

    body.trang-chu .logo p{
        font-size:10px;
    }

    body.trang-chu .nut-menu{
        width:42px;
        height:42px;
        padding:8px;
        flex-shrink:0;
    }

    body.trang-chu .thong-tin-sv{
        min-height:0;
        padding:100px 5% 75px;
        background-position:center;
        background-attachment:scroll;
    }

    body.trang-chu .sv-box{
        display:flex;
        flex-direction:column;
        align-items:flex-start;
        gap:16px;
    }

    body.trang-chu .avatar-sv{
        width:94px;
        height:94px;
    }

    body.trang-chu .avatar-sv img{
        width:88px;
        height:88px;
        border-width:3px;
    }

    body.trang-chu .sv-info{
        width:100%;
        min-width:0;
    }

    body.trang-chu .hero-nhan{
        font-size:9px;
        padding:7px 10px;
        letter-spacing:0;
    }

    body.trang-chu .sv-info h1{
        font-size:29px;
        line-height:1.2;
    }

    body.trang-chu .sv-info .hero-nganh{
        font-size:14px;
    }

    body.trang-chu .sv-info .hero-truong,
    body.trang-chu .sv-info .hero-mssv{
        font-size:12px;
    }

    body.trang-chu .sv-info .hero-mo-ta{
        font-size:12px;
        line-height:1.7;
    }

    body.trang-chu .hero-nhom-nut{
        display:flex;
        flex-wrap:wrap;
        gap:9px;
    }

    body.trang-chu .hero-nhom-nut a,
    body.trang-chu .hero-nhom-nut button{
        flex:1 1 155px;
        min-height:40px;
        padding:10px 12px;
        font-size:11px;
        text-align:center;
    }

    body.trang-chu .hero-thong-tin-them{
        width:100%;
        max-width:none;
        margin-top:16px;
        padding:18px 15px;
        border-radius:var(--border-radius);
        backdrop-filter:blur(8px);
    }

    body.trang-chu .hero-thong-tin-them h2{
        margin-bottom:16px;
        padding-bottom:12px;
        font-size:19px;
        line-height:1.4;
    }

    body.trang-chu .hero-ho-so-grid{
        grid-template-columns:1fr;
        gap:12px;
    }

    body.trang-chu .hero-ho-so-cot{
        gap:11px;
    }

    body.trang-chu .hero-ho-so-cot p{
        font-size:13px;
        line-height:1.6;
        overflow-wrap:anywhere;
    }

    body.trang-chu .hero-ho-so-cot strong{
        color:#BFDCEB;
    }

    body.trang-chu .hero-ho-so-cot span{
        color:#FFFFFF;
    }

    body.trang-chu .hero-code-panel{
        display:none;
    }

    body.trang-chu .hero-mat-troi{
        width:60px;
        height:60px;
        right:8%;
        bottom:10%;
    }

    body.trang-chu #trang-chu{
        margin-top:-25px;
        padding-top:44px;
        border-radius:26px 26px 0 0;
    }

    .nut-menu img{
        width:26px;
        height:26px;
        object-fit:contain;
    }

    body.menu-mo .nut-menu{
        visibility:hidden;
    }

    .dau-menu{
        position:relative;
        padding-right:30px;
    }

    #nut-dong-menu{
        display:block;
        position:absolute;
        top:0;
        right:0;
        background:none;
        border:none;
        color:white;
        font-size:30px;
        cursor:pointer;
    }
    
    .the-bai .hinh{
        width:100%;
        max-width:100%;
        height:160px;
    }

    .the-bai .hinh img{
        width:100%;
        height:100%;
        padding:6px;
        object-fit:contain;
    }


    body.dang-xem-cung #bai-1{
        padding:65px 12px 30px;
    }
  
    #bai-1 .ds-nguyen-to{
        grid-template-columns:1fr;
        gap:15px;
    }

    #bai-1 .dau-nguyen-to h3{
        font-size:27px;
    }

    #bai-1 .dau-nguyen-to > p:last-child{
        font-size:15px;
    }

    #bai-1 .the-nguyen-to h4 img{
        width:34px;
        height:34px;
    }

    #bai-1 .the-nguyen-to h5{
        font-size:15px;
    }


    #nut-top{
        width:48px;
        height:48px;
        right:15px;
        bottom:15px;
    }

    
    #bai-1 .cung-hang {

        gap: 12px;    grid-template-columns: 1fr;  
    }
    #bai-1 .ket-hang {
        grid-template-columns: 1fr;  
        text-align: center;       
    }
    #bai-1 .ket-hai-o {
        grid-template-columns: 1fr;  
        text-align: left;    
    }
    #bai-1 .cung-luoi {
        grid-template-columns: repeat(2, minmax(0, 1fr)); 
        gap: 12px;
    }
    #bai-1 .ket-dau{
        flex-direction:column;
        align-items:flex-start;
    }

    #bai-1 .ket-anh{
        width:130px;
        height:130px;
        margin:0 auto;
    }

    #bai-1 .cung-chi-tiet{
        flex-direction:column;
        align-items:flex-start;
    }
    #bai-1 .media-chi-tiet{
    width:120px;
    height:120px;
    }

    body.dang-xem-danh-ba #bai-2{
    padding:80px 12px 30px;
    }

    #bai-2 .db-dau-trang{
        align-items:flex-start;
        gap:10px;
    }

    #bai-2 .db-dau-trang h2{
        font-size:25px;
    }

    #bai-2 .db-thong-ke{
        min-width:75px;
        padding:10px;
    }

    #bai-2 .db-thong-ke strong{
        font-size:25px;
    }

    #bai-2 .db-thanh-cong-cu,
    #bai-2 .db-danh-sach{
        grid-template-columns:1fr;
    }

    #bai-2 .db-o-tim,
    #bai-2 #db-lay-moi{
        grid-column:auto;
    }

    #bai-2 .db-thanh-thong-tin{
        flex-direction:column;
        gap:5px;
    }

    #bai-2 .db-hop-thoai{
        padding:25px 18px;
    }

    #bai-2 .db-hang-modal{
        flex-direction:column;
        gap:8px;
    }

    #bai-2 .db-hang-modal strong{
        text-align:left;
    }
    body.dang-xem-cu-tru #bai-3{
        padding:0 0 32px;
    }


    #bai-3 .ct-banner{
        min-height:165px;
        padding:22px 14px;
        gap:12px;
    }

    #bai-3 .ct-banner-anh{
        width:65px;
        height:65px;
    }

    #bai-3 .ct-banner-chu p{
        font-size:10px;
        letter-spacing:0.5px;
    }

    #bai-3 .ct-banner-chu h1{
        font-size:clamp(17px,5vw,23px);
    }


    #bai-3 .ct-khung{
        padding:19px 14px;
    }

    #bai-3 .ct-dau-khung{
        flex-direction:column;
        align-items:flex-start;
        gap:10px;
    }

    #bai-3 .ct-dau-khung small{
        text-align:left;
    }

    #bai-3 .ct-tieu-de h2,
    #bai-3 .ct-tieu-de h3{
        font-size:16px;
    }

    #bai-3 .ct-luoi,
    #bai-3 .ct-luoi-dia-chi{
        grid-template-columns:1fr;
    }
    
    #bai-3 .ct-luoi-dia-chi .ct-truong:nth-child(n){
        grid-column:1/-1;
    }

    #bai-3 .ct-lua-chon{
        grid-template-columns:1fr;
    }

    #bai-3 .ct-cuoi-form{
        align-items:stretch;
    }

    #bai-3 .ct-nhom-nut{
        flex-direction:column;
        align-items:stretch;
        width:100%;
    }

    #bai-3 .ct-nhom-nut button{
        width:100%;
    }

    #bai-3 .ct-hop-modal{
        padding:28px 17px 20px;
    }

    #bai-3 .ct-the-noi-dung{
        flex-direction:column;
    }

    #bai-3 .ct-phieu-hang{
        flex-direction:column;
        gap:5px;
    }

    #bai-3 .ct-phieu-hang strong{
        text-align:left;
    }

    #nut-quay-ve{
        width:50px;
        height:45px;
        padding:12px;
        top:90px;
        left:10px;
        border-radius:15px;
    }
    
    #bai-4{
        padding:80px 12px 35px;
    }

    #bai-4 .tt-tieu-de h2{
        font-size:28px;
    }

    #bai-4 .tt-thanh-tim{
        grid-template-columns:1fr;
    }

    #bai-4 #tt-nut-xem{
        width:100%;
    }

    #bai-4 .tt-goi-y{
        justify-content:flex-start;
    }

    #bai-4 .tt-kinh{
        border-radius:var(--border-radius);
    }

    #bai-4 .tt-o-thong-so{
        padding:12px 8px;
        gap:7px;
    }

    #bai-4 .tt-o-thong-so img{
        width:34px;
        height:34px;
        padding:6px;
    }

    #bai-4 .tt-o-thong-so strong{
        font-size:15px;
    }

    #bai-4 .tt-du-bao-gio,
    #bai-4 .tt-du-bao-ngay{
        padding:15px 10px;
    }

}

@media print{
    body *{
        visibility:hidden!important;
    }

    #bai-3 .ct-modal,
    #bai-3 .ct-modal *{
        visibility:visible!important;
    }

    #bai-3 .ct-modal{
        position:absolute;
        inset:0;
        background:white;
        padding:0;
        backdrop-filter:none;
    }

    #bai-3 .ct-hop-modal{
        width:100%;
        max-width:none;
        max-height:none;
        overflow:visible;
        border:0;
        box-shadow:none;
        padding:15px;
    }

    #bai-3 .ct-nut-dong,
    #bai-3 .ct-modal-cuoi{
        display:none!important;
    }
}

