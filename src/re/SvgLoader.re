let getBackground = (fill, size) => {j|<svg height="$size" width="$size" viewBox="0 0 64 64" xmlns="http://www.w3.org/2000/svg"><path d="m0 0h64v64h-64z" fill="$fill"/></svg>|j}
let getBeardMustache = (fill, size) => {j|
<?xml version="1.0" encoding="UTF-8"?>
<svg width="$size" height="$size" viewBox="0 0 64 64" version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink">
    <defs>
        <path d="M10.8956938,6.6310802 C12.1391474,6.20678218 13.4857125,6.81653808 14,8.00090947 C14.5142875,6.81653808 15.8608526,6.20678218 17.1043062,6.6310802 L19.5274283,7.45791118 C22.992911,6.12710456 25.9521992,3.64111062 27.9968866,0.701774452 C27.9989588,0.800932919 28,0.900344863 28,1 L28,7 C28,14.7319865 21.7319865,21 14,21 C6.2680135,21 1.77635684e-15,14.7319865 0,7 L0,1 C0,0.900344863 0.0010412311,0.800932919 0.00311340763,0.701774452 C2.04780082,3.64111062 5.007089,6.12710456 8.47257173,7.45791118 L10.8956938,6.6310802 Z" id="path-1"></path>
    </defs>
    <g id="face" stroke="none" stroke-width="1" fill="none" fill-rule="evenodd">
        <g id="Facial-Hair" transform="translate(18.000000, 28.000000)">
            <mask id="mask-2" fill="white">
                <use xlink:href="#path-1"></use>
            </mask>
            <use id="Dye" fill="$fill" fill-rule="nonzero" xlink:href="#path-1"></use>
            <path d="M8.47257173,7.45791118 L5.66081479,8.41735427 C5.34148331,8.5263183 5.09863248,8.78896829 5.01497871,9.11584411 C4.87805139,9.65088556 5.20078665,10.1956239 5.7358281,10.3325512 L10.8174354,11.6330316 C11.0375528,11.6893638 11.2638669,11.7178637 11.4910782,11.7178637 C12.6214359,11.7178637 13.5905776,11.0276159 14,10.0456238 C14.4094224,11.0276159 15.3785641,11.7178637 16.5089218,11.7178637 C16.7361331,11.7178637 16.9624472,11.6893638 17.1825646,11.6330316 L22.2641719,10.3325512 C22.7992134,10.1956239 23.1219486,9.65088556 22.9850213,9.11584411 C22.9013675,8.78896829 22.6585167,8.5263183 22.3391852,8.41735427 L19.5274283,7.45791118 C22.992911,6.12710456 25.9521992,3.64111062 27.9968866,0.701774452 C27.9989588,0.800932919 28,0.900344863 28,1 L28,7 C28,14.7319865 21.7319865,21 14,21 C6.2680135,21 1.77635684e-15,14.7319865 0,7 L0,1 C0,0.900344863 0.0010412311,0.800932919 0.00311340763,0.701774452 C2.04780082,3.64111062 5.007089,6.12710456 8.47257173,7.45791118 Z" id="Overlay" fill="#FFFFFF" fill-rule="nonzero" opacity="0.26" style="mix-blend-mode: overlay;" mask="url(#mask-2)"></path>
            <path d="M17.999058,11.4240753 C17.9996848,11.4493075 18,11.4746169 18,11.5 C18,13.1568542 16.6568542,14.5 15,14.5 L13,14.5 C11.3431458,14.5 10,13.1568542 10,11.5 C10,11.4746169 10.0003152,11.4493075 10.000942,11.4240753 L10.8174354,11.6330316 C11.0375528,11.6893638 11.2638669,11.7178637 11.4910782,11.7178637 C12.6214359,11.7178637 13.5905776,11.0276159 14,10.0456238 C14.4094224,11.0276159 15.3785641,11.7178637 16.5089218,11.7178637 C16.7361331,11.7178637 16.9624472,11.6893638 17.1825646,11.6330316 L17.999058,11.4240753 Z" id="Mouth" fill="#FFFEFD" fill-rule="nonzero" mask="url(#mask-2)"></path>
        </g>
    </g>
</svg>
|j}
let getSkin = (fill, size) => {j|
<svg height="$size" width="$size" viewBox="0 0 64 64"  xmlns="http://www.w3.org/2000/svg"><g fill="none" transform="translate(14 13)"><path d="m23 33.0807424v5.9192576c0 2.7614237-2.2385763 5-5 5s-5-2.2385763-5-5v-5.9192576c-4.03776277-1.5443264-7.17755008-4.9044416-8.42044769-9.0814314-.02646239.0004587-.05298045.000689-.07955231.000689-2.48528137 0-4.5-2.0147186-4.5-4.5 0-2.3162768 1.75002477-4.2238135 4-4.4725356v-1.0274644c0-7.7319865 6.2680135-14 14-14s14 6.2680135 14 14v1.0274644c2.2499752.2487221 4 2.1562588 4 4.4725356 0 2.4852814-2.0147186 4.5-4.5 4.5-.0265719 0-.0530899-.0002303-.0795523-.000689-1.2428976 4.1769898-4.3826849 7.537105-8.4204477 9.0814314z" fill="$fill"/>
  <path style="mix-blend-mode: overlay" d="m18 0c7.7319865 0 14 6.2680135 14 14v6c0 7.7319865-6.2680135 14-14 14s-14-6.2680135-14-14v-6c0-7.7319865 6.2680135-14 14-14z" fill="#FFF" fill-opacity="0.2"/></g></svg>
|j};
let getMustache = (fill, size) => {j|<svg fill="$fill" height="$size" width="$size" viewBox="0 0 64 64" xmlns="http://www.w3.org/2000/svg"> <path d="M32.016 38.05a2.718 2.718 0 0 1-3.182 1.587l-5.082-1.3a1 1 0 0 1-.075-1.916l5.235-1.786a2.504 2.504 0 0 1 3.104 1.37 2.504 2.504 0 0 1 3.105-1.37l5.235 1.786a1 1 0 0 1-.075 1.915l-5.082 1.3a2.717 2.717 0 0 1-3.183-1.587z" /></svg>|j};

let getEyesGlasses = (fill, size) => {j|<svg width="$size" height="$size" viewBox="0 0 64 64"><g fill="none"><path fill="#1b0640" d="M26 30a1.5 1.5 0 1 1 0-3 1.5 1.5 0 0 1 0 3zm12 0a1.5 1.5 0 1 1 0-3 1.5 1.5 0 0 1 0 3z"/><path fill="#fff" d="M23 26h6v6h-6zm12 0h6v6h-6z" opacity=".303"/><path fill="#1b0640" d="M31 25.053h2c1.5 0 2.5-1.053 5-1.053 1.667 0 3.333.35 5 1.053l1 .526v1.579l-1 .526v3.158C43 32.586 41.657 34 40 34h-4c-1.657 0-3-1.414-3-3.158v-3.684h-2v3.684C31 32.586 29.657 34 28 34h-4c-1.657 0-3-1.414-3-3.158v-3.158l-1-.526v-1.58l1-.525C22.667 24.35 24.333 24 26 24c2.5 0 3.5 1.053 5 1.053zm-2.757 1.47c-.844-.296-1.425-.418-2.243-.418-.995 0-1.993.15-3 .45v4.287c0 .581.448 1.053 1 1.053h4c.552 0 1-.472 1-1.053v-4.051c-.209-.07-.447-.155-.757-.267zm7.514 0c-.31.113-.548.198-.757.268v4.051c0 .581.448 1.053 1 1.053h4c.552 0 1-.472 1-1.053v-4.287c-1.007-.3-2.005-.45-3-.45-.818 0-1.399.122-2.243.419z"/></g></svg>|j};
let getEyesHappy = (fill, size) => {j|<svg width="$size" height="$size" viewBox="0 0 64 64"><path fill="$size" d="M24.712 29.737a.75.75 0 1 1-1.424-.474c.434-1.301 1.383-2.013 2.712-2.013s2.278.712 2.712 2.013a.75.75 0 1 1-1.424.474c-.233-.699-.617-.987-1.288-.987s-1.055.288-1.288.987zm12 0a.75.75 0 0 1-1.424-.474c.434-1.301 1.383-2.013 2.712-2.013s2.278.712 2.712 2.013a.75.75 0 0 1-1.424.474c-.233-.699-.617-.987-1.288-.987s-1.055.288-1.288.987z"/></svg>|j};
let getEyesOpen = (fill, size) => {j|<svg width="$size" height="$size" viewBox="0 0 64 64"><path fill="$size" d="M25.5 30a1.5 1.5 0 1 1 0-3 1.5 1.5 0 0 1 0 3zm13 0a1.5 1.5 0 1 1 0-3 1.5 1.5 0 0 1 0 3z"/></svg>|j};
let getEyesSleepy = (fill, size) => {j|<svg width="$size" height="$size" viewBox="0 0 64 64"><path fill="$fill" d="M36.004 29.368a1 1 0 1 1 .992-1.736c.438.25.852.368 1.254.368s.816-.118 1.254-.368a1 1 0 1 1 .992 1.736c-.73.417-1.482.632-2.246.632s-1.517-.215-2.246-.632zm-12 0a1 1 0 0 1 .992-1.736c.438.25.852.368 1.254.368s.816-.118 1.254-.368a1 1 0 0 1 .992 1.736c-.73.417-1.482.632-2.246.632s-1.517-.215-2.246-.632z"/></svg>|j};
let getEyesSunglasses = (fill, size) => {j|<svg width="$size" height="$size" viewBox="0 0 64 64"><g fill="$fill"><path d="M26 30a1.5 1.5 0 1 1 0-3 1.5 1.5 0 0 1 0 3zm12 0a1.5 1.5 0 1 1 0-3 1.5 1.5 0 0 1 0 3z"/><path d="M23 26h6v6h-6zm12 0h6v6h-6z" opacity=".801"/><path d="M33 25.053c1.5 0 2.5-1.053 5-1.053 1.667 0 3.333.35 5 1.053l1 .526v1.579l-1 .526v3.158C43 32.586 41.657 34 40 34h-4c-1.657 0-3-1.414-3-3.158v-3.684h-2v3.684C31 32.586 29.657 34 28 34h-4c-1.657 0-3-1.414-3-3.158v-3.158l-1-.526v-1.58l1-.525C22.667 24.35 24.333 24 26 24c2.5 0 3.5 1.053 5 1.053zm-4.757 1.47c-.844-.296-1.425-.418-2.243-.418-.995 0-1.993.15-3 .45v4.287c0 .581.448 1.053 1 1.053h4c.552 0 1-.472 1-1.053v-4.051c-.209-.07-.447-.155-.757-.267zm7.514 0c-.31.113-.548.198-.757.268v4.051c0 .581.448 1.053 1 1.053h4c.552 0 1-.472 1-1.053v-4.287c-1.007-.3-2.005-.45-3-.45-.818 0-1.399.122-2.243.419z"/></g></svg>|j};
let getEyesWink = (fill, size) => {j|<svg width="$size" height="$size" viewBox="0 0 64 64"><path fill="$fill" d="M25.5 30a1.5 1.5 0 1 1 0-3 1.5 1.5 0 0 1 0 3zm14.907-2.744a.75.75 0 0 1 .186 1.488l-4 .5a.75.75 0 0 1-.186-1.488z"/></svg>|j};

let getMouthBigsmile = (fill, size) => {j|<svg width="$size" height="$size" viewBox="0 0 64 64"><path fill="#1b0640" d="M29 38h6v1a3 3 0 0 1-6 0z"/></svg>|j};
let getMouthFrown = (fill, size) => {j|<svg width="$size" height="$size" viewBox="0 0 64 64"><path fill="#1b0640" d="M28.004 40.132a1 1 0 0 0 .992 1.736C30.016 41.285 31.014 41 32 41s1.983.285 3.004.868a1 1 0 1 0 .992-1.736C34.684 39.382 33.348 39 32 39c-1.348 0-2.684.382-3.996 1.132z"/></svg>|j};
let getMouthLips = (fill, size) => {j|<svg width="$size" height="$size" viewBox="0 0 64 64"><g fill="none"><path fill="#dc5c7a" d="M28 41h8c-.667 1.667-2 2.5-4 2.5s-3.333-.833-4-2.5z"/><path fill="#f57b98" d="M32 40a2.092 2.092 0 0 1 3.612.225L36 41h-8l.388-.775A2.092 2.092 0 0 1 32 40z"/></g></svg>|j};
let getMouthPacifier = (fill, size) => {j|<svg width="$size" height="$size" viewBox="0 0 64 64"><g fill="none"><path fill="#456dff" d="M34.996 42.665a3 3 0 0 1-5.992 0A3.5 3.5 0 0 1 27 39.5a2.035 2.035 0 0 1 2.73-1.912c.756.275 1.513.412 2.27.412s1.514-.137 2.27-.412A2.035 2.035 0 0 1 37 39.5a3.5 3.5 0 0 1-2.004 3.165zM33.415 43h-2.83a1.5 1.5 0 0 0 2.83 0z"/><g fill="#fff" transform="translate(23 36)"><path fill-opacity=".26" d="M11.996 6.665a3 3 0 1 0-5.991 0A3.5 3.5 0 0 1 4 3.5a2.035 2.035 0 0 1 2.73-1.912C7.485 1.863 8.242 2 9 2s1.514-.137 2.27-.412A2.035 2.035 0 0 1 14 3.5a3.5 3.5 0 0 1-2.004 3.165zM10.415 7h-2.83a1.5 1.5 0 1 1 2.83 0z"/><circle cx="9" cy="4.5" r="1.5"/></g></g></svg>|j};
let getMouthSmile = (fill, size) => {j|<svg width="$size" height="$size" viewBox="0 0 64 64"><path fill="#1b0640" d="M28.004 41.868a1 1 0 0 1 .992-1.736c1.02.583 2.018.868 3.004.868s1.983-.285 3.004-.868a1 1 0 1 1 .992 1.736C34.684 42.618 33.348 43 32 43c-1.348 0-2.684-.382-3.996-1.132z"/></svg>|j};
let getMouthSmirk = (fill, size) => {j|<svg width="$size" height="$size" viewBox="0 0 64 64"><path fill="#1b0640" d="M30.318 41.728a.75.75 0 0 1 .364-1.456c2.433.609 4.165.32 5.288-.802a.75.75 0 0 1 1.06 1.06c-1.544 1.545-3.812 1.923-6.712 1.198z"/></svg>|j};
let getMouthSurprise = (fill, size) => {j|<svg width="$size" height="$size" viewBox="0 0 64 64"><ellipse cx="32" cy="41" fill="#1b0640" rx="2" ry="2.5"/></svg>|j};

let getNoseMediumround = (fill, size) => {j|<svg width="$size" height="$size" viewBox="0 0 64 64"><path style="mix-blend-mode: overlay" fill="#000" fill-opacity="0.2" d="M28.25 33a.75.75 0 0 1 1.5 0c0 .836.914 1.75 2.25 1.75s2.25-.914 2.25-1.75a.75.75 0 1 1 1.5 0c0 1.664-1.586 3.25-3.75 3.25-2.164 0-3.75-1.586-3.75-3.25z"/></svg>|j};
let getNoseSmallround = (fill, size) => {j|<svg width="$size" height="$size" viewBox="0 0 64 64"><path style="mix-blend-mode: overlay" fill="#000" fill-opacity="0.2" d="M29.288 35.237a.75.75 0 1 1 1.424-.474c.233.699.617.987 1.288.987s1.055-.288 1.288-.987a.75.75 0 1 1 1.424.474c-.434 1.301-1.383 2.013-2.712 2.013s-2.278-.712-2.712-2.013z"/></svg>|j};
let getNoseWrinkles = (fill, size) => {j|<svg width="$size" height="$size" viewBox="0 0 64 64"><path style="mix-blend-mode: overlay" fill="#000" fill-opacity="0.2" d="M28.394 33.057a.75.75 0 0 1 1.327.649c-.523 1.83.089 2.544 2.279 2.544s2.802-.713 2.279-2.544a.75.75 0 0 1 1.309-.672.5.5 0 0 1 .1.104c.858 1.201 1.522 2.245 1.994 3.135.474.893.907 1.914 1.301 3.065a.5.5 0 1 1-.946.324 20.24 20.24 0 0 0-1.238-2.92c-.24-.452-.534-.95-.883-1.493-.223 1.613-1.589 2.501-3.916 2.501-2.321 0-3.686-.884-3.914-2.488a20.878 20.878 0 0 0-.875 1.48 20.24 20.24 0 0 0-1.238 2.92.5.5 0 0 1-.946-.324c.394-1.15.827-2.172 1.3-3.065.472-.89 1.137-1.934 1.996-3.135a.502.502 0 0 1 .071-.08z"/></svg>|j};

let getBodyOval = (fill, size) => {j|<svg height="$size" width="$size" viewBox="0 0 64 64" xmlns="http://www.w3.org/2000/svg"><g fill="$fill" fill-rule="nonzero" transform="translate(21 46)"><path d="m22 18h-22v-8c0-4.27468547 2.43832409-7.97986983 6-9.80058081v1.80058081c0 2.76142375 2.23857625 5 5 5 2.7614237 0 5-2.23857625 5-5v-1.80058081c3.5616759 1.82071098 6 5.52589534 6 9.80058081z"/><path d="m22 18h-22v-8c0-4.27468547 2.43832409-7.97986983 6-9.80058081v1.80058081c0 2.76142375 2.23857625 5 5 5 2.7614237 0 5-2.23857625 5-5v-1.80058081c3.5616759 1.82071098 6 5.52589534 6 9.80058081z"/></g></svg>|j};
let getBodyRound = (fill, size) => {j|<svg width="$size" height="$size" viewBox="0 0 64 64"><path fill="$fill" d="M27 51v.47a5 5 0 0 0 10 0V51c7.063 1.523 12.93 6.735 16 13H11c3.07-6.265 8.937-11.477 16-13z"/></svg>|j};
let getBodySquare = (fill, size) => {j|<svg width="$size" height="$size" viewBox="0 0 64 64"><path fill="$fill" d="M27 49v3a5 5 0 0 0 10 0v-3l6.647 2.045A9 9 0 0 1 50 59.647V64H14v-4.353a9 9 0 0 1 6.353-8.602z"/></svg>|j};

let getBald = (fill, size) => {j|<svg width="$size" height="$size" viewBox="0 0 64 64"><path fill="$fill" d="M22.386 23.438a.75.75 0 0 1-1.342-.67 16.551 16.551 0 0 1 2.202-3.366 11.86 11.86 0 0 1 3-2.522.75.75 0 1 1 .765 1.29 10.36 10.36 0 0 0-2.623 2.205 15.055 15.055 0 0 0-2.002 3.063zM28.75 17a.75.75 0 1 1 0-1.5.75.75 0 0 1 0 1.5z"/></svg>|j};
let getBalding = (fill, size) => {j|<svg width="$size" height="$size" viewBox="0 0 64 64"><path fill="$fill"  d="M41.668 19h1.667a3 3 0 0 1 2.984 3.314l-.651 6.186a1.364 1.364 0 0 1-1.301-.954zm-20 0l-2.7 8.546c-.178.568-.705.954-1.3.954l-.652-6.186A3 3 0 0 1 20 19zM22.386 23.438a.75.75 0 0 1-1.342-.67 16.551 16.551 0 0 1 2.202-3.366 11.86 11.86 0 0 1 3-2.522.75.75 0 1 1 .765 1.29 10.36 10.36 0 0 0-2.623 2.205 15.055 15.055 0 0 0-2.002 3.063zM28.75 17a.75.75 0 1 1 0-1.5.75.75 0 0 1 0 1.5z"/></svg>|j};
let getBigcurls = (fill, size) => {j|<svg width="$size" height="$size" viewBox="0 0 64 64"><path fill="$fill"  d="M46 28a16 16 0 0 1-.021-.023 2 2 0 0 1-2.104-2.855 2 2 0 0 1-2.729-2.095 2 2 0 0 1-3.303.553l-.012.005v.042a2 2 0 0 1-3.752.965 2 2 0 0 1-3.922.333 2 2 0 0 1-3.865-.598 23.239 23.239 0 0 1-.131-.022 2 2 0 0 1-3.676-.981 20.21 20.21 0 0 1-.83-.326 2 2 0 0 1-2.725 2.123 2 2 0 0 1-.93 2.68v.226A4.5 4.5 0 0 0 18.58 37 14.036 14.036 0 0 0 27 46.081v3.062a3.483 3.483 0 0 1-.652-.68c-.484-.137-.961-.29-1.43-.46a3.46 3.46 0 0 1-2.719-.138 3.461 3.461 0 0 1-1.816-2.166 20.882 20.882 0 0 1-.987-.707 3.462 3.462 0 0 1-2.742-.912 3.464 3.464 0 0 1-1.087-2.877c-.17-.217-.334-.438-.495-.661a3.465 3.465 0 0 1-2.604-1.712 3.467 3.467 0 0 1-.062-3.358c-.046-.13-.092-.26-.136-.39a3.47 3.47 0 0 1-1.077-5.965v-.009a3.47 3.47 0 0 1 .471-6.196 3.47 3.47 0 0 1 2.272-5.788 3.47 3.47 0 0 1 3.876-4.861A3.47 3.47 0 0 1 22.95 8.76a3.47 3.47 0 0 1 5.941-1.833 3.47 3.47 0 0 1 6.218 0A3.47 3.47 0 0 1 41.05 8.76a3.47 3.47 0 0 1 5.138 3.503 3.47 3.47 0 0 1 3.876 4.86 3.47 3.47 0 0 1 2.272 5.789 3.47 3.47 0 0 1 .471 6.196v.01a3.47 3.47 0 0 1-1.077 5.965c-.044.13-.09.26-.136.389a3.467 3.467 0 0 1-.062 3.358 3.465 3.465 0 0 1-2.604 1.712c-.16.223-.326.444-.495.661a3.464 3.464 0 0 1-1.087 2.877 3.462 3.462 0 0 1-2.742.912c-.322.245-.651.48-.987.707a3.461 3.461 0 0 1-1.816 2.166 3.46 3.46 0 0 1-2.719.138c-.469.17-.946.323-1.43.46a3.483 3.483 0 0 1-.652.68v-3.062a14.036 14.036 0 0 0 8.42-9.082l.08.001a4.5 4.5 0 0 0 .5-8.973z"/></svg>|j};
let getBobbangs = (fill, size) => {j|<svg width="$size" height="$size" viewBox="0 0 64 64"><path fill="$fill"  d="M46 28c-2.177-2.419-3.652-5.54-4.425-9.363-2.252 3.614-5.277 6.235-9.075 7.863-4.667 2-9.5 2.333-14.5 1v.527a4.474 4.474 0 0 0-2 .73V27.5C16 18.387 23.163 11 32 11s16 7.387 16 16.5v1.258a4.474 4.474 0 0 0-2-.73zm-9 21.313v-3.232a14.036 14.036 0 0 0 8.42-9.082l.08.001a4.48 4.48 0 0 0 2.5-.758V47c-3.113 1.211-6.78 1.982-11 2.313zm-10 0c-4.22-.331-7.887-1.102-11-2.313V36.242a4.48 4.48 0 0 0 2.58.757A14.036 14.036 0 0 0 27 46.081z"/></svg>|j};
let getBobcut = (fill, size) => {j|<svg width="$size" height="$size" viewBox="0 0 64 64"><path fill="$fill"  d="M46 28c-1.412-1.57-2.53-3.434-3.35-5.595-3.192 1.086-6.742 1.629-10.65 1.629-4.848 0-9.145-.836-12.89-2.506A13.955 13.955 0 0 0 18 27v1.027a4.474 4.474 0 0 0-2 .73v-1.375C16 18.334 23.163 11 32 11s16 7.334 16 16.382v1.376a4.474 4.474 0 0 0-2-.73zm-9 20.06v-1.98A14.036 14.036 0 0 0 45.42 37h.08a4.48 4.48 0 0 0 2.5-.758v6.376c0 .477-.02.949-.059 1.415-3.647 2.044-7.294 3.386-10.941 4.028zm-10 0c-3.647-.64-7.294-1.983-10.941-4.027A16.99 16.99 0 0 1 16 42.618v-6.376a4.48 4.48 0 0 0 2.58.757A14.036 14.036 0 0 0 27 46.081z"/></svg>|j};
let getBuncurls = (fill, size) => {j|<svg width="$size" height="$size" viewBox="0 0 64 64"><g fill="none"><path fill="#362c47" d="M44.544 20.777C42.254 16.167 37.497 13 32 13s-10.254 3.168-12.544 7.777a2 2 0 0 1 .551-2.376v-.005a2 2 0 0 1 .271-3.571 2 2 0 0 1 1.31-3.337 2 2 0 0 1 2.234-2.802 2 2 0 0 1 2.961-2.019 2 2 0 0 1 3.425-1.056 2 2 0 0 1 3.584 0 2 2 0 0 1 3.425 1.056 2 2 0 0 1 2.961 2.02 2 2 0 0 1 2.235 2.801 2 2 0 0 1 1.309 3.337 2 2 0 0 1 .272 3.571v.005a2 2 0 0 1 .55 2.376z"/><path fill="#5ac4d4" d="M45.934 25.632C43.828 20.564 38.83 17 33 17h-2c-5.83 0-10.828 3.564-12.934 8.632C18.753 18.542 24.73 13 32 13s13.247 5.542 13.934 12.632z"/></g></svg>|j};
let getBuzzcut = (fill, size) => {j|<svg width="$size" height="$size" viewBox="0 0 64 64"><path fill="$fill"  d="M46 27v3c-1.333-1.667-2.667-4.667-4-9-2.657 1.333-5.99 2-10 2s-7.343-.667-10-2c-1.333 3.667-2.667 6.333-4 8v-2c0-7.732 6.268-14 14-14s14 6.268 14 14z"/></svg>|j};
let getCurlybun = (fill, size) => {j|<svg width="$size" height="$size" viewBox="0 0 64 64"><g fill="none"><path fill="#000" d="M44.544 20.777C42.254 16.167 37.497 13 32 13c-5.497 0-10.254 3.168-12.544 7.777a2 2 0 0 1 .551-2.376v-.005a2 2 0 0 1 .271-3.571 2 2 0 0 1 1.31-3.337 2 2 0 0 1 2.234-2.802 2 2 0 0 1 2.961-2.019 2 2 0 0 1 3.425-1.056 2 2 0 0 1 3.584 0 2 2 0 0 1 3.425 1.056 2 2 0 0 1 2.961 2.02 2 2 0 0 1 2.235 2.801 2 2 0 0 1 1.309 3.337 2 2 0 0 1 .272 3.571v.005a2 2 0 0 1 .55 2.376z"/><path fill="#f55d81" d="M45.934 25.632C43.828 20.564 38.83 17 33 17h-2c-5.83 0-10.828 3.564-12.934 8.632C18.753 18.542 24.73 13 32 13s13.247 5.542 13.934 12.632z"/></g></svg>|j};
let getCurlyhightop = (fill, size) => {j|<svg width="$size" height="$size" viewBox="0 0 64 64"><path fill="$fill" d="M33.792 9a2 2 0 0 1 3.816 0h.558a2 2 0 0 1 3.83.668c.075.03.15.063.224.095a2 2 0 0 1 3.13 2.298l.152.179a2 2 0 0 1 1.775 3.41c.042.156.08.314.114.473a2 2 0 0 1 .018 3.748l-.047.324a2 2 0 0 1-.022 3.62 1.994 1.994 0 0 1 .159.852 1.8 1.8 0 0 1-1.22 2.924L46 29.5c-.44-.659-.842-1.48-1.209-2.465a1.797 1.797 0 0 1-.437-.796 1.998 1.998 0 0 1-.563-2.679 38.655 38.655 0 0 1-.022-.098 2 2 0 0 1-.956-2.937 1.994 1.994 0 0 1-2.44-.323 2 2 0 0 1-3.724.057l-.312.032a2 2 0 0 1-3.573.203l-.23.003a2 2 0 0 1-3.521-.099 36.13 36.13 0 0 1-.41-.031 2 2 0 0 1-3.676-.165 1.997 1.997 0 0 1-3.04-.22 19.96 19.96 0 0 1-.023.155 2 2 0 0 1-.701 3.35 2 2 0 0 1-1.397 3.095A24.897 24.897 0 0 1 18 29.5l-.188-1.923a1.8 1.8 0 0 1-.338-3.465l-.012-.126a2 2 0 0 1-.38-3.889l-.013-.144a2 2 0 0 1 .067-3.92 8.93 8.93 0 0 1 .041-.177 2 2 0 0 1 1.46-3.627 2 2 0 0 1 3.066-2.326 2 2 0 0 1 3.835-.894 9 9 0 0 1 .052-.003A2 2 0 0 1 29.408 9h.184a2 2 0 0 1 3.816 0z"/></svg>|j};
let getHightopcurly = (fill, size) => {j|<svg width="$size" height="$size" viewBox="0 0 64 64"><defs><path fill="$fill" id="a" d="M31.792 7a2 2 0 0 1 3.816 0h.558a2 2 0 0 1 3.83.668c.075.03.15.063.224.095a2 2 0 0 1 3.13 2.298l.152.179a2 2 0 0 1 1.775 3.41c.042.156.08.314.114.473a2 2 0 0 1 .018 3.748l-.047.324a2 2 0 0 1-.022 3.62 1.994 1.994 0 0 1 .159.852 1.8 1.8 0 0 1-1.22 2.924L44 27.5c-.44-.659-.842-1.48-1.209-2.465a1.797 1.797 0 0 1-.437-.796 1.998 1.998 0 0 1-.563-2.679 38.655 38.655 0 0 1-.022-.098 2 2 0 0 1-.956-2.937 1.994 1.994 0 0 1-2.44-.323 2 2 0 0 1-3.724.057l-.312.032a2 2 0 0 1-3.573.203l-.23.003a2 2 0 0 1-3.521-.099 36.13 36.13 0 0 1-.41-.031 2 2 0 0 1-3.676-.165 1.997 1.997 0 0 1-3.04-.22l-.023.155a2 2 0 0 1-.701 3.35 2 2 0 0 1-1.397 3.095A24.897 24.897 0 0 1 16 27.5l-.188-1.923a1.8 1.8 0 0 1-.338-3.465l-.012-.126a2 2 0 0 1-.38-3.889l-.013-.144a2 2 0 0 1 .067-3.92 8.93 8.93 0 0 1 .041-.177 2 2 0 0 1 1.46-3.627 2 2 0 0 1 3.066-2.326 2 2 0 0 1 3.835-.894 9 9 0 0 1 .052-.003A2 2 0 0 1 27.408 7h.184a2 2 0 0 1 3.816 0z"/><mask id="b" fill="#fff"><use fill="none"/></mask></defs><g fill="none" transform="translate(2 2)"><use fill="#362c47"/><path fill="#fff" d="M13 5h34v23H13z" mask="url(#b)" opacity=".259"/></g></svg>|j};
let getLong = (fill, size) => {j|<svg width="$size" height="$size" viewBox="0 0 64 64"><defs><path fill="$fill" id="a" d="M44 26c-1.807-2.008-3.13-4.5-3.97-7.474-1.87 2.283-4.546 3.607-8.03 3.974-5.832.614-10.817-.327-14.953-2.822A13.959 13.959 0 0 0 16 25v1.027a4.474 4.474 0 0 0-2 .73V25.5C14 16.387 21.163 9 30 9s16 7.387 16 16.5v1.258a4.474 4.474 0 0 0-2-.73zm2 8.242v6.604c0 7.312-4.612 13.513-11 15.679V44.08a14.036 14.036 0 0 0 8.42-9.082l.08.001a4.48 4.48 0 0 0 2.5-.758zM25.13 56.568C18.675 54.443 14 48.208 14 40.846v-6.604a4.48 4.48 0 0 0 2.58.757A14.036 14.036 0 0 0 25 44.081v5.464c.051 2.356.095 4.697.13 7.023z"/><mask id="b" fill="#fff"><use fill="none"/></mask></defs><g fill="none" transform="translate(2 2)"><use fill="#362c47"/><path fill="#fff" d="M14 9h32v18H14z" mask="url(#b)" opacity=".258"/></g></svg>|j};
let getPigtails = (fill, size) => {j|<svg width="$size" height="$size" viewBox="0 0 64 64"><g fill="none"><path fill="$fill" d="M41.001 13.836C41.057 11.156 43.291 9 46.04 9c2.783 0 5.04 2.211 5.04 4.94 0 .079-.003.158-.007.237.018 3.201.708 7.08 1.928 9.823-2.256-.606-4.334-1.62-6.22-2.903A16.67 16.67 0 0 1 48 27.382v1.376a4.474 4.474 0 0 0-2-.73V28c-1.807-2.008-3.13-4.5-3.97-7.474-1.87 2.283-4.546 3.607-8.03 3.974-5.832.614-10.817-.327-14.953-2.822A13.959 13.959 0 0 0 18 27v1.027a4.474 4.474 0 0 0-2 .73v-1.375c0-2.227.434-4.35 1.22-6.285C15.334 22.38 13.256 23.394 11 24c1.22-2.743 1.91-6.622 1.928-9.823a4.923 4.923 0 0 1-.006-.238C12.922 11.211 15.178 9 17.96 9c2.748 0 4.982 2.156 5.038 4.836C25.563 12.046 28.662 11 32 11s6.437 1.046 9.001 2.836z"/><path fill="#fff" d="M41.013 13.582C45.213 16.545 48 21.767 48 27.714v1.044a4.474 4.474 0 0 0-2-.73V28c-1.807-2.008-3.13-4.5-3.97-7.474-1.87 2.283-4.546 3.607-8.03 3.974-5.832.614-10.817-.327-14.953-2.822A13.959 13.959 0 0 0 18 27v1.027a4.474 4.474 0 0 0-2 .73v-1.043c0-5.947 2.788-11.17 6.987-14.132.006.084.01.169.012.254C25.563 12.046 28.662 11 32 11s6.437 1.046 9.001 2.836c.002-.085.006-.17.012-.254z" opacity=".259"/><path fill="#f55d81" d="M18 16a5 5 0 0 1 8.16-3.875c-3.106 1.248-5.739 3.46-7.545 6.279A4.978 4.978 0 0 1 18 16zm23-5a5 5 0 0 1 4.385 7.404c-1.806-2.818-4.44-5.031-7.545-6.279A4.98 4.98 0 0 1 41 11z"/></g></svg>|j};
let getShortcombover = (fill, size) => {j|<svg width="$size" height="$size" viewBox="0 0 64 64"><path fill="$fill" d="M42.26 14.63a7.926 7.926 0 0 1 4.6 8.351L46 29c-2.827-1.696-4.695-5.55-5.604-11.561a9.238 9.238 0 0 1-5.692 2.774c-1.823.191-3.391.287-4.704.287-3 0-5.667-.5-8-1.5 0 3.667-1.333 7.167-4 10.5l-.922-8.533A9 9 0 0 1 26.025 11H43a9.237 9.237 0 0 1-.74 3.63z"/></svg>|j};
let getHat = (fill, size) => {j|
<svg height="$size" width="$size" viewBox="0 0 64 64" xmlns="http://www.w3.org/2000/svg">
  <g fill="none">
    <path d="M32 19.002c3.881 0 7.548-.376 11 4.218l-1.9 6.493c-.611 1.227-1.636 1.558-2.463.795-2.09-1.929-4.302-2.893-6.637-2.893s-4.547.964-6.637 2.893c-.827.763-1.852.432-2.462-.795L21 23.22c3.452-4.594 7.119-4.218 11-4.218z" fill="#000" opacity=".203"/>
    <path style="mix-blend-mode: lighten" d="M29.292 13.206a3 3 0 0 1 5.416 0c6.1.957 10.809 5.236 11.292 12.711a27.685 27.685 0 0 0-3.96-1.302l-.94.602a2 2 0 0 1-2.463.462C36.547 24.559 34.335 24 32 24s-4.547.56-6.637 1.679a2 2 0 0 1-2.462-.462l-.94-.602A27.685 27.685 0 0 0 18 25.917c.483-7.475 5.192-11.754 11.292-12.71z" fill="$fill"/>
    <path style="mix-blend-mode: overlay" d="M21.96 24.615A27.685 27.685 0 0 0 18 25.917C18.553 17.367 24.632 13 32 13s13.447 4.368 14 12.917a27.685 27.685 0 0 0-3.96-1.302L43 24c-3.452-2.667-7.119-4-11-4s-7.548 1.333-11 4z" fill="#000" opacity=".279"/>
    <path style="mix-blend-mode: lighten" d="M41.448 24.994l-.349.223a2 2 0 0 1-2.462.462C36.547 24.559 34.335 24 32 24s-4.547.56-6.637 1.679a2 2 0 0 1-2.462-.462l-.349-.223c.866.068 2.183-.479 2.811-.815 2.09-1.12 4.302-1.679 6.637-1.679s4.547.56 6.637 1.679c.628.336 1.945.883 2.811.815z" fill="#fff" opacity=".203"/>
  </g>
</svg>
|j}

let component = ReasonReact.statelessComponent("SvgLoader");
let make =
    (~style=?, ~className="", ~name, ~fill="#000", ~size="64", _children) => {
  ...component,
  render: _self => {
    let getHtml = name =>
      switch (name) {
      | "Skin" => getSkin(fill, size)
      | "Mustache" => getMustache(fill, size)
      | "BeardMustache" => getBeardMustache(fill, size)
      | "Glasses" => getEyesGlasses(fill, size)
      | "Happy" => getEyesHappy(fill, size)
      | "Open" => getEyesOpen(fill, size)
      | "Sleepy" => getEyesSleepy(fill, size)
      | "Sunglasses" => getEyesSunglasses(fill, size)
      | "Wink" => getEyesWink(fill, size)
      | "Bigsmile" => getMouthBigsmile(fill, size)
      | "Frown" => getMouthFrown(fill, size)
      | "Lips" => getMouthLips(fill, size)
      | "Pacifier" => getMouthPacifier(fill, size)
      | "Smile" => getMouthSmile(fill, size)
      | "Smirk" => getMouthSmirk(fill, size)
      | "Surprise" => getMouthSurprise(fill, size)
      | "Mediumround" => getNoseMediumround(fill, size)
      | "Smallround" => getNoseSmallround(fill, size)
      | "Wrinkles" => getNoseWrinkles(fill, size)
      | "Oval" => getBodyOval(fill, size)
      | "Round" => getBodyRound(fill, size)
      | "Square" => getBodySquare(fill, size)
      | "Bald" => getBald(fill, size)
      | "Balding" => getBalding(fill, size)
      | "Bigcurls" => getBigcurls(fill, size)
      | "Bobbangs" => getBobbangs(fill, size)
      | "Bobcut" => getBobcut(fill, size)
      | "Buncurls" => getBuncurls(fill, size)
      | "Buzzcut" => getBuzzcut(fill, size)
      | "Curlybun" => getCurlybun(fill, size)
      | "Curlyhightop" => getCurlyhightop(fill, size)
      | "Long" => getLong(fill, size)
      | "Pigtails" => getPigtails(fill, size)
      | "Shortcombover" => getShortcombover(fill, size)
      | "Hat" => getHat(fill, size)
      | "Background" => getBackground(fill, size)
      | _ => ""
      };

    getHtml(name) == "" ?
      ReasonReact.null :
      <div
        id={j|$name|j}
        ?style
        className
        dangerouslySetInnerHTML={"__html": getHtml(name)}
      />;
  },
};
