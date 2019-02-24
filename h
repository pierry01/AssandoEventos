[33mcommit 4d689555fb5a306c8bd81dba25be959032b2d489[m[33m ([m[1;36mHEAD -> [m[1;32mmaster[m[33m)[m
Author: pierry01 <pierrybm@gmail.com>
Date:   Sun Feb 24 19:55:19 2019 -0300

    Theme assets and home page

[1mdiff --git a/Gemfile b/Gemfile[m
[1mindex 83d4e98..60275f3 100644[m
[1m--- a/Gemfile[m
[1m+++ b/Gemfile[m
[36m@@ -6,11 +6,13 @@[m [mruby '2.5.3'[m
 gem 'rails', '~> 5.2.2'[m
 gem 'pg', '>= 0.18', '< 2.0'[m
 gem 'puma', '~> 3.11'[m
[31m-gem 'sass-rails', '~> 5.0'[m
[32m+[m[32mgem 'sass-rails'[m
[32m+[m[32mgem 'sprockets'[m
 gem 'uglifier', '>= 1.3.0'[m
 gem 'coffee-rails', '~> 4.2'[m
 gem 'turbolinks', '~> 5'[m
 gem 'jbuilder', '~> 2.5'[m
[32m+[m[32mgem 'jquery-rails'[m
 gem 'bootsnap', '>= 1.1.0', require: false[m
 [m
 group :development, :test do[m
[1mdiff --git a/Gemfile.lock b/Gemfile.lock[m
[1mindex 23ffe92..f93f7d0 100644[m
[1m--- a/Gemfile.lock[m
[1m+++ b/Gemfile.lock[m
[36m@@ -85,6 +85,10 @@[m [mGEM[m
     jbuilder (2.8.0)[m
       activesupport (>= 4.2.0)[m
       multi_json (>= 1.2)[m
[32m+[m[32m    jquery-rails (4.3.3)[m
[32m+[m[32m      rails-dom-testing (>= 1, < 3)[m
[32m+[m[32m      railties (>= 4.2.0)[m
[32m+[m[32m      thor (>= 0.14, < 2.0)[m
     listen (3.1.5)[m
       rb-fsevent (~> 0.9, >= 0.9.4)[m
       rb-inotify (~> 0.9, >= 0.9.7)[m
[36m@@ -200,14 +204,16 @@[m [mDEPENDENCIES[m
   chromedriver-helper[m
   coffee-rails (~> 4.2)[m
   jbuilder (~> 2.5)[m
[32m+[m[32m  jquery-rails[m
   listen (>= 3.0.5, < 3.2)[m
   pg (>= 0.18, < 2.0)[m
   puma (~> 3.11)[m
   rails (~> 5.2.2)[m
[31m-  sass-rails (~> 5.0)[m
[32m+[m[32m  sass-rails[m
   selenium-webdriver[m
   spring[m
   spring-watcher-listen (~> 2.0.0)[m
[32m+[m[32m  sprockets[m
   turbolinks (~> 5)[m
   tzinfo-data[m
   uglifier (>= 1.3.0)[m
[1mdiff --git a/app/assets/images/logo.svg b/app/assets/images/logo.svg[m
[1mnew file mode 100644[m
[1mindex 0000000..c8ece25[m
[1m--- /dev/null[m
[1m+++ b/app/assets/images/logo.svg[m
[36m@@ -0,0 +1,14 @@[m
[32m+[m[32m<?xml version="1.0" encoding="utf-8"?>[m[41m[m
[32m+[m[32m<!DOCTYPE svg PUBLIC "-//W3C//DTD SVG 1.1//EN" "http://www.w3.org/Graphics/SVG/1.1/DTD/svg11.dtd">[m[41m[m
[32m+[m[32m<svg version="1.1" id="Layer_1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" x="0px" y="0px"[m[41m[m
[32m+[m	[32m width="149.167px" height="172.243px" viewBox="0 0 149.167 172.243" enable-background="new 0 0 149.167 172.243"[m[41m[m
[32m+[m	[32m xml:space="preserve">[m[41m[m
[32m+[m[32m<polygon fill="#585858" points="149.167,129.183 74.583,172.243 0,129.183 0,43.061 74.583,0 149.167,43.061 "/>[m[41m[m
[32m+[m[32m<path fill="#FFFFFF" d="M41.88,84.75l25.09,26.783L54.889,84.75H41.88z M74.583,115.841L88.64,84.75H60.527L74.583,115.841z[m[41m[m
[32m+[m	[32m M55.009,79.594l8.217-15.466H52.673l-11.6,15.466H55.009z M82.196,111.533l25.091-26.783h-13.01L82.196,111.533z M60.849,79.594[m[41m[m
[32m+[m	[32mh27.469l-8.217-15.466H69.065L60.849,79.594z M94.157,79.594h13.936L96.494,64.128H85.942L94.157,79.594z M99.835,60.02[m[41m[m
[32m+[m	[32ml15.467,20.621c0.376,0.483,0.55,1.04,0.523,1.671c-0.027,0.632-0.257,1.174-0.686,1.632l-38.664,41.243[m[41m[m
[32m+[m	[32mc-0.483,0.536-1.113,0.804-1.893,0.804c-0.778,0-1.408-0.268-1.892-0.804L34.026,83.944c-0.429-0.457-0.658-1-0.685-1.632[m[41m[m
[32m+[m	[32mc-0.027-0.631,0.147-1.188,0.523-1.671L49.331,60.02c0.484-0.699,1.168-1.047,2.054-1.047h46.398[m[41m[m
[32m+[m	[32mC98.667,58.973,99.353,59.322,99.835,60.02z"/>[m[41m[m
[32m+[m[32m</svg>[m[41m[m
[1mdiff --git a/app/assets/javascripts/application.js b/app/assets/javascripts/application.js[m
[1mindex 82e6f0f..61fbc1c 100644[m
[1m--- a/app/assets/javascripts/application.js[m
[1m+++ b/app/assets/javascripts/application.js[m
[36m@@ -1,16 +1,185 @@[m
[31m-// This is a manifest file that'll be compiled into application.js, which will include all the files[m
[31m-// listed below.[m
[31m-//[m
[31m-// Any JavaScript/Coffee file within this directory, lib/assets/javascripts, or any plugin's[m
[31m-// vendor/assets/javascripts directory can be referenced here using a relative path.[m
[31m-//[m
[31m-// It's not advisable to add code directly here, but if you do, it'll appear at the bottom of the[m
[31m-// compiled file. JavaScript code in this file should be added after the last require_* statement.[m
[31m-//[m
[31m-// Read Sprockets README (https://github.com/rails/sprockets#sprockets-directives) for details[m
[31m-// about supported directives.[m
[31m-//[m
[31m-//= require rails-ujs[m
[31m-//= require activestorage[m
[31m-//= require turbolinks[m
[31m-//= require_tree .[m
[32m+[m[32m//= require jquery[m
[32m+[m[32m//= require jquery_ujs[m
[32m+[m[32m//= require browser.min[m
[32m+[m[32m//= require breakpoints.min[m
[32m+[m[32m//= require util[m
[32m+[m
[32m+[m[32m(function($) {[m
[32m+[m
[32m+[m	[32mvar	$window = $(window),[m
[32m+[m		[32m$body = $('body');[m
[32m+[m
[32m+[m	[32m// Breakpoints.[m
[32m+[m		[32mbreakpoints({[m
[32m+[m			[32mxlarge:   [ '1281px',  '1680px' ],[m
[32m+[m			[32mlarge:    [ '981px',   '1280px' ],[m
[32m+[m			[32mmedium:   [ '737px',   '980px'  ],[m
[32m+[m			[32msmall:    [ '481px',   '736px'  ],[m
[32m+[m			[32mxsmall:   [ '361px',   '480px'  ],[m
[32m+[m			[32mxxsmall:  [ null,      '360px'  ][m
[32m+[m		[32m});[m
[32m+[m
[32m+[m	[32m// Play initial animations on page load.[m
[32m+[m		[32m$window.on('load', function() {[m
[32m+[m			[32mwindow.setTimeout(function() {[m
[32m+[m				[32m$body.removeClass('is-preload');[m
[32m+[m			[32m}, 100);[m
[32m+[m		[32m});[m
[32m+[m
[32m+[m	[32m// Touch?[m
[32m+[m		[32mif (browser.mobile)[m
[32m+[m			[32m$body.addClass('is-touch');[m
[32m+[m
[32m+[m	[32m// Forms.[m
[32m+[m		[32mvar $form = $('form');[m
[32m+[m
[32m+[m		[32m// Auto-resizing textareas.[m
[32m+[m			[32m$form.find('textarea').each(function() {[m
[32m+[m
[32m+[m				[32mvar $this = $(this),[m
[32m+[m					[32m$wrapper = $('<div class="textarea-wrapper"></div>'),[m
[32m+[m					[32m$submits = $this.find('input[type="submit"]');[m
[32m+[m
[32m+[m				[32m$this[m
[32m+[m					[32m.wrap($wrapper)[m
[32m+[m					[32m.attr('rows', 1)[m
[32m+[m					[32m.css('overflow', 'hidden')[m
[32m+[m					[32m.css('resize', 'none')[m
[32m+[m					[32m.on('keydown', function(event) {[m
[32m+[m
[32m+[m						[32mif (event.keyCode == 13[m
[32m+[m						[32m&&	event.ctrlKey) {[m
[32m+[m
[32m+[m							[32mevent.preventDefault();[m
[32m+[m							[32mevent.stopPropagation();[m
[32m+[m
[32m+[m							[32m$(this).blur();[m
[32m+[m
[32m+[m						[32m}[m
[32m+[m
[32m+[m					[32m})[m
[32m+[m					[32m.on('blur focus', function() {[m
[32m+[m						[32m$this.val($.trim($this.val()));[m
[32m+[m					[32m})[m
[32m+[m					[32m.on('input blur focus --init', function() {[m
[32m+[m
[32m+[m						[32m$wrapper[m
[32m+[m							[32m.css('height', $this.height());[m
[32m+[m
[32m+[m						[32m$this[m
[32m+[m							[32m.css('height', 'auto')[m
[32m+[m							[32m.css('height', $this.prop('scrollHeight') + 'px');[m
[32m+[m
[32m+[m					[32m})[m
[32m+[m					[32m.on('keyup', function(event) {[m
[32m+[m
[32m+[m						[32mif (event.keyCode == 9)[m
[32m+[m							[32m$this[m
[32m+[m								[32m.select();[m
[32m+[m
[32m+[m					[32m})[m
[32m+[m					[32m.triggerHandler('--init');[m
[32m+[m
[32m+[m				[32m// Fix.[m
[32m+[m					[32mif (browser.name == 'ie'[m
[32m+[m					[32m||	browser.mobile)[m
[32m+[m						[32m$this[m
[32m+[m							[32m.css('max-height', '10em')[m
[32m+[m							[32m.css('overflow-y', 'auto');[m
[32m+[m
[32m+[m			[32m});[m
[32m+[m
[32m+[m	[32m// Menu.[m
[32m+[m		[32mvar $menu = $('#menu');[m
[32m+[m
[32m+[m		[32m$menu.wrapInner('<div class="inner"></div>');[m
[32m+[m
[32m+[m		[32m$menu._locked = false;[m
[32m+[m
[32m+[m		[32m$menu._lock = function() {[m
[32m+[m
[32m+[m			[32mif ($menu._locked)[m
[32m+[m				[32mreturn false;[m
[32m+[m
[32m+[m			[32m$menu._locked = true;[m
[32m+[m
[32m+[m			[32mwindow.setTimeout(function() {[m
[32m+[m				[32m$menu._locked = false;[m
[32m+[m			[32m}, 350);[m
[32m+[m
[32m+[m			[32mreturn true;[m
[32m+[m
[32m+[m		[32m};[m
[32m+[m
[32m+[m		[32m$menu._show = function() {[m
[32m+[m
[32m+[m			[32mif ($menu._lock())[m
[32m+[m				[32m$body.addClass('is-menu-visible');[m
[32m+[m
[32m+[m		[32m};[m
[32m+[m
[32m+[m		[32m$menu._hide = function() {[m
[32m+[m
[32m+[m			[32mif ($menu._lock())[m
[32m+[m				[32m$body.removeClass('is-menu-visible');[m
[32m+[m
[32m+[m		[32m};[m
[32m+[m
[32m+[m		[32m$menu._toggle = function() {[m
[32m+[m
[32m+[m			[32mif ($menu._lock())[m
[32m+[m				[32m$body.toggleClass('is-menu-visible');[m
[32m+[m
[32m+[m		[32m};[m
[32m+[m
[32m+[m		[32m$menu[m
[32m+[m			[32m.appendTo($body)[m
[32m+[m			[32m.on('click', function(event) {[m
[32m+[m				[32mevent.stopPropagation();[m
[32m+[m			[32m})[m
[32m+[m			[32m.on('click', 'a', function(event) {[m
[32m+[m
[32m+[m				[32mvar href = $(this).attr('href');[m
[32m+[m
[32m+[m				[32mevent.preventDefault();[m
[32m+[m				[32mevent.stopPropagation();[m
[32m+[m
[32m+[m				[32m// Hide.[m
[32m+[m					[32m$menu._hide();[m
[32m+[m
[32m+[m				[32m// Redirect.[m
[32m+[m					[32mif (href == '#menu')[m
[32m+[m						[32mreturn;[m
[32m+[m
[32m+[m					[32mwindow.setTimeout(function() {[m
[32m+[m						[32mwindow.location.href = href;[m
[32m+[m					[32m}, 350);[m
[32m+[m
[32m+[m			[32m})[m
[32m+[m			[32m.append('<a class="close" href="#menu">Close</a>');[m
[32m+[m
[32m+[m		[32m$body[m
[32m+[m			[32m.on('click', 'a[href="#menu"]', function(event) {[m
[32m+[m
[32m+[m				[32mevent.stopPropagation();[m
[32m+[m				[32mevent.preventDefault();[m
[32m+[m
[32m+[m				[32m// Toggle.[m
[32m+[m					[32m$menu._toggle();[m
[32m+[m
[32m+[m			[32m})[m
[32m+[m			[32m.on('click', function(event) {[m
[32m+[m
[32m+[m				[32m// Hide.[m
[32m+[m					[32m$menu._hide();[m
[32m+[m
[32m+[m			[32m})[m
[32m+[m			[32m.on('keydown', function(event) {[m
[32m+[m
[32m+[m				[32m// Hide on escape.[m
[32m+[m					[32mif (event.keyCode == 27)[m
[32m+[m						[32m$menu._hide();[m
[32m+[m
[32m+[m			[32m});[m
[32m+[m
[32m+[m[32m})(jQuery);[m
\ No newline at end of file[m
[1mdiff --git a/app/assets/javascripts/breakpoints.min.js b/app/assets/javascripts/breakpoints.min.js[m
[1mnew file mode 100644[m
[1mindex 0000000..32419cc[m
[1m--- /dev/null[m
[1m+++ b/app/assets/javascripts/breakpoints.min.js[m
[36m@@ -0,0 +1,2 @@[m
[32m+[m[32m/* breakpoints.js v1.0 | @ajlkn | MIT licensed */[m[41m[m
[32m+[m[32mvar breakpoints=function(){"use strict";function e(e){t.init(e)}var t={list:null,media:{},events:[],init:function(e){t.list=e,window.addEventListener("resize",t.poll),window.addEventListener("orientationchange",t.poll),window.addEventListener("load",t.poll),window.addEventListener("fullscreenchange",t.poll)},active:function(e){var n,a,s,i,r,d,c;if(!(e in t.media)){if(">="==e.substr(0,2)?(a="gte",n=e.substr(2)):"<="==e.substr(0,2)?(a="lte",n=e.substr(2)):">"==e.substr(0,1)?(a="gt",n=e.substr(1)):"<"==e.substr(0,1)?(a="lt",n=e.substr(1)):"!"==e.substr(0,1)?(a="not",n=e.substr(1)):(a="eq",n=e),n&&n in t.list)if(i=t.list[n],Array.isArray(i)){if(r=parseInt(i[0]),d=parseInt(i[1]),isNaN(r)){if(isNaN(d))return;c=i[1].substr(String(d).length)}else c=i[0].substr(String(r).length);if(isNaN(r))switch(a){case"gte":s="screen";break;case"lte":s="screen and (max-width: "+d+c+")";break;case"gt":s="screen and (min-width: "+(d+1)+c+")";break;case"lt":s="screen and (max-width: -1px)";break;case"not":s="screen and (min-width: "+(d+1)+c+")";break;default:s="screen and (max-width: "+d+c+")"}else if(isNaN(d))switch(a){case"gte":s="screen and (min-width: "+r+c+")";break;case"lte":s="screen";break;case"gt":s="screen and (max-width: -1px)";break;case"lt":s="screen and (max-width: "+(r-1)+c+")";break;case"not":s="screen and (max-width: "+(r-1)+c+")";break;default:s="screen and (min-width: "+r+c+")"}else switch(a){case"gte":s="screen and (min-width: "+r+c+")";break;case"lte":s="screen and (max-width: "+d+c+")";break;case"gt":s="screen and (min-width: "+(d+1)+c+")";break;case"lt":s="screen and (max-width: "+(r-1)+c+")";break;case"not":s="screen and (max-width: "+(r-1)+c+"), screen and (min-width: "+(d+1)+c+")";break;default:s="screen and (min-width: "+r+c+") and (max-width: "+d+c+")"}}else s="("==i.charAt(0)?"screen and "+i:i;t.media[e]=!!s&&s}return t.media[e]!==!1&&window.matchMedia(t.media[e]).matches},on:function(e,n){t.events.push({query:e,handler:n,state:!1}),t.active(e)&&n()},poll:function(){var e,n;for(e=0;e<t.events.length;e++)n=t.events[e],t.active(n.query)?n.state||(n.state=!0,n.handler()):n.state&&(n.state=!1)}};return e._=t,e.on=function(e,n){t.on(e,n)},e.active=function(e){return t.active(e)},e}();!function(e,t){"function"==typeof define&&define.amd?define([],t):"object"==typeof exports?module.exports=t():e.breakpoints=t()}(this,function(){return breakpoints});[m
[1mdiff --git a/app/assets/javascripts/browser.min.js b/app/assets/javascripts/browser.min.js[m
[1mnew file mode 100644[m
[1mindex 0000000..262314e[m
[1m--- /dev/null[m
[1m+++ b/app/assets/javascripts/browser.min.js[m
[36m@@ -0,0 +1,2 @@[m
[32m+[m[32m/* browser.js v1.0 | @ajlkn | MIT licensed */[m[41m[m
[32m+[m[32mvar browser=function(){"use strict";var e={name:null,version:null,os:null,osVersion:null,touch:null,mobile:null,_canUse:null,canUse:function(n){e._canUse||(e._canUse=document.createElement("div"));var o=e._canUse.style,r=n.charAt(0).toUpperCase()+n.slice(1);return n in o||"Moz"+r in o||"Webkit"+r in o||"O"+r in o||"ms"+r in o},init:function(){var n,o,r,i,t=navigator.userAgent;for(n="other",o=0,r=[["firefox",/Firefox\/([0-9\.]+)/],["bb",/BlackBerry.+Version\/([0-9\.]+)/],["bb",/BB[0-9]+.+Version\/([0-9\.]+)/],["opera",/OPR\/([0-9\.]+)/],["opera",/Opera\/([0-9\.]+)/],["edge",/Edge\/([0-9\.]+)/],["safari",/Version\/([0-9\.]+).+Safari/],["chrome",/Chrome\/([0-9\.]+)/],["ie",/MSIE ([0-9]+)/],["ie",/Trident\/.+rv:([0-9]+)/]],i=0;i<r.length;i++)if(t.match(r[i][1])){n=r[i][0],o=parseFloat(RegExp.$1);break}for(e.name=n,e.version=o,n="other",o=0,r=[["ios",/([0-9_]+) like Mac OS X/,function(e){return e.replace("_",".").replace("_","")}],["ios",/CPU like Mac OS X/,function(e){return 0}],["wp",/Windows Phone ([0-9\.]+)/,null],["android",/Android ([0-9\.]+)/,null],["mac",/Macintosh.+Mac OS X ([0-9_]+)/,function(e){return e.replace("_",".").replace("_","")}],["windows",/Windows NT ([0-9\.]+)/,null],["bb",/BlackBerry.+Version\/([0-9\.]+)/,null],["bb",/BB[0-9]+.+Version\/([0-9\.]+)/,null],["linux",/Linux/,null],["bsd",/BSD/,null],["unix",/X11/,null]],i=0;i<r.length;i++)if(t.match(r[i][1])){n=r[i][0],o=parseFloat(r[i][2]?r[i][2](RegExp.$1):RegExp.$1);break}e.os=n,e.osVersion=o,e.touch="wp"==e.os?navigator.msMaxTouchPoints>0:!!("ontouchstart"in window),e.mobile="wp"==e.os||"android"==e.os||"ios"==e.os||"bb"==e.os}};return e.init(),e}();!function(e,n){"function"==typeof define&&define.amd?define([],n):"object"==typeof exports?module.exports=n():e.browser=n()}(this,function(){return browser});[m
[1mdiff --git a/app/assets/javascripts/cable.js b/app/assets/javascripts/cable.js[m
[1mdeleted file mode 100644[m
[1mindex 739aa5f..0000000[m
[1m--- a/app/assets/javascripts/cable.js[m
[1m+++ /dev/null[m
[36m@@ -1,13 +0,0 @@[m
[31m-// Action Cable provides the framework to deal with WebSockets in Rails.[m
[31m-// You can generate new channels where WebSocket features live using the `rails generate channel` command.[m
[31m-//[m
[31m-//= require action_cable[m
[31m-//= require_self[m
[31m-//= require_tree ./channels[m
[31m-[m
[31m-(function() {[m
[31m-  this.App || (this.App = {});[m
[31m-[m
[31m-  App.cable = ActionCable.createConsumer();[m
[31m-[m
[31m-}).call(this);[m
[1mdiff --git a/app/assets/javascripts/jquery.min.js b/app/assets/javascripts/jquery.min.js[m
[1mnew file mode 100644[m
[1mindex 0000000..4d9b3a2[m
[1m--- /dev/null[m
[1m+++ b/app/assets/javascripts/jquery.min.js[m
[36m@@ -0,0 +1,2 @@[m
[32m+[m[32m/*! jQuery v3.3.1 | (c) JS Foundation and other contributors | jquery.org/license */[m
[32m+[m[32m!function(e,t){"use strict";"object"==typeof module&&"object"==typeof module.exports?module.exports=e.document?t(e,!0):function(e){if(!e.document)throw new Error("jQuery requires a window with a document");return t(e)}:t(e)}("undefined"!=typeof window?window:this,function(e,t){"use strict";var n=[],r=e.document,i=Object.getPrototypeOf,o=n.slice,a=n.concat,s=n.push,u=n.indexOf,l={},c=l.toString,f=l.hasOwnProperty,p=f.toString,d=p.call(Object),h={},g=function e(t){return"function"==typeof t&&"number"!=typeof t.nodeType},y=function e(t){return null!=t&&t===t.window},v={type:!0,src:!0,noModule:!0};function m(e,t,n){var i,o=(t=t||r).createElement("script");if(o.text=e,n)for(i in v)n[i]&&(o[i]=n[i]);t.head.appendChild(o).parentNode.removeChild(o)}function x(e){return null==e?e+"":"object"==typeof e||"function"==typeof e?l[c.call(e)]||"object":typeof e}var b="3.3.1",w=function(e,t){return new w.fn.init(e,t)},T=/^[\s\uFEFF\xA0]+|[\s\uFEFF\xA0]+$/g;w.fn=w.prototype={jquery:"3.3.1",constructor:w,length:0,toArray:function(){return o.call(this)},get:function(e){return null==e?o.call(this):e<0?this[e+this.length]:this[e]},pushStack:function(e){var t=w.merge(this.constructor(),e);return t.prevObject=this,t},each:function(e){return w.each(this,e)},map:function(e){return this.pushStack(w.map(this,function(t,n){return e.call(t,n,t)}))},slice:function(){return this.pushStack(o.apply(this,arguments))},first:function(){return this.eq(0)},last:function(){return this.eq(-1)},eq:function(e){var t=this.length,n=+e+(e<0?t:0);return this.pushStack(n>=0&&n<t?[this[n]]:[])},end:function(){return this.prevObject||this.constructor()},push:s,sort:n.sort,splice:n.splice},w.extend=w.fn.extend=function(){var e,t,n,r,i,o,a=arguments[0]||{},s=1,u=arguments.length,l=!1;for("boolean"==typeof a&&(l=a,a=arguments[s]||{},s++),"object"==typeof a||g(a)||(a={}),s===u&&(a=this,s--);s<u;s++)if(null!=(e=arguments[s]))for(t in e)n=a[t],a!==(r=e[t])&&(l&&r&&(w.isPlainObject(r)||(i=Array.isArray(r)))?(i?(i=!1,o=n&&Array.isArray(n)?n:[]):o=n&&w.isPlainObject(n)?n:{},a[t]=w.extend(l,o,r)):void 0!==r&&(a[t]=r));return a},w.extend({expando:"jQuery"+("3.3.1"+Math.random()).replace(/\D/g,""),isReady:!0,error:function(e){throw new Error(e)},noop:function(){},isPlainObject:function(e){var t,n;return!(!e||"[object Object]"!==c.call(e))&&(!(t=i(e))||"function"==typeof(n=f.call(t,"constructor")&&t.constructor)&&p.call(n)===d)},isEmptyObject:function(e){var t;for(t in e)return!1;return!0},globalEval:function(e){m(e)},each:function(e,t){var n,r=0;if(C(e)){for(n=e.length;r<n;r++)if(!1===t.call(e[r],r,e[r]))break}else for(r in e)if(!1===t.call(e[r],r,e[r]))break;return e},trim:function(e){return null==e?"":(e+"").replace(T,"")},makeArray:function(e,t){var n=t||[];return null!=e&&(C(Object(e))?w.merge(n,"string"==typeof e?[e]:e):s.call(n,e)),n},inArray:function(e,t,n){return null==t?-1:u.call(t,e,n)},merge:function(e,t){for(var n=+t.length,r=0,i=e.length;r<n;r++)e[i++]=t[r];return e.length=i,e},grep:function(e,t,n){for(var r,i=[],o=0,a=e.length,s=!n;o<a;o++)(r=!t(e[o],o))!==s&&i.push(e[o]);return i},map:function(e,t,n){var r,i,o=0,s=[];if(C(e))for(r=e.length;o<r;o++)null!=(i=t(e[o],o,n))&&s.push(i);else for(o in e)null!=(i=t(e[o],o,n))&&s.push(i);return a.apply([],s)},guid:1,support:h}),"function"==typeof Symbol&&(w.fn[Symbol.iterator]=n[Symbol.iterator]),w.each("Boolean Number String Function Array Date RegExp Object Error Symbol".split(" "),function(e,t){l["[object "+t+"]"]=t.toLowerCase()});function C(e){var t=!!e&&"length"in e&&e.length,n=x(e);return!g(e)&&!y(e)&&("array"===n||0===t||"number"==typeof t&&t>0&&t-1 in e)}var E=function(e){var t,n,r,i,o,a,s,u,l,c,f,p,d,h,g,y,v,m,x,b="sizzle"+1*new Date,w=e.document,T=0,C=0,E=ae(),k=ae(),S=ae(),D=function(e,t){return e===t&&(f=!0),0},N={}.hasOwnProperty,A=[],j=A.pop,q=A.push,L=A.push,H=A.slice,O=function(e,t){for(var n=0,r=e.length;n<r;n++)if(e[n]===t)return n;return-1},P="checked|selected|async|autofocus|autoplay|controls|defer|disabled|hidden|ismap|loop|multiple|open|readonly|required|scoped",M="[\\x20\\t\\r\\n\\f]",R="(?:\\\\.|[\\w-]|[^\0-\\xa0])+",I="\\["+M+"*("+R+")(?:"+M+"*([*^$|!~]?=)"+M+"*(?:'((?:\\\\.|[^\\\\'])*)'|\"((?:\\\\.|[^\\\\\"])*)\"|("+R+"))|)"+M+"*\\]",W=":("+R+")(?:\\((('((?:\\\\.|[^\\\\'])*)'|\"((?:\\\\.|[^\\\\\"])*)\")|((?:\\\\.|[^\\\\()[\\]]|"+I+")*)|.*)\\)|)",$=new RegExp(M+"+","g"),B=new RegExp("^"+M+"+|((?:^|[^\\\\])(?:\\\\.)*)"+M+"+$","g"),F=new RegExp("^"+M+"*,"+M+"*"),_=new RegExp("^"+M+"*([>+~]|"+M+")"+M+"*"),z=new RegExp("="+M+"*([^\\]'\"]*?)"+M+"*\\]","g"),X=new RegExp(W),U=new RegExp("^"+R+"$"),V={ID:new RegExp("^#("+R+")"),CLASS:new RegExp("^\\.("+R+")"),TAG:new RegExp("^("+R+"|[*])"),ATTR:new RegExp("^"+I),PSEUDO:new RegExp("^"+W),CHILD:new RegExp("^:(only|first|last|nth|nth-last)-(child|of-type)(?:\\("+M+"*(even|odd|(([+-]|)(\\d*)n|)"+M+"*(?:([+-]|)"+M+"*(\\d+)|))"+M+"*\\)|)","i"),bool:new RegExp("^(?:"+P+")$","i"),needsContext:new RegExp("^"+M+"*[>+~]|:(even|odd|eq|gt|lt|nth|first|last)(?:\\("+M+"*((?:-\\d)?\\d*)"+M+"*\\)|)(?=[^-]|$)","i")},G=/^(?:input|select|textarea|button)$/i,Y=/^h\d$/i,Q=/^[^{]+\{\s*\[native \w/,J=/^(?:#([\w-]+)|(\w+)|\.([\w-]+))$/,K=/[+~]/,Z=new RegExp("\\\\([\\da-f]{1,6}"+M+"?|("+M+")|.)","ig"),ee=function(e,t,n){var r="0x"+t-65536;return r!==r||n?t:r<0?String.fromCharCode(r+65536):String.fromCharCode(r>>10|55296,1023&r|56320)},te=/([\0-\x1f\x7f]|^-?\d)|^-$|[^\0-\x1f\x7f-\uFFFF\w-]/g,ne=function(e,t){return t?"\0"===e?"\ufffd":e.slice(0,-1)+"\\"+e.charCodeAt(e.length-1).toString(16)+" ":"\\"+e},re=function(){p()},ie=me(function(e){return!0===e.disabled&&("form"in e||"label"in e)},{dir:"parentNode",next:"legend"});try{L.apply(A=H.call(w.childNodes),w.childNodes),A[w.childNodes.length].nodeType}catch(e){L={apply:A.length?function(e,t){q.apply(e,H.call(t))}:function(e,t){var n=e.length,r=0;while(e[n++]=t[r++]);e.length=n-1}}}function oe(e,t,r,i){var o,s,l,c,f,h,v,m=t&&t.ownerDocument,T=t?t.nodeType:9;if(r=r||[],"string"!=typeof e||!e||1!==T&&9!==T&&11!==T)return r;if(!i&&((t?t.ownerDocument||t:w)!==d&&p(t),t=t||d,g)){if(11!==T&&(f=J.exec(e)))if(o=f[1]){if(9===T){if(!(l=t.getElementById(o)))return r;if(l.id===o)return r.push(l),r}else if(m&&(l=m.getElementById(o))&&x(t,l)&&l.id===o)return r.push(l),r}else{if(f[2])return L.apply(r,t.getElementsByTagName(e)),r;if((o=f[3])&&n.getElementsByClassName&&t.getElementsByClassName)return L.apply(r,t.getElementsByClassName(o)),r}if(n.qsa&&!S[e+" "]&&(!y||!y.test(e))){if(1!==T)m=t,v=e;else if("object"!==t.nodeName.toLowerCase()){(c=t.getAttribute("id"))?c=c.replace(te,ne):t.setAttribute("id",c=b),s=(h=a(e)).length;while(s--)h[s]="#"+c+" "+ve(h[s]);v=h.join(","),m=K.test(e)&&ge(t.parentNode)||t}if(v)try{return L.apply(r,m.querySelectorAll(v)),r}catch(e){}finally{c===b&&t.removeAttribute("id")}}}return u(e.replace(B,"$1"),t,r,i)}function ae(){var e=[];function t(n,i){return e.push(n+" ")>r.cacheLength&&delete t[e.shift()],t[n+" "]=i}return t}function se(e){return e[b]=!0,e}function ue(e){var t=d.createElement("fieldset");try{return!!e(t)}catch(e){return!1}finally{t.parentNode&&t.parentNode.removeChild(t),t=null}}function le(e,t){var n=e.split("|"),i=n.length;while(i--)r.attrHandle[n[i]]=t}function ce(e,t){var n=t&&e,r=n&&1===e.nodeType&&1===t.nodeType&&e.sourceIndex-t.sourceIndex;if(r)return r;if(n)while(n=n.nextSibling)if(n===t)return-1;return e?1:-1}function fe(e){return function(t){return"input"===t.nodeName.toLowerCase()&&t.type===e}}function pe(e){return function(t){var n=t.nodeName.toLowerCase();return("input"===n||"button"===n)&&t.type===e}}function de(e){return function(t){return"form"in t?t.parentNode&&!1===t.disabled?"label"in t?"label"in t.parentNode?t.parentNode.disabled===e:t.disabled===e:t.isDisabled===e||t.isDisabled!==!e&&ie(t)===e:t.disabled===e:"label"in t&&t.disabled===e}}function he(e){return se(function(t){return t=+t,se(function(n,r){var i,o=e([],n.length,t),a=o.length;while(a--)n[i=o[a]]&&(n[i]=!(r[i]=n[i]))})})}function ge(e){return e&&"undefined"!=typeof e.getElementsByTagName&&e}n=oe.support={},o=oe.isXML=function(e){var t=e&&(e.ownerDocument||e).documentElement;return!!t&&"HTML"!==t.nodeName},p=oe.setDocument=function(e){var t,i,a=e?e.ownerDocument||e:w;return a!==d&&9===a.nodeType&&a.documentElement?(d=a,h=d.documentElement,g=!o(d),w!==d&&(i=d.defaultView)&&i.top!==i&&(i.addEventListener?i.addEventListener("unload",re,!1):i.attachEvent&&i.attachEvent("onunload",re)),n.attributes=ue(function(e){return e.className="i",!e.getAttribute("className")}),n.getElementsByTagName=ue(function(e){return e.appendChild(d.createComment("")),!e.getElementsByTagName("*").length}),n.getElementsByClassName=Q.test(d.getElementsByClassName),n.getById=ue(function(e){return h.appendChild(e).id=b,!d.getElementsByName||!d.getElementsByName(b).length}),n.getById?(r.filter.ID=function(e){var t=e.replace(Z,ee);return function(e){return e.getAttribute("id")===t}},r.find.ID=function(e,t){if("undefined"!=typeof t.getElementById&&g){var n=t.getElementById(e);return n?[n]:[]}}):(r.filter.ID=function(e){var t=e.replace(Z,ee);return function(e){var n="undefined"!=typeof e.getAttributeNode&&e.getAttributeNode("id");return n&&n.value===t}},r.find.ID=function(e,t){if("undefined"!=typeof t.getElementById&&g){var n,r,i,o=t.getElementById(e);if(o){if((n=o.getAttributeNode("id"))&&n.value===e)return[o];i=t.getElementsByName(e),r=0;while(o=i[r++])if((n=o.getAttributeNode("id"))&&n.value===e)return[o]}return[]}}),r.find.TAG=n.getElementsByTagName?function(e,t){return"undefined"!=typeof t.getElementsByTagName?t.getElementsByTagName(e):n.qsa?t.querySelectorAll(e):void 0}:function(e,t){var n,r=[],i=0,o=t.getElementsByTagName(e);if("*"===e){while(n=o[i++])1===n.nodeType&&r.push(n);return r}return o},r.find.CLASS=n.getElementsByClassName&&function(e,t){if("undefined"!=typeof t.getElementsByClassName&&g)return t.getElementsByClassName(e)},v=[],y=[],(n.qsa=Q.test(d.querySelectorAll))&&(ue(function(e){h.appendChild(e).innerHTML="<a id='"+b+"'></a><select id='"+b+"-\r\\' msallowcapture=''><option selected=''></option></select>",e.querySelectorAll("[msallowcapture^='']").length&&y.push("[*^$]="+M+"*(?:''|\"\")"),e.querySelectorAll("[selected]").length||y.push("\\["+M+"*(?:value|"+P+")"),e.querySelectorAll("[id~="+b+"-]").length||y.push("~="),e.querySelectorAll(":checked").length||y.push(":checked"),e.querySelectorAll("a#"+b+"+*").length||y.push(".#.+[+~]")}),ue(function(e){e.innerHTML="<a href='' disabled='disabled'></a><select disabled='disabled'><option/></select>";var t=d.createElement("input");t.setAttribute("type","hidden"),e.appendChild(t).setAttribute("name","D"),e.querySelectorAll("[name=d]").length&&y.push("name"+M+"*[*^$|!~]?="),2!==e.querySelectorAll(":enabled").length&&y.push(":enabled",":disabled"),h.appendChild(e).disabled=!0,2!==e.querySelectorAll(":disabled").length&&y.push(":enabled",":disabled"),e.querySelectorAll("*,:x"),y.push(",.*:")})),(n.matchesSelector=Q.test(m=h.matches||h.webkitMatchesSelector||h.mozMatchesSelector||h.oMatchesSelector||h.msMatchesSelector))&&ue(function(e){n.disconnectedMatch=m.call(e,"*"),m.call(e,"[s!='']:x"),v.push("!=",W)}),y=y.length&&new RegExp(y.join("|")),v=v.length&&new RegExp(v.join("|")),t=Q.test(h.compareDocumentPosition),x=t||Q.test(h.contains)?function(e,t){var n=9===e.nodeType?e.documentElement:e,r=t&&t.parentNode;return e===r||!(!r||1!==r.nodeType||!(n.contains?n.contains(r):e.compareDocumentPosition&&16&e.compareDocumentPosition(r)))}:function(e,t){if(t)while(t=t.parentNode)if(t===e)return!0;return!1},D=t?function(e,t){if(e===t)return f=!0,0;var r=!e.compareDocumentPosition-!t.compareDocumentPosition;return r||(1&(r=(e.ownerDocument||e)===(t.ownerDocument||t)?e.compareDocumentPosition(t):1)||!n.sortDetached&&t.compareDocumentPosition(e)===r?e===d||e.ownerDocument===w&&x(w,e)?-1:t===d||t.ownerDocument===w&&x(w,t)?1:c?O(c,e)-O(c,t):0:4&r?-1:1)}:function(e,t){if(e===t)return f=!0,0;var n,r=0,i=e.parentNode,o=t.parentNode,a=[e],s=[t];if(!i||!o)return e===d?-1:t===d?1:i?-1:o?1:c?O(c,e)-O(c,t):0;if(i===o)return ce(e,t);n=e;while(n=n.parentNode)a.unshift(n);n=t;while(n=n.parentNode)s.unshift(n);while(a[r]===s[r])r++;return r?ce(a[r],s[r]):a[r]===w?-1:s[r]===w?1:0},d):d},oe.matches=function(e,t){return oe(e,null,null,t)},oe.matchesSelector=function(e,t){if((e.ownerDocument||e)!==d&&p(e),t=t.replace(z,"='$1']"),n.matchesSelector&&g&&!S[t+" "]&&(!v||!v.test(t))&&(!y||!y.test(t)))try{var r=m.call(e,t);if(r||n.disconnectedMatch||e.document&&11!==e.document.nodeType)return r}catch(e){}return oe(t,d,null,[e]).length>0},oe.contains=function(e,t){return(e.ownerDocument||e)!==d&&p(e),x(e,t)},oe.attr=function(e,t){(e.ownerDocument||e)!==d&&p(e);var i=r.attrHandle[t.toLowerCase()],o=i&&N.call(r.attrHandle,t.toLowerCase())?i(e,t,!g):void 0;return void 0!==o?o:n.attributes||!g?e.getAttribute(t):(o=e.getAttributeNode(t))&&o.specified?o.value:null},oe.escape=function(e){return(e+"").replace(te,ne)},oe.error=function(e){throw new Error("Syntax error, unrecognized expression: "+e)},oe.uniqueSort=function(e){var t,r=[],i=0,o=0;if(f=!n.detectDuplicates,c=!n.sortStable&&e.slice(0),e.sort(D),f){while(t=e[o++])t===e[o]&&(i=r.push(o));while(i--)e.splice(r[i],1)}return c=null,e},i=oe.getText=function(e){var t,n="",r=0,o=e.nodeType;if(o){if(1===o||9===o||11===o){if("string"==typeof e.textContent)return e.textContent;for(e=e.firstChild;e;e=e.nextSibling)n+=i(e)}else if(3===o||4===o)return e.nodeValue}else while(t=e[r++])n+=i(t);return n},(r=oe.selectors={cacheLength:50,createPseudo:se,match:V,attrHandle:{},find:{},relative:{">":{dir:"parentNode",first:!0}," ":{dir:"parentNode"},"+":{dir:"previousSibling",first:!0},"~":{dir:"previousSibling"}},preFilter:{ATTR:function(e){return e[1]=e[1].replace(Z,ee),e[3]=(e[3]||e[4]||e[5]||"").replace(Z,ee),"~="===e[2]&&(e[3]=" "+e[3]+" "),e.slice(0,4)},CHILD:function(e){return e[1]=e[1].toLowerCase(),"nth"===e[1].slice(0,3)?(e[3]||oe.error(e[0]),e[4]=+(e[4]?e[5]+(e[6]||1):2*("even"===e[3]||"odd"===e[3])),e[5]=+(e[7]+e[8]||"odd"===e[3])):e[3]&&oe.error(e[0]),e},PSEUDO:function(e){var t,n=!e[6]&&e[2];return V.CHILD.test(e[0])?null:(e[3]?e[2]=e[4]||e[5]||"":n&&X.test(n)&&(t=a(n,!0))&&(t=n.indexOf(")",n.length-t)-n.length)&&(e[0]=e[0].slice(0,t),e[2]=n.slice(0,t)),e.slice(0,3))}},filter:{TAG:function(e){var t=e.replace(Z,ee).toLowerCase();return"*"===e?function(){return!0}:function(e){return e.nodeName&&e.nodeName.toLowerCase()===t}},CLASS:function(e){var t=E[e+" "];return t||(t=new RegExp("(^|"+M+")"+e+"("+M+"|$)"))&&E(e,function(e){return t.test("string"==typeof e.className&&e.className||"undefined"!=typeof e.getAttribute&&e.getAttribute("class")||"")})},ATTR:function(e,t,n){return function(r){var i=oe.attr(r,e);return null==i?"!="===t:!t||(i+="","="===t?i===n:"!="===t?i!==n:"^="===t?n&&0===i.indexOf(n):"*="===t?n&&i.indexOf(n)>-1:"$="===t?n&&i.slice(-n.length)===n:"~="===t?(" "+i.replace($," ")+" ").indexOf(n)>-1:"|="===t&&(i===n||i.slice(0,n.length+1)===n+"-"))}},CHILD:function(e,t,n,r,i){var o="nth"!==e.slice(0,3),a="last"!==e.slice(-4),s="of-type"===t;return 1===r&&0===i?function(e){return!!e.parentNode}:function(t,n,u){var l,c,f,p,d,h,g=o!==a?"nextSibling":"previousSibling",y=t.parentNode,v=s&&t.nodeName.toLowerCase(),m=!u&&!s,x=!1;if(y){if(o){while(g){p=t;while(p=p[g])if(s?p.nodeName.toLowerCase()===v:1===p.nodeType)return!1;h=g="only"===e&&!h&&"nextSibling"}return!0}if(h=[a?y.firstChild:y.lastChild],a&&m){x=(d=(l=(c=(f=(p=y)[b]||(p[b]={}))[p.uniqueID]||(f[p.uniqueID]={}))[e]||[])[0]===T&&l[1])&&l[2],p=d&&y.childNodes[d];while(p=++d&&p&&p[g]||(x=d=0)||h.pop())if(1===p.nodeType&&++x&&p===t){c[e]=[T,d,x];break}}else if(m&&(x=d=(l=(c=(f=(p=t)[b]||(p[b]={}))[p.uniqueID]||(f[p.uniqueID]={}))[e]||[])[0]===T&&l[1]),!1===x)while(p=++d&&p&&p[g]||(x=d=0)||h.pop())if((s?p.nodeName.toLowerCase()===v:1===p.nodeType)&&++x&&(m&&((c=(f=p[b]||(p[b]={}))[p.uniqueID]||(f[p.uniqueID]={}))[e]=[T,x]),p===t))break;return(x-=i)===r||x%r==0&&x/r>=0}}},PSEUDO:function(e,t){var n,i=r.pseudos[e]||r.setFilters[e.toLowerCase()]||oe.error("unsupported pseudo: "+e);return i[b]?i(t):i.length>1?(n=[e,e,"",t],r.setFilters.hasOwnProperty(e.toLowerCase())?se(function(e,n){var r,o=i(e,t),a=o.length;while(a--)e[r=O(e,o[a])]=!(n[r]=o[a])}):function(e){return i(e,0,n)}):i}},pseudos:{not:se(function(e){var t=[],n=[],r=s(e.replace(B,"$1"));return r[b]?se(function(e,t,n,i){var o,a=r(e,null,i,[]),s=e.length;while(s--)(o=a[s])&&(e[s]=!(t[s]=o))}):function(e,i,o){return t[0]=e,r(t,null,o,n),t[0]=null,!n.pop()}}),has:se(function(e){return function(t){return oe(e,t).length>0}}),contains:se(function(e){return e=e.replace(Z,ee),function(t){return(t.textContent||t.innerText||i(t)).indexOf(e)>-1}}),lang:se(function(e){return U.test(e||"")||oe.error("unsupported lang: "+e),e=e.replace(Z,ee).toLowerCase(),function(t){var n;do{if(n=g?t.lang:t.getAttribute("xml:lang")||t.getAttribute("lang"))return(n=n.toLowerCase())===e||0===n.indexOf(e+"-")}while((t=t.parentNode)&&1===t.nodeType);return!1}}),target:function(t){var n=e.location&&e.location.hash;return n&&n.slice(1)===t.id},root:function(e){return e===h},focus:function(e){return e===d.activeElement&&(!d.hasFocus||d.hasFocus())&&!!(e.type||e.href||~e.tabIndex)},enabled:de(!1),disabled:de(!0),checked:function(e){var t=e.nodeName.toLowerCase();return"input"===t&&!!e.checked||"option"===t&&!!e.selected},selected:function(e){return e.parentNode&&e.parentNode.selectedIndex,!0===e.selected},empty:function(e){for(e=e.firstChild;e;e=e.nextSibling)if(e.nodeType<6)return!1;return!0},parent:function(e){return!r.pseudos.empty(e)},header:function(e){return Y.test(e.nodeName)},input:function(e){return G.test(e.nodeName)},button:function(e){var t=e.nodeName.toLowerCase();return"input"===t&&"button"===e.type||"button"===t},text:function(e){var t;return"input"===e.nodeName.toLowerCase()&&"text"===e.type&&(null==(t=e.getAttribute("type"))||"text"===t.toLowerCase())},first:he(function(){return[0]}),last:he(function(e,t){return[t-1]}),eq:he(function(e,t,n){return[n<0?n+t:n]}),even:he(function(e,t){for(var n=0;n<t;n+=2)e.push(n);return e}),odd:he(function(e,t){for(var n=1;n<t;n+=2)e.push(n);return e}),lt:he(function(e,t,n){for(var r=n<0?n+t:n;--r>=0;)e.push(r);return e}),gt:he(function(e,t,n){for(var r=n<0?n+t:n;++r<t;)e.push(r);return e})}}).pseudos.nth=r.pseudos.eq;for(t in{radio:!0,checkbox:!0,file:!0,password:!0,image:!0})r.pseudos[t]=fe(t);for(t in{submit:!0,reset:!0})r.pseudos[t]=pe(t);function ye(){}ye.prototype=r.filters=r.pseudos,r.setFilters=new ye,a=oe.tokenize=function(e,t){var n,i,o,a,s,u,l,c=k[e+" "];if(c)return t?0:c.slice(0);s=e,u=[],l=r.preFilter;while(s){n&&!(i=F.exec(s))||(i&&(s=s.slice(i[0].length)||s),u.push(o=[])),n=!1,(i=_.exec(s))&&(n=i.shift(),o.push({value:n,type:i[0].replace(B," ")}),s=s.slice(n.length));for(a in r.filter)!(i=V[a].exec(s))||l[a]&&!(i=l[a](i))||(n=i.shift(),o.push({value:n,type:a,matches:i}),s=s.slice(n.length));if(!n)break}return t?s.length:s?oe.error(e):k(e,u).slice(0)};function ve(e){for(var t=0,n=e.length,r="";t<n;t++)r+=e[t].value;return r}function me(e,t,n){var r=t.dir,i=t.next,o=i||r,a=n&&"parentNode"===o,s=C++;return t.first?function(t,n,i){while(t=t[r])if(1===t.nodeType||a)return e(t,n,i);return!1}:function(t,n,u){var l,c,f,p=[T,s];if(u){while(t=t[r])if((1===t.nodeType||a)&&e(t,n,u))return!0}else while(t=t[r])if(1===t.nodeType||a)if(f=t[b]||(t[b]={}),c=f[t.uniqueID]||(f[t.uniqueID]={}),i&&i===t.nodeName.toLowerCase())t=t[r]||t;else{if((l=c[o])&&l[0]===T&&l[1]===s)return p[2]=l[2];if(c[o]=p,p[2]=e(t,n,u))return!0}return!1}}function xe(e){return e.length>1?function(t,n,r){var i=e.length;while(i--)if(!e[i](t,n,r))return!1;return!0}:e[0]}function be(e,t,n){for(var r=0,i=t.length;r<i;r++)oe(e,t[r],n);return n}function we(e,t,n,r,i){for(var o,a=[],s=0,u=e.length,l=null!=t;s<u;s++)(o=e[s])&&(n&&!n(o,r,i)||(a.push(o),l&&t.push(s)));return a}function Te(e,t,n,r,i,o){return r&&!r[b]&&(r=Te(r)),i&&!i[b]&&(i=Te(i,o)),se(function(o,a,s,u){var l,c,f,p=[],d=[],h=a.length,g=o||be(t||"*",s.nodeType?[s]:s,[]),y=!e||!o&&t?g:we(g,p,e,s,u),v=n?i||(o?e:h||r)?[]:a:y;if(n&&n(y,v,s,u),r){l=we(v,d),r(l,[],s,u),c=l.length;while(c--)(f=l[c])&&(v[d[c]]=!(y[d[c]]=f))}if(o){if(i||e){if(i){l=[],c=v.length;while(c--)(f=v[c])&&l.push(y[c]=f);i(null,v=[],l,u)}c=v.length;while(c--)(f=v[c])&&(l=i?O(o,f):p[c])>-1&&(o[l]=!(a[l]=f))}}else v=we(v===a?v.splice(h,v.length):v),i?i(null,a,v,u):L.apply(a,v)})}function Ce(e){for(var t,n,i,o=e.length,a=r.relative[e[0].type],s=a||r.relative[" "],u=a?1:0,c=me(function(e){return e===t},s,!0),f=me(function(e){return O(t,e)>-1},s,!0),p=[function(e,n,r){var i=!a&&(r||n!==l)||((t=n).nodeType?c(e,n,r):f(e,n,r));return t=null,i}];u<o;u++)if(n=r.relative[e[u].type])p=[me(xe(p),n)];else{if((n=r.filter[e[u].type].apply(null,e[u].matches))[b]){for(i=++u;i<o;i++)if(r.relative[e[i].type])break;return Te(u>1&&xe(p),u>1&&ve(e.slice(0,u-1).concat({value:" "===e[u-2].type?"*":""})).replace(B,"$1"),n,u<i&&Ce(e.slice(u,i)),i<o&&Ce(e=e.slice(i)),i<o&&ve(e))}p.push(n)}return xe(p)}function Ee(e,t){var n=t.length>0,i=e.length>0,o=function(o,a,s,u,c){var f,h,y,v=0,m="0",x=o&&[],b=[],w=l,C=o||i&&r.find.TAG("*",c),E=T+=null==w?1:Math.random()||.1,k=C.length;for(c&&(l=a===d||a||c);m!==k&&null!=(f=C[m]);m++){if(i&&f){h=0,a||f.ownerDocument===d||(p(f),s=!g);while(y=e[h++])if(y(f,a||d,s)){u.push(f);break}c&&(T=E)}n&&((f=!y&&f)&&v--,o&&x.push(f))}if(v+=m,n&&m!==v){h=0;while(y=t[h++])y(x,b,a,s);if(o){if(v>0)while(m--)x[m]||b[m]||(b[m]=j.call(u));b=we(b)}L.apply(u,b),c&&!o&&b.length>0&&v+t.length>1&&oe.uniqueSort(u)}return c&&(T=E,l=w),x};return n?se(o):o}return s=oe.compile=function(e,t){var n,r=[],i=[],o=S[e+" "];if(!o){t||(t=a(e)),n=t.length;while(n--)(o=Ce(t[n]))[b]?r.push(o):i.push(o);(o=S(e,Ee(i,r))).selector=e}return o},u=oe.select=function(e,t,n,i){var o,u,l,c,f,p="function"==typeof e&&e,d=!i&&a(e=p.selector||e);if(n=n||[],1===d.length){if((u=d[0]=d[0].slice(0)).length>2&&"ID"===(l=u[0]).type&&9===t.nodeType&&g&&r.relative[u[1].type]){if(!(t=(r.find.ID(l.matches[0].replace(Z,ee),t)||[])[0]))return n;p&&(t=t.parentNode),e=e.slice(u.shift().value.length)}o=V.needsContext.test(e)?0:u.length;while(o--){if(l=u[o],r.relative[c=l.type])break;if((f=r.find[c])&&(i=f(l.matches[0].replace(Z,ee),K.test(u[0].type)&&ge(t.parentNode)||t))){if(u.splice(o,1),!(e=i.length&&ve(u)))return L.apply(n,i),n;break}}}return(p||s(e,d))(i,t,!g,n,!t||K.test(e)&&ge(t.parentNode)||t),n},n.sortStable=b.split("").sort(D).join("")===b,n.detectDuplicates=!!f,p(),n.sortDetached=ue(function(e){return 1&e.compareDocumentPosition(d.createElement("fieldset"))}),ue(function(e){return e.innerHTML="<a href='#'></a>","#"===e.firstChild.getAttribute("href")})||le("type|href|height|width",function(e,t,n){if(!n)return e.getAttribute(t,"type"===t.toLowerCase()?1:2)}),n.attributes&&ue(function(e){return e.innerHTML="<input/>",e.firstChild.setAttribute("value",""),""===e.firstChild.getAttribute("value")})||le("value",function(e,t,n){if(!n&&"input"===e.nodeName.toLowerCase())return e.defaultValue}),ue(function(e){return null==e.getAttribute("disabled")})||le(P,function(e,t,n){var r;if(!n)return!0===e[t]?t.toLowerCase():(r=e.getAttributeNode(t))&&r.specified?r.value:null}),oe}(e);w.find=E,w.expr=E.selectors,w.expr[":"]=w.expr.pseudos,w.uniqueSort=w.unique=E.uniqueSort,w.text=E.getText,w.isXMLDoc=E.isXML,w.contains=E.contains,w.escapeSelector=E.escape;var k=function(e,t,n){var r=[],i=void 0!==n;while((e=e[t])&&9!==e.nodeType)if(1===e.nodeType){if(i&&w(e).is(n))break;r.push(e)}return r},S=function(e,t){for(var n=[];e;e=e.nextSibling)1===e.nodeType&&e!==t&&n.push(e);return n},D=w.expr.match.needsContext;function N(e,t){return e.nodeName&&e.nodeName.toLowerCase()===t.toLowerCase()}var A=/^<([a-z][^\/\0>:\x20\t\r\n\f]*)[\x20\t\r\n\f]*\/?>(?:<\/\1>|)$/i;function j(e,t,n){return g(t)?w.grep(e,function(e,r){return!!t.call(e,r,e)!==n}):t.nodeType?w.grep(e,function(e){return e===t!==n}):"string"!=typeof t?w.grep(e,function(e){return u.call(t,e)>-1!==n}):w.filter(t,e,n)}w.filter=function(e,t,n){var r=t[0];return n&&(e=":not("+e+")"),1===t.length&&1===r.nodeType?w.find.matchesSelector(r,e)?[r]:[]:w.find.matches(e,w.grep(t,function(e){return 1===e.nodeType}))},w.fn.extend({find:function(e){var t,n,r=this.length,i=this;if("string"!=typeof e)return this.pushStack(w(e).filter(function(){for(t=0;t<r;t++)if(w.contains(i[t],this))return!0}));for(n=this.pushStack([]),t=0;t<r;t++)w.find(e,i[t],n);return r>1?w.uniqueSort(n):n},filter:function(e){return this.pushStack(j(this,e||[],!1))},not:function(e){return this.pushStack(j(this,e||[],!0))},is:function(e){return!!j(this,"string"==typeof e&&D.test(e)?w(e):e||[],!1).length}});var q,L=/^(?:\s*(<[\w\W]+>)[^>]*|#([\w-]+))$/;(w.fn.init=function(e,t,n){var i,o;if(!e)return this;if(n=n||q,"string"==typeof e){if(!(i="<"===e[0]&&">"===e[e.length-1]&&e.length>=3?[null,e,null]:L.exec(e))||!i[1]&&t)return!t||t.jquery?(t||n).find(e):this.constructor(t).find(e);if(i[1]){if(t=t instanceof w?t[0]:t,w.merge(this,w.parseHTML(i[1],t&&t.nodeType?t.ownerDocument||t:r,!0)),A.test(i[1])&&w.isPlainObject(t))for(i in t)g(this[i])?this[i](t[i]):this.attr(i,t[i]);return this}return(o=r.getElementById(i[2]))&&(this[0]=o,this.length=1),this}return e.nodeType?(this[0]=e,this.length=1,this):g(e)?void 0!==n.ready?n.ready(e):e(w):w.makeArray(e,this)}).prototype=w.fn,q=w(r);var H=/^(?:parents|prev(?:Until|All))/,O={children:!0,contents:!0,next:!0,prev:!0};w.fn.extend({has:function(e){var t=w(e,this),n=t.length;return this.filter(function(){for(var e=0;e<n;e++)if(w.contains(this,t[e]))return!0})},closest:function(e,t){var n,r=0,i=this.length,o=[],a="string"!=typeof e&&w(e);if(!D.test(e))for(;r<i;r++)for(n=this[r];n&&n!==t;n=n.parentNode)if(n.nodeType<11&&(a?a.index(n)>-1:1===n.nodeType&&w.find.matchesSelector(n,e))){o.push(n);break}return this.pushStack(o.length>1?w.uniqueSort(o):o)},index:function(e){return e?"string"==typeof e?u.call(w(e),this[0]):u.call(this,e.jquery?e[0]:e):this[0]&&this[0].parentNode?this.first().prevAll().length:-1},add:function(e,t){return this.pushStack(w.uniqueSort(w.merge(this.get(),w(e,t))))},addBack:function(e){return this.add(null==e?this.prevObject:this.prevObject.filter(e))}});function P(e,t){while((e=e[t])&&1!==e.nodeType);return e}w.each({parent:function(e){var t=e.parentNode;return t&&11!==t.nodeType?t:null},parents:function(e){return k(e,"parentNode")},parentsUntil:function(e,t,n){return k(e,"parentNode",n)},next:function(e){return P(e,"nextSibling")},prev:function(e){return P(e,"previousSibling")},nextAll:function(e){return k(e,"nextSibling")},prevAll:function(e){return k(e,"previousSibling")},nextUntil:function(e,t,n){return k(e,"nextSibling",n)},prevUntil:function(e,t,n){return k(e,"previousSibling",n)},siblings:function(e){return S((e.parentNode||{}).firstChild,e)},children:function(e){return S(e.firstChild)},contents:function(e){return N(e,"iframe")?e.contentDocument:(N(e,"template")&&(e=e.content||e),w.merge([],e.childNodes))}},function(e,t){w.fn[e]=function(n,r){var i=w.map(this,t,n);return"Until"!==e.slice(-5)&&(r=n),r&&"string"==typeof r&&(i=w.filter(r,i)),this.length>1&&(O[e]||w.uniqueSort(i),H.test(e)&&i.reverse()),this.pushStack(i)}});var M=/[^\x20\t\r\n\f]+/g;function R(e){var t={};return w.each(e.match(M)||[],function(e,n){t[n]=!0}),t}w.Callbacks=function(e){e="string"==typeof e?R(e):w.extend({},e);var t,n,r,i,o=[],a=[],s=-1,u=function(){for(i=i||e.once,r=t=!0;a.length;s=-1){n=a.shift();while(++s<o.length)!1===o[s].apply(n[0],n[1])&&e.stopOnFalse&&(s=o.length,n=!1)}e.memory||(n=!1),t=!1,i&&(o=n?[]:"")},l={add:function(){return o&&(n&&!t&&(s=o.length-1,a.push(n)),function t(n){w.each(n,function(n,r){g(r)?e.unique&&l.has(r)||o.push(r):r&&r.length&&"string"!==x(r)&&t(r)})}(arguments),n&&!t&&u()),this},remove:function(){return w.each(arguments,function(e,t){var n;while((n=w.inArray(t,o,n))>-1)o.splice(n,1),n<=s&&s--}),this},has:function(e){return e?w.inArray(e,o)>-1:o.length>0},empty:function(){return o&&(o=[]),this},disable:function(){return i=a=[],o=n="",this},disabled:function(){return!o},lock:function(){return i=a=[],n||t||(o=n=""),this},locked:function(){return!!i},fireWith:function(e,n){return i||(n=[e,(n=n||[]).slice?n.slice():n],a.push(n),t||u()),this},fire:function(){return l.fireWith(this,arguments),this},fired:function(){return!!r}};return l};function I(e){return e}function W(e){throw e}function $(e,t,n,r){var i;try{e&&g(i=e.promise)?i.call(e).done(t).fail(n):e&&g(i=e.then)?i.call(e,t,n):t.apply(void 0,[e].slice(r))}catch(e){n.apply(void 0,[e])}}w.extend({Deferred:function(t){var n=[["notify","progress",w.Callbacks("memory"),w.Callbacks("memory"),2],["resolve","done",w.Callbacks("once memory"),w.Callbacks("once memory"),0,"resolved"],["reject","fail",w.Callbacks("once memory"),w.Callbacks("once memory"),1,"rejected"]],r="pending",i={state:function(){return r},always:function(){return o.done(arguments).fail(arguments),this},"catch":function(e){return i.then(null,e)},pipe:function(){var e=arguments;return w.Deferred(function(t){w.each(n,function(n,r){var i=g(e[r[4]])&&e[r[4]];o[r[1]](function(){var e=i&&i.apply(this,arguments);e&&g(e.promise)?e.promise().progress(t.notify).done(t.resolve).fail(t.reject):t[r[0]+"With"](this,i?[e]:arguments)})}),e=null}).promise()},then:function(t,r,i){var o=0;function a(t,n,r,i){return function(){var s=this,u=arguments,l=function(){var e,l;if(!(t<o)){if((e=r.apply(s,u))===n.promise())throw new TypeError("Thenable self-resolution");l=e&&("object"==typeof e||"function"==typeof e)&&e.then,g(l)?i?l.call(e,a(o,n,I,i),a(o,n,W,i)):(o++,l.call(e,a(o,n,I,i),a(o,n,W,i),a(o,n,I,n.notifyWith))):(r!==I&&(s=void 0,u=[e]),(i||n.resolveWith)(s,u))}},c=i?l:function(){try{l()}catch(e){w.Deferred.exceptionHook&&w.Deferred.exceptionHook(e,c.stackTrace),t+1>=o&&(r!==W&&(s=void 0,u=[e]),n.rejectWith(s,u))}};t?c():(w.Deferred.getStackHook&&(c.stackTrace=w.Deferred.getStackHook()),e.setTimeout(c))}}return w.Deferred(function(e){n[0][3].add(a(0,e,g(i)?i:I,e.notifyWith)),n[1][3].add(a(0,e,g(t)?t:I)),n[2][3].add(a(0,e,g(r)?r:W))}).promise()},promise:function(e){return null!=e?w.extend(e,i):i}},o={};return w.each(n,function(e,t){var a=t[2],s=t[5];i[t[1]]=a.add,s&&a.add(function(){r=s},n[3-e][2].disable,n[3-e][3].disable,n[0][2].lock,n[0][3].lock),a.add(t[3].fire),o[t[0]]=function(){return o[t[0]+"With"](this===o?void 0:this,arguments),this},o[t[0]+"With"]=a.fireWith}),i.promise(o),t&&t.call(o,o),o},when:function(e){var t=arguments.length,n=t,r=Array(n),i=o.call(arguments),a=w.Deferred(),s=function(e){return function(n){r[e]=this,i[e]=arguments.length>1?o.call(arguments):n,--t||a.resolveWith(r,i)}};if(t<=1&&($(e,a.done(s(n)).resolve,a.reject,!t),"pending"===a.state()||g(i[n]&&i[n].then)))return a.then();while(n--)$(i[n],s(n),a.reject);return a.promise()}});var B=/^(Eval|Internal|Range|Reference|Syntax|Type|URI)Error$/;w.Deferred.exceptionHook=function(t,n){e.console&&e.console.warn&&t&&B.test(t.name)&&e.console.warn("jQuery.Deferred exception: "+t.message,t.stack,n)},w.readyException=function(t){e.setTimeout(function(){throw t})};var F=w.Deferred();w.fn.ready=function(e){return F.then(e)["catch"](function(e){w.readyException(e)}),this},w.extend({isReady:!1,readyWait:1,ready:function(e){(!0===e?--w.readyWait:w.isReady)||(w.isReady=!0,!0!==e&&--w.readyWait>0||F.resolveWith(r,[w]))}}),w.ready.then=F.then;function _(){r.removeEventListener("DOMContentLoaded",_),e.removeEventListener("load",_),w.ready()}"complete"===r.readyState||"loading"!==r.readyState&&!r.documentElement.doScroll?e.setTimeout(w.ready):(r.addEventListener("DOMContentLoaded",_),e.addEventListener("load",_));var z=function(e,t,n,r,i,o,a){var s=0,u=e.length,l=null==n;if("object"===x(n)){i=!0;for(s in n)z(e,t,s,n[s],!0,o,a)}else if(void 0!==r&&(i=!0,g(r)||(a=!0),l&&(a?(t.call(e,r),t=null):(l=t,t=function(e,t,n){return l.call(w(e),n)})),t))for(;s<u;s++)t(e[s],n,a?r:r.call(e[s],s,t(e[s],n)));return i?e:l?t.call(e):u?t(e[0],n):o},X=/^-ms-/,U=/-([a-z])/g;function V(e,t){return t.toUpperCase()}function G(e){return e.replace(X,"ms-").replace(U,V)}var Y=function(e){return 1===e.nodeType||9===e.nodeType||!+e.nodeType};function Q(){this.expando=w.expando+Q.uid++}Q.uid=1,Q.prototype={cache:function(e){var t=e[this.expando];return t||(t={},Y(e)&&(e.nodeType?e[this.expando]=t:Object.defineProperty(e,this.expando,{value:t,configurable:!0}))),t},set:function(e,t,n){var r,i=this.cache(e);if("string"==typeof t)i[G(t)]=n;else for(r in t)i[G(r)]=t[r];return i},get:function(e,t){return void 0===t?this.cache(e):e[this.expando]&&e[this.expando][G(t)]},access:function(e,t,n){return void 0===t||t&&"string"==typeof t&&void 0===n?this.get(e,t):(this.set(e,t,n),void 0!==n?n:t)},remove:function(e,t){var n,r=e[this.expando];if(void 0!==r){if(void 0!==t){n=(t=Array.isArray(t)?t.map(G):(t=G(t))in r?[t]:t.match(M)||[]).length;while(n--)delete r[t[n]]}(void 0===t||w.isEmptyObject(r))&&(e.nodeType?e[this.expando]=void 0:delete e[this.expando])}},hasData:function(e){var t=e[this.expando];return void 0!==t&&!w.isEmptyObject(t)}};var J=new Q,K=new Q,Z=/^(?:\{[\w\W]*\}|\[[\w\W]*\])$/,ee=/[A-Z]/g;function te(e){return"true"===e||"false"!==e&&("null"===e?null:e===+e+""?+e:Z.test(e)?JSON.parse(e):e)}function ne(e,t,n){var r;if(void 0===n&&1===e.nodeType)if(r="data-"+t.replace(ee,"-$&").toLowerCase(),"string"==typeof(n=e.getAttribute(r))){try{n=te(n)}catch(e){}K.set(e,t,n)}else n=void 0;return n}w.extend({hasData:function(e){return K.hasData(e)||J.hasData(e)},data:function(e,t,n){return K.access(e,t,n)},removeData:function(e,t){K.remove(e,t)},_data:function(e,t,n){return J.access(e,t,n)},_removeData:function(e,t){J.remove(e,t)}}),w.fn.extend({data:function(e,t){var n,r,i,o=this[0],a=o&&o.attributes;if(void 0===e){if(this.length&&(i=K.get(o),1===o.nodeType&&!J.get(o,"hasDataAttrs"))){n=a.length;while(n--)a[n]&&0===(r=a[n].name).indexOf("data-")&&(r=G(r.slice(5)),ne(o,r,i[r]));J.set(o,"hasDataAttrs",!0)}return i}return"object"==typeof e?this.each(function(){K.set(this,e)}):z(this,function(t){var n;if(o&&void 0===t){if(void 0!==(n=K.get(o,e)))return n;if(void 0!==(n=ne(o,e)))return n}else this.each(function(){K.set(this,e,t)})},null,t,arguments.length>1,null,!0)},removeData:function(e){return this.each(function(){K.remove(this,e)})}}),w.extend({queue:function(e,t,n){var r;if(e)return t=(t||"fx")+"queue",r=J.get(e,t),n&&(!r||Array.isArray(n)?r=J.access(e,t,w.makeArray(n)):r.push(n)),r||[]},dequeue:function(e,t){t=t||"fx";var n=w.queue(e,t),r=n.length,i=n.shift(),o=w._queueHooks(e,t),a=function(){w.dequeue(e,t)};"inprogress"===i&&(i=n.shift(),r--),i&&("fx"===t&&n.unshift("inprogress"),delete o.stop,i.call(e,a,o)),!r&&o&&o.empty.fire()},_queueHooks:function(e,t){var n=t+"queueHooks";return J.get(e,n)||J.access(e,n,{empty:w.Callbacks("once memory").add(function(){J.remove(e,[t+"queue",n])})})}}),w.fn.extend({queue:function(e,t){var n=2;return"string"!=typeof e&&(t=e,e="fx",n--),arguments.length<n?w.queue(this[0],e):void 0===t?this:this.each(function(){var n=w.queue(this,e,t);w._queueHooks(this,e),"fx"===e&&"inprogress"!==n[0]&&w.dequeue(this,e)})},dequeue:function(e){return this.each(function(){w.dequeue(this,e)})},clearQueue:function(e){return this.queue(e||"fx",[])},promise:function(e,t){var n,r=1,i=w.Deferred(),o=this,a=this.length,s=function(){--r||i.resolveWith(o,[o])};"string"!=typeof e&&(t=e,e=void 0),e=e||"fx";while(a--)(n=J.get(o[a],e+"queueHooks"))&&n.empty&&(r++,n.empty.add(s));return s(),i.promise(t)}});var re=/[+-]?(?:\d*\.|)\d+(?:[eE][+-]?\d+|)/.source,ie=new RegExp("^(?:([+-])=|)("+re+")([a-z%]*)$","i"),oe=["Top","Right","Bottom","Left"],ae=function(e,t){return"none"===(e=t||e).style.display||""===e.style.display&&w.contains(e.ownerDocument,e)&&"none"===w.css(e,"display")},se=function(e,t,n,r){var i,o,a={};for(o in t)a[o]=e.style[o],e.style[o]=t[o];i=n.apply(e,r||[]);for(o in t)e.style[o]=a[o];return i};function ue(e,t,n,r){var i,o,a=20,s=r?function(){return r.cur()}:function(){return w.css(e,t,"")},u=s(),l=n&&n[3]||(w.cssNumber[t]?"":"px"),c=(w.cssNumber[t]||"px"!==l&&+u)&&ie.exec(w.css(e,t));if(c&&c[3]!==l){u/=2,l=l||c[3],c=+u||1;while(a--)w.style(e,t,c+l),(1-o)*(1-(o=s()/u||.5))<=0&&(a=0),c/=o;c*=2,w.style(e,t,c+l),n=n||[]}return n&&(c=+c||+u||0,i=n[1]?c+(n[1]+1)*n[2]:+n[2],r&&(r.unit=l,r.start=c,r.end=i)),i}var le={};function ce(e){var t,n=e.ownerDocument,r=e.nodeName,i=le[r];return i||(t=n.body.appendChild(n.createElement(r)),i=w.css(t,"display"),t.parentNode.removeChild(t),"none"===i&&(i="block"),le[r]=i,i)}function fe(e,t){for(var n,r,i=[],o=0,a=e.length;o<a;o++)(r=e[o]).style&&(n=r.style.display,t?("none"===n&&(i[o]=J.get(r,"display")||null,i[o]||(r.style.display="")),""===r.style.display&&ae(r)&&(i[o]=ce(r))):"none"!==n&&(i[o]="none",J.set(r,"display",n)));for(o=0;o<a;o++)null!=i[o]&&(e[o].style.display=i[o]);return e}w.fn.extend({show:function(){return fe(this,!0)},hide:function(){return fe(this)},toggle:function(e){return"boolean"==typeof e?e?this.show():this.hide():this.each(function(){ae(this)?w(this).show():w(this).hide()})}});var pe=/^(?:checkbox|radio)$/i,de=/<([a-z][^\/\0>\x20\t\r\n\f]+)/i,he=/^$|^module$|\/(?:java|ecma)script/i,ge={option:[1,"<select multiple='multiple'>","</select>"],thead:[1,"<table>","</table>"],col:[2,"<table><colgroup>","</colgroup></table>"],tr:[2,"<table><tbody>","</tbody></table>"],td:[3,"<table><tbody><tr>","</tr></tbody></table>"],_default:[0,"",""]};ge.optgroup=ge.option,ge.tbody=ge.tfoot=ge.colgroup=ge.caption=ge.thead,ge.th=ge.td;function ye(e,t){var n;return n="undefined"!=typeof e.getElementsByTagName?e.getElementsByTagName(t||"*"):"undefined"!=typeof e.querySelectorAll?e.querySelectorAll(t||"*"):[],void 0===t||t&&N(e,t)?w.merge([e],n):n}function ve(e,t){for(var n=0,r=e.length;n<r;n++)J.set(e[n],"globalEval",!t||J.get(t[n],"globalEval"))}var me=/<|&#?\w+;/;function xe(e,t,n,r,i){for(var o,a,s,u,l,c,f=t.createDocumentFragment(),p=[],d=0,h=e.length;d<h;d++)if((o=e[d])||0===o)if("object"===x(o))w.merge(p,o.nodeType?[o]:o);else if(me.test(o)){a=a||f.appendChild(t.createElement("div")),s=(de.exec(o)||["",""])[1].toLowerCase(),u=ge[s]||ge._default,a.innerHTML=u[1]+w.htmlPrefilter(o)+u[2],c=u[0];while(c--)a=a.lastChild;w.merge(p,a.childNodes),(a=f.firstChild).textContent=""}else p.push(t.createTextNode(o));f.textContent="",d=0;while(o=p[d++])if(r&&w.inArray(o,r)>-1)i&&i.push(o);else if(l=w.contains(o.ownerDocument,o),a=ye(f.appendChild(o),"script"),l&&ve(a),n){c=0;while(o=a[c++])he.test(o.type||"")&&n.push(o)}return f}!function(){var e=r.createDocumentFragment().appendChild(r.createElement("div")),t=r.createElement("input");t.setAttribute("type","radio"),t.setAttribute("checked","checked"),t.setAttribute("name","t"),e.appendChild(t),h.checkClone=e.cloneNode(!0).cloneNode(!0).lastChild.checked,e.innerHTML="<textarea>x</textarea>",h.noCloneChecked=!!e.cloneNode(!0).lastChild.defaultValue}();var be=r.documentElement,we=/^key/,Te=/^(?:mouse|pointer|contextmenu|drag|drop)|click/,Ce=/^([^.]*)(?:\.(.+)|)/;function Ee(){return!0}function ke(){return!1}function Se(){try{return r.activeElement}catch(e){}}function De(e,t,n,r,i,o){var a,s;if("object"==typeof t){"string"!=typeof n&&(r=r||n,n=void 0);for(s in t)De(e,s,n,r,t[s],o);return e}if(null==r&&null==i?(i=n,r=n=void 0):null==i&&("string"==typeof n?(i=r,r=void 0):(i=r,r=n,n=void 0)),!1===i)i=ke;else if(!i)return e;return 1===o&&(a=i,(i=function(e){return w().off(e),a.apply(this,arguments)}).guid=a.guid||(a.guid=w.guid++)),e.each(function(){w.event.add(this,t,i,r,n)})}w.event={global:{},add:function(e,t,n,r,i){var o,a,s,u,l,c,f,p,d,h,g,y=J.get(e);if(y){n.handler&&(n=(o=n).handler,i=o.selector),i&&w.find.matchesSelector(be,i),n.guid||(n.guid=w.guid++),(u=y.events)||(u=y.events={}),(a=y.handle)||(a=y.handle=function(t){return"undefined"!=typeof w&&w.event.triggered!==t.type?w.event.dispatch.apply(e,arguments):void 0}),l=(t=(t||"").match(M)||[""]).length;while(l--)d=g=(s=Ce.exec(t[l])||[])[1],h=(s[2]||"").split(".").sort(),d&&(f=w.event.special[d]||{},d=(i?f.delegateType:f.bindType)||d,f=w.event.special[d]||{},c=w.extend({type:d,origType:g,data:r,handler:n,guid:n.guid,selector:i,needsContext:i&&w.expr.match.needsContext.test(i),namespace:h.join(".")},o),(p=u[d])||((p=u[d]=[]).delegateCount=0,f.setup&&!1!==f.setup.call(e,r,h,a)||e.addEventListener&&e.addEventListener(d,a)),f.add&&(f.add.call(e,c),c.handler.guid||(c.handler.guid=n.guid)),i?p.splice(p.delegateCount++,0,c):p.push(c),w.event.global[d]=!0)}},remove:function(e,t,n,r,i){var o,a,s,u,l,c,f,p,d,h,g,y=J.hasData(e)&&J.get(e);if(y&&(u=y.events)){l=(t=(t||"").match(M)||[""]).length;while(l--)if(s=Ce.exec(t[l])||[],d=g=s[1],h=(s[2]||"").split(".").sort(),d){f=w.event.special[d]||{},p=u[d=(r?f.delegateType:f.bindType)||d]||[],s=s[2]&&new RegExp("(^|\\.)"+h.join("\\.(?:.*\\.|)")+"(\\.|$)"),a=o=p.length;while(o--)c=p[o],!i&&g!==c.origType||n&&n.guid!==c.guid||s&&!s.test(c.namespace)||r&&r!==c.selector&&("**"!==r||!c.selector)||(p.splice(o,1),c.selector&&p.delegateCount--,f.remove&&f.remove.call(e,c));a&&!p.length&&(f.teardown&&!1!==f.teardown.call(e,h,y.handle)||w.removeEvent(e,d,y.handle),delete u[d])}else for(d in u)w.event.remove(e,d+t[l],n,r,!0);w.isEmptyObject(u)&&J.remove(e,"handle events")}},dispatch:function(e){var t=w.event.fix(e),n,r,i,o,a,s,u=new Array(arguments.length),l=(J.get(this,"events")||{})[t.type]||[],c=w.event.special[t.type]||{};for(u[0]=t,n=1;n<arguments.length;n++)u[n]=arguments[n];if(t.delegateTarget=this,!c.preDispatch||!1!==c.preDispatch.call(this,t)){s=w.event.handlers.call(this,t,l),n=0;while((o=s[n++])&&!t.isPropagationStopped()){t.currentTarget=o.elem,r=0;while((a=o.handlers[r++])&&!t.isImmediatePropagationStopped())t.rnamespace&&!t.rnamespace.test(a.namespace)||(t.handleObj=a,t.data=a.data,void 0!==(i=((w.event.special[a.origType]||{}).handle||a.handler).apply(o.elem,u))&&!1===(t.result=i)&&(t.preventDefault(),t.stopPropagation()))}return c.postDispatch&&c.postDispatch.call(this,t),t.result}},handlers:function(e,t){var n,r,i,o,a,s=[],u=t.delegateCount,l=e.target;if(u&&l.nodeType&&!("click"===e.type&&e.button>=1))for(;l!==this;l=l.parentNode||this)if(1===l.nodeType&&("click"!==e.type||!0!==l.disabled)){for(o=[],a={},n=0;n<u;n++)void 0===a[i=(r=t[n]).selector+" "]&&(a[i]=r.needsContext?w(i,this).index(l)>-1:w.find(i,this,null,[l]).length),a[i]&&o.push(r);o.length&&s.push({elem:l,handlers:o})}return l=this,u<t.length&&s.push({elem:l,handlers:t.slice(u)}),s},addProp:function(e,t){Object.defineProperty(w.Event.prototype,e,{enumerable:!0,configurable:!0,get:g(t)?function(){if(this.originalEvent)return t(this.originalEvent)}:function(){if(this.originalEvent)return this.originalEvent[e]},set:function(t){Object.defineProperty(this,e,{enumerable:!0,configurable:!0,writable:!0,value:t})}})},fix:function(e){return e[w.expando]?e:new w.Event(e)},special:{load:{noBubble:!0},focus:{trigger:function(){if(this!==Se()&&this.focus)return this.focus(),!1},delegateType:"focusin"},blur:{trigger:function(){if(this===Se()&&this.blur)return this.blur(),!1},delegateType:"focusout"},click:{trigger:function(){if("checkbox"===this.type&&this.click&&N(this,"input"))return this.click(),!1},_default:function(e){return N(e.target,"a")}},beforeunload:{postDispatch:function(e){void 0!==e.result&&e.originalEvent&&(e.originalEvent.returnValue=e.result)}}}},w.removeEvent=function(e,t,n){e.removeEventListener&&e.removeEventListener(t,n)},w.Event=function(e,t){if(!(this instanceof w.Event))return new w.Event(e,t);e&&e.type?(this.originalEvent=e,this.type=e.type,this.isDefaultPrevented=e.defaultPrevented||void 0===e.defaultPrevented&&!1===e.returnValue?Ee:ke,this.target=e.target&&3===e.target.nodeType?e.target.parentNode:e.target,this.currentTarget=e.currentTarget,this.relatedTarget=e.relatedTarget):this.type=e,t&&w.extend(this,t),this.timeStamp=e&&e.timeStamp||Date.now(),this[w.expando]=!0},w.Event.prototype={constructor:w.Event,isDefaultPrevented:ke,isPropagationStopped:ke,isImmediatePropagationStopped:ke,isSimulated:!1,preventDefault:function(){var e=this.originalEvent;this.isDefaultPrevented=Ee,e&&!this.isSimulated&&e.preventDefault()},stopPropagation:function(){var e=this.originalEvent;this.isPropagationStopped=Ee,e&&!this.isSimulated&&e.stopPropagation()},stopImmediatePropagation:function(){var e=this.originalEvent;this.isImmediatePropagationStopped=Ee,e&&!this.isSimulated&&e.stopImmediatePropagation(),this.stopPropagation()}},w.each({altKey:!0,bubbles:!0,cancelable:!0,changedTouches:!0,ctrlKey:!0,detail:!0,eventPhase:!0,metaKey:!0,pageX:!0,pageY:!0,shiftKey:!0,view:!0,"char":!0,charCode:!0,key:!0,keyCode:!0,button:!0,buttons:!0,clientX:!0,clientY:!0,offsetX:!0,offsetY:!0,pointerId:!0,pointerType:!0,screenX:!0,screenY:!0,targetTouches:!0,toElement:!0,touches:!0,which:function(e){var t=e.button;return null==e.which&&we.test(e.type)?null!=e.charCode?e.charCode:e.keyCode:!e.which&&void 0!==t&&Te.test(e.type)?1&t?1:2&t?3:4&t?2:0:e.which}},w.event.addProp),w.each({mouseenter:"mouseover",mouseleave:"mouseout",pointerenter:"pointerover",pointerleave:"pointerout"},function(e,t){w.event.special[e]={delegateType:t,bindType:t,handle:function(e){var n,r=this,i=e.relatedTarget,o=e.handleObj;return i&&(i===r||w.contains(r,i))||(e.type=o.origType,n=o.handler.apply(this,arguments),e.type=t),n}}}),w.fn.extend({on:function(e,t,n,r){return De(this,e,t,n,r)},one:function(e,t,n,r){return De(this,e,t,n,r,1)},off:function(e,t,n){var r,i;if(e&&e.preventDefault&&e.handleObj)return r=e.handleObj,w(e.delegateTarget).off(r.namespace?r.origType+"."+r.namespace:r.origType,r.selector,r.handler),this;if("object"==typeof e){for(i in e)this.off(i,t,e[i]);return this}return!1!==t&&"function"!=typeof t||(n=t,t=void 0),!1===n&&(n=ke),this.each(function(){w.event.remove(this,e,n,t)})}});var Ne=/<(?!area|br|col|embed|hr|img|input|link|meta|param)(([a-z][^\/\0>\x20\t\r\n\f]*)[^>]*)\/>/gi,Ae=/<script|<style|<link/i,je=/checked\s*(?:[^=]|=\s*.checked.)/i,qe=/^\s*<!(?:\[CDATA\[|--)|(?:\]\]|--)>\s*$/g;function Le(e,t){return N(e,"table")&&N(11!==t.nodeType?t:t.firstChild,"tr")?w(e).children("tbody")[0]||e:e}function He(e){return e.type=(null!==e.getAttribute("type"))+"/"+e.type,e}function Oe(e){return"true/"===(e.type||"").slice(0,5)?e.type=e.type.slice(5):e.removeAttribute("type"),e}function Pe(e,t){var n,r,i,o,a,s,u,l;if(1===t.nodeType){if(J.hasData(e)&&(o=J.access(e),a=J.set(t,o),l=o.events)){delete a.handle,a.events={};for(i in l)for(n=0,r=l[i].length;n<r;n++)w.event.add(t,i,l[i][n])}K.hasData(e)&&(s=K.access(e),u=w.extend({},s),K.set(t,u))}}function Me(e,t){var n=t.nodeName.toLowerCase();"input"===n&&pe.test(e.type)?t.checked=e.checked:"input"!==n&&"textarea"!==n||(t.defaultValue=e.defaultValue)}function Re(e,t,n,r){t=a.apply([],t);var i,o,s,u,l,c,f=0,p=e.length,d=p-1,y=t[0],v=g(y);if(v||p>1&&"string"==typeof y&&!h.checkClone&&je.test(y))return e.each(function(i){var o=e.eq(i);v&&(t[0]=y.call(this,i,o.html())),Re(o,t,n,r)});if(p&&(i=xe(t,e[0].ownerDocument,!1,e,r),o=i.firstChild,1===i.childNodes.length&&(i=o),o||r)){for(u=(s=w.map(ye(i,"script"),He)).length;f<p;f++)l=i,f!==d&&(l=w.clone(l,!0,!0),u&&w.merge(s,ye(l,"script"))),n.call(e[f],l,f);if(u)for(c=s[s.length-1].ownerDocument,w.map(s,Oe),f=0;f<u;f++)l=s[f],he.test(l.type||"")&&!J.access(l,"globalEval")&&w.contains(c,l)&&(l.src&&"module"!==(l.type||"").toLowerCase()?w._evalUrl&&w._evalUrl(l.src):m(l.textContent.replace(qe,""),c,l))}return e}function Ie(e,t,n){for(var r,i=t?w.filter(t,e):e,o=0;null!=(r=i[o]);o++)n||1!==r.nodeType||w.cleanData(ye(r)),r.parentNode&&(n&&w.contains(r.ownerDocument,r)&&ve(ye(r,"script")),r.parentNode.removeChild(r));return e}w.extend({htmlPrefilter:function(e){return e.replace(Ne,"<$1></$2>")},clone:function(e,t,n){var r,i,o,a,s=e.cloneNode(!0),u=w.contains(e.ownerDocument,e);if(!(h.noCloneChecked||1!==e.nodeType&&11!==e.nodeType||w.isXMLDoc(e)))for(a=ye(s),r=0,i=(o=ye(e)).length;r<i;r++)Me(o[r],a[r]);if(t)if(n)for(o=o||ye(e),a=a||ye(s),r=0,i=o.length;r<i;r++)Pe(o[r],a[r]);else Pe(e,s);return(a=ye(s,"script")).length>0&&ve(a,!u&&ye(e,"script")),s},cleanData:function(e){for(var t,n,r,i=w.event.special,o=0;void 0!==(n=e[o]);o++)if(Y(n)){if(t=n[J.expando]){if(t.events)for(r in t.events)i[r]?w.event.remove(n,r):w.removeEvent(n,r,t.handle);n[J.expando]=void 0}n[K.expando]&&(n[K.expando]=void 0)}}}),w.fn.extend({detach:function(e){return Ie(this,e,!0)},remove:function(e){return Ie(this,e)},text:function(e){return z(this,function(e){return void 0===e?w.text(this):this.empty().each(function(){1!==this.nodeType&&11!==this.nodeType&&9!==this.nodeType||(this.textContent=e)})},null,e,arguments.length)},append:function(){return Re(this,arguments,function(e){1!==this.nodeType&&11!==this.nodeType&&9!==this.nodeType||Le(this,e).appendChild(e)})},prepend:function(){return Re(this,arguments,function(e){if(1===this.nodeType||11===this.nodeType||9===this.nodeType){var t=Le(this,e);t.insertBefore(e,t.firstChild)}})},before:function(){return Re(this,arguments,function(e){this.parentNode&&this.parentNode.insertBefore(e,this)})},after:function(){return Re(this,arguments,function(e){this.parentNode&&this.parentNode.insertBefore(e,this.nextSibling)})},empty:function(){for(var e,t=0;null!=(e=this[t]);t++)1===e.nodeType&&(w.cleanData(ye(e,!1)),e.textContent="");return this},clone:function(e,t){return e=null!=e&&e,t=null==t?e:t,this.map(function(){return w.clone(this,e,t)})},html:function(e){return z(this,function(e){var t=this[0]||{},n=0,r=this.length;if(void 0===e&&1===t.nodeType)return t.innerHTML;if("string"==typeof e&&!Ae.test(e)&&!ge[(de.exec(e)||["",""])[1].toLowerCase()]){e=w.htmlPrefilter(e);try{for(;n<r;n++)1===(t=this[n]||{}).nodeType&&(w.cleanData(ye(t,!1)),t.innerHTML=e);t=0}catch(e){}}t&&this.empty().append(e)},null,e,arguments.length)},replaceWith:function(){var e=[];return Re(this,arguments,function(t){var n=this.parentNode;w.inArray(this,e)<0&&(w.cleanData(ye(this)),n&&n.replaceChild(t,this))},e)}}),w.each({appendTo:"append",prependTo:"prepend",insertBefore:"before",insertAfter:"after",replaceAll:"replaceWith"},function(e,t){w.fn[e]=function(e){for(var n,r=[],i=w(e),o=i.length-1,a=0;a<=o;a++)n=a===o?this:this.clone(!0),w(i[a])[t](n),s.apply(r,n.get());return this.pushStack(r)}});var We=new RegExp("^("+re+")(?!px)[a-z%]+$","i"),$e=function(t){var n=t.ownerDocument.defaultView;return n&&n.opener||(n=e),n.getComputedStyle(t)},Be=new RegExp(oe.join("|"),"i");!function(){function t(){if(c){l.style.cssText="position:absolute;left:-11111px;width:60px;margin-top:1px;padding:0;border:0",c.style.cssText="position:relative;display:block;box-sizing:border-box;overflow:scroll;margin:auto;border:1px;padding:1px;width:60%;top:1%",be.appendChild(l).appendChild(c);var t=e.getComputedStyle(c);i="1%"!==t.top,u=12===n(t.marginLeft),c.style.right="60%",s=36===n(t.right),o=36===n(t.width),c.style.position="absolute",a=36===c.offsetWidth||"absolute",be.removeChild(l),c=null}}function n(e){return Math.round(parseFloat(e))}var i,o,a,s,u,l=r.createElement("div"),c=r.createElement("div");c.style&&(c.style.backgroundClip="content-box",c.cloneNode(!0).style.backgroundClip="",h.clearCloneStyle="content-box"===c.style.backgroundClip,w.extend(h,{boxSizingReliable:function(){return t(),o},pixelBoxStyles:function(){return t(),s},pixelPosition:function(){return t(),i},reliableMarginLeft:function(){return t(),u},scrollboxSize:function(){return t(),a}}))}();function Fe(e,t,n){var r,i,o,a,s=e.style;return(n=n||$e(e))&&(""!==(a=n.getPropertyValue(t)||n[t])||w.contains(e.ownerDocument,e)||(a=w.style(e,t)),!h.pixelBoxStyles()&&We.test(a)&&Be.test(t)&&(r=s.width,i=s.minWidth,o=s.maxWidth,s.minWidth=s.maxWidth=s.width=a,a=n.width,s.width=r,s.minWidth=i,s.maxWidth=o)),void 0!==a?a+"":a}function _e(e,t){return{get:function(){if(!e())return(this.get=t).apply(this,arguments);delete this.get}}}var ze=/^(none|table(?!-c[ea]).+)/,Xe=/^--/,Ue={position:"absolute",visibility:"hidden",display:"block"},Ve={letterSpacing:"0",fontWeight:"400"},Ge=["Webkit","Moz","ms"],Ye=r.createElement("div").style;function Qe(e){if(e in Ye)return e;var t=e[0].toUpperCase()+e.slice(1),n=Ge.length;while(n--)if((e=Ge[n]+t)in Ye)return e}function Je(e){var t=w.cssProps[e];return t||(t=w.cssProps[e]=Qe(e)||e),t}function Ke(e,t,n){var r=ie.exec(t);return r?Math.max(0,r[2]-(n||0))+(r[3]||"px"):t}function Ze(e,t,n,r,i,o){var a="width"===t?1:0,s=0,u=0;if(n===(r?"border":"content"))return 0;for(;a<4;a+=2)"margin"===n&&(u+=w.css(e,n+oe[a],!0,i)),r?("content"===n&&(u-=w.css(e,"padding"+oe[a],!0,i)),"margin"!==n&&(u-=w.css(e,"border"+oe[a]+"Width",!0,i))):(u+=w.css(e,"padding"+oe[a],!0,i),"padding"!==n?u+=w.css(e,"border"+oe[a]+"Width",!0,i):s+=w.css(e,"border"+oe[a]+"Width",!0,i));return!r&&o>=0&&(u+=Math.max(0,Math.ceil(e["offset"+t[0].toUpperCase()+t.slice(1)]-o-u-s-.5))),u}function et(e,t,n){var r=$e(e),i=Fe(e,t,r),o="border-box"===w.css(e,"boxSizing",!1,r),a=o;if(We.test(i)){if(!n)return i;i="auto"}return a=a&&(h.boxSizingReliable()||i===e.style[t]),("auto"===i||!parseFloat(i)&&"inline"===w.css(e,"display",!1,r))&&(i=e["offset"+t[0].toUpperCase()+t.slice(1)],a=!0),(i=parseFloat(i)||0)+Ze(e,t,n||(o?"border":"content"),a,r,i)+"px"}w.extend({cssHooks:{opacity:{get:function(e,t){if(t){var n=Fe(e,"opacity");return""===n?"1":n}}}},cssNumber:{animationIterationCount:!0,columnCount:!0,fillOpacity:!0,flexGrow:!0,flexShrink:!0,fontWeight:!0,lineHeight:!0,opacity:!0,order:!0,orphans:!0,widows:!0,zIndex:!0,zoom:!0},cssProps:{},style:function(e,t,n,r){if(e&&3!==e.nodeType&&8!==e.nodeType&&e.style){var i,o,a,s=G(t),u=Xe.test(t),l=e.style;if(u||(t=Je(s)),a=w.cssHooks[t]||w.cssHooks[s],void 0===n)return a&&"get"in a&&void 0!==(i=a.get(e,!1,r))?i:l[t];"string"==(o=typeof n)&&(i=ie.exec(n))&&i[1]&&(n=ue(e,t,i),o="number"),null!=n&&n===n&&("number"===o&&(n+=i&&i[3]||(w.cssNumber[s]?"":"px")),h.clearCloneStyle||""!==n||0!==t.indexOf("background")||(l[t]="inherit"),a&&"set"in a&&void 0===(n=a.set(e,n,r))||(u?l.setProperty(t,n):l[t]=n))}},css:function(e,t,n,r){var i,o,a,s=G(t);return Xe.test(t)||(t=Je(s)),(a=w.cssHooks[t]||w.cssHooks[s])&&"get"in a&&(i=a.get(e,!0,n)),void 0===i&&(i=Fe(e,t,r)),"normal"===i&&t in Ve&&(i=Ve[t]),""===n||n?(o=parseFloat(i),!0===n||isFinite(o)?o||0:i):i}}),w.each(["height","width"],function(e,t){w.cssHooks[t]={get:function(e,n,r){if(n)return!ze.test(w.css(e,"display"))||e.getClientRects().length&&e.getBoundingClientRect().width?et(e,t,r):se(e,Ue,function(){return et(e,t,r)})},set:function(e,n,r){var i,o=$e(e),a="border-box"===w.css(e,"boxSizing",!1,o),s=r&&Ze(e,t,r,a,o);return a&&h.scrollboxSize()===o.position&&(s-=Math.ceil(e["offset"+t[0].toUpperCase()+t.slice(1)]-parseFloat(o[t])-Ze(e,t,"border",!1,o)-.5)),s&&(i=ie.exec(n))&&"px"!==(i[3]||"px")&&(e.style[t]=n,n=w.css(e,t)),Ke(e,n,s)}}}),w.cssHooks.marginLeft=_e(h.reliableMarginLeft,function(e,t){if(t)return(parseFloat(Fe(e,"marginLeft"))||e.getBoundingClientRect().left-se(e,{marginLeft:0},function(){return e.getBoundingClientRect().left}))+"px"}),w.each({margin:"",padding:"",border:"Width"},function(e,t){w.cssHooks[e+t]={expand:function(n){for(var r=0,i={},o="string"==typeof n?n.split(" "):[n];r<4;r++)i[e+oe[r]+t]=o[r]||o[r-2]||o[0];return i}},"margin"!==e&&(w.cssHooks[e+t].set=Ke)}),w.fn.extend({css:function(e,t){return z(this,function(e,t,n){var r,i,o={},a=0;if(Array.isArray(t)){for(r=$e(e),i=t.length;a<i;a++)o[t[a]]=w.css(e,t[a],!1,r);return o}return void 0!==n?w.style(e,t,n):w.css(e,t)},e,t,arguments.length>1)}});function tt(e,t,n,r,i){return new tt.prototype.init(e,t,n,r,i)}w.Tween=tt,tt.prototype={constructor:tt,init:function(e,t,n,r,i,o){this.elem=e,this.prop=n,this.easing=i||w.easing._default,this.options=t,this.start=this.now=this.cur(),this.end=r,this.unit=o||(w.cssNumber[n]?"":"px")},cur:function(){var e=tt.propHooks[this.prop];return e&&e.get?e.get(this):tt.propHooks._default.get(this)},run:function(e){var t,n=tt.propHooks[this.prop];return this.options.duration?this.pos=t=w.easing[this.easing](e,this.options.duration*e,0,1,this.options.duration):this.pos=t=e,this.now=(this.end-this.start)*t+this.start,this.options.step&&this.options.step.call(this.elem,this.now,this),n&&n.set?n.set(this):tt.propHooks._default.set(this),this}},tt.prototype.init.prototype=tt.prototype,tt.propHooks={_default:{get:function(e){var t;return 1!==e.elem.nodeType||null!=e.elem[e.prop]&&null==e.elem.style[e.prop]?e.elem[e.prop]:(t=w.css(e.elem,e.prop,""))&&"auto"!==t?t:0},set:function(e){w.fx.step[e.prop]?w.fx.step[e.prop](e):1!==e.elem.nodeType||null==e.elem.style[w.cssProps[e.prop]]&&!w.cssHooks[e.prop]?e.elem[e.prop]=e.now:w.style(e.elem,e.prop,e.now+e.unit)}}},tt.propHooks.scrollTop=tt.propHooks.scrollLeft={set:function(e){e.elem.nodeType&&e.elem.parentNode&&(e.elem[e.prop]=e.now)}},w.easing={linear:function(e){return e},swing:function(e){return.5-Math.cos(e*Math.PI)/2},_default:"swing"},w.fx=tt.prototype.init,w.fx.step={};var nt,rt,it=/^(?:toggle|show|hide)$/,ot=/queueHooks$/;function at(){rt&&(!1===r.hidden&&e.requestAnimationFrame?e.requestAnimationFrame(at):e.setTimeout(at,w.fx.interval),w.fx.tick())}function st(){return e.setTimeout(function(){nt=void 0}),nt=Date.now()}function ut(e,t){var n,r=0,i={height:e};for(t=t?1:0;r<4;r+=2-t)i["margin"+(n=oe[r])]=i["padding"+n]=e;return t&&(i.opacity=i.width=e),i}function lt(e,t,n){for(var r,i=(pt.tweeners[t]||[]).concat(pt.tweeners["*"]),o=0,a=i.length;o<a;o++)if(r=i[o].call(n,t,e))return r}function ct(e,t,n){var r,i,o,a,s,u,l,c,f="width"in t||"height"in t,p=this,d={},h=e.style,g=e.nodeType&&ae(e),y=J.get(e,"fxshow");n.queue||(null==(a=w._queueHooks(e,"fx")).unqueued&&(a.unqueued=0,s=a.empty.fire,a.empty.fire=function(){a.unqueued||s()}),a.unqueued++,p.always(function(){p.always(function(){a.unqueued--,w.queue(e,"fx").length||a.empty.fire()})}));for(r in t)if(i=t[r],it.test(i)){if(delete t[r],o=o||"toggle"===i,i===(g?"hide":"show")){if("show"!==i||!y||void 0===y[r])continue;g=!0}d[r]=y&&y[r]||w.style(e,r)}if((u=!w.isEmptyObject(t))||!w.isEmptyObject(d)){f&&1===e.nodeType&&(n.overflow=[h.overflow,h.overflowX,h.overflowY],null==(l=y&&y.display)&&(l=J.get(e,"display")),"none"===(c=w.css(e,"display"))&&(l?c=l:(fe([e],!0),l=e.style.display||l,c=w.css(e,"display"),fe([e]))),("inline"===c||"inline-block"===c&&null!=l)&&"none"===w.css(e,"float")&&(u||(p.done(function(){h.display=l}),null==l&&(c=h.display,l="none"===c?"":c)),h.display="inline-block")),n.overflow&&(h.overflow="hidden",p.always(function(){h.overflow=n.overflow[0],h.overflowX=n.overflow[1],h.overflowY=n.overflow[2]})),u=!1;for(r in d)u||(y?"hidden"in y&&(g=y.hidden):y=J.access(e,"fxshow",{display:l}),o&&(y.hidden=!g),g&&fe([e],!0),p.done(function(){g||fe([e]),J.remove(e,"fxshow");for(r in d)w.style(e,r,d[r])})),u=lt(g?y[r]:0,r,p),r in y||(y[r]=u.start,g&&(u.end=u.start,u.start=0))}}function ft(e,t){var n,r,i,o,a;for(n in e)if(r=G(n),i=t[r],o=e[n],Array.isArray(o)&&(i=o[1],o=e[n]=o[0]),n!==r&&(e[r]=o,delete e[n]),(a=w.cssHooks[r])&&"expand"in a){o=a.expand(o),delete e[r];for(n in o)n in e||(e[n]=o[n],t[n]=i)}else t[r]=i}function pt(e,t,n){var r,i,o=0,a=pt.prefilters.length,s=w.Deferred().always(function(){delete u.elem}),u=function(){if(i)return!1;for(var t=nt||st(),n=Math.max(0,l.startTime+l.duration-t),r=1-(n/l.duration||0),o=0,a=l.tweens.length;o<a;o++)l.tweens[o].run(r);return s.notifyWith(e,[l,r,n]),r<1&&a?n:(a||s.notifyWith(e,[l,1,0]),s.resolveWith(e,[l]),!1)},l=s.promise({elem:e,props:w.extend({},t),opts:w.extend(!0,{specialEasing:{},easing:w.easing._default},n),originalProperties:t,originalOptions:n,startTime:nt||st(),duration:n.duration,tweens:[],createTween:function(t,n){var r=w.Tween(e,l.opts,t,n,l.opts.specialEasing[t]||l.opts.easing);return l.tweens.push(r),r},stop:function(t){var n=0,r=t?l.tweens.length:0;if(i)return this;for(i=!0;n<r;n++)l.tweens[n].run(1);return t?(s.notifyWith(e,[l,1,0]),s.resolveWith(e,[l,t])):s.rejectWith(e,[l,t]),this}}),c=l.props;for(ft(c,l.opts.specialEasing);o<a;o++)if(r=pt.prefilters[o].call(l,e,c,l.opts))return g(r.stop)&&(w._queueHooks(l.elem,l.opts.queue).stop=r.stop.bind(r)),r;return w.map(c,lt,l),g(l.opts.start)&&l.opts.start.call(e,l),l.progress(l.opts.progress).done(l.opts.done,l.opts.complete).fail(l.opts.fail).always(l.opts.always),w.fx.timer(w.extend(u,{elem:e,anim:l,queue:l.opts.queue})),l}w.Animation=w.extend(pt,{tweeners:{"*":[function(e,t){var n=this.createTween(e,t);return ue(n.elem,e,ie.exec(t),n),n}]},tweener:function(e,t){g(e)?(t=e,e=["*"]):e=e.match(M);for(var n,r=0,i=e.length;r<i;r++)n=e[r],pt.tweeners[n]=pt.tweeners[n]||[],pt.tweeners[n].unshift(t)},prefilters:[ct],prefilter:function(e,t){t?pt.prefilters.unshift(e):pt.prefilters.push(e)}}),w.speed=function(e,t,n){var r=e&&"object"==typeof e?w.extend({},e):{complete:n||!n&&t||g(e)&&e,duration:e,easing:n&&t||t&&!g(t)&&t};return w.fx.off?r.duration=0:"number"!=typeof r.duration&&(r.duration in w.fx.speeds?r.duration=w.fx.speeds[r.duration]:r.duration=w.fx.speeds._default),null!=r.queue&&!0!==r.queue||(r.queue="fx"),r.old=r.complete,r.complete=function(){g(r.old)&&r.old.call(this),r.queue&&w.dequeue(this,r.queue)},r},w.fn.extend({fadeTo:function(e,t,n,r){return this.filter(ae).css("opacity",0).show().end().animate({opacity:t},e,n,r)},animate:function(e,t,n,r){var i=w.isEmptyObject(e),o=w.speed(t,n,r),a=function(){var t=pt(this,w.extend({},e),o);(i||J.get(this,"finish"))&&t.stop(!0)};return a.finish=a,i||!1===o.queue?this.each(a):this.queue(o.queue,a)},stop:function(e,t,n){var r=function(e){var t=e.stop;delete e.stop,t(n)};return"string"!=typeof e&&(n=t,t=e,e=void 0),t&&!1!==e&&this.queue(e||"fx",[]),this.each(function(){var t=!0,i=null!=e&&e+"queueHooks",o=w.timers,a=J.get(this);if(i)a[i]&&a[i].stop&&r(a[i]);else for(i in a)a[i]&&a[i].stop&&ot.test(i)&&r(a[i]);for(i=o.length;i--;)o[i].elem!==this||null!=e&&o[i].queue!==e||(o[i].anim.stop(n),t=!1,o.splice(i,1));!t&&n||w.dequeue(this,e)})},finish:function(e){return!1!==e&&(e=e||"fx"),this.each(function(){var t,n=J.get(this),r=n[e+"queue"],i=n[e+"queueHooks"],o=w.timers,a=r?r.length:0;for(n.finish=!0,w.queue(this,e,[]),i&&i.stop&&i.stop.call(this,!0),t=o.length;t--;)o[t].elem===this&&o[t].queue===e&&(o[t].anim.stop(!0),o.splice(t,1));for(t=0;t<a;t++)r[t]&&r[t].finish&&r[t].finish.call(this);delete n.finish})}}),w.each(["toggle","show","hide"],function(e,t){var n=w.fn[t];w.fn[t]=function(e,r,i){return null==e||"boolean"==typeof e?n.apply(this,arguments):this.animate(ut(t,!0),e,r,i)}}),w.each({slideDown:ut("show"),slideUp:ut("hide"),slideToggle:ut("toggle"),fadeIn:{opacity:"show"},fadeOut:{opacity:"hide"},fadeToggle:{opacity:"toggle"}},function(e,t){w.fn[e]=function(e,n,r){return this.animate(t,e,n,r)}}),w.timers=[],w.fx.tick=function(){var e,t=0,n=w.timers;for(nt=Date.now();t<n.length;t++)(e=n[t])()||n[t]!==e||n.splice(t--,1);n.length||w.fx.stop(),nt=void 0},w.fx.timer=function(e){w.timers.push(e),w.fx.start()},w.fx.interval=13,w.fx.start=function(){rt||(rt=!0,at())},w.fx.stop=function(){rt=null},w.fx.speeds={slow:600,fast:200,_default:400},w.fn.delay=function(t,n){return t=w.fx?w.fx.speeds[t]||t:t,n=n||"fx",this.queue(n,function(n,r){var i=e.setTimeout(n,t);r.stop=function(){e.clearTimeout(i)}})},function(){var e=r.createElement("input"),t=r.createElement("select").appendChild(r.createElement("option"));e.type="checkbox",h.checkOn=""!==e.value,h.optSelected=t.selected,(e=r.createElement("input")).value="t",e.type="radio",h.radioValue="t"===e.value}();var dt,ht=w.expr.attrHandle;w.fn.extend({attr:function(e,t){return z(this,w.attr,e,t,arguments.length>1)},removeAttr:function(e){return this.each(function(){w.removeAttr(this,e)})}}),w.extend({attr:function(e,t,n){var r,i,o=e.nodeType;if(3!==o&&8!==o&&2!==o)return"undefined"==typeof e.getAttribute?w.prop(e,t,n):(1===o&&w.isXMLDoc(e)||(i=w.attrHooks[t.toLowerCase()]||(w.expr.match.bool.test(t)?dt:void 0)),void 0!==n?null===n?void w.removeAttr(e,t):i&&"set"in i&&void 0!==(r=i.set(e,n,t))?r:(e.setAttribute(t,n+""),n):i&&"get"in i&&null!==(r=i.get(e,t))?r:null==(r=w.find.attr(e,t))?void 0:r)},attrHooks:{type:{set:function(e,t){if(!h.radioValue&&"radio"===t&&N(e,"input")){var n=e.value;return e.setAttribute("type",t),n&&(e.value=n),t}}}},removeAttr:function(e,t){var n,r=0,i=t&&t.match(M);if(i&&1===e.nodeType)while(n=i[r++])e.removeAttribute(n)}}),dt={set:function(e,t,n){return!1===t?w.removeAttr(e,n):e.setAttribute(n,n),n}},w.each(w.expr.match.bool.source.match(/\w+/g),function(e,t){var n=ht[t]||w.find.attr;ht[t]=function(e,t,r){var i,o,a=t.toLowerCase();return r||(o=ht[a],ht[a]=i,i=null!=n(e,t,r)?a:null,ht[a]=o),i}});var gt=/^(?:input|select|textarea|button)$/i,yt=/^(?:a|area)$/i;w.fn.extend({prop:function(e,t){return z(this,w.prop,e,t,arguments.length>1)},removeProp:function(e){return this.each(function(){delete this[w.propFix[e]||e]})}}),w.extend({prop:function(e,t,n){var r,i,o=e.nodeType;if(3!==o&&8!==o&&2!==o)return 1===o&&w.isXMLDoc(e)||(t=w.propFix[t]||t,i=w.propHooks[t]),void 0!==n?i&&"set"in i&&void 0!==(r=i.set(e,n,t))?r:e[t]=n:i&&"get"in i&&null!==(r=i.get(e,t))?r:e[t]},propHooks:{tabIndex:{get:function(e){var t=w.find.attr(e,"tabindex");return t?parseInt(t,10):gt.test(e.nodeName)||yt.test(e.nodeName)&&e.href?0:-1}}},propFix:{"for":"htmlFor","class":"className"}}),h.optSelected||(w.propHooks.selected={get:function(e){var t=e.parentNode;return t&&t.parentNode&&t.parentNode.selectedIndex,null},set:function(e){var t=e.parentNode;t&&(t.selectedIndex,t.parentNode&&t.parentNode.selectedIndex)}}),w.each(["tabIndex","readOnly","maxLength","cellSpacing","cellPadding","rowSpan","colSpan","useMap","frameBorder","contentEditable"],function(){w.propFix[this.toLowerCase()]=this});function vt(e){return(e.match(M)||[]).join(" ")}function mt(e){return e.getAttribute&&e.getAttribute("class")||""}function xt(e){return Array.isArray(e)?e:"string"==typeof e?e.match(M)||[]:[]}w.fn.extend({addClass:function(e){var t,n,r,i,o,a,s,u=0;if(g(e))return this.each(function(t){w(this).addClass(e.call(this,t,mt(this)))});if((t=xt(e)).length)while(n=this[u++])if(i=mt(n),r=1===n.nodeType&&" "+vt(i)+" "){a=0;while(o=t[a++])r.indexOf(" "+o+" ")<0&&(r+=o+" ");i!==(s=vt(r))&&n.setAttribute("class",s)}return this},removeClass:function(e){var t,n,r,i,o,a,s,u=0;if(g(e))return this.each(function(t){w(this).removeClass(e.call(this,t,mt(this)))});if(!arguments.length)return this.attr("class","");if((t=xt(e)).length)while(n=this[u++])if(i=mt(n),r=1===n.nodeType&&" "+vt(i)+" "){a=0;while(o=t[a++])while(r.indexOf(" "+o+" ")>-1)r=r.replace(" "+o+" "," ");i!==(s=vt(r))&&n.setAttribute("class",s)}return this},toggleClass:function(e,t){var n=typeof e,r="string"===n||Array.isArray(e);return"boolean"==typeof t&&r?t?this.addClass(e):this.removeClass(e):g(e)?this.each(function(n){w(this).toggleClass(e.call(this,n,mt(this),t),t)}):this.each(function(){var t,i,o,a;if(r){i=0,o=w(this),a=xt(e);while(t=a[i++])o.hasClass(t)?o.removeClass(t):o.addClass(t)}else void 0!==e&&"boolean"!==n||((t=mt(this))&&J.set(this,"__className__",t),this.setAttribute&&this.setAttribute("class",t||!1===e?"":J.get(this,"__className__")||""))})},hasClass:function(e){var t,n,r=0;t=" "+e+" ";while(n=this[r++])if(1===n.nodeType&&(" "+vt(mt(n))+" ").indexOf(t)>-1)return!0;return!1}});var bt=/\r/g;w.fn.extend({val:function(e){var t,n,r,i=this[0];{if(arguments.length)return r=g(e),this.each(function(n){var i;1===this.nodeType&&(null==(i=r?e.call(this,n,w(this).val()):e)?i="":"number"==typeof i?i+="":Array.isArray(i)&&(i=w.map(i,function(e){return null==e?"":e+""})),(t=w.valHooks[this.type]||w.valHooks[this.nodeName.toLowerCase()])&&"set"in t&&void 0!==t.set(this,i,"value")||(this.value=i))});if(i)return(t=w.valHooks[i.type]||w.valHooks[i.nodeName.toLowerCase()])&&"get"in t&&void 0!==(n=t.get(i,"value"))?n:"string"==typeof(n=i.value)?n.replace(bt,""):null==n?"":n}}}),w.extend({valHooks:{option:{get:function(e){var t=w.find.attr(e,"value");return null!=t?t:vt(w.text(e))}},select:{get:function(e){var t,n,r,i=e.options,o=e.selectedIndex,a="select-one"===e.type,s=a?null:[],u=a?o+1:i.length;for(r=o<0?u:a?o:0;r<u;r++)if(((n=i[r]).selected||r===o)&&!n.disabled&&(!n.parentNode.disabled||!N(n.parentNode,"optgroup"))){if(t=w(n).val(),a)return t;s.push(t)}return s},set:function(e,t){var n,r,i=e.options,o=w.makeArray(t),a=i.length;while(a--)((r=i[a]).selected=w.inArray(w.valHooks.option.get(r),o)>-1)&&(n=!0);return n||(e.selectedIndex=-1),o}}}}),w.each(["radio","checkbox"],function(){w.valHooks[this]={set:function(e,t){if(Array.isArray(t))return e.checked=w.inArray(w(e).val(),t)>-1}},h.checkOn||(w.valHooks[this].get=function(e){return null===e.getAttribute("value")?"on":e.value})}),h.focusin="onfocusin"in e;var wt=/^(?:focusinfocus|focusoutblur)$/,Tt=function(e){e.stopPropagation()};w.extend(w.event,{trigger:function(t,n,i,o){var a,s,u,l,c,p,d,h,v=[i||r],m=f.call(t,"type")?t.type:t,x=f.call(t,"namespace")?t.namespace.split("."):[];if(s=h=u=i=i||r,3!==i.nodeType&&8!==i.nodeType&&!wt.test(m+w.event.triggered)&&(m.indexOf(".")>-1&&(m=(x=m.split(".")).shift(),x.sort()),c=m.indexOf(":")<0&&"on"+m,t=t[w.expando]?t:new w.Event(m,"object"==typeof t&&t),t.isTrigger=o?2:3,t.namespace=x.join("."),t.rnamespace=t.namespace?new RegExp("(^|\\.)"+x.join("\\.(?:.*\\.|)")+"(\\.|$)"):null,t.result=void 0,t.target||(t.target=i),n=null==n?[t]:w.makeArray(n,[t]),d=w.event.special[m]||{},o||!d.trigger||!1!==d.trigger.apply(i,n))){if(!o&&!d.noBubble&&!y(i)){for(l=d.delegateType||m,wt.test(l+m)||(s=s.parentNode);s;s=s.parentNode)v.push(s),u=s;u===(i.ownerDocument||r)&&v.push(u.defaultView||u.parentWindow||e)}a=0;while((s=v[a++])&&!t.isPropagationStopped())h=s,t.type=a>1?l:d.bindType||m,(p=(J.get(s,"events")||{})[t.type]&&J.get(s,"handle"))&&p.apply(s,n),(p=c&&s[c])&&p.apply&&Y(s)&&(t.result=p.apply(s,n),!1===t.result&&t.preventDefault());return t.type=m,o||t.isDefaultPrevented()||d._default&&!1!==d._default.apply(v.pop(),n)||!Y(i)||c&&g(i[m])&&!y(i)&&((u=i[c])&&(i[c]=null),w.event.triggered=m,t.isPropagationStopped()&&h.addEventListener(m,Tt),i[m](),t.isPropagationStopped()&&h.removeEventListener(m,Tt),w.event.triggered=void 0,u&&(i[c]=u)),t.result}},simulate:function(e,t,n){var r=w.extend(new w.Event,n,{type:e,isSimulated:!0});w.event.trigger(r,null,t)}}),w.fn.extend({trigger:function(e,t){return this.each(function(){w.event.trigger(e,t,this)})},triggerHandler:function(e,t){var n=this[0];if(n)return w.event.trigger(e,t,n,!0)}}),h.focusin||w.each({focus:"focusin",blur:"focusout"},function(e,t){var n=function(e){w.event.simulate(t,e.target,w.event.fix(e))};w.event.special[t]={setup:function(){var r=this.ownerDocument||this,i=J.access(r,t);i||r.addEventListener(e,n,!0),J.access(r,t,(i||0)+1)},teardown:function(){var r=this.ownerDocument||this,i=J.access(r,t)-1;i?J.access(r,t,i):(r.removeEventListener(e,n,!0),J.remove(r,t))}}});var Ct=e.location,Et=Date.now(),kt=/\?/;w.parseXML=function(t){var n;if(!t||"string"!=typeof t)return null;try{n=(new e.DOMParser).parseFromString(t,"text/xml")}catch(e){n=void 0}return n&&!n.getElementsByTagName("parsererror").length||w.error("Invalid XML: "+t),n};var St=/\[\]$/,Dt=/\r?\n/g,Nt=/^(?:submit|button|image|reset|file)$/i,At=/^(?:input|select|textarea|keygen)/i;function jt(e,t,n,r){var i;if(Array.isArray(t))w.each(t,function(t,i){n||St.test(e)?r(e,i):jt(e+"["+("object"==typeof i&&null!=i?t:"")+"]",i,n,r)});else if(n||"object"!==x(t))r(e,t);else for(i in t)jt(e+"["+i+"]",t[i],n,r)}w.param=function(e,t){var n,r=[],i=function(e,t){var n=g(t)?t():t;r[r.length]=encodeURIComponent(e)+"="+encodeURIComponent(null==n?"":n)};if(Array.isArray(e)||e.jquery&&!w.isPlainObject(e))w.each(e,function(){i(this.name,this.value)});else for(n in e)jt(n,e[n],t,i);return r.join("&")},w.fn.extend({serialize:function(){return w.param(this.serializeArray())},serializeArray:function(){return this.map(function(){var e=w.prop(this,"elements");return e?w.makeArray(e):this}).filter(function(){var e=this.type;return this.name&&!w(this).is(":disabled")&&At.test(this.nodeName)&&!Nt.test(e)&&(this.checked||!pe.test(e))}).map(function(e,t){var n=w(this).val();return null==n?null:Array.isArray(n)?w.map(n,function(e){return{name:t.name,value:e.replace(Dt,"\r\n")}}):{name:t.name,value:n.replace(Dt,"\r\n")}}).get()}});var qt=/%20/g,Lt=/#.*$/,Ht=/([?&])_=[^&]*/,Ot=/^(.*?):[ \t]*([^\r\n]*)$/gm,Pt=/^(?:about|app|app-storage|.+-extension|file|res|widget):$/,Mt=/^(?:GET|HEAD)$/,Rt=/^\/\//,It={},Wt={},$t="*/".concat("*"),Bt=r.createElement("a");Bt.href=Ct.href;function Ft(e){return function(t,n){"string"!=typeof t&&(n=t,t="*");var r,i=0,o=t.toLowerCase().match(M)||[];if(g(n))while(r=o[i++])"+"===r[0]?(r=r.slice(1)||"*",(e[r]=e[r]||[]).unshift(n)):(e[r]=e[r]||[]).push(n)}}function _t(e,t,n,r){var i={},o=e===Wt;function a(s){var u;return i[s]=!0,w.each(e[s]||[],function(e,s){var l=s(t,n,r);return"string"!=typeof l||o||i[l]?o?!(u=l):void 0:(t.dataTypes.unshift(l),a(l),!1)}),u}return a(t.dataTypes[0])||!i["*"]&&a("*")}function zt(e,t){var n,r,i=w.ajaxSettings.flatOptions||{};for(n in t)void 0!==t[n]&&((i[n]?e:r||(r={}))[n]=t[n]);return r&&w.extend(!0,e,r),e}function Xt(e,t,n){var r,i,o,a,s=e.contents,u=e.dataTypes;while("*"===u[0])u.shift(),void 0===r&&(r=e.mimeType||t.getResponseHeader("Content-Type"));if(r)for(i in s)if(s[i]&&s[i].test(r)){u.unshift(i);break}if(u[0]in n)o=u[0];else{for(i in n){if(!u[0]||e.converters[i+" "+u[0]]){o=i;break}a||(a=i)}o=o||a}if(o)return o!==u[0]&&u.unshift(o),n[o]}function Ut(e,t,n,r){var i,o,a,s,u,l={},c=e.dataTypes.slice();if(c[1])for(a in e.converters)l[a.toLowerCase()]=e.converters[a];o=c.shift();while(o)if(e.responseFields[o]&&(n[e.responseFields[o]]=t),!u&&r&&e.dataFilter&&(t=e.dataFilter(t,e.dataType)),u=o,o=c.shift())if("*"===o)o=u;else if("*"!==u&&u!==o){if(!(a=l[u+" "+o]||l["* "+o]))for(i in l)if((s=i.split(" "))[1]===o&&(a=l[u+" "+s[0]]||l["* "+s[0]])){!0===a?a=l[i]:!0!==l[i]&&(o=s[0],c.unshift(s[1]));break}if(!0!==a)if(a&&e["throws"])t=a(t);else try{t=a(t)}catch(e){return{state:"parsererror",error:a?e:"No conversion from "+u+" to "+o}}}return{state:"success",data:t}}w.extend({active:0,lastModified:{},etag:{},ajaxSettings:{url:Ct.href,type:"GET",isLocal:Pt.test(Ct.protocol),global:!0,processData:!0,async:!0,contentType:"application/x-www-form-urlencoded; charset=UTF-8",accepts:{"*":$t,text:"text/plain",html:"text/html",xml:"application/xml, text/xml",json:"application/json, text/javascript"},contents:{xml:/\bxml\b/,html:/\bhtml/,json:/\bjson\b/},responseFields:{xml:"responseXML",text:"responseText",json:"responseJSON"},converters:{"* text":String,"text html":!0,"text json":JSON.parse,"text xml":w.parseXML},flatOptions:{url:!0,context:!0}},ajaxSetup:function(e,t){return t?zt(zt(e,w.ajaxSettings),t):zt(w.ajaxSettings,e)},ajaxPrefilter:Ft(It),ajaxTransport:Ft(Wt),ajax:function(t,n){"object"==typeof t&&(n=t,t=void 0),n=n||{};var i,o,a,s,u,l,c,f,p,d,h=w.ajaxSetup({},n),g=h.context||h,y=h.context&&(g.nodeType||g.jquery)?w(g):w.event,v=w.Deferred(),m=w.Callbacks("once memory"),x=h.statusCode||{},b={},T={},C="canceled",E={readyState:0,getResponseHeader:function(e){var t;if(c){if(!s){s={};while(t=Ot.exec(a))s[t[1].toLowerCase()]=t[2]}t=s[e.toLowerCase()]}return null==t?null:t},getAllResponseHeaders:function(){return c?a:null},setRequestHeader:function(e,t){return null==c&&(e=T[e.toLowerCase()]=T[e.toLowerCase()]||e,b[e]=t),this},overrideMimeType:function(e){return null==c&&(h.mimeType=e),this},statusCode:function(e){var t;if(e)if(c)E.always(e[E.status]);else for(t in e)x[t]=[x[t],e[t]];return this},abort:function(e){var t=e||C;return i&&i.abort(t),k(0,t),this}};if(v.promise(E),h.url=((t||h.url||Ct.href)+"").replace(Rt,Ct.protocol+"//"),h.type=n.method||n.type||h.method||h.type,h.dataTypes=(h.dataType||"*").toLowerCase().match(M)||[""],null==h.crossDomain){l=r.createElement("a");try{l.href=h.url,l.href=l.href,h.crossDomain=Bt.protocol+"//"+Bt.host!=l.protocol+"//"+l.host}catch(e){h.crossDomain=!0}}if(h.data&&h.processData&&"string"!=typeof h.data&&(h.data=w.param(h.data,h.traditional)),_t(It,h,n,E),c)return E;(f=w.event&&h.global)&&0==w.active++&&w.event.trigger("ajaxStart"),h.type=h.type.toUpperCase(),h.hasContent=!Mt.test(h.type),o=h.url.replace(Lt,""),h.hasContent?h.data&&h.processData&&0===(h.contentType||"").indexOf("application/x-www-form-urlencoded")&&(h.data=h.data.replace(qt,"+")):(d=h.url.slice(o.length),h.data&&(h.processData||"string"==typeof h.data)&&(o+=(kt.test(o)?"&":"?")+h.data,delete h.data),!1===h.cache&&(o=o.replace(Ht,"$1"),d=(kt.test(o)?"&":"?")+"_="+Et+++d),h.url=o+d),h.ifModified&&(w.lastModified[o]&&E.setRequestHeader("If-Modified-Since",w.lastModified[o]),w.etag[o]&&E.setRequestHeader("If-None-Match",w.etag[o])),(h.data&&h.hasContent&&!1!==h.contentType||n.contentType)&&E.setRequestHeader("Content-Type",h.contentType),E.setRequestHeader("Accept",h.dataTypes[0]&&h.accepts[h.dataTypes[0]]?h.accepts[h.dataTypes[0]]+("*"!==h.dataTypes[0]?", "+$t+"; q=0.01":""):h.accepts["*"]);for(p in h.headers)E.setRequestHeader(p,h.headers[p]);if(h.beforeSend&&(!1===h.beforeSend.call(g,E,h)||c))return E.abort();if(C="abort",m.add(h.complete),E.done(h.success),E.fail(h.error),i=_t(Wt,h,n,E)){if(E.readyState=1,f&&y.trigger("ajaxSend",[E,h]),c)return E;h.async&&h.timeout>0&&(u=e.setTimeout(function(){E.abort("timeout")},h.timeout));try{c=!1,i.send(b,k)}catch(e){if(c)throw e;k(-1,e)}}else k(-1,"No Transport");function k(t,n,r,s){var l,p,d,b,T,C=n;c||(c=!0,u&&e.clearTimeout(u),i=void 0,a=s||"",E.readyState=t>0?4:0,l=t>=200&&t<300||304===t,r&&(b=Xt(h,E,r)),b=Ut(h,b,E,l),l?(h.ifModified&&((T=E.getResponseHeader("Last-Modified"))&&(w.lastModified[o]=T),(T=E.getResponseHeader("etag"))&&(w.etag[o]=T)),204===t||"HEAD"===h.type?C="nocontent":304===t?C="notmodified":(C=b.state,p=b.data,l=!(d=b.error))):(d=C,!t&&C||(C="error",t<0&&(t=0))),E.status=t,E.statusText=(n||C)+"",l?v.resolveWith(g,[p,C,E]):v.rejectWith(g,[E,C,d]),E.statusCode(x),x=void 0,f&&y.trigger(l?"ajaxSuccess":"ajaxError",[E,h,l?p:d]),m.fireWith(g,[E,C]),f&&(y.trigger("ajaxComplete",[E,h]),--w.active||w.event.trigger("ajaxStop")))}return E},getJSON:function(e,t,n){return w.get(e,t,n,"json")},getScript:function(e,t){return w.get(e,void 0,t,"script")}}),w.each(["get","post"],function(e,t){w[t]=function(e,n,r,i){return g(n)&&(i=i||r,r=n,n=void 0),w.ajax(w.extend({url:e,type:t,dataType:i,data:n,success:r},w.isPlainObject(e)&&e))}}),w._evalUrl=function(e){return w.ajax({url:e,type:"GET",dataType:"script",cache:!0,async:!1,global:!1,"throws":!0})},w.fn.extend({wrapAll:function(e){var t;return this[0]&&(g(e)&&(e=e.call(this[0])),t=w(e,this[0].ownerDocument).eq(0).clone(!0),this[0].parentNode&&t.insertBefore(this[0]),t.map(function(){var e=this;while(e.firstElementChild)e=e.firstElementChild;return e}).append(this)),this},wrapInner:function(e){return g(e)?this.each(function(t){w(this).wrapInner(e.call(this,t))}):this.each(function(){var t=w(this),n=t.contents();n.length?n.wrapAll(e):t.append(e)})},wrap:function(e){var t=g(e);return this.each(function(n){w(this).wrapAll(t?e.call(this,n):e)})},unwrap:function(e){return this.parent(e).not("body").each(function(){w(this).replaceWith(this.childNodes)}),this}}),w.expr.pseudos.hidden=function(e){return!w.expr.pseudos.visible(e)},w.expr.pseudos.visible=function(e){return!!(e.offsetWidth||e.offsetHeight||e.getClientRects().length)},w.ajaxSettings.xhr=function(){try{return new e.XMLHttpRequest}catch(e){}};var Vt={0:200,1223:204},Gt=w.ajaxSettings.xhr();h.cors=!!Gt&&"withCredentials"in Gt,h.ajax=Gt=!!Gt,w.ajaxTransport(function(t){var n,r;if(h.cors||Gt&&!t.crossDomain)return{send:function(i,o){var a,s=t.xhr();if(s.open(t.type,t.url,t.async,t.username,t.password),t.xhrFields)for(a in t.xhrFields)s[a]=t.xhrFields[a];t.mimeType&&s.overrideMimeType&&s.overrideMimeType(t.mimeType),t.crossDomain||i["X-Requested-With"]||(i["X-Requested-With"]="XMLHttpRequest");for(a in i)s.setRequestHeader(a,i[a]);n=function(e){return function(){n&&(n=r=s.onload=s.onerror=s.onabort=s.ontimeout=s.onreadystatechange=null,"abort"===e?s.abort():"error"===e?"number"!=typeof s.status?o(0,"error"):o(s.status,s.statusText):o(Vt[s.status]||s.status,s.statusText,"text"!==(s.responseType||"text")||"string"!=typeof s.responseText?{binary:s.response}:{text:s.responseText},s.getAllResponseHeaders()))}},s.onload=n(),r=s.onerror=s.ontimeout=n("error"),void 0!==s.onabort?s.onabort=r:s.onreadystatechange=function(){4===s.readyState&&e.setTimeout(function(){n&&r()})},n=n("abort");try{s.send(t.hasContent&&t.data||null)}catch(e){if(n)throw e}},abort:function(){n&&n()}}}),w.ajaxPrefilter(function(e){e.crossDomain&&(e.contents.script=!1)}),w.ajaxSetup({accepts:{script:"text/javascript, application/javascript, application/ecmascript, application/x-ecmascript"},contents:{script:/\b(?:java|ecma)script\b/},converters:{"text script":function(e){return w.globalEval(e),e}}}),w.ajaxPrefilter("script",function(e){void 0===e.cache&&(e.cache=!1),e.crossDomain&&(e.type="GET")}),w.ajaxTransport("script",function(e){if(e.crossDomain){var t,n;return{send:function(i,o){t=w("<script>").prop({charset:e.scriptCharset,src:e.url}).on("load error",n=function(e){t.remove(),n=null,e&&o("error"===e.type?404:200,e.type)}),r.head.appendChild(t[0])},abort:function(){n&&n()}}}});var Yt=[],Qt=/(=)\?(?=&|$)|\?\?/;w.ajaxSetup({jsonp:"callback",jsonpCallback:function(){var e=Yt.pop()||w.expando+"_"+Et++;return this[e]=!0,e}}),w.ajaxPrefilter("json jsonp",function(t,n,r){var i,o,a,s=!1!==t.jsonp&&(Qt.test(t.url)?"url":"string"==typeof t.data&&0===(t.contentType||"").indexOf("application/x-www-form-urlencoded")&&Qt.test(t.data)&&"data");if(s||"jsonp"===t.dataTypes[0])return i=t.jsonpCallback=g(t.jsonpCallback)?t.jsonpCallback():t.jsonpCallback,s?t[s]=t[s].replace(Qt,"$1"+i):!1!==t.jsonp&&(t.url+=(kt.test(t.url)?"&":"?")+t.jsonp+"="+i),t.converters["script json"]=function(){return a||w.error(i+" was not called"),a[0]},t.dataTypes[0]="json",o=e[i],e[i]=function(){a=arguments},r.always(function(){void 0===o?w(e).removeProp(i):e[i]=o,t[i]&&(t.jsonpCallback=n.jsonpCallback,Yt.push(i)),a&&g(o)&&o(a[0]),a=o=void 0}),"script"}),h.createHTMLDocument=function(){var e=r.implementation.createHTMLDocument("").body;return e.innerHTML="<form></form><form></form>",2===e.childNodes.length}(),w.parseHTML=function(e,t,n){if("string"!=typeof e)return[];"boolean"==typeof t&&(n=t,t=!1);var i,o,a;return t||(h.createHTMLDocument?((i=(t=r.implementation.createHTMLDocument("")).createElement("base")).href=r.location.href,t.head.appendChild(i)):t=r),o=A.exec(e),a=!n&&[],o?[t.createElement(o[1])]:(o=xe([e],t,a),a&&a.length&&w(a).remove(),w.merge([],o.childNodes))},w.fn.load=function(e,t,n){var r,i,o,a=this,s=e.indexOf(" ");return s>-1&&(r=vt(e.slice(s)),e=e.slice(0,s)),g(t)?(n=t,t=void 0):t&&"object"==typeof t&&(i="POST"),a.length>0&&w.ajax({url:e,type:i||"GET",dataType:"html",data:t}).done(function(e){o=arguments,a.html(r?w("<div>").append(w.parseHTML(e)).find(r):e)}).always(n&&function(e,t){a.each(function(){n.apply(this,o||[e.responseText,t,e])})}),this},w.each(["ajaxStart","ajaxStop","ajaxComplete","ajaxError","ajaxSuccess","ajaxSend"],function(e,t){w.fn[t]=function(e){return this.on(t,e)}}),w.expr.pseudos.animated=function(e){return w.grep(w.timers,function(t){return e===t.elem}).length},w.offset={setOffset:function(e,t,n){var r,i,o,a,s,u,l,c=w.css(e,"position"),f=w(e),p={};"static"===c&&(e.style.position="relative"),s=f.offset(),o=w.css(e,"top"),u=w.css(e,"left"),(l=("absolute"===c||"fixed"===c)&&(o+u).indexOf("auto")>-1)?(a=(r=f.position()).top,i=r.left):(a=parseFloat(o)||0,i=parseFloat(u)||0),g(t)&&(t=t.call(e,n,w.extend({},s))),null!=t.top&&(p.top=t.top-s.top+a),null!=t.left&&(p.left=t.left-s.left+i),"using"in t?t.using.call(e,p):f.css(p)}},w.fn.extend({offset:function(e){if(arguments.length)return void 0===e?this:this.each(function(t){w.offset.setOffset(this,e,t)});var t,n,r=this[0];if(r)return r.getClientRects().length?(t=r.getBoundingClientRect(),n=r.ownerDocument.defaultView,{top:t.top+n.pageYOffset,left:t.left+n.pageXOffset}):{top:0,left:0}},position:function(){if(this[0]){var e,t,n,r=this[0],i={top:0,left:0};if("fixed"===w.css(r,"position"))t=r.getBoundingClientRect();else{t=this.offset(),n=r.ownerDocument,e=r.offsetParent||n.documentElement;while(e&&(e===n.body||e===n.documentElement)&&"static"===w.css(e,"position"))e=e.parentNode;e&&e!==r&&1===e.nodeType&&((i=w(e).offset()).top+=w.css(e,"borderTopWidth",!0),i.left+=w.css(e,"borderLeftWidth",!0))}return{top:t.top-i.top-w.css(r,"marginTop",!0),left:t.left-i.left-w.css(r,"marginLeft",!0)}}},offsetParent:function(){return this.map(function(){var e=this.offsetParent;while(e&&"static"===w.css(e,"position"))e=e.offsetParent;return e||be})}}),w.each({scrollLeft:"pageXOffset",scrollTop:"pageYOffset"},function(e,t){var n="pageYOffset"===t;w.fn[e]=function(r){return z(this,function(e,r,i){var o;if(y(e)?o=e:9===e.nodeType&&(o=e.defaultView),void 0===i)return o?o[t]:e[r];o?o.scrollTo(n?o.pageXOffset:i,n?i:o.pageYOffset):e[r]=i},e,r,arguments.length)}}),w.each(["top","left"],function(e,t){w.cssHooks[t]=_e(h.pixelPosition,function(e,n){if(n)return n=Fe(e,t),We.test(n)?w(e).position()[t]+"px":n})}),w.each({Height:"height",Width:"width"},function(e,t){w.each({padding:"inner"+e,content:t,"":"outer"+e},function(n,r){w.fn[r]=function(i,o){var a=arguments.length&&(n||"boolean"!=typeof i),s=n||(!0===i||!0===o?"margin":"border");return z(this,function(t,n,i){var o;return y(t)?0===r.indexOf("outer")?t["inner"+e]:t.document.documentElement["client"+e]:9===t.nodeType?(o=t.documentElement,Math.max(t.body["scroll"+e],o["scroll"+e],t.body["offset"+e],o["offset"+e],o["client"+e])):void 0===i?w.css(t,n,s):w.style(t,n,i,s)},t,a?i:void 0,a)}})}),w.each("blur focus focusin focusout resize scroll click dblclick mousedown mouseup mousemove mouseover mouseout mouseenter mouseleave change select submit keydown keypress keyup contextmenu".split(" "),function(e,t){w.fn[t]=function(e,n){return arguments.length>0?this.on(t,null,e,n):this.trigger(t)}}),w.fn.extend({hover:function(e,t){return this.mouseenter(e).mouseleave(t||e)}}),w.fn.extend({bind:function(e,t,n){return this.on(e,null,t,n)},unbind:function(e,t){return this.off(e,null,t)},delegate:function(e,t,n,r){return this.on(t,e,n,r)},undelegate:function(e,t,n){return 1===arguments.length?this.off(e,"**"):this.off(t,e||"**",n)}}),w.proxy=function(e,t){var n,r,i;if("string"==typeof t&&(n=e[t],t=e,e=n),g(e))return r=o.call(arguments,2),i=function(){return e.apply(t||this,r.concat(o.call(arguments)))},i.guid=e.guid=e.guid||w.guid++,i},w.holdReady=function(e){e?w.readyWait++:w.ready(!0)},w.isArray=Array.isArray,w.parseJSON=JSON.parse,w.nodeName=N,w.isFunction=g,w.isWindow=y,w.camelCase=G,w.type=x,w.now=Date.now,w.isNumeric=function(e){var t=w.type(e);return("number"===t||"string"===t)&&!isNaN(e-parseFloat(e))},"function"==typeof define&&define.amd&&define("jquery",[],function(){return w});var Jt=e.jQuery,Kt=e.$;return w.noConflict=function(t){return e.$===w&&(e.$=Kt),t&&e.jQuery===w&&(e.jQuery=Jt),w},t||(e.jQuery=e.$=w),w});[m
[1mdiff --git a/app/assets/javascripts/util.js b/app/assets/javascripts/util.js[m
[1mnew file mode 100644[m
[1mindex 0000000..bdb8e9f[m
[1m--- /dev/null[m
[1m+++ b/app/assets/javascripts/util.js[m
[36m@@ -0,0 +1,587 @@[m
[32m+[m[32m(function($) {[m[41m[m
[32m+[m[41m[m
[32m+[m	[32m/**[m[41m[m
[32m+[m	[32m * Generate an indented list of links from a nav. Meant for use with panel().[m[41m[m
[32m+[m	[32m * @return {jQuery} jQuery object.[m[41m[m
[32m+[m	[32m */[m[41m[m
[32m+[m	[32m$.fn.navList = function() {[m[41m[m
[32m+[m[41m[m
[32m+[m		[32mvar	$this = $(this);[m[41m[m
[32m+[m			[32m$a = $this.find('a'),[m[41m[m
[32m+[m			[32mb = [];[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m$a.each(function() {[m[41m[m
[32m+[m[41m[m
[32m+[m			[32mvar	$this = $(this),[m[41m[m
[32m+[m				[32mindent = Math.max(0, $this.parents('li').length - 1),[m[41m[m
[32m+[m				[32mhref = $this.attr('href'),[m[41m[m
[32m+[m				[32mtarget = $this.attr('target');[m[41m[m
[32m+[m[41m[m
[32m+[m			[32mb.push([m[41m[m
[32m+[m				[32m'<a ' +[m[41m[m
[32m+[m					[32m'class="link depth-' + indent + '"' +[m[41m[m
[32m+[m					[32m( (typeof target !== 'undefined' && target != '') ? ' target="' + target + '"' : '') +[m[41m[m
[32m+[m					[32m( (typeof href !== 'undefined' && href != '') ? ' href="' + href + '"' : '') +[m[41m[m
[32m+[m				[32m'>' +[m[41m[m
[32m+[m					[32m'<span class="indent-' + indent + '"></span>' +[m[41m[m
[32m+[m					[32m$this.text() +[m[41m[m
[32m+[m				[32m'</a>'[m[41m[m
[32m+[m			[32m);[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m});[m[41m[m
[32m+[m[41m[m
[32m+[m		[32mreturn b.join('');[m[41m[m
[32m+[m[41m[m
[32m+[m	[32m};[m[41m[m
[32m+[m[41m[m
[32m+[m	[32m/**[m[41m[m
[32m+[m	[32m * Panel-ify an element.[m[41m[m
[32m+[m	[32m * @param {object} userConfig User config.[m[41m[m
[32m+[m	[32m * @return {jQuery} jQuery object.[m[41m[m
[32m+[m	[32m */[m[41m[m
[32m+[m	[32m$.fn.panel = function(userConfig) {[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m// No elements?[m[41m[m
[32m+[m			[32mif (this.length == 0)[m[41m[m
[32m+[m				[32mreturn $this;[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m// Multiple elements?[m[41m[m
[32m+[m			[32mif (this.length > 1) {[m[41m[m
[32m+[m[41m[m
[32m+[m				[32mfor (var i=0; i < this.length; i++)[m[41m[m
[32m+[m					[32m$(this[i]).panel(userConfig);[m[41m[m
[32m+[m[41m[m
[32m+[m				[32mreturn $this;[m[41m[m
[32m+[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m// Vars.[m[41m[m
[32m+[m			[32mvar	$this = $(this),[m[41m[m
[32m+[m				[32m$body = $('body'),[m[41m[m
[32m+[m				[32m$window = $(window),[m[41m[m
[32m+[m				[32mid = $this.attr('id'),[m[41m[m
[32m+[m				[32mconfig;[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m// Config.[m[41m[m
[32m+[m			[32mconfig = $.extend({[m[41m[m
[32m+[m[41m[m
[32m+[m				[32m// Delay.[m[41m[m
[32m+[m					[32mdelay: 0,[m[41m[m
[32m+[m[41m[m
[32m+[m				[32m// Hide panel on link click.[m[41m[m
[32m+[m					[32mhideOnClick: false,[m[41m[m
[32m+[m[41m[m
[32m+[m				[32m// Hide panel on escape keypress.[m[41m[m
[32m+[m					[32mhideOnEscape: false,[m[41m[m
[32m+[m[41m[m
[32m+[m				[32m// Hide panel on swipe.[m[41m[m
[32m+[m					[32mhideOnSwipe: false,[m[41m[m
[32m+[m[41m[m
[32m+[m				[32m// Reset scroll position on hide.[m[41m[m
[32m+[m					[32mresetScroll: false,[m[41m[m
[32m+[m[41m[m
[32m+[m				[32m// Reset forms on hide.[m[41m[m
[32m+[m					[32mresetForms: false,[m[41m[m
[32m+[m[41m[m
[32m+[m				[32m// Side of viewport the panel will appear.[m[41m[m
[32m+[m					[32mside: null,[m[41m[m
[32m+[m[41m[m
[32m+[m				[32m// Target element for "class".[m[41m[m
[32m+[m					[32mtarget: $this,[m[41m[m
[32m+[m[41m[m
[32m+[m				[32m// Class to toggle.[m[41m[m
[32m+[m					[32mvisibleClass: 'visible'[m[41m[m
[32m+[m[41m[m
[32m+[m			[32m}, userConfig);[m[41m[m
[32m+[m[41m[m
[32m+[m			[32m// Expand "target" if it's not a jQuery object already.[m[41m[m
[32m+[m				[32mif (typeof config.target != 'jQuery')[m[41m[m
[32m+[m					[32mconfig.target = $(config.target);[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m// Panel.[m[41m[m
[32m+[m[41m[m
[32m+[m			[32m// Methods.[m[41m[m
[32m+[m				[32m$this._hide = function(event) {[m[41m[m
[32m+[m[41m[m
[32m+[m					[32m// Already hidden? Bail.[m[41m[m
[32m+[m						[32mif (!config.target.hasClass(config.visibleClass))[m[41m[m
[32m+[m							[32mreturn;[m[41m[m
[32m+[m[41m[m
[32m+[m					[32m// If an event was provided, cancel it.[m[41m[m
[32m+[m						[32mif (event) {[m[41m[m
[32m+[m[41m[m
[32m+[m							[32mevent.preventDefault();[m[41m[m
[32m+[m							[32mevent.stopPropagation();[m[41m[m
[32m+[m[41m[m
[32m+[m						[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m					[32m// Hide.[m[41m[m
[32m+[m						[32mconfig.target.removeClass(config.visibleClass);[m[41m[m
[32m+[m[41m[m
[32m+[m					[32m// Post-hide stuff.[m[41m[m
[32m+[m						[32mwindow.setTimeout(function() {[m[41m[m
[32m+[m[41m[m
[32m+[m							[32m// Reset scroll position.[m[41m[m
[32m+[m								[32mif (config.resetScroll)[m[41m[m
[32m+[m									[32m$this.scrollTop(0);[m[41m[m
[32m+[m[41m[m
[32m+[m							[32m// Reset forms.[m[41m[m
[32m+[m								[32mif (config.resetForms)[m[41m[m
[32m+[m									[32m$this.find('form').each(function() {[m[41m[m
[32m+[m										[32mthis.reset();[m[41m[m
[32m+[m									[32m});[m[41m[m
[32m+[m[41m[m
[32m+[m						[32m}, config.delay);[m[41m[m
[32m+[m[41m[m
[32m+[m				[32m};[m[41m[m
[32m+[m[41m[m
[32m+[m			[32m// Vendor fixes.[m[41m[m
[32m+[m				[32m$this[m[41m[m
[32m+[m					[32m.css('-ms-overflow-style', '-ms-autohiding-scrollbar')[m[41m[m
[32m+[m					[32m.css('-webkit-overflow-scrolling', 'touch');[m[41m[m
[32m+[m[41m[m
[32m+[m			[32m// Hide on click.[m[41m[m
[32m+[m				[32mif (config.hideOnClick) {[m[41m[m
[32m+[m[41m[m
[32m+[m					[32m$this.find('a')[m[41m[m
[32m+[m						[32m.css('-webkit-tap-highlight-color', 'rgba(0,0,0,0)');[m[41m[m
[32m+[m[41m[m
[32m+[m					[32m$this[m[41m[m
[32m+[m						[32m.on('click', 'a', function(event) {[m[41m[m
[32m+[m[41m[m
[32m+[m							[32mvar $a = $(this),[m[41m[m
[32m+[m								[32mhref = $a.attr('href'),[m[41m[m
[32m+[m								[32mtarget = $a.attr('target');[m[41m[m
[32m+[m[41m[m
[32m+[m							[32mif (!href || href == '#' || href == '' || href == '#' + id)[m[41m[m
[32m+[m								[32mreturn;[m[41m[m
[32m+[m[41m[m
[32m+[m							[32m// Cancel original event.[m[41m[m
[32m+[m								[32mevent.preventDefault();[m[41m[m
[32m+[m								[32mevent.stopPropagation();[m[41m[m
[32m+[m[41m[m
[32m+[m							[32m// Hide panel.[m[41m[m
[32m+[m								[32m$this._hide();[m[41m[m
[32m+[m[41m[m
[32m+[m							[32m// Redirect to href.[m[41m[m
[32m+[m								[32mwindow.setTimeout(function() {[m[41m[m
[32m+[m[41m[m
[32m+[m									[32mif (target == '_blank')[m[41m[m
[32m+[m										[32mwindow.open(href);[m[41m[m
[32m+[m									[32melse[m[41m[m
[32m+[m										[32mwindow.location.href = href;[m[41m[m
[32m+[m[41m[m
[32m+[m								[32m}, config.delay + 10);[m[41m[m
[32m+[m[41m[m
[32m+[m						[32m});[m[41m[m
[32m+[m[41m[m
[32m+[m				[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m			[32m// Event: Touch stuff.[m[41m[m
[32m+[m				[32m$this.on('touchstart', function(event) {[m[41m[m
[32m+[m[41m[m
[32m+[m					[32m$this.touchPosX = event.originalEvent.touches[0].pageX;[m[41m[m
[32m+[m					[32m$this.touchPosY = event.originalEvent.touches[0].pageY;[m[41m[m
[32m+[m[41m[m
[32m+[m				[32m})[m[41m[m
[32m+[m[41m[m
[32m+[m				[32m$this.on('touchmove', function(event) {[m[41m[m
[32m+[m[41m[m
[32m+[m					[32mif ($this.touchPosX === null[m[41m[m
[32m+[m					[32m||	$this.touchPosY === null)[m[41m[m
[32m+[m						[32mreturn;[m[41m[m
[32m+[m[41m[m
[32m+[m					[32mvar	diffX = $this.touchPosX - event.originalEvent.touches[0].pageX,[m[41m[m
[32m+[m						[32mdiffY = $this.touchPosY - event.originalEvent.touches[0].pageY,[m[41m[m
[32m+[m						[32mth = $this.outerHeight(),[m[41m[m
[32m+[m						[32mts = ($this.get(0).scrollHeight - $this.scrollTop());[m[41m[m
[32m+[m[41m[m
[32m+[m					[32m// Hide on swipe?[m[41m[m
[32m+[m						[32mif (config.hideOnSwipe) {[m[41m[m
[32m+[m[41m[m
[32m+[m							[32mvar result = false,[m[41m[m
[32m+[m								[32mboundary = 20,[m[41m[m
[32m+[m								[32mdelta = 50;[m[41m[m
[32m+[m[41m[m
[32m+[m							[32mswitch (config.side) {[m[41m[m
[32m+[m[41m[m
[32m+[m								[32mcase 'left':[m[41m[m
[32m+[m									[32mresult = (diffY < boundary && diffY > (-1 * boundary)) && (diffX > delta);[m[41m[m
[32m+[m									[32mbreak;[m[41m[m
[32m+[m[41m[m
[32m+[m								[32mcase 'right':[m[41m[m
[32m+[m									[32mresult = (diffY < boundary && diffY > (-1 * boundary)) && (diffX < (-1 * delta));[m[41m[m
[32m+[m									[32mbreak;[m[41m[m
[32m+[m[41m[m
[32m+[m								[32mcase 'top':[m[41m[m
[32m+[m									[32mresult = (diffX < boundary && diffX > (-1 * boundary)) && (diffY > delta);[m[41m[m
[32m+[m									[32mbreak;[m[41m[m
[32m+[m[41m[m
[32m+[m								[32mcase 'bottom':[m[41m[m
[32m+[m									[32mresult = (diffX < boundary && diffX > (-1 * boundary)) && (diffY < (-1 * delta));[m[41m[m
[32m+[m									[32mbreak;[m[41m[m
[32m+[m[41m[m
[32m+[m								[32mdefault:[m[41m[m
[32m+[m									[32mbreak;[m[41m[m
[32m+[m[41m[m
[32m+[m							[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m							[32mif (result) {[m[41m[m
[32m+[m[41m[m
[32m+[m								[32m$this.touchPosX = null;[m[41m[m
[32m+[m								[32m$this.touchPosY = null;[m[41m[m
[32m+[m								[32m$this._hide();[m[41m[m
[32m+[m[41m[m
[32m+[m								[32mreturn false;[m[41m[m
[32m+[m[41m[m
[32m+[m							[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m						[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m					[32m// Prevent vertical scrolling past the top or bottom.[m[41m[m
[32m+[m						[32mif (($this.scrollTop() < 0 && diffY < 0)[m[41m[m
[32m+[m						[32m|| (ts > (th - 2) && ts < (th + 2) && diffY > 0)) {[m[41m[m
[32m+[m[41m[m
[32m+[m							[32mevent.preventDefault();[m[41m[m
[32m+[m							[32mevent.stopPropagation();[m[41m[m
[32m+[m[41m[m
[32m+[m						[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m				[32m});[m[41m[m
[32m+[m[41m[m
[32m+[m			[32m// Event: Prevent certain events inside the panel from bubbling.[m[41m[m
[32m+[m				[32m$this.on('click touchend touchstart touchmove', function(event) {[m[41m[m
[32m+[m					[32mevent.stopPropagation();[m[41m[m
[32m+[m				[32m});[m[41m[m
[32m+[m[41m[m
[32m+[m			[32m// Event: Hide panel if a child anchor tag pointing to its ID is clicked.[m[41m[m
[32m+[m				[32m$this.on('click', 'a[href="#' + id + '"]', function(event) {[m[41m[m
[32m+[m[41m[m
[32m+[m					[32mevent.preventDefault();[m[41m[m
[32m+[m					[32mevent.stopPropagation();[m[41m[m
[32m+[m[41m[m
[32m+[m					[32mconfig.target.removeClass(config.visibleClass);[m[41m[m
[32m+[m[41m[m
[32m+[m				[32m});[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m// Body.[m[41m[m
[32m+[m[41m[m
[32m+[m			[32m// Event: Hide panel on body click/tap.[m[41m[m
[32m+[m				[32m$body.on('click touchend', function(event) {[m[41m[m
[32m+[m					[32m$this._hide(event);[m[41m[m
[32m+[m				[32m});[m[41m[m
[32m+[m[41m[m
[32m+[m			[32m// Event: Toggle.[m[41m[m
[32m+[m				[32m$body.on('click', 'a[href="#' + id + '"]', function(event) {[m[41m[m
[32m+[m[41m[m
[32m+[m					[32mevent.preventDefault();[m[41m[m
[32m+[m					[32mevent.stopPropagation();[m[41m[m
[32m+[m[41m[m
[32m+[m					[32mconfig.target.toggleClass(config.visibleClass);[m[41m[m
[32m+[m[41m[m
[32m+[m				[32m});[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m// Window.[m[41m[m
[32m+[m[41m[m
[32m+[m			[32m// Event: Hide on ESC.[m[41m[m
[32m+[m				[32mif (config.hideOnEscape)[m[41m[m
[32m+[m					[32m$window.on('keydown', function(event) {[m[41m[m
[32m+[m[41m[m
[32m+[m						[32mif (event.keyCode == 27)[m[41m[m
[32m+[m							[32m$this._hide(event);[m[41m[m
[32m+[m[41m[m
[32m+[m					[32m});[m[41m[m
[32m+[m[41m[m
[32m+[m		[32mreturn $this;[m[41m[m
[32m+[m[41m[m
[32m+[m	[32m};[m[41m[m
[32m+[m[41m[m
[32m+[m	[32m/**[m[41m[m
[32m+[m	[32m * Apply "placeholder" attribute polyfill to one or more forms.[m[41m[m
[32m+[m	[32m * @return {jQuery} jQuery object.[m[41m[m
[32m+[m	[32m */[m[41m[m
[32m+[m	[32m$.fn.placeholder = function() {[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m// Browser natively supports placeholders? Bail.[m[41m[m
[32m+[m			[32mif (typeof (document.createElement('input')).placeholder != 'undefined')[m[41m[m
[32m+[m				[32mreturn $(this);[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m// No elements?[m[41m[m
[32m+[m			[32mif (this.length == 0)[m[41m[m
[32m+[m				[32mreturn $this;[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m// Multiple elements?[m[41m[m
[32m+[m			[32mif (this.length > 1) {[m[41m[m
[32m+[m[41m[m
[32m+[m				[32mfor (var i=0; i < this.length; i++)[m[41m[m
[32m+[m					[32m$(this[i]).placeholder();[m[41m[m
[32m+[m[41m[m
[32m+[m				[32mreturn $this;[m[41m[m
[32m+[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m// Vars.[m[41m[m
[32m+[m			[32mvar $this = $(this);[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m// Text, TextArea.[m[41m[m
[32m+[m			[32m$this.find('input[type=text],textarea')[m[41m[m
[32m+[m				[32m.each(function() {[m[41m[m
[32m+[m[41m[m
[32m+[m					[32mvar i = $(this);[m[41m[m
[32m+[m[41m[m
[32m+[m					[32mif (i.val() == ''[m[41m[m
[32m+[m					[32m||  i.val() == i.attr('placeholder'))[m[41m[m
[32m+[m						[32mi[m[41m[m
[32m+[m							[32m.addClass('polyfill-placeholder')[m[41m[m
[32m+[m							[32m.val(i.attr('placeholder'));[m[41m[m
[32m+[m[41m[m
[32m+[m				[32m})[m[41m[m
[32m+[m				[32m.on('blur', function() {[m[41m[m
[32m+[m[41m[m
[32m+[m					[32mvar i = $(this);[m[41m[m
[32m+[m[41m[m
[32m+[m					[32mif (i.attr('name').match(/-polyfill-field$/))[m[41m[m
[32m+[m						[32mreturn;[m[41m[m
[32m+[m[41m[m
[32m+[m					[32mif (i.val() == '')[m[41m[m
[32m+[m						[32mi[m[41m[m
[32m+[m							[32m.addClass('polyfill-placeholder')[m[41m[m
[32m+[m							[32m.val(i.attr('placeholder'));[m[41m[m
[32m+[m[41m[m
[32m+[m				[32m})[m[41m[m
[32m+[m				[32m.on('focus', function() {[m[41m[m
[32m+[m[41m[m
[32m+[m					[32mvar i = $(this);[m[41m[m
[32m+[m[41m[m
[32m+[m					[32mif (i.attr('name').match(/-polyfill-field$/))[m[41m[m
[32m+[m						[32mreturn;[m[41m[m
[32m+[m[41m[m
[32m+[m					[32mif (i.val() == i.attr('placeholder'))[m[41m[m
[32m+[m						[32mi[m[41m[m
[32m+[m							[32m.removeClass('polyfill-placeholder')[m[41m[m
[32m+[m							[32m.val('');[m[41m[m
[32m+[m[41m[m
[32m+[m				[32m});[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m// Password.[m[41m[m
[32m+[m			[32m$this.find('input[type=password]')[m[41m[m
[32m+[m				[32m.each(function() {[m[41m[m
[32m+[m[41m[m
[32m+[m					[32mvar i = $(this);[m[41m[m
[32m+[m					[32mvar x = $([m[41m[m
[32m+[m								[32m$('<div>')[m[41m[m
[32m+[m									[32m.append(i.clone())[m[41m[m
[32m+[m									[32m.remove()[m[41m[m
[32m+[m									[32m.html()[m[41m[m
[32m+[m									[32m.replace(/type="password"/i, 'type="text"')[m[41m[m
[32m+[m									[32m.replace(/type=password/i, 'type=text')[m[41m[m
[32m+[m					[32m);[m[41m[m
[32m+[m[41m[m
[32m+[m					[32mif (i.attr('id') != '')[m[41m[m
[32m+[m						[32mx.attr('id', i.attr('id') + '-polyfill-field');[m[41m[m
[32m+[m[41m[m
[32m+[m					[32mif (i.attr('name') != '')[m[41m[m
[32m+[m						[32mx.attr('name', i.attr('name') + '-polyfill-field');[m[41m[m
[32m+[m[41m[m
[32m+[m					[32mx.addClass('polyfill-placeholder')[m[41m[m
[32m+[m						[32m.val(x.attr('placeholder')).insertAfter(i);[m[41m[m
[32m+[m[41m[m
[32m+[m					[32mif (i.val() == '')[m[41m[m
[32m+[m						[32mi.hide();[m[41m[m
[32m+[m					[32melse[m[41m[m
[32m+[m						[32mx.hide();[m[41m[m
[32m+[m[41m[m
[32m+[m					[32mi[m[41m[m
[32m+[m						[32m.on('blur', function(event) {[m[41m[m
[32m+[m[41m[m
[32m+[m							[32mevent.preventDefault();[m[41m[m
[32m+[m[41m[m
[32m+[m							[32mvar x = i.parent().find('input[name=' + i.attr('name') + '-polyfill-field]');[m[41m[m
[32m+[m[41m[m
[32m+[m							[32mif (i.val() == '') {[m[41m[m
[32m+[m[41m[m
[32m+[m								[32mi.hide();[m[41m[m
[32m+[m								[32mx.show();[m[41m[m
[32m+[m[41m[m
[32m+[m							[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m						[32m});[m[41m[m
[32m+[m[41m[m
[32m+[m					[32mx[m[41m[m
[32m+[m						[32m.on('focus', function(event) {[m[41m[m
[32m+[m[41m[m
[32m+[m							[32mevent.preventDefault();[m[41m[m
[32m+[m[41m[m
[32m+[m							[32mvar i = x.parent().find('input[name=' + x.attr('name').replace('-polyfill-field', '') + ']');[m[41m[m
[32m+[m[41m[m
[32m+[m							[32mx.hide();[m[41m[m
[32m+[m[41m[m
[32m+[m							[32mi[m[41m[m
[32m+[m								[32m.show()[m[41m[m
[32m+[m								[32m.focus();[m[41m[m
[32m+[m[41m[m
[32m+[m						[32m})[m[41m[m
[32m+[m						[32m.on('keypress', function(event) {[m[41m[m
[32m+[m[41m[m
[32m+[m							[32mevent.preventDefault();[m[41m[m
[32m+[m							[32mx.val('');[m[41m[m
[32m+[m[41m[m
[32m+[m						[32m});[m[41m[m
[32m+[m[41m[m
[32m+[m				[32m});[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m// Events.[m[41m[m
[32m+[m			[32m$this[m[41m[m
[32m+[m				[32m.on('submit', function() {[m[41m[m
[32m+[m[41m[m
[32m+[m					[32m$this.find('input[type=text],input[type=password],textarea')[m[41m[m
[32m+[m						[32m.each(function(event) {[m[41m[m
[32m+[m[41m[m
[32m+[m							[32mvar i = $(this);[m[41m[m
[32m+[m[41m[m
[32m+[m							[32mif (i.attr('name').match(/-polyfill-field$/))[m[41m[m
[32m+[m								[32mi.attr('name', '');[m[41m[m
[32m+[m[41m[m
[32m+[m							[32mif (i.val() == i.attr('placeholder')) {[m[41m[m
[32m+[m[41m[m
[32m+[m								[32mi.removeClass('polyfill-placeholder');[m[41m[m
[32m+[m								[32mi.val('');[m[41m[m
[32m+[m[41m[m
[32m+[m							[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m						[32m});[m[41m[m
[32m+[m[41m[m
[32m+[m				[32m})[m[41m[m
[32m+[m				[32m.on('reset', function(event) {[m[41m[m
[32m+[m[41m[m
[32m+[m					[32mevent.preventDefault();[m[41m[m
[32m+[m[41m[m
[32m+[m					[32m$this.find('select')[m[41m[m
[32m+[m						[32m.val($('option:first').val());[m[41m[m
[32m+[m[41m[m
[32m+[m					[32m$this.find('input,textarea')[m[41m[m
[32m+[m						[32m.each(function() {[m[41m[m
[32m+[m[41m[m
[32m+[m							[32mvar i = $(this),[m[41m[m
[32m+[m								[32mx;[m[41m[m
[32m+[m[41m[m
[32m+[m							[32mi.removeClass('polyfill-placeholder');[m[41m[m
[32m+[m[41m[m
[32m+[m							[32mswitch (this.type) {[m[41m[m
[32m+[m[41m[m
[32m+[m								[32mcase 'submit':[m[41m[m
[32m+[m								[32mcase 'reset':[m[41m[m
[32m+[m									[32mbreak;[m[41m[m
[32m+[m[41m[m
[32m+[m								[32mcase 'password':[m[41m[m
[32m+[m									[32mi.val(i.attr('defaultValue'));[m[41m[m
[32m+[m[41m[m
[32m+[m									[32mx = i.parent().find('input[name=' + i.attr('name') + '-polyfill-field]');[m[41m[m
[32m+[m[41m[m
[32m+[m									[32mif (i.val() == '') {[m[41m[m
[32m+[m										[32mi.hide();[m[41m[m
[32m+[m										[32mx.show();[m[41m[m
[32m+[m									[32m}[m[41m[m
[32m+[m									[32melse {[m[41m[m
[32m+[m										[32mi.show();[m[41m[m
[32m+[m										[32mx.hide();[m[41m[m
[32m+[m									[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m									[32mbreak;[m[41m[m
[32m+[m[41m[m
[32m+[m								[32mcase 'checkbox':[m[41m[m
[32m+[m								[32mcase 'radio':[m[41m[m
[32m+[m									[32mi.attr('checked', i.attr('defaultValue'));[m[41m[m
[32m+[m									[32mbreak;[m[41m[m
[32m+[m[41m[m
[32m+[m								[32mcase 'text':[m[41m[m
[32m+[m								[32mcase 'textarea':[m[41m[m
[32m+[m									[32mi.val(i.attr('defaultValue'));[m[41m[m
[32m+[m[41m[m
[32m+[m									[32mif (i.val() == '') {[m[41m[m
[32m+[m										[32mi.addClass('polyfill-placeholder');[m[41m[m
[32m+[m										[32mi.val(i.attr('placeholder'));[m[41m[m
[32m+[m									[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m									[32mbreak;[m[41m[m
[32m+[m[41m[m
[32m+[m								[32mdefault:[m[41m[m
[32m+[m									[32mi.val(i.attr('defaultValue'));[m[41m[m
[32m+[m									[32mbreak;[m[41m[m
[32m+[m[41m[m
[32m+[m							[32m}[m[41m[m
[32m+[m						[32m});[m[41m[m
[32m+[m[41m[m
[32m+[m				[32m});[m[41m[m
[32m+[m[41m[m
[32m+[m		[32mreturn $this;[m[41m[m
[32m+[m[41m[m
[32m+[m	[32m};[m[41m[m
[32m+[m[41m[m
[32m+[m	[32m/**[m[41m[m
[32m+[m	[32m * Moves elements to/from the first positions of their respective parents.[m[41m[m
[32m+[m	[32m * @param {jQuery} $elements Elements (or selector) to move.[m[41m[m
[32m+[m	[32m * @param {bool} condition If true, moves elements to the top. Otherwise, moves elements back to their original locations.[m[41m[m
[32m+[m	[32m */[m[41m[m
[32m+[m	[32m$.prioritize = function($elements, condition) {[m[41m[m
[32m+[m[41m[m
[32m+[m		[32mvar key = '__prioritize';[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m// Expand $elements if it's not already a jQuery object.[m[41m[m
[32m+[m			[32mif (typeof $elements != 'jQuery')[m[41m[m
[32m+[m				[32m$elements = $($elements);[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m// Step through elements.[m[41m[m
[32m+[m			[32m$elements.each(function() {[m[41m[m
[32m+[m[41m[m
[32m+[m				[32mvar	$e = $(this), $p,[m[41m[m
[32m+[m					[32m$parent = $e.parent();[m[41m[m
[32m+[m[41m[m
[32m+[m				[32m// No parent? Bail.[m[41m[m
[32m+[m					[32mif ($parent.length == 0)[m[41m[m
[32m+[m						[32mreturn;[m[41m[m
[32m+[m[41m[m
[32m+[m				[32m// Not moved? Move it.[m[41m[m
[32m+[m					[32mif (!$e.data(key)) {[m[41m[m
[32m+[m[41m[m
[32m+[m						[32m// Condition is false? Bail.[m[41m[m
[32m+[m							[32mif (!condition)[m[41m[m
[32m+[m								[32mreturn;[m[41m[m
[32m+[m[41m[m
[32m+[m						[32m// Get placeholder (which will serve as our point of reference for when this element needs to move back).[m[41m[m
[32m+[m							[32m$p = $e.prev();[m[41m[m
[32m+[m[41m[m
[32m+[m							[32m// Couldn't find anything? Means this element's already at the top, so bail.[m[41m[m
[32m+[m								[32mif ($p.length == 0)[m[41m[m
[32m+[m									[32mreturn;[m[41m[m
[32m+[m[41m[m
[32m+[m						[32m// Move element to top of parent.[m[41m[m
[32m+[m							[32m$e.prependTo($parent);[m[41m[m
[32m+[m[41m[m
[32m+[m						[32m// Mark element as moved.[m[41m[m
[32m+[m							[32m$e.data(key, $p);[m[41m[m
[32m+[m[41m[m
[32m+[m					[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m				[32m// Moved already?[m[41m[m
[32m+[m					[32melse {[m[41m[m
[32m+[m[41m[m
[32m+[m						[32m// Condition is true? Bail.[m[41m[m
[32m+[m							[32mif (condition)[m[41m[m
[32m+[m								[32mreturn;[m[41m[m
[32m+[m[41m[m
[32m+[m						[32m$p = $e.data(key);[m[41m[m
[32m+[m[41m[m
[32m+[m						[32m// Move element back to its original location (using our placeholder).[m[41m[m
[32m+[m							[32m$e.insertAfter($p);[m[41m[m
[32m+[m[41m[m
[32m+[m						[32m// Unmark element as moved.[m[41m[m
[32m+[m							[32m$e.removeData(key);[m[41m[m
[32m+[m[41m[m
[32m+[m					[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m			[32m});[m[41m[m
[32m+[m[41m[m
[32m+[m	[32m};[m[41m[m
[32m+[m[41m[m
[32m+[m[32m})(jQuery);[m
\ No newline at end of file[m
[1mdiff --git a/app/assets/stylesheets/application.css b/app/assets/stylesheets/application.css[m
[1mdeleted file mode 100644[m
[1mindex d05ea0f..0000000[m
[1m--- a/app/assets/stylesheets/application.css[m
[1m+++ /dev/null[m
[36m@@ -1,15 +0,0 @@[m
[31m-/*[m
[31m- * This is a manifest file that'll be compiled into application.css, which will include all the files[m
[31m- * listed below.[m
[31m- *[m
[31m- * Any CSS and SCSS file within this directory, lib/assets/stylesheets, or any plugin's[m
[31m- * vendor/assets/stylesheets directory can be referenced here using a relative path.[m
[31m- *[m
[31m- * You're free to add application-wide styles to this file and they'll appear at the bottom of the[m
[31m- * compiled file so the styles you add here take precedence over styles defined in any other CSS/SCSS[m
[31m- * files in this directory. Styles in this file should be added after the last require_* statement.[m
[31m- * It is generally better to create a new file per style scope.[m
[31m- *[m
[31m- *= require_tree .[m
[31m- *= require_self[m
[31m- */[m
[1mdiff --git a/app/assets/stylesheets/application.scss b/app/assets/stylesheets/application.scss[m
[1mnew file mode 100644[m
[1mindex 0000000..915e123[m
[1m--- /dev/null[m
[1m+++ b/app/assets/stylesheets/application.scss[m
[36m@@ -0,0 +1,54 @@[m
[32m+[m[32m@import 'libs/vars';[m
[32m+[m[32m@import 'libs/functions';[m
[32m+[m[32m@import 'libs/mixins';[m
[32m+[m[32m@import 'libs/vendor';[m
[32m+[m[32m@import 'libs/breakpoints';[m
[32m+[m[32m@import 'libs/html-grid';[m
[32m+[m[32m@import 'font-awesome.min.css';[m
[32m+[m[32m@import url('https://fonts.googleapis.com/css?family=Source+Sans+Pro:300,700,900');[m
[32m+[m
[32m+[m[32m /*[m
[32m+[m[32mPhantom by HTML5 UP[m
[32m+[m[32mhtml5up.net | @ajlkn[m
[32m+[m[32mFree for personal and commercial use under the CCA 3.0 license (html5up.net/license)[m
[32m+[m[32m */[m
[32m+[m
[32m+[m[32m// Breakpoints.[m
[32m+[m
[32m+[m[32m@include breakpoints(([m
[32m+[m[32m  xlarge:   ( 1281px,  1680px ),[m
[32m+[m[32m  large:    ( 981px,   1280px ),[m
[32m+[m	[32mmedium:   ( 737px,   980px  ),[m
[32m+[m	[32msmall:    ( 481px,   736px  ),[m
[32m+[m	[32mxsmall:   ( 361px,   480px  ),[m
[32m+[m	[32mxxsmall:  ( null,    360px  )[m
[32m+[m[32m));[m
[32m+[m
[32m+[m[32m// Base.[m
[32m+[m
[32m+[m	[32m@import 'base/reset';[m
[32m+[m	[32m@import 'base/page';[m
[32m+[m	[32m@import 'base/typography';[m
[32m+[m
[32m+[m[32m// Component.[m
[32m+[m
[32m+[m	[32m@import 'components/row';[m
[32m+[m	[32m@import 'components/section';[m
[32m+[m	[32m@import 'components/icon';[m
[32m+[m	[32m@import 'components/list';[m
[32m+[m	[32m@import 'components/actions';[m
[32m+[m	[32m@import 'components/icons';[m
[32m+[m	[32m@import 'components/form';[m
[32m+[m	[32m@import 'components/box';[m
[32m+[m	[32m@import 'components/image';[m
[32m+[m	[32m@import 'components/table';[m
[32m+[m	[32m@import 'components/button';[m
[32m+[m	[32m@import 'components/tiles';[m
[32m+[m
[32m+[m[32m// Layout.[m
[32m+[m
[32m+[m	[32m@import 'layout/header';[m
[32m+[m	[32m@import 'layout/menu';[m
[32m+[m	[32m@import 'layout/main';[m
[32m+[m	[32m@import 'layout/footer';[m
[32m+[m	[32m@import 'layout/wrapper';[m
\ No newline at end of file[m
[1mdiff --git a/app/assets/stylesheets/base/_page.scss b/app/assets/stylesheets/base/_page.scss[m
[1mnew file mode 100644[m
[1mindex 0000000..1a7db82[m
[1m--- /dev/null[m
[1m+++ b/app/assets/stylesheets/base/_page.scss[m
[36m@@ -0,0 +1,47 @@[m
[32m+[m[32m///[m[41m[m
[32m+[m[32m/// Phantom by HTML5 UP[m[41m[m
[32m+[m[32m/// html5up.net | @ajlkn[m[41m[m
[32m+[m[32m/// Free for personal and commercial use under the CCA 3.0 license (html5up.net/license)[m[41m[m
[32m+[m[32m///[m[41m[m
[32m+[m[41m[m
[32m+[m[32m/* Basic */[m[41m[m
[32m+[m[41m[m
[32m+[m	[32m// MSIE: Required for IEMobile.[m[41m[m
[32m+[m		[32m@-ms-viewport {[m[41m[m
[32m+[m			[32mwidth: device-width;[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m	[32m// MSIE: Prevents scrollbar from overlapping content.[m[41m[m
[32m+[m		[32mbody {[m[41m[m
[32m+[m			[32m-ms-overflow-style: scrollbar;[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m	[32m// Ensures page width is always >=320px.[m[41m[m
[32m+[m		[32m@include breakpoint('<=xsmall') {[m[41m[m
[32m+[m			[32mhtml, body {[m[41m[m
[32m+[m				[32mmin-width: 320px;[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m	[32m// Set box model to border-box.[m[41m[m
[32m+[m	[32m// Based on css-tricks.com/inheriting-box-sizing-probably-slightly-better-best-practice[m[41m[m
[32m+[m		[32mhtml {[m[41m[m
[32m+[m			[32mbox-sizing: border-box;[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m*, *:before, *:after {[m[41m[m
[32m+[m			[32mbox-sizing: inherit;[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m	[32mbody {[m[41m[m
[32m+[m		[32mbackground: _palette(bg);[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m// Stops initial animations until page loads.[m[41m[m
[32m+[m			[32m&.is-preload {[m[41m[m
[32m+[m				[32m*, *:before, *:after {[m[41m[m
[32m+[m					[32m@include vendor('animation', 'none !important');[m[41m[m
[32m+[m					[32m@include vendor('transition', 'none !important');[m[41m[m
[32m+[m				[32m}[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m	[32m}[m
\ No newline at end of file[m
[1mdiff --git a/app/assets/stylesheets/base/_reset.scss b/app/assets/stylesheets/base/_reset.scss[m
[1mnew file mode 100644[m
[1mindex 0000000..8fa4cff[m
[1m--- /dev/null[m
[1m+++ b/app/assets/stylesheets/base/_reset.scss[m
[36m@@ -0,0 +1,76 @@[m
[32m+[m[32m///[m[41m[m
[32m+[m[32m/// Phantom by HTML5 UP[m[41m[m
[32m+[m[32m/// html5up.net | @ajlkn[m[41m[m
[32m+[m[32m/// Free for personal and commercial use under the CCA 3.0 license (html5up.net/license)[m[41m[m
[32m+[m[32m///[m[41m[m
[32m+[m[41m[m
[32m+[m[32m// Reset.[m[41m[m
[32m+[m[32m// Based on meyerweb.com/eric/tools/css/reset (v2.0 | 20110126 | License: public domain)[m[41m[m
[32m+[m[41m[m
[32m+[m	[32mhtml, body, div, span, applet, object,[m[41m[m
[32m+[m	[32miframe, h1, h2, h3, h4, h5, h6, p, blockquote,[m[41m[m
[32m+[m	[32mpre, a, abbr, acronym, address, big, cite,[m[41m[m
[32m+[m	[32mcode, del, dfn, em, img, ins, kbd, q, s, samp,[m[41m[m
[32m+[m	[32msmall, strike, strong, sub, sup, tt, var, b,[m[41m[m
[32m+[m	[32mu, i, center, dl, dt, dd, ol, ul, li, fieldset,[m[41m[m
[32m+[m	[32mform, label, legend, table, caption, tbody,[m[41m[m
[32m+[m	[32mtfoot, thead, tr, th, td, article, aside,[m[41m[m
[32m+[m	[32mcanvas, details, embed, figure, figcaption,[m[41m[m
[32m+[m	[32mfooter, header, hgroup, menu, nav, output, ruby,[m[41m[m
[32m+[m	[32msection, summary, time, mark, audio, video {[m[41m[m
[32m+[m		[32mmargin: 0;[m[41m[m
[32m+[m		[32mpadding: 0;[m[41m[m
[32m+[m		[32mborder: 0;[m[41m[m
[32m+[m		[32mfont-size: 100%;[m[41m[m
[32m+[m		[32mfont: inherit;[m[41m[m
[32m+[m		[32mvertical-align: baseline;[m[41m[m
[32m+[m	[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m	[32marticle, aside, details, figcaption, figure,[m[41m[m
[32m+[m	[32mfooter, header, hgroup, menu, nav, section {[m[41m[m
[32m+[m		[32mdisplay: block;[m[41m[m
[32m+[m	[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m	[32mbody {[m[41m[m
[32m+[m		[32mline-height: 1;[m[41m[m
[32m+[m	[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m	[32mol, ul {[m[41m[m
[32m+[m		[32mlist-style:none;[m[41m[m
[32m+[m	[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m	[32mblockquote,	q {[m[41m[m
[32m+[m		[32mquotes: none;[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m&:before,[m[41m[m
[32m+[m		[32m&:after {[m[41m[m
[32m+[m			[32mcontent: '';[m[41m[m
[32m+[m			[32mcontent: none;[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m	[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m	[32mtable {[m[41m[m
[32m+[m		[32mborder-collapse: collapse;[m[41m[m
[32m+[m		[32mborder-spacing: 0;[m[41m[m
[32m+[m	[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m	[32mbody {[m[41m[m
[32m+[m		[32m-webkit-text-size-adjust: none;[m[41m[m
[32m+[m	[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m	[32mmark {[m[41m[m
[32m+[m		[32mbackground-color: transparent;[m[41m[m
[32m+[m		[32mcolor: inherit;[m[41m[m
[32m+[m	[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m	[32minput::-moz-focus-inner {[m[41m[m
[32m+[m		[32mborder: 0;[m[41m[m
[32m+[m		[32mpadding: 0;[m[41m[m
[32m+[m	[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m	[32minput, select, textarea {[m[41m[m
[32m+[m		[32m-moz-appearance: none;[m[41m[m
[32m+[m		[32m-webkit-appearance: none;[m[41m[m
[32m+[m		[32m-ms-appearance: none;[m[41m[m
[32m+[m		[32mappearance: none;[m[41m[m
[32m+[m	[32m}[m
\ No newline at end of file[m
[1mdiff --git a/app/assets/stylesheets/base/_typography.scss b/app/assets/stylesheets/base/_typography.scss[m
[1mnew file mode 100644[m
[1mindex 0000000..2b081f6[m
[1m--- /dev/null[m
[1m+++ b/app/assets/stylesheets/base/_typography.scss[m
[36m@@ -0,0 +1,189 @@[m
[32m+[m[32m///[m[41m[m
[32m+[m[32m/// Phantom by HTML5 UP[m[41m[m
[32m+[m[32m/// html5up.net | @ajlkn[m[41m[m
[32m+[m[32m/// Free for personal and commercial use under the CCA 3.0 license (html5up.net/license)[m[41m[m
[32m+[m[32m///[m[41m[m
[32m+[m[41m[m
[32m+[m[32m/* Type */[m[41m[m
[32m+[m[41m[m
[32m+[m	[32mbody, input, select, textarea {[m[41m[m
[32m+[m		[32mcolor: _palette(fg);[m[41m[m
[32m+[m		[32mfont-family: _font(family);[m[41m[m
[32m+[m		[32mfont-size: 16pt;[m[41m[m
[32m+[m		[32mfont-weight: _font(weight);[m[41m[m
[32m+[m		[32mline-height: 1.75;[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m@include breakpoint('<=xlarge') {[m[41m[m
[32m+[m			[32mfont-size: 14pt;[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m@include breakpoint('<=large') {[m[41m[m
[32m+[m			[32mfont-size: 12pt;[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m	[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m	[32ma {[m[41m[m
[32m+[m		[32m@include vendor('transition', ([m[41m[m
[32m+[m			[32m'border-bottom-color #{_duration(transition)} ease',[m[41m[m
[32m+[m			[32m'color #{_duration(transition)} ease'[m[41m[m
[32m+[m		[32m));[m[41m[m
[32m+[m		[32mtext-decoration: none;[m[41m[m
[32m+[m		[32mcolor: _palette(fg);[m[41m[m
[32m+[m		[32mborder-bottom: dotted 1px transparentize(_palette(fg), 0.5);[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m&:hover {[m[41m[m
[32m+[m			[32mborder-bottom-color: transparent;[m[41m[m
[32m+[m			[32mcolor: _palette(accent1) !important;[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m	[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m	[32mstrong, b {[m[41m[m
[32m+[m		[32mcolor: _palette(fg-bold);[m[41m[m
[32m+[m		[32mfont-weight: _font(weight-bold);[m[41m[m
[32m+[m	[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m	[32mem, i {[m[41m[m
[32m+[m		[32mfont-style: italic;[m[41m[m
[32m+[m	[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m	[32mp {[m[41m[m
[32m+[m		[32mmargin: 0 0 _size(element-margin) 0;[m[41m[m
[32m+[m	[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m	[32mh1 {[m[41m[m
[32m+[m		[32mfont-size: 2.75em;[m[41m[m
[32m+[m		[32mcolor: _palette(fg-bold);[m[41m[m
[32m+[m		[32mfont-weight: _font(weight-bold-alt);[m[41m[m
[32m+[m		[32mline-height: 1.3;[m[41m[m
[32m+[m		[32mmargin: 0 0 (_size(element-margin) * 0.5) 0;[m[41m[m
[32m+[m		[32mletter-spacing: _font(letter-spacing-alt);[m[41m[m
[32m+[m[41m[m
[32m+[m		[32ma {[m[41m[m
[32m+[m			[32mcolor: inherit;[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m@include breakpoint('<=small') {[m[41m[m
[32m+[m			[32mfont-size: 2em;[m[41m[m
[32m+[m			[32mmargin: 0 0 (_size(element-margin) * 0.5) 0;[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m@include breakpoint('<=xxsmall') {[m[41m[m
[32m+[m			[32mfont-size: 1.75em;[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m	[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m	[32mh2, h3, h4, h5, h6 {[m[41m[m
[32m+[m		[32mcolor: _palette(fg-bold);[m[41m[m
[32m+[m		[32mfont-weight: _font(weight-bold);[m[41m[m
[32m+[m		[32mline-height: 1.5;[m[41m[m
[32m+[m		[32mmargin: 0 0 (_size(element-margin) * 1) 0;[m[41m[m
[32m+[m		[32mtext-transform: uppercase;[m[41m[m
[32m+[m		[32mletter-spacing: _font(letter-spacing);[m[41m[m
[32m+[m[41m[m
[32m+[m		[32ma {[m[41m[m
[32m+[m			[32mcolor: inherit;[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m	[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m	[32mh2 {[m[41m[m
[32m+[m		[32mfont-size: 1.1em;[m[41m[m
[32m+[m	[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m	[32mh3 {[m[41m[m
[32m+[m		[32mfont-size: 1em;[m[41m[m
[32m+[m	[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m	[32mh4 {[m[41m[m
[32m+[m		[32mfont-size: 0.8em;[m[41m[m
[32m+[m	[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m	[32mh5 {[m[41m[m
[32m+[m		[32mfont-size: 0.8em;[m[41m[m
[32m+[m	[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m	[32mh6 {[m[41m[m
[32m+[m		[32mfont-size: 0.8em;[m[41m[m
[32m+[m	[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m	[32m@include breakpoint('<=medium') {[m[41m[m
[32m+[m		[32mh1, h2, h3, h4, h5, h6 {[m[41m[m
[32m+[m			[32mbr {[m[41m[m
[32m+[m				[32mdisplay: none;[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m	[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m	[32m@include breakpoint('<=small') {[m[41m[m
[32m+[m		[32mh2 {[m[41m[m
[32m+[m			[32mfont-size: 1em;[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32mh3 {[m[41m[m
[32m+[m			[32mfont-size: 0.8em;[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m	[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m	[32msub {[m[41m[m
[32m+[m		[32mfont-size: 0.8em;[m[41m[m
[32m+[m		[32mposition: relative;[m[41m[m
[32m+[m		[32mtop: 0.5em;[m[41m[m
[32m+[m	[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m	[32msup {[m[41m[m
[32m+[m		[32mfont-size: 0.8em;[m[41m[m
[32m+[m		[32mposition: relative;[m[41m[m
[32m+[m		[32mtop: -0.5em;[m[41m[m
[32m+[m	[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m	[32mblockquote {[m[41m[m
[32m+[m		[32mborder-left: solid (_size(border-width) * 4) _palette(border);[m[41m[m
[32m+[m		[32mfont-style: italic;[m[41m[m
[32m+[m		[32mmargin: 0 0 _size(element-margin) 0;[m[41m[m
[32m+[m		[32mpadding: (_size(element-margin) / 4) 0 (_size(element-margin) / 4) _size(element-margin);[m[41m[m
[32m+[m	[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m	[32mcode {[m[41m[m
[32m+[m		[32mbackground: _palette(border-bg);[m[41m[m
[32m+[m		[32mborder-radius: _size(border-radius);[m[41m[m
[32m+[m		[32mborder: solid _size(border-width) _palette(border);[m[41m[m
[32m+[m		[32mfont-family: _font(family-fixed);[m[41m[m
[32m+[m		[32mfont-size: 0.9em;[m[41m[m
[32m+[m		[32mmargin: 0 0.25em;[m[41m[m
[32m+[m		[32mpadding: 0.25em 0.65em;[m[41m[m
[32m+[m	[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m	[32mpre {[m[41m[m
[32m+[m		[32m-webkit-overflow-scrolling: touch;[m[41m[m
[32m+[m		[32mfont-family: _font(family-fixed);[m[41m[m
[32m+[m		[32mfont-size: 0.9em;[m[41m[m
[32m+[m		[32mmargin: 0 0 _size(element-margin) 0;[m[41m[m
[32m+[m[41m[m
[32m+[m		[32mcode {[m[41m[m
[32m+[m			[32mdisplay: block;[m[41m[m
[32m+[m			[32mline-height: 1.75;[m[41m[m
[32m+[m			[32mpadding: 1em 1.5em;[m[41m[m
[32m+[m			[32moverflow-x: auto;[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m	[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m	[32mhr {[m[41m[m
[32m+[m		[32mborder: 0;[m[41m[m
[32m+[m		[32mborder-bottom: solid _size(border-width) _palette(border);[m[41m[m
[32m+[m		[32mmargin: _size(element-margin) 0;[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m&.major {[m[41m[m
[32m+[m			[32mmargin: (_size(element-margin) * 1.5) 0;[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m	[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m	[32m.align-left {[m[41m[m
[32m+[m		[32mtext-align: left;[m[41m[m
[32m+[m	[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m	[32m.align-center {[m[41m[m
[32m+[m		[32mtext-align: center;[m[41m[m
[32m+[m	[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m	[32m.align-right {[m[41m[m
[32m+[m		[32mtext-align: right;[m[41m[m
[32m+[m	[32m}[m
\ No newline at end of file[m
[1mdiff --git a/app/assets/stylesheets/components/_actions.scss b/app/assets/stylesheets/components/_actions.scss[m
[1mnew file mode 100644[m
[1mindex 0000000..896ebcf[m
[1m--- /dev/null[m
[1m+++ b/app/assets/stylesheets/components/_actions.scss[m
[36m@@ -0,0 +1,101 @@[m
[32m+[m[32m///[m[41m[m
[32m+[m[32m/// Phantom by HTML5 UP[m[41m[m
[32m+[m[32m/// html5up.net | @ajlkn[m[41m[m
[32m+[m[32m/// Free for personal and commercial use under the CCA 3.0 license (html5up.net/license)[m[41m[m
[32m+[m[32m///[m[41m[m
[32m+[m[41m[m
[32m+[m[32m/* Actions */[m[41m[m
[32m+[m[41m[m
[32m+[m	[32mul.actions {[m[41m[m
[32m+[m		[32m@include vendor('display', 'flex');[m[41m[m
[32m+[m		[32mcursor: default;[m[41m[m
[32m+[m		[32mlist-style: none;[m[41m[m
[32m+[m		[32mmargin-left: (_size(element-margin) * -0.5);[m[41m[m
[32m+[m		[32mpadding-left: 0;[m[41m[m
[32m+[m[41m[m
[32m+[m		[32mli {[m[41m[m
[32m+[m			[32mpadding: 0 0 0 (_size(element-margin) * 0.5);[m[41m[m
[32m+[m			[32mvertical-align: middle;[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m&.special {[m[41m[m
[32m+[m			[32m@include vendor('justify-content', 'center');[m[41m[m
[32m+[m			[32mwidth: 100%;[m[41m[m
[32m+[m			[32mmargin-left: 0;[m[41m[m
[32m+[m[41m[m
[32m+[m			[32mli {[m[41m[m
[32m+[m				[32m&:first-child {[m[41m[m
[32m+[m					[32mpadding-left: 0;[m[41m[m
[32m+[m				[32m}[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m&.stacked {[m[41m[m
[32m+[m			[32m@include vendor('flex-direction', 'column');[m[41m[m
[32m+[m			[32mmargin-left: 0;[m[41m[m
[32m+[m[41m[m
[32m+[m			[32mli {[m[41m[m
[32m+[m				[32mpadding: (_size(element-margin) * 0.65) 0 0 0;[m[41m[m
[32m+[m[41m[m
[32m+[m				[32m&:first-child {[m[41m[m
[32m+[m					[32mpadding-top: 0;[m[41m[m
[32m+[m				[32m}[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m&.fit {[m[41m[m
[32m+[m			[32mwidth: calc(100% + #{_size(element-margin) * 0.5});[m[41m[m
[32m+[m[41m[m
[32m+[m			[32mli {[m[41m[m
[32m+[m				[32m@include vendor('flex-grow', '1');[m[41m[m
[32m+[m				[32m@include vendor('flex-shrink', '1');[m[41m[m
[32m+[m				[32mwidth: 100%;[m[41m[m
[32m+[m[41m[m
[32m+[m				[32m> * {[m[41m[m
[32m+[m					[32mwidth: 100%;[m[41m[m
[32m+[m				[32m}[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m			[32m&.stacked {[m[41m[m
[32m+[m				[32mwidth: 100%;[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m@include breakpoint('<=xsmall') {[m[41m[m
[32m+[m			[32m&:not(.fixed) {[m[41m[m
[32m+[m				[32m@include vendor('flex-direction', 'column');[m[41m[m
[32m+[m				[32mmargin-left: 0;[m[41m[m
[32m+[m				[32mwidth: 100% !important;[m[41m[m
[32m+[m[41m[m
[32m+[m				[32mli {[m[41m[m
[32m+[m					[32m@include vendor('flex-grow', '1');[m[41m[m
[32m+[m					[32m@include vendor('flex-shrink', '1');[m[41m[m
[32m+[m					[32mpadding: (_size(element-margin) * 0.5) 0 0 0;[m[41m[m
[32m+[m					[32mtext-align: center;[m[41m[m
[32m+[m					[32mwidth: 100%;[m[41m[m
[32m+[m[41m[m
[32m+[m					[32m> * {[m[41m[m
[32m+[m						[32mwidth: 100%;[m[41m[m
[32m+[m					[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m					[32m&:first-child {[m[41m[m
[32m+[m						[32mpadding-top: 0;[m[41m[m
[32m+[m					[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m					[32minput[type="submit"],[m[41m[m
[32m+[m					[32minput[type="reset"],[m[41m[m
[32m+[m					[32minput[type="button"],[m[41m[m
[32m+[m					[32mbutton,[m[41m[m
[32m+[m					[32m.button {[m[41m[m
[32m+[m						[32mwidth: 100%;[m[41m[m
[32m+[m[41m[m
[32m+[m						[32m&.icon {[m[41m[m
[32m+[m							[32m&:before {[m[41m[m
[32m+[m								[32mmargin-left: -0.5rem;[m[41m[m
[32m+[m							[32m}[m[41m[m
[32m+[m						[32m}[m[41m[m
[32m+[m					[32m}[m[41m[m
[32m+[m				[32m}[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m	[32m}[m
\ No newline at end of file[m
[1mdiff --git a/app/assets/stylesheets/components/_box.scss b/app/assets/stylesheets/components/_box.scss[m
[1mnew file mode 100644[m
[1mindex 0000000..74d3eba[m
[1m--- /dev/null[m
[1m+++ b/app/assets/stylesheets/components/_box.scss[m
[36m@@ -0,0 +1,26 @@[m
[32m+[m[32m///[m[41m[m
[32m+[m[32m/// Phantom by HTML5 UP[m[41m[m
[32m+[m[32m/// html5up.net | @ajlkn[m[41m[m
[32m+[m[32m/// Free for personal and commercial use under the CCA 3.0 license (html5up.net/license)[m[41m[m
[32m+[m[32m///[m[41m[m
[32m+[m[41m[m
[32m+[m[32m/* Box */[m[41m[m
[32m+[m[41m[m
[32m+[m	[32m.box {[m[41m[m
[32m+[m		[32mborder-radius: _size(border-radius);[m[41m[m
[32m+[m		[32mborder: solid _size(border-width) _palette(border);[m[41m[m
[32m+[m		[32mmargin-bottom: _size(element-margin);[m[41m[m
[32m+[m		[32mpadding: 1.5em;[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m> :last-child,[m[41m[m
[32m+[m		[32m> :last-child > :last-child,[m[41m[m
[32m+[m		[32m> :last-child > :last-child > :last-child {[m[41m[m
[32m+[m			[32mmargin-bottom: 0;[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m&.alt {[m[41m[m
[32m+[m			[32mborder: 0;[m[41m[m
[32m+[m			[32mborder-radius: 0;[m[41m[m
[32m+[m			[32mpadding: 0;[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m	[32m}[m
\ No newline at end of file[m
[1mdiff --git a/app/assets/stylesheets/components/_button.scss b/app/assets/stylesheets/components/_button.scss[m
[1mnew file mode 100644[m
[1mindex 0000000..04a3ea4[m
[1m--- /dev/null[m
[1m+++ b/app/assets/stylesheets/components/_button.scss[m
[36m@@ -0,0 +1,86 @@[m
[32m+[m[32m///[m[41m[m
[32m+[m[32m/// Phantom by HTML5 UP[m[41m[m
[32m+[m[32m/// html5up.net | @ajlkn[m[41m[m
[32m+[m[32m/// Free for personal and commercial use under the CCA 3.0 license (html5up.net/license)[m[41m[m
[32m+[m[32m///[m[41m[m
[32m+[m[41m[m
[32m+[m[32m/* Button */[m[41m[m
[32m+[m[41m[m
[32m+[m	[32minput[type="submit"],[m[41m[m
[32m+[m	[32minput[type="reset"],[m[41m[m
[32m+[m	[32minput[type="button"],[m[41m[m
[32m+[m	[32mbutton,[m[41m[m
[32m+[m	[32m.button {[m[41m[m
[32m+[m		[32m@include vendor('appearance', 'none');[m[41m[m
[32m+[m		[32m@include vendor('transition', ([m[41m[m
[32m+[m			[32m'background-color #{_duration(transition)} ease-in-out',[m[41m[m
[32m+[m			[32m'color #{_duration(transition)} ease-in-out',[m[41m[m
[32m+[m			[32m'box-shadow #{_duration(transition)} ease-in-out'[m[41m[m
[32m+[m		[32m));[m[41m[m
[32m+[m		[32mbackground-color: transparent;[m[41m[m
[32m+[m		[32mborder-radius: _size(border-radius);[m[41m[m
[32m+[m		[32mborder: 0;[m[41m[m
[32m+[m		[32mbox-shadow: inset 0 0 0 (_size(border-width) * 2) _palette(fg);[m[41m[m
[32m+[m		[32mcolor: _palette(fg) !important;[m[41m[m
[32m+[m		[32mcursor: pointer;[m[41m[m
[32m+[m		[32mdisplay: inline-block;[m[41m[m
[32m+[m		[32mfont-size: 0.8em;[m[41m[m
[32m+[m		[32mfont-weight: _font(weight-bold);[m[41m[m
[32m+[m		[32mheight: 3.5em;[m[41m[m
[32m+[m		[32mletter-spacing: _font(letter-spacing);[m[41m[m
[32m+[m		[32mline-height: 3.45em;[m[41m[m
[32m+[m		[32moverflow: hidden;[m[41m[m
[32m+[m		[32mpadding: 0 1.25em 0 #{1.25em + _font(letter-spacing)};[m[41m[m
[32m+[m		[32mtext-align: center;[m[41m[m
[32m+[m		[32mtext-decoration: none;[m[41m[m
[32m+[m		[32mtext-overflow: ellipsis;[m[41m[m
[32m+[m		[32mtext-transform: uppercase;[m[41m[m
[32m+[m		[32mwhite-space: nowrap;[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m&.icon {[m[41m[m
[32m+[m			[32m&:before {[m[41m[m
[32m+[m				[32mmargin-right: 0.5em;[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m&.fit {[m[41m[m
[32m+[m			[32mwidth: 100%;[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m&:hover {[m[41m[m
[32m+[m			[32mcolor: _palette(accent1) !important;[m[41m[m
[32m+[m			[32mbox-shadow: inset 0 0 0 (_size(border-width) * 2) _palette(accent1);[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m&:active {[m[41m[m
[32m+[m			[32mbackground-color: transparentize(_palette(accent1), 0.9);[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m&.small {[m[41m[m
[32m+[m			[32mfont-size: 0.6em;[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m&.large {[m[41m[m
[32m+[m			[32mfont-size: 1em;[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m&.primary {[m[41m[m
[32m+[m			[32mbox-shadow: none;[m[41m[m
[32m+[m			[32mbackground-color: _palette(fg);[m[41m[m
[32m+[m			[32mcolor: _palette(bg) !important;[m[41m[m
[32m+[m[41m[m
[32m+[m			[32m&:hover {[m[41m[m
[32m+[m				[32mbackground-color: _palette(accent1);[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m			[32m&:active {[m[41m[m
[32m+[m				[32mbackground-color: darken(_palette(accent1), 8);[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m&.disabled,[m[41m[m
[32m+[m		[32m&:disabled {[m[41m[m
[32m+[m			[32m@include vendor('pointer-events', 'none');[m[41m[m
[32m+[m			[32mopacity: 0.25;[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m	[32m}[m
\ No newline at end of file[m
[1mdiff --git a/app/assets/stylesheets/components/_form.scss b/app/assets/stylesheets/components/_form.scss[m
[1mnew file mode 100644[m
[1mindex 0000000..a6bf994[m
[1m--- /dev/null[m
[1m+++ b/app/assets/stylesheets/components/_form.scss[m
[36m@@ -0,0 +1,211 @@[m
[32m+[m[32m///[m[41m[m
[32m+[m[32m/// Phantom by HTML5 UP[m[41m[m
[32m+[m[32m/// html5up.net | @ajlkn[m[41m[m
[32m+[m[32m/// Free for personal and commercial use under the CCA 3.0 license (html5up.net/license)[m[41m[m
[32m+[m[32m///[m[41m[m
[32m+[m[41m[m
[32m+[m[32m/* Form */[m[41m[m
[32m+[m[41m[m
[32m+[m	[32mform {[m[41m[m
[32m+[m		[32mmargin: 0 0 _size(element-margin) 0;[m[41m[m
[32m+[m		[32moverflow-x: hidden;[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m> :last-child {[m[41m[m
[32m+[m			[32mmargin-bottom: 0;[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m> .fields  {[m[41m[m
[32m+[m			[32m$gutter: (_size(element-margin) * 0.75);[m[41m[m
[32m+[m[41m[m
[32m+[m			[32m@include vendor('display', 'flex');[m[41m[m
[32m+[m			[32m@include vendor('flex-wrap', 'wrap');[m[41m[m
[32m+[m			[32mwidth: calc(100% + #{$gutter * 2});[m[41m[m
[32m+[m			[32mmargin: ($gutter * -1) 0 _size(element-margin) ($gutter * -1);[m[41m[m
[32m+[m[41m[m
[32m+[m			[32m> .field {[m[41m[m
[32m+[m				[32m@include vendor('flex-grow', '0');[m[41m[m
[32m+[m				[32m@include vendor('flex-shrink', '0');[m[41m[m
[32m+[m				[32mpadding: $gutter 0 0 $gutter;[m[41m[m
[32m+[m				[32mwidth: calc(100% - #{$gutter * 1});[m[41m[m
[32m+[m[41m[m
[32m+[m				[32m&.half {[m[41m[m
[32m+[m					[32mwidth: calc(50% - #{$gutter * 0.5});[m[41m[m
[32m+[m				[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m				[32m&.third {[m[41m[m
[32m+[m					[32mwidth: calc(#{100% / 3} - #{$gutter * (1 / 3)});[m[41m[m
[32m+[m				[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m				[32m&.quarter {[m[41m[m
[32m+[m					[32mwidth: calc(25% - #{$gutter * 0.25});[m[41m[m
[32m+[m				[32m}[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m@include breakpoint('<=xsmall') {[m[41m[m
[32m+[m			[32m> .fields {[m[41m[m
[32m+[m				[32m$gutter: (_size(element-margin) * 0.75);[m[41m[m
[32m+[m[41m[m
[32m+[m				[32mwidth: calc(100% + #{$gutter * 2});[m[41m[m
[32m+[m				[32mmargin: ($gutter * -1) 0 _size(element-margin) ($gutter * -1);[m[41m[m
[32m+[m[41m[m
[32m+[m				[32m> .field {[m[41m[m
[32m+[m					[32mpadding: $gutter 0 0 $gutter;[m[41m[m
[32m+[m					[32mwidth: calc(100% - #{$gutter * 1});[m[41m[m
[32m+[m[41m[m
[32m+[m					[32m&.half {[m[41m[m
[32m+[m						[32mwidth: calc(100% - #{$gutter * 1});[m[41m[m
[32m+[m					[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m					[32m&.third {[m[41m[m
[32m+[m						[32mwidth: calc(100% - #{$gutter * 1});[m[41m[m
[32m+[m					[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m					[32m&.quarter {[m[41m[m
[32m+[m						[32mwidth: calc(100% - #{$gutter * 1});[m[41m[m
[32m+[m					[32m}[m[41m[m
[32m+[m				[32m}[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m	[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m	[32mlabel {[m[41m[m
[32m+[m		[32mdisplay: block;[m[41m[m
[32m+[m		[32mfont-size: 0.9em;[m[41m[m
[32m+[m		[32mfont-weight: _font(weight-bold);[m[41m[m
[32m+[m		[32mmargin: 0 0 (_size(element-margin) * 0.5) 0;[m[41m[m
[32m+[m	[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m	[32minput[type="text"],[m[41m[m
[32m+[m	[32minput[type="password"],[m[41m[m
[32m+[m	[32minput[type="email"],[m[41m[m
[32m+[m	[32minput[type="tel"],[m[41m[m
[32m+[m	[32mselect,[m[41m[m
[32m+[m	[32mtextarea {[m[41m[m
[32m+[m		[32m@include vendor('appearance', 'none');[m[41m[m
[32m+[m		[32mbackground-color: transparent;[m[41m[m
[32m+[m		[32mborder: none;[m[41m[m
[32m+[m		[32mborder-radius: 0;[m[41m[m
[32m+[m		[32mborder-bottom: solid _size(border-width) _palette(border);[m[41m[m
[32m+[m		[32mcolor: inherit;[m[41m[m
[32m+[m		[32mdisplay: block;[m[41m[m
[32m+[m		[32moutline: 0;[m[41m[m
[32m+[m		[32mpadding: 0;[m[41m[m
[32m+[m		[32mtext-decoration: none;[m[41m[m
[32m+[m		[32mwidth: 100%;[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m&:invalid {[m[41m[m
[32m+[m			[32mbox-shadow: none;[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m&:focus {[m[41m[m
[32m+[m			[32mborder-bottom-color: _palette(accent1);[m[41m[m
[32m+[m			[32mbox-shadow: inset 0 -1px 0 0 _palette(accent1);[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m	[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m	[32mselect {[m[41m[m
[32m+[m		[32mbackground-image: svg-url("<svg xmlns='http://www.w3.org/2000/svg' width='40' height='40' preserveAspectRatio='none' viewBox='0 0 40 40'><path d='M9.4,12.3l10.4,10.4l10.4-10.4c0.2-0.2,0.5-0.4,0.9-0.4c0.3,0,0.6,0.1,0.9,0.4l3.3,3.3c0.2,0.2,0.4,0.5,0.4,0.9 c0,0.4-0.1,0.6-0.4,0.9L20.7,31.9c-0.2,0.2-0.5,0.4-0.9,0.4c-0.3,0-0.6-0.1-0.9-0.4L4.3,17.3c-0.2-0.2-0.4-0.5-0.4-0.9 c0-0.4,0.1-0.6,0.4-0.9l3.3-3.3c0.2-0.2,0.5-0.4,0.9-0.4S9.1,12.1,9.4,12.3z' fill='#{_palette(border)}' /></svg>");[m[41m[m
[32m+[m		[32mbackground-size: 1.25rem;[m[41m[m
[32m+[m		[32mbackground-repeat: no-repeat;[m[41m[m
[32m+[m		[32mbackground-position: calc(100% - 1rem) center;[m[41m[m
[32m+[m		[32mheight: _size(element-height);[m[41m[m
[32m+[m		[32mpadding-right: _size(element-height);[m[41m[m
[32m+[m		[32mtext-overflow: ellipsis;[m[41m[m
[32m+[m[41m[m
[32m+[m		[32moption {[m[41m[m
[32m+[m			[32mcolor: _palette(fg-bold);[m[41m[m
[32m+[m			[32mbackground: _palette(bg);[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m&:focus {[m[41m[m
[32m+[m			[32m&::-ms-value {[m[41m[m
[32m+[m				[32mbackground-color: transparent;[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m&::-ms-expand {[m[41m[m
[32m+[m			[32mdisplay: none;[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m	[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m	[32minput[type="text"],[m[41m[m
[32m+[m	[32minput[type="password"],[m[41m[m
[32m+[m	[32minput[type="email"],[m[41m[m
[32m+[m	[32mselect {[m[41m[m
[32m+[m		[32mheight: _size(element-height);[m[41m[m
[32m+[m	[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m	[32mtextarea {[m[41m[m
[32m+[m		[32mpadding: 0;[m[41m[m
[32m+[m		[32mmin-height: (_size(element-height) * 1.25);[m[41m[m
[32m+[m	[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m	[32minput[type="checkbox"],[m[41m[m
[32m+[m	[32minput[type="radio"], {[m[41m[m
[32m+[m		[32m@include vendor('appearance', 'none');[m[41m[m
[32m+[m		[32mdisplay: block;[m[41m[m
[32m+[m		[32mfloat: left;[m[41m[m
[32m+[m		[32mmargin-right: -2em;[m[41m[m
[32m+[m		[32mopacity: 0;[m[41m[m
[32m+[m		[32mwidth: 1em;[m[41m[m
[32m+[m		[32mz-index: -1;[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m& + label {[m[41m[m
[32m+[m			[32m@include icon;[m[41m[m
[32m+[m			[32mcolor: _palette(fg);[m[41m[m
[32m+[m			[32mcursor: pointer;[m[41m[m
[32m+[m			[32mdisplay: inline-block;[m[41m[m
[32m+[m			[32mfont-size: 1em;[m[41m[m
[32m+[m			[32mfont-weight: _font(weight);[m[41m[m
[32m+[m			[32mpadding-left: (_size(element-height) * 0.6) + 0.75em;[m[41m[m
[32m+[m			[32mpadding-right: 0.75em;[m[41m[m
[32m+[m			[32mposition: relative;[m[41m[m
[32m+[m[41m[m
[32m+[m			[32m&:before {[m[41m[m
[32m+[m				[32mborder-radius: _size(border-radius);[m[41m[m
[32m+[m				[32mborder: solid _size(border-width) _palette(border);[m[41m[m
[32m+[m				[32mcontent: '';[m[41m[m
[32m+[m				[32mdisplay: inline-block;[m[41m[m
[32m+[m				[32mheight: (_size(element-height) * 0.6);[m[41m[m
[32m+[m				[32mleft: 0;[m[41m[m
[32m+[m				[32mline-height: (_size(element-height) * 0.575);[m[41m[m
[32m+[m				[32mposition: absolute;[m[41m[m
[32m+[m				[32mtext-align: center;[m[41m[m
[32m+[m				[32mtop: 0;[m[41m[m
[32m+[m				[32mwidth: (_size(element-height) * 0.6);[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m&:checked + label {[m[41m[m
[32m+[m			[32m&:before {[m[41m[m
[32m+[m				[32mbackground: _palette(fg);[m[41m[m
[32m+[m				[32mborder-color: _palette(fg);[m[41m[m
[32m+[m				[32mcolor: _palette(bg);[m[41m[m
[32m+[m				[32mcontent: '\f00c';[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m&:focus + label {[m[41m[m
[32m+[m			[32m&:before {[m[41m[m
[32m+[m				[32mborder-color: _palette(accent1);[m[41m[m
[32m+[m				[32mbox-shadow: 0 0 0 _size(border-width) _palette(accent1);[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m	[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m	[32minput[type="checkbox"] {[m[41m[m
[32m+[m		[32m& + label {[m[41m[m
[32m+[m			[32m&:before {[m[41m[m
[32m+[m				[32mborder-radius: _size(border-radius);[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m	[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m	[32minput[type="radio"] {[m[41m[m
[32m+[m		[32m& + label {[m[41m[m
[32m+[m			[32m&:before {[m[41m[m
[32m+[m				[32mborder-radius: 100%;[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m	[32m}[m
\ No newline at end of file[m
[1mdiff --git a/app/assets/stylesheets/components/_icon.scss b/app/assets/stylesheets/components/_icon.scss[m
[1mnew file mode 100644[m
[1mindex 0000000..5b9a40c[m
[1m--- /dev/null[m
[1m+++ b/app/assets/stylesheets/components/_icon.scss[m
[36m@@ -0,0 +1,50 @@[m
[32m+[m[32m///[m[41m[m
[32m+[m[32m/// Phantom by HTML5 UP[m[41m[m
[32m+[m[32m/// html5up.net | @ajlkn[m[41m[m
[32m+[m[32m/// Free for personal and commercial use under the CCA 3.0 license (html5up.net/license)[m[41m[m
[32m+[m[32m///[m[41m[m
[32m+[m[41m[m
[32m+[m[32m/* Icon */[m[41m[m
[32m+[m[41m[m
[32m+[m	[32m.icon {[m[41m[m
[32m+[m		[32m@include icon;[m[41m[m
[32m+[m		[32mborder-bottom: none;[m[41m[m
[32m+[m		[32mposition: relative;[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m> .label {[m[41m[m
[32m+[m			[32mdisplay: none;[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m&.style1 {[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m&.style2 {[m[41m[m
[32m+[m			[32m@include vendor('transition', ([m[41m[m
[32m+[m				[32m'background-color #{_duration(transition)} ease-in-out',[m[41m[m
[32m+[m				[32m'color #{_duration(transition)} ease-in-out',[m[41m[m
[32m+[m				[32m'border-color #{_duration(transition)} ease-in-out'[m[41m[m
[32m+[m			[32m));[m[41m[m
[32m+[m			[32mbackground-color: transparent;[m[41m[m
[32m+[m			[32mborder: solid 1px _palette(border);[m[41m[m
[32m+[m			[32mborder-radius: _size(border-radius);[m[41m[m
[32m+[m			[32mwidth: 2.65em;[m[41m[m
[32m+[m			[32mheight: 2.65em;[m[41m[m
[32m+[m			[32mdisplay: inline-block;[m[41m[m
[32m+[m			[32mtext-align: center;[m[41m[m
[32m+[m			[32mline-height: 2.65em;[m[41m[m
[32m+[m			[32mcolor: inherit;[m[41m[m
[32m+[m[41m[m
[32m+[m			[32m&:before {[m[41m[m
[32m+[m				[32mfont-size: 1.1em;[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m			[32m&:hover {[m[41m[m
[32m+[m				[32mcolor: _palette(accent1);[m[41m[m
[32m+[m				[32mborder-color: _palette(accent1);[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m			[32m&:active {[m[41m[m
[32m+[m				[32mbackground-color: transparentize(_palette(accent1), 0.9);[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m	[32m}[m
\ No newline at end of file[m
[1mdiff --git a/app/assets/stylesheets/components/_icons.scss b/app/assets/stylesheets/components/_icons.scss[m
[1mnew file mode 100644[m
[1mindex 0000000..d3f3679[m
[1m--- /dev/null[m
[1m+++ b/app/assets/stylesheets/components/_icons.scss[m
[36m@@ -0,0 +1,19 @@[m
[32m+[m[32m///[m
[32m+[m[32m/// Phantom by HTML5 UP[m
[32m+[m[32m/// html5up.net | @ajlkn[m
[32m+[m[32m/// Free for personal and commercial use under the CCA 3.0 license (html5up.net/license)[m
[32m+[m[32m///[m
[32m+[m
[32m+[m[32m/* Icons */[m
[32m+[m
[32m+[m	[32mul.icons {[m
[32m+[m		[32mcursor: default;[m
[32m+[m		[32mlist-style: none;[m
[32m+[m		[32mpadding-left: 0;[m
[32m+[m		[32mmargin: -1em 0 _size(element-margin) -1em;[m
[32m+[m
[32m+[m		[32mli {[m
[32m+[m			[32mdisplay: inline-block;[m
[32m+[m			[32mpadding: 1em 0 0 1em;[m
[32m+[m		[32m}[m
[32m+[m	[32m}[m
\ No newline at end of file[m
[1mdiff --git a/app/assets/stylesheets/components/_image.scss b/app/assets/stylesheets/components/_image.scss[m
[1mnew file mode 100644[m
[1mindex 0000000..4cc5e40[m
[1m--- /dev/null[m
[1m+++ b/app/assets/stylesheets/components/_image.scss[m
[36m@@ -0,0 +1,64 @@[m
[32m+[m[32m///[m[41m[m
[32m+[m[32m/// Phantom by HTML5 UP[m[41m[m
[32m+[m[32m/// html5up.net | @ajlkn[m[41m[m
[32m+[m[32m/// Free for personal and commercial use under the CCA 3.0 license (html5up.net/license)[m[41m[m
[32m+[m[32m///[m[41m[m
[32m+[m[41m[m
[32m+[m[32m/* Image */[m[41m[m
[32m+[m[41m[m
[32m+[m	[32m.image {[m[41m[m
[32m+[m		[32mborder-radius: _size(border-radius);[m[41m[m
[32m+[m		[32mborder: 0;[m[41m[m
[32m+[m		[32mdisplay: inline-block;[m[41m[m
[32m+[m		[32mposition: relative;[m[41m[m
[32m+[m[41m[m
[32m+[m		[32mimg {[m[41m[m
[32m+[m			[32mborder-radius: _size(border-radius);[m[41m[m
[32m+[m			[32mdisplay: block;[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m&.left,[m[41m[m
[32m+[m		[32m&.right {[m[41m[m
[32m+[m			[32mmax-width: 40%;[m[41m[m
[32m+[m[41m[m
[32m+[m			[32mimg {[m[41m[m
[32m+[m				[32mwidth: 100%;[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m&.left {[m[41m[m
[32m+[m			[32mfloat: left;[m[41m[m
[32m+[m			[32mpadding: 0 1.5em 1em 0;[m[41m[m
[32m+[m			[32mtop: 0.25em;[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m&.right {[m[41m[m
[32m+[m			[32mfloat: right;[m[41m[m
[32m+[m			[32mpadding: 0 0 1em 1.5em;[m[41m[m
[32m+[m			[32mtop: 0.25em;[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m&.fit {[m[41m[m
[32m+[m			[32mdisplay: block;[m[41m[m
[32m+[m			[32mmargin: 0 0 _size(element-margin) 0;[m[41m[m
[32m+[m			[32mwidth: 100%;[m[41m[m
[32m+[m[41m[m
[32m+[m			[32mimg {[m[41m[m
[32m+[m				[32mwidth: 100%;[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m&.main {[m[41m[m
[32m+[m			[32mdisplay: block;[m[41m[m
[32m+[m			[32mmargin: 0 0 (_size(element-margin) * 1.5) 0;[m[41m[m
[32m+[m			[32mwidth: 100%;[m[41m[m
[32m+[m[41m[m
[32m+[m			[32mimg {[m[41m[m
[32m+[m				[32mwidth: 100%;[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m			[32m@include breakpoint('<=small') {[m[41m[m
[32m+[m				[32mmargin: 0 0 _size(element-margin) 0;[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m	[32m}[m
\ No newline at end of file[m
[1mdiff --git a/app/assets/stylesheets/components/_list.scss b/app/assets/stylesheets/components/_list.scss[m
[1mnew file mode 100644[m
[1mindex 0000000..c14776b[m
[1m--- /dev/null[m
[1m+++ b/app/assets/stylesheets/components/_list.scss[m
[36m@@ -0,0 +1,56 @@[m
[32m+[m[32m///[m[41m[m
[32m+[m[32m/// Phantom by HTML5 UP[m[41m[m
[32m+[m[32m/// html5up.net | @ajlkn[m[41m[m
[32m+[m[32m/// Free for personal and commercial use under the CCA 3.0 license (html5up.net/license)[m[41m[m
[32m+[m[32m///[m[41m[m
[32m+[m[41m[m
[32m+[m[32m/* List */[m[41m[m
[32m+[m[41m[m
[32m+[m	[32mol {[m[41m[m
[32m+[m		[32mlist-style: decimal;[m[41m[m
[32m+[m		[32mmargin: 0 0 _size(element-margin) 0;[m[41m[m
[32m+[m		[32mpadding-left: 1.25em;[m[41m[m
[32m+[m[41m[m
[32m+[m		[32mli {[m[41m[m
[32m+[m			[32mpadding-left: 0.25em;[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m	[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m	[32mul {[m[41m[m
[32m+[m		[32mlist-style: disc;[m[41m[m
[32m+[m		[32mmargin: 0 0 _size(element-margin) 0;[m[41m[m
[32m+[m		[32mpadding-left: 1em;[m[41m[m
[32m+[m[41m[m
[32m+[m		[32mli {[m[41m[m
[32m+[m			[32mpadding-left: 0.5em;[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m&.alt {[m[41m[m
[32m+[m			[32mlist-style: none;[m[41m[m
[32m+[m			[32mpadding-left: 0;[m[41m[m
[32m+[m[41m[m
[32m+[m			[32mli {[m[41m[m
[32m+[m				[32mborder-top: solid _size(border-width) _palette(border);[m[41m[m
[32m+[m				[32mpadding: 0.5em 0;[m[41m[m
[32m+[m[41m[m
[32m+[m				[32m&:first-child {[m[41m[m
[32m+[m					[32mborder-top: 0;[m[41m[m
[32m+[m					[32mpadding-top: 0;[m[41m[m
[32m+[m				[32m}[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m	[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m	[32mdl {[m[41m[m
[32m+[m		[32mmargin: 0 0 _size(element-margin) 0;[m[41m[m
[32m+[m[41m[m
[32m+[m		[32mdt {[m[41m[m
[32m+[m			[32mdisplay: block;[m[41m[m
[32m+[m			[32mfont-weight: _font(weight-bold);[m[41m[m
[32m+[m			[32mmargin: 0 0 (_size(element-margin) * 0.5) 0;[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32mdd {[m[41m[m
[32m+[m			[32mmargin-left: _size(element-margin);[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m	[32m}[m
\ No newline at end of file[m
[1mdiff --git a/app/assets/stylesheets/components/_row.scss b/app/assets/stylesheets/components/_row.scss[m
[1mnew file mode 100644[m
[1mindex 0000000..ab75432[m
[1m--- /dev/null[m
[1m+++ b/app/assets/stylesheets/components/_row.scss[m
[36m@@ -0,0 +1,31 @@[m
[32m+[m[32m///[m[41m[m
[32m+[m[32m/// Phantom by HTML5 UP[m[41m[m
[32m+[m[32m/// html5up.net | @ajlkn[m[41m[m
[32m+[m[32m/// Free for personal and commercial use under the CCA 3.0 license (html5up.net/license)[m[41m[m
[32m+[m[32m///[m[41m[m
[32m+[m[41m[m
[32m+[m[32m/* Row */[m[41m[m
[32m+[m[41m[m
[32m+[m	[32m.row {[m[41m[m
[32m+[m		[32m@include html-grid(2em);[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m@include breakpoint('<=xlarge') {[m[41m[m
[32m+[m			[32m@include html-grid(2em, 'xlarge');[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m@include breakpoint('<=large') {[m[41m[m
[32m+[m			[32m@include html-grid(2em, 'large');[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m@include breakpoint('<=medium') {[m[41m[m
[32m+[m			[32m@include html-grid(1.5em, 'medium');[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m@include breakpoint('<=small') {[m[41m[m
[32m+[m			[32m@include html-grid(1em, 'small');[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m@include breakpoint('<=xsmall') {[m[41m[m
[32m+[m			[32m@include html-grid(1em, 'xsmall');[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m	[32m}[m
\ No newline at end of file[m
[1mdiff --git a/app/assets/stylesheets/components/_section.scss b/app/assets/stylesheets/components/_section.scss[m
[1mnew file mode 100644[m
[1mindex 0000000..3cc4bc8[m
[1m--- /dev/null[m
[1m+++ b/app/assets/stylesheets/components/_section.scss[m
[36m@@ -0,0 +1,25 @@[m
[32m+[m[32m///[m[41m[m
[32m+[m[32m/// Phantom by HTML5 UP[m[41m[m
[32m+[m[32m/// html5up.net | @ajlkn[m[41m[m
[32m+[m[32m/// Free for personal and commercial use under the CCA 3.0 license (html5up.net/license)[m[41m[m
[32m+[m[32m///[m[41m[m
[32m+[m[41m[m
[32m+[m[32m/* Section/Article */[m[41m[m
[32m+[m[41m[m
[32m+[m	[32msection, article {[m[41m[m
[32m+[m		[32m&.special {[m[41m[m
[32m+[m			[32mtext-align: center;[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m	[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m	[32mheader {[m[41m[m
[32m+[m		[32mp {[m[41m[m
[32m+[m			[32mmargin-top: _size(element-margin) * -0.5;[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m@include breakpoint('<=small') {[m[41m[m
[32m+[m			[32mp {[m[41m[m
[32m+[m				[32mmargin-top: 0;[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m	[32m}[m
\ No newline at end of file[m
[1mdiff --git a/app/assets/stylesheets/components/_table.scss b/app/assets/stylesheets/components/_table.scss[m
[1mnew file mode 100644[m
[1mindex 0000000..d6e8728[m
[1m--- /dev/null[m
[1m+++ b/app/assets/stylesheets/components/_table.scss[m
[36m@@ -0,0 +1,81 @@[m
[32m+[m[32m///[m[41m[m
[32m+[m[32m/// Phantom by HTML5 UP[m[41m[m
[32m+[m[32m/// html5up.net | @ajlkn[m[41m[m
[32m+[m[32m/// Free for personal and commercial use under the CCA 3.0 license (html5up.net/license)[m[41m[m
[32m+[m[32m///[m[41m[m
[32m+[m[41m[m
[32m+[m[32m/* Table */[m[41m[m
[32m+[m[41m[m
[32m+[m	[32m.table-wrapper {[m[41m[m
[32m+[m		[32m-webkit-overflow-scrolling: touch;[m[41m[m
[32m+[m		[32moverflow-x: auto;[m[41m[m
[32m+[m	[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m	[32mtable {[m[41m[m
[32m+[m		[32mmargin: 0 0 _size(element-margin) 0;[m[41m[m
[32m+[m		[32mwidth: 100%;[m[41m[m
[32m+[m[41m[m
[32m+[m		[32mtbody {[m[41m[m
[32m+[m			[32mtr {[m[41m[m
[32m+[m				[32mborder: solid _size(border-width) _palette(border);[m[41m[m
[32m+[m				[32mborder-left: 0;[m[41m[m
[32m+[m				[32mborder-right: 0;[m[41m[m
[32m+[m[41m[m
[32m+[m				[32m&:nth-child(2n + 1) {[m[41m[m
[32m+[m					[32mbackground-color: _palette(border-bg);[m[41m[m
[32m+[m				[32m}[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32mtd {[m[41m[m
[32m+[m			[32mpadding: 0.75em 0.75em;[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32mth {[m[41m[m
[32m+[m			[32mcolor: _palette(fg-bold);[m[41m[m
[32m+[m			[32mfont-size: 0.9em;[m[41m[m
[32m+[m			[32mfont-weight: _font(weight-bold);[m[41m[m
[32m+[m			[32mpadding: 0 0.75em 0.75em 0.75em;[m[41m[m
[32m+[m			[32mtext-align: left;[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32mthead {[m[41m[m
[32m+[m			[32mborder-bottom: solid (_size(border-width) * 2) _palette(border);[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32mtfoot {[m[41m[m
[32m+[m			[32mborder-top: solid (_size(border-width) * 2) _palette(border);[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m&.alt {[m[41m[m
[32m+[m			[32mborder-collapse: separate;[m[41m[m
[32m+[m[41m[m
[32m+[m			[32mtbody {[m[41m[m
[32m+[m				[32mtr {[m[41m[m
[32m+[m					[32mtd {[m[41m[m
[32m+[m						[32mborder: solid _size(border-width) _palette(border);[m[41m[m
[32m+[m						[32mborder-left-width: 0;[m[41m[m
[32m+[m						[32mborder-top-width: 0;[m[41m[m
[32m+[m[41m[m
[32m+[m						[32m&:first-child {[m[41m[m
[32m+[m							[32mborder-left-width: _size(border-width);[m[41m[m
[32m+[m						[32m}[m[41m[m
[32m+[m					[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m					[32m&:first-child {[m[41m[m
[32m+[m						[32mtd {[m[41m[m
[32m+[m							[32mborder-top-width: _size(border-width);[m[41m[m
[32m+[m						[32m}[m[41m[m
[32m+[m					[32m}[m[41m[m
[32m+[m				[32m}[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m			[32mthead {[m[41m[m
[32m+[m				[32mborder-bottom: 0;[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m			[32mtfoot {[m[41m[m
[32m+[m				[32mborder-top: 0;[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m	[32m}[m
\ No newline at end of file[m
[1mdiff --git a/app/assets/stylesheets/components/_tiles.scss b/app/assets/stylesheets/components/_tiles.scss[m
[1mnew file mode 100644[m
[1mindex 0000000..4c44652[m
[1m--- /dev/null[m
[1m+++ b/app/assets/stylesheets/components/_tiles.scss[m
[36m@@ -0,0 +1,258 @@[m
[32m+[m[32m///[m[41m[m
[32m+[m[32m/// Phantom by HTML5 UP[m[41m[m
[32m+[m[32m/// html5up.net | @ajlkn[m[41m[m
[32m+[m[32m/// Free for personal and commercial use under the CCA 3.0 license (html5up.net/license)[m[41m[m
[32m+[m[32m///[m[41m[m
[32m+[m[41m[m
[32m+[m[32m/* Tiles */[m[41m[m
[32m+[m[41m[m
[32m+[m	[32m.tiles {[m[41m[m
[32m+[m		[32m$gutter: _size(gutter);[m[41m[m
[32m+[m		[32m$duration: 0.5s;[m[41m[m
[32m+[m		[32m$ease: 'ease';[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m@include vendor('display', 'flex');[m[41m[m
[32m+[m		[32m@include vendor('flex-wrap', 'wrap');[m[41m[m
[32m+[m		[32mpostiion: relative;[m[41m[m
[32m+[m		[32mmargin: ($gutter * -1) 0 0 ($gutter * -1);[m[41m[m
[32m+[m[41m[m
[32m+[m		[32marticle {[m[41m[m
[32m+[m			[32m@include vendor('transition', ([m[41m[m
[32m+[m				[32m'transform #{$duration} #{$ease}',[m[41m[m
[32m+[m				[32m'opacity #{$duration} #{$ease}'[m[41m[m
[32m+[m			[32m));[m[41m[m
[32m+[m			[32mposition: relative;[m[41m[m
[32m+[m			[32mwidth: calc(#{(100% / 3)} - #{$gutter * 1});[m[41m[m
[32m+[m			[32mmargin: $gutter 0 0 $gutter;[m[41m[m
[32m+[m[41m[m
[32m+[m			[32m> .image {[m[41m[m
[32m+[m				[32m@include vendor('transition', 'transform #{$duration} #{$ease}');[m[41m[m
[32m+[m				[32mposition: relative;[m[41m[m
[32m+[m				[32mdisplay: block;[m[41m[m
[32m+[m				[32mwidth: 100%;[m[41m[m
[32m+[m				[32mborder-radius: _size(border-radius);[m[41m[m
[32m+[m				[32moverflow: hidden;[m[41m[m
[32m+[m[41m[m
[32m+[m				[32mimg {[m[41m[m
[32m+[m					[32mdisplay: block;[m[41m[m
[32m+[m					[32mwidth: 100%;[m[41m[m
[32m+[m				[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m				[32m&:before {[m[41m[m
[32m+[m					[32m@include vendor('pointer-events', 'none');[m[41m[m
[32m+[m					[32m@include vendor('transition', ([m[41m[m
[32m+[m						[32m'background-color #{$duration} #{$ease}',[m[41m[m
[32m+[m						[32m'opacity #{$duration} #{$ease}'[m[41m[m
[32m+[m					[32m));[m[41m[m
[32m+[m					[32mcontent: '';[m[41m[m
[32m+[m					[32mdisplay: block;[m[41m[m
[32m+[m					[32mposition: absolute;[m[41m[m
[32m+[m					[32mtop: 0;[m[41m[m
[32m+[m					[32mleft: 0;[m[41m[m
[32m+[m					[32mwidth: 100%;[m[41m[m
[32m+[m					[32mheight: 100%;[m[41m[m
[32m+[m					[32mopacity: 1.0;[m[41m[m
[32m+[m					[32mz-index: 1;[m[41m[m
[32m+[m					[32mopacity: 0.8;[m[41m[m
[32m+[m				[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m				[32m&:after {[m[41m[m
[32m+[m					[32m@include vendor('pointer-events', 'none');[m[41m[m
[32m+[m					[32m@include vendor('transition', 'opacity #{$duration} #{$ease}');[m[41m[m
[32m+[m					[32mcontent: '';[m[41m[m
[32m+[m					[32mdisplay: block;[m[41m[m
[32m+[m					[32mposition: absolute;[m[41m[m
[32m+[m					[32mtop: 0;[m[41m[m
[32m+[m					[32mleft: 0;[m[41m[m
[32m+[m					[32mwidth: 100%;[m[41m[m
[32m+[m					[32mheight: 100%;[m[41m[m
[32m+[m					[32mbackground-image: svg-url('<svg xmlns="http://www.w3.org/2000/svg" width="100" height="100" viewBox="0 0 100 100" preserveAspectRatio="none"><style>line { stroke-width: 0.25px; stroke: #ffffff; }</style><line x1="0" y1="0" x2="100" y2="100" /><line x1="100" y1="0" x2="0" y2="100" /></svg>');[m[41m[m
[32m+[m					[32mbackground-position: center;[m[41m[m
[32m+[m					[32mbackground-repeat: no-repeat;[m[41m[m
[32m+[m					[32mbackground-size: 100% 100%;[m[41m[m
[32m+[m					[32mopacity: 0.25;[m[41m[m
[32m+[m					[32mz-index: 2;[m[41m[m
[32m+[m				[32m}[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m			[32m> a {[m[41m[m
[32m+[m				[32m@include vendor('display', 'flex');[m[41m[m
[32m+[m				[32m@include vendor('flex-direction', 'column');[m[41m[m
[32m+[m				[32m@include vendor('align-items', 'center');[m[41m[m
[32m+[m				[32m@include vendor('justify-content', 'center');[m[41m[m
[32m+[m				[32m@include vendor('transition', ([m[41m[m
[32m+[m					[32m'background-color #{$duration} #{$ease}',[m[41m[m
[32m+[m					[32m'transform #{$duration} #{$ease}'[m[41m[m
[32m+[m				[32m));[m[41m[m
[32m+[m				[32mposition: absolute;[m[41m[m
[32m+[m				[32mtop: 0;[m[41m[m
[32m+[m				[32mleft: 0;[m[41m[m
[32m+[m				[32mwidth: 100%;[m[41m[m
[32m+[m				[32mheight: 100%;[m[41m[m
[32m+[m				[32mpadding: 1em;[m[41m[m
[32m+[m				[32mborder-radius: _size(border-radius);[m[41m[m
[32m+[m				[32mborder-bottom: 0;[m[41m[m
[32m+[m				[32mcolor: _palette(fg-accent);[m[41m[m
[32m+[m				[32mtext-align: center;[m[41m[m
[32m+[m				[32mtext-decoration: none;[m[41m[m
[32m+[m				[32mz-index: 3;[m[41m[m
[32m+[m[41m[m
[32m+[m				[32m> :last-child {[m[41m[m
[32m+[m					[32mmargin: 0;[m[41m[m
[32m+[m				[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m				[32m&:hover {[m[41m[m
[32m+[m					[32mcolor: _palette(fg-accent) !important;[m[41m[m
[32m+[m				[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m				[32mh2 {[m[41m[m
[32m+[m					[32mmargin: 0;[m[41m[m
[32m+[m				[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m				[32m.content {[m[41m[m
[32m+[m					[32m@include vendor('transition', ([m[41m[m
[32m+[m						[32m'max-height #{$duration} #{$ease}',[m[41m[m
[32m+[m						[32m'opacity #{$duration} #{$ease}'[m[41m[m
[32m+[m					[32m));[m[41m[m
[32m+[m					[32mwidth: 100%;[m[41m[m
[32m+[m					[32mmax-height: 0;[m[41m[m
[32m+[m					[32mline-height: 1.5;[m[41m[m
[32m+[m					[32mmargin-top: 0.35em;[m[41m[m
[32m+[m					[32mopacity: 0;[m[41m[m
[32m+[m[41m[m
[32m+[m					[32m> :last-child {[m[41m[m
[32m+[m						[32mmargin-bottom: 0;[m[41m[m
[32m+[m					[32m}[m[41m[m
[32m+[m				[32m}[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m			[32m&.style1 {[m[41m[m
[32m+[m				[32m> .image:before {[m[41m[m
[32m+[m					[32mbackground-color: _palette(accent1);[m[41m[m
[32m+[m				[32m}[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m			[32m&.style2 {[m[41m[m
[32m+[m				[32m> .image:before {[m[41m[m
[32m+[m					[32mbackground-color: _palette(accent2);[m[41m[m
[32m+[m				[32m}[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m			[32m&.style3 {[m[41m[m
[32m+[m				[32m> .image:before {[m[41m[m
[32m+[m					[32mbackground-color: _palette(accent3);[m[41m[m
[32m+[m				[32m}[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m			[32m&.style4 {[m[41m[m
[32m+[m				[32m> .image:before {[m[41m[m
[32m+[m					[32mbackground-color: _palette(accent4);[m[41m[m
[32m+[m				[32m}[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m			[32m&.style5 {[m[41m[m
[32m+[m				[32m> .image:before {[m[41m[m
[32m+[m					[32mbackground-color: _palette(accent5);[m[41m[m
[32m+[m				[32m}[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m			[32m&.style6 {[m[41m[m
[32m+[m				[32m> .image:before {[m[41m[m
[32m+[m					[32mbackground-color: _palette(accent6);[m[41m[m
[32m+[m				[32m}[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m			[32mbody:not(.is-touch) & {[m[41m[m
[32m+[m				[32m&:hover {[m[41m[m
[32m+[m					[32m> .image {[m[41m[m
[32m+[m						[32m@include vendor('transform', 'scale(1.1)');[m[41m[m
[32m+[m[41m[m
[32m+[m						[32m&:before {[m[41m[m
[32m+[m							[32mbackground-color: _palette(bg-accent);[m[41m[m
[32m+[m							[32mopacity: 0.35;[m[41m[m
[32m+[m						[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m						[32m&:after {[m[41m[m
[32m+[m							[32mopacity: 0;[m[41m[m
[32m+[m						[32m}[m[41m[m
[32m+[m					[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m					[32m.content {[m[41m[m
[32m+[m						[32mmax-height: 15em;[m[41m[m
[32m+[m						[32mopacity: 1;[m[41m[m
[32m+[m					[32m}[m[41m[m
[32m+[m				[32m}[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m* + & {[m[41m[m
[32m+[m			[32mmargin-top: _size(element-margin);[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32mbody.is-preload & {[m[41m[m
[32m+[m			[32marticle {[m[41m[m
[32m+[m				[32m@include vendor('transform', 'scale(0.9)');[m[41m[m
[32m+[m				[32mopacity: 0;[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32mbody.is-touch & {[m[41m[m
[32m+[m			[32marticle {[m[41m[m
[32m+[m				[32m.content {[m[41m[m
[32m+[m					[32mmax-height: 15em;[m[41m[m
[32m+[m					[32mopacity: 1;[m[41m[m
[32m+[m				[32m}[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m@include breakpoint('<=large') {[m[41m[m
[32m+[m			[32m$gutter: _size(gutter) * 0.5;[m[41m[m
[32m+[m[41m[m
[32m+[m			[32mmargin: ($gutter * -1) 0 0 ($gutter * -1);[m[41m[m
[32m+[m[41m[m
[32m+[m			[32marticle {[m[41m[m
[32m+[m				[32mwidth: calc(#{(100% / 3)} - #{$gutter * 1});[m[41m[m
[32m+[m				[32mmargin: $gutter 0 0 $gutter;[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m@include breakpoint('<=medium') {[m[41m[m
[32m+[m			[32m$gutter: _size(gutter);[m[41m[m
[32m+[m[41m[m
[32m+[m			[32mmargin: ($gutter * -1) 0 0 ($gutter * -1);[m[41m[m
[32m+[m[41m[m
[32m+[m			[32marticle {[m[41m[m
[32m+[m				[32mwidth: calc(#{(100% / 2)} - #{$gutter * 1});[m[41m[m
[32m+[m				[32mmargin: $gutter 0 0 $gutter;[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m@include breakpoint('<=small') {[m[41m[m
[32m+[m			[32m$gutter: _size(gutter) * 0.5;[m[41m[m
[32m+[m[41m[m
[32m+[m			[32mmargin: ($gutter * -1) 0 0 ($gutter * -1);[m[41m[m
[32m+[m[41m[m
[32m+[m			[32marticle {[m[41m[m
[32m+[m				[32mwidth: calc(#{(100% / 2)} - #{$gutter * 1});[m[41m[m
[32m+[m				[32mmargin: $gutter 0 0 $gutter;[m[41m[m
[32m+[m[41m[m
[32m+[m				[32m&:hover {[m[41m[m
[32m+[m					[32m> .image {[m[41m[m
[32m+[m						[32m@include vendor('transform', 'scale(1.0)');[m[41m[m
[32m+[m					[32m}[m[41m[m
[32m+[m				[32m}[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m@include breakpoint('<=xsmall') {[m[41m[m
[32m+[m			[32m$gutter: _size(gutter) * 0.5;[m[41m[m
[32m+[m[41m[m
[32m+[m			[32mmargin: 0;[m[41m[m
[32m+[m[41m[m
[32m+[m			[32marticle {[m[41m[m
[32m+[m				[32mwidth: 100%;[m[41m[m
[32m+[m				[32mmargin: $gutter 0 0 0;[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m	[32m}[m[41m[m
[32m+[m[41m[m
[1mdiff --git a/app/assets/stylesheets/layout/_footer.scss b/app/assets/stylesheets/layout/_footer.scss[m
[1mnew file mode 100644[m
[1mindex 0000000..2ca3fa9[m
[1m--- /dev/null[m
[1m+++ b/app/assets/stylesheets/layout/_footer.scss[m
[36m@@ -0,0 +1,139 @@[m
[32m+[m[32m///[m[41m[m
[32m+[m[32m/// Phantom by HTML5 UP[m[41m[m
[32m+[m[32m/// html5up.net | @ajlkn[m[41m[m
[32m+[m[32m/// Free for personal and commercial use under the CCA 3.0 license (html5up.net/license)[m[41m[m
[32m+[m[32m///[m[41m[m
[32m+[m[41m[m
[32m+[m[32m/* Footer */[m[41m[m
[32m+[m[41m[m
[32m+[m	[32m#footer {[m[41m[m
[32m+[m		[32m$gutter: _size(gutter);[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m@include padding(2em, 0em, (0, 0, 3em, 0));[m[41m[m
[32m+[m		[32mbackground-color: _palette(bg-alt);[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m> .inner {[m[41m[m
[32m+[m			[32m@include vendor('display', 'flex');[m[41m[m
[32m+[m			[32m@include vendor('flex-wrap', 'wrap');[m[41m[m
[32m+[m			[32m@include vendor('flex-direction', 'row');[m[41m[m
[32m+[m[41m[m
[32m+[m			[32m> * > :last-child {[m[41m[m
[32m+[m				[32mmargin-bottom: 0;[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m			[32msection:nth-child(1) {[m[41m[m
[32m+[m				[32mwidth: calc(66% - #{$gutter});[m[41m[m
[32m+[m				[32mmargin-right: $gutter;[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m			[32msection:nth-child(2) {[m[41m[m
[32m+[m				[32mwidth: calc(33% - #{$gutter});[m[41m[m
[32m+[m				[32mmargin-left: $gutter;[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m			[32m.copyright {[m[41m[m
[32m+[m				[32mwidth: 100%;[m[41m[m
[32m+[m				[32mpadding: 0;[m[41m[m
[32m+[m				[32mmargin-top: 5em;[m[41m[m
[32m+[m				[32mlist-style: none;[m[41m[m
[32m+[m				[32mfont-size: 0.8em;[m[41m[m
[32m+[m				[32mcolor: transparentize(_palette(fg), 0.5);[m[41m[m
[32m+[m[41m[m
[32m+[m				[32ma {[m[41m[m
[32m+[m					[32mcolor: inherit;[m[41m[m
[32m+[m				[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m				[32mli {[m[41m[m
[32m+[m					[32mdisplay: inline-block;[m[41m[m
[32m+[m					[32mborder-left: solid 1px transparentize(_palette(fg), 0.85);[m[41m[m
[32m+[m					[32mline-height: 1;[m[41m[m
[32m+[m					[32mpadding: 0 0 0 1em;[m[41m[m
[32m+[m					[32mmargin: 0 0 0 1em;[m[41m[m
[32m+[m[41m[m
[32m+[m					[32m&:first-child {[m[41m[m
[32m+[m						[32mborder-left: 0;[m[41m[m
[32m+[m						[32mpadding-left: 0;[m[41m[m
[32m+[m						[32mmargin-left: 0;[m[41m[m
[32m+[m					[32m}[m[41m[m
[32m+[m				[32m}[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m@include breakpoint('<=large') {[m[41m[m
[32m+[m			[32m$gutter: _size(gutter) * 0.5;[m[41m[m
[32m+[m[41m[m
[32m+[m			[32m@include padding(5em, 0);[m[41m[m
[32m+[m[41m[m
[32m+[m			[32m> .inner {[m[41m[m
[32m+[m				[32msection:nth-child(1) {[m[41m[m
[32m+[m					[32mwidth: calc(66% - #{$gutter});[m[41m[m
[32m+[m					[32mmargin-right: $gutter;[m[41m[m
[32m+[m				[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m				[32msection:nth-child(2) {[m[41m[m
[32m+[m					[32mwidth: calc(33% - #{$gutter});[m[41m[m
[32m+[m					[32mmargin-left: $gutter;[m[41m[m
[32m+[m				[32m}[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m@include breakpoint('<=medium') {[m[41m[m
[32m+[m			[32m$gutter: _size(gutter);[m[41m[m
[32m+[m[41m[m
[32m+[m			[32m> .inner {[m[41m[m
[32m+[m				[32msection:nth-child(1) {[m[41m[m
[32m+[m					[32mwidth: 66%;[m[41m[m
[32m+[m					[32mmargin-right: 0;[m[41m[m
[32m+[m				[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m				[32msection:nth-child(2) {[m[41m[m
[32m+[m					[32mwidth: calc(33% - #{$gutter});[m[41m[m
[32m+[m					[32mmargin-left: $gutter;[m[41m[m
[32m+[m				[32m}[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m@include breakpoint('<=small') {[m[41m[m
[32m+[m			[32m@include padding(3em, 0);[m[41m[m
[32m+[m[41m[m
[32m+[m			[32m> .inner {[m[41m[m
[32m+[m				[32m@include vendor('flex-direction', 'column');[m[41m[m
[32m+[m[41m[m
[32m+[m				[32msection:nth-child(1) {[m[41m[m
[32m+[m					[32mwidth: 100%;[m[41m[m
[32m+[m					[32mmargin-right: 0;[m[41m[m
[32m+[m					[32mmargin: 3em 0 0 0;[m[41m[m
[32m+[m				[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m				[32msection:nth-child(2) {[m[41m[m
[32m+[m					[32m@include vendor('order', '-1');[m[41m[m
[32m+[m					[32mwidth: 100%;[m[41m[m
[32m+[m					[32mmargin-left: 0;[m[41m[m
[32m+[m				[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m				[32m.copyright {[m[41m[m
[32m+[m					[32mmargin-top: 3em;[m[41m[m
[32m+[m				[32m}[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m@include breakpoint('<=xsmall') {[m[41m[m
[32m+[m			[32m> .inner {[m[41m[m
[32m+[m				[32m.copyright {[m[41m[m
[32m+[m					[32mmargin-top: 3em;[m[41m[m
[32m+[m[41m[m
[32m+[m					[32mli {[m[41m[m
[32m+[m						[32mborder-left: 0;[m[41m[m
[32m+[m						[32mpadding-left: 0;[m[41m[m
[32m+[m						[32mmargin: 0.75em 0 0 0;[m[41m[m
[32m+[m						[32mdisplay: block;[m[41m[m
[32m+[m						[32mline-height: inherit;[m[41m[m
[32m+[m[41m[m
[32m+[m						[32m&:first-child {[m[41m[m
[32m+[m							[32mmargin-top: 0;[m[41m[m
[32m+[m						[32m}[m[41m[m
[32m+[m					[32m}[m[41m[m
[32m+[m				[32m}[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m	[32m}[m
\ No newline at end of file[m
[1mdiff --git a/app/assets/stylesheets/layout/_header.scss b/app/assets/stylesheets/layout/_header.scss[m
[1mnew file mode 100644[m
[1mindex 0000000..47ea10c[m
[1m--- /dev/null[m
[1m+++ b/app/assets/stylesheets/layout/_header.scss[m
[36m@@ -0,0 +1,136 @@[m
[32m+[m[32m///[m[41m[m
[32m+[m[32m/// Phantom by HTML5 UP[m[41m[m
[32m+[m[32m/// html5up.net | @ajlkn[m[41m[m
[32m+[m[32m/// Free for personal and commercial use under the CCA 3.0 license (html5up.net/license)[m[41m[m
[32m+[m[32m///[m[41m[m
[32m+[m[41m[m
[32m+[m[32m/* Header */[m[41m[m
[32m+[m[41m[m
[32m+[m	[32m#header {[m[41m[m
[32m+[m		[32m@include padding(5em, 0, (3em, 0, -5em, 0));[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m.logo {[m[41m[m
[32m+[m			[32mdisplay: block;[m[41m[m
[32m+[m			[32mborder-bottom: 0;[m[41m[m
[32m+[m			[32mcolor: inherit;[m[41m[m
[32m+[m			[32mfont-weight: _font(weight-bold);[m[41m[m
[32m+[m			[32mletter-spacing: _font(letter-spacing);[m[41m[m
[32m+[m			[32mmargin: 0 0 (_size(element-margin) * 1.25) 0;[m[41m[m
[32m+[m			[32mtext-decoration: none;[m[41m[m
[32m+[m			[32mtext-transform: uppercase;[m[41m[m
[32m+[m			[32mdisplay: inline-block;[m[41m[m
[32m+[m[41m[m
[32m+[m			[32m> * {[m[41m[m
[32m+[m				[32mdisplay: inline-block;[m[41m[m
[32m+[m				[32mvertical-align: middle;[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m			[32m.symbol {[m[41m[m
[32m+[m				[32mmargin-right: 0.65em;[m[41m[m
[32m+[m[41m[m
[32m+[m				[32mimg {[m[41m[m
[32m+[m					[32mdisplay: block;[m[41m[m
[32m+[m					[32mwidth: 2em;[m[41m[m
[32m+[m					[32mheight: 2em;[m[41m[m
[32m+[m				[32m}[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32mnav {[m[41m[m
[32m+[m			[32mposition: fixed;[m[41m[m
[32m+[m			[32mright: 2em;[m[41m[m
[32m+[m			[32mtop: 2em;[m[41m[m
[32m+[m			[32mz-index: _misc(z-index-base);[m[41m[m
[32m+[m[41m[m
[32m+[m			[32mul {[m[41m[m
[32m+[m				[32m@include vendor('display', 'flex');[m[41m[m
[32m+[m				[32m@include vendor('align-items', 'center');[m[41m[m
[32m+[m				[32mlist-style: none;[m[41m[m
[32m+[m				[32mmargin: 0;[m[41m[m
[32m+[m				[32mpadding: 0;[m[41m[m
[32m+[m[41m[m
[32m+[m				[32mli {[m[41m[m
[32m+[m					[32mdisplay: block;[m[41m[m
[32m+[m					[32mpadding: 0;[m[41m[m
[32m+[m[41m[m
[32m+[m					[32ma {[m[41m[m
[32m+[m						[32mdisplay: block;[m[41m[m
[32m+[m						[32mposition: relative;[m[41m[m
[32m+[m						[32mheight: 3em;[m[41m[m
[32m+[m						[32mline-height: 3em;[m[41m[m
[32m+[m						[32mpadding: 0 1.5em;[m[41m[m
[32m+[m						[32mbackground-color: transparentize(_palette(bg), 0.5);[m[41m[m
[32m+[m						[32mborder-radius: _size(border-radius);[m[41m[m
[32m+[m						[32mborder: 0;[m[41m[m
[32m+[m						[32mfont-size: 0.8em;[m[41m[m
[32m+[m						[32mfont-weight: _font(weight-bold);[m[41m[m
[32m+[m						[32mletter-spacing: _font(letter-spacing);[m[41m[m
[32m+[m						[32mtext-transform: uppercase;[m[41m[m
[32m+[m					[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m					[32ma[href="#menu"] {[m[41m[m
[32m+[m						[32m-webkit-tap-highlight-color: transparent;[m[41m[m
[32m+[m						[32mwidth: 4em;[m[41m[m
[32m+[m						[32mtext-indent: 4em;[m[41m[m
[32m+[m						[32mfont-size: 1em;[m[41m[m
[32m+[m						[32moverflow: hidden;[m[41m[m
[32m+[m						[32mpadding: 0;[m[41m[m
[32m+[m						[32mwhite-space: nowrap;[m[41m[m
[32m+[m[41m[m
[32m+[m						[32m&:before, &:after {[m[41m[m
[32m+[m							[32m@include vendor('transition', 'opacity #{_duration(transition)} ease');[m[41m[m
[32m+[m							[32mcontent: '';[m[41m[m
[32m+[m							[32mdisplay: block;[m[41m[m
[32m+[m							[32mposition: absolute;[m[41m[m
[32m+[m							[32mtop: 0;[m[41m[m
[32m+[m							[32mleft: 0;[m[41m[m
[32m+[m							[32mwidth: 100%;[m[41m[m
[32m+[m							[32mheight: 100%;[m[41m[m
[32m+[m							[32mbackground-position: center;[m[41m[m
[32m+[m							[32mbackground-repeat: no-repeat;[m[41m[m
[32m+[m							[32mbackground-size: 2em 2em;[m[41m[m
[32m+[m						[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m						[32m&:before {[m[41m[m
[32m+[m							[32mbackground-image: svg-url('<svg xmlns="http://www.w3.org/2000/svg" width="100" height="100" viewBox="0 0 100 100" preserveAspectRatio="none"><style>line { stroke-width: 8px; stroke: #{_palette(accent1)}; }</style><line x1="0" y1="25" x2="100" y2="25" /><line x1="0" y1="50" x2="100" y2="50" /><line x1="0" y1="75" x2="100" y2="75" /></svg>');[m[41m[m
[32m+[m							[32mopacity: 0;[m[41m[m
[32m+[m						[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m						[32m&:after {[m[41m[m
[32m+[m							[32mbackground-image: svg-url('<svg xmlns="http://www.w3.org/2000/svg" width="100" height="100" viewBox="0 0 100 100" preserveAspectRatio="none"><style>line { stroke-width: 8px; stroke: #{_palette(fg)}; }</style><line x1="0" y1="25" x2="100" y2="25" /><line x1="0" y1="50" x2="100" y2="50" /><line x1="0" y1="75" x2="100" y2="75" /></svg>');[m[41m[m
[32m+[m							[32mopacity: 1;[m[41m[m
[32m+[m						[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m						[32m&:hover {[m[41m[m
[32m+[m							[32m&:before {[m[41m[m
[32m+[m								[32mopacity: 1;[m[41m[m
[32m+[m							[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m							[32m&:after {[m[41m[m
[32m+[m								[32mopacity: 0;[m[41m[m
[32m+[m							[32m}[m[41m[m
[32m+[m						[32m}[m[41m[m
[32m+[m					[32m}[m[41m[m
[32m+[m				[32m}[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m@include breakpoint('<=small') {[m[41m[m
[32m+[m			[32m@include padding(3em, 0, (1em, 0, -3em, 0));[m[41m[m
[32m+[m[41m[m
[32m+[m			[32mnav {[m[41m[m
[32m+[m				[32mright: 0.5em;[m[41m[m
[32m+[m				[32mtop: 0.5em;[m[41m[m
[32m+[m[41m[m
[32m+[m				[32mul {[m[41m[m
[32m+[m					[32mli {[m[41m[m
[32m+[m						[32ma[href="#menu"] {[m[41m[m
[32m+[m							[32m&:before, &:after {[m[41m[m
[32m+[m								[32mbackground-size: 1.5em 1.5em;[m[41m[m
[32m+[m							[32m}[m[41m[m
[32m+[m						[32m}[m[41m[m
[32m+[m					[32m}[m[41m[m
[32m+[m				[32m}[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m	[32m}[m
\ No newline at end of file[m
[1mdiff --git a/app/assets/stylesheets/layout/_main.scss b/app/assets/stylesheets/layout/_main.scss[m
[1mnew file mode 100644[m
[1mindex 0000000..fd9df62[m
[1m--- /dev/null[m
[1m+++ b/app/assets/stylesheets/layout/_main.scss[m
[36m@@ -0,0 +1,15 @@[m
[32m+[m[32m///[m[41m[m
[32m+[m[32m/// Phantom by HTML5 UP[m[41m[m
[32m+[m[32m/// html5up.net | @ajlkn[m[41m[m
[32m+[m[32m/// Free for personal and commercial use under the CCA 3.0 license (html5up.net/license)[m[41m[m
[32m+[m[32m///[m[41m[m
[32m+[m[41m[m
[32m+[m[32m/* Main */[m[41m[m
[32m+[m[41m[m
[32m+[m	[32m#main {[m[41m[m
[32m+[m		[32m@include padding(5em, 0, (-5em, 0, 3em, 0));[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m@include breakpoint('<=small') {[m[41m[m
[32m+[m			[32m@include padding(3em, 0, (-3em, 0, 3em, 0));[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m	[32m}[m
\ No newline at end of file[m
[1mdiff --git a/app/assets/stylesheets/layout/_menu.scss b/app/assets/stylesheets/layout/_menu.scss[m
[1mnew file mode 100644[m
[1mindex 0000000..91d5bd4[m
[1m--- /dev/null[m
[1m+++ b/app/assets/stylesheets/layout/_menu.scss[m
[36m@@ -0,0 +1,164 @@[m
[32m+[m[32m///[m[41m[m
[32m+[m[32m/// Phantom by HTML5 UP[m[41m[m
[32m+[m[32m/// html5up.net | @ajlkn[m[41m[m
[32m+[m[32m/// Free for personal and commercial use under the CCA 3.0 license (html5up.net/license)[m[41m[m
[32m+[m[32m///[m[41m[m
[32m+[m[41m[m
[32m+[m[32m/* Menu */[m[41m[m
[32m+[m[41m[m
[32m+[m	[32m#wrapper {[m[41m[m
[32m+[m		[32m@include vendor('transition', 'opacity #{_duration(menu)} ease');[m[41m[m
[32m+[m		[32mopacity: 1;[m[41m[m
[32m+[m	[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m	[32m#menu {[m[41m[m
[32m+[m		[32m@include vendor('transform', 'translateX(#{_size(menu)})');[m[41m[m
[32m+[m		[32m@include vendor('transition', ('transform #{_duration(menu)} ease', 'visibility #{_duration(menu)}'));[m[41m[m
[32m+[m		[32mposition: fixed;[m[41m[m
[32m+[m		[32mtop: 0;[m[41m[m
[32m+[m		[32mright: 0;[m[41m[m
[32m+[m		[32mwidth: _size(menu);[m[41m[m
[32m+[m		[32mmax-width: 80%;[m[41m[m
[32m+[m		[32mheight: 100%;[m[41m[m
[32m+[m		[32m-webkit-overflow-scrolling: touch;[m[41m[m
[32m+[m		[32mbackground: _palette(fg);[m[41m[m
[32m+[m		[32mcolor: _palette(bg);[m[41m[m
[32m+[m		[32mcursor: default;[m[41m[m
[32m+[m		[32mvisibility: hidden;[m[41m[m
[32m+[m		[32mz-index: _misc(z-index-base) + 2;[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m> .inner {[m[41m[m
[32m+[m			[32m@include vendor('transition', 'opacity #{_duration(menu)} ease');[m[41m[m
[32m+[m			[32m-webkit-overflow-scrolling: touch;[m[41m[m
[32m+[m			[32mposition: absolute;[m[41m[m
[32m+[m			[32mtop: 0;[m[41m[m
[32m+[m			[32mleft: 0;[m[41m[m
[32m+[m			[32mwidth: 100%;[m[41m[m
[32m+[m			[32mheight: 100%;[m[41m[m
[32m+[m			[32mpadding: 2.75em;[m[41m[m
[32m+[m			[32mopacity: 0;[m[41m[m
[32m+[m			[32moverflow-y: auto;[m[41m[m
[32m+[m[41m[m
[32m+[m			[32m> ul {[m[41m[m
[32m+[m				[32mlist-style: none;[m[41m[m
[32m+[m				[32mmargin: 0 0 (_size(element-margin) * 0.5) 0;[m[41m[m
[32m+[m				[32mpadding: 0;[m[41m[m
[32m+[m[41m[m
[32m+[m				[32m> li {[m[41m[m
[32m+[m					[32mpadding: 0;[m[41m[m
[32m+[m					[32mborder-top: solid 1px transparentize(_palette(bg), 0.85);[m[41m[m
[32m+[m[41m[m
[32m+[m					[32ma {[m[41m[m
[32m+[m						[32mdisplay: block;[m[41m[m
[32m+[m						[32mpadding: 1em 0;[m[41m[m
[32m+[m						[32mline-height: 1.5;[m[41m[m
[32m+[m						[32mborder: 0;[m[41m[m
[32m+[m						[32mcolor: inherit;[m[41m[m
[32m+[m					[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m					[32m&:first-child {[m[41m[m
[32m+[m						[32mborder-top: 0;[m[41m[m
[32m+[m						[32mmargin-top: -1em;[m[41m[m
[32m+[m					[32m}[m[41m[m
[32m+[m				[32m}[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m> .close {[m[41m[m
[32m+[m			[32m@include vendor('transition', ([m[41m[m
[32m+[m				[32m'opacity #{_duration(menu)} ease',[m[41m[m
[32m+[m				[32m'transform #{_duration(menu)} ease'[m[41m[m
[32m+[m			[32m));[m[41m[m
[32m+[m			[32m@include vendor('transform', 'scale(0.25) rotate(180deg)');[m[41m[m
[32m+[m			[32m-webkit-tap-highlight-color: transparent;[m[41m[m
[32m+[m			[32mdisplay: block;[m[41m[m
[32m+[m			[32mposition: absolute;[m[41m[m
[32m+[m			[32mtop: 2em;[m[41m[m
[32m+[m			[32mleft: -6em;[m[41m[m
[32m+[m			[32mwidth: 6em;[m[41m[m
[32m+[m			[32mtext-indent: 6em;[m[41m[m
[32m+[m			[32mheight: 3em;[m[41m[m
[32m+[m			[32mborder: 0;[m[41m[m
[32m+[m			[32mfont-size: 1em;[m[41m[m
[32m+[m			[32mopacity: 0;[m[41m[m
[32m+[m			[32moverflow: hidden;[m[41m[m
[32m+[m			[32mpadding: 0;[m[41m[m
[32m+[m			[32mwhite-space: nowrap;[m[41m[m
[32m+[m[41m[m
[32m+[m			[32m&:before, &:after {[m[41m[m
[32m+[m				[32m@include vendor('transition', 'opacity #{_duration(transition)} ease');[m[41m[m
[32m+[m				[32mcontent: '';[m[41m[m
[32m+[m				[32mdisplay: block;[m[41m[m
[32m+[m				[32mposition: absolute;[m[41m[m
[32m+[m				[32mtop: 0;[m[41m[m
[32m+[m				[32mleft: 0;[m[41m[m
[32m+[m				[32mwidth: 100%;[m[41m[m
[32m+[m				[32mheight: 100%;[m[41m[m
[32m+[m				[32mbackground-position: center;[m[41m[m
[32m+[m				[32mbackground-repeat: no-repeat;[m[41m[m
[32m+[m				[32mbackground-size: 2em 2em;[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m			[32m&:before {[m[41m[m
[32m+[m				[32mbackground-image: svg-url('<svg xmlns="http://www.w3.org/2000/svg" width="100" height="100" viewBox="0 0 100 100" preserveAspectRatio="none"><style>line { stroke-width: 8px; stroke: #{_palette(accent1)}; }</style><line x1="15" y1="15" x2="85" y2="85" /><line x1="85" y1="15" x2="15" y2="85" /></svg>');[m[41m[m
[32m+[m				[32mopacity: 0;[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m			[32m&:after {[m[41m[m
[32m+[m				[32mbackground-image: svg-url('<svg xmlns="http://www.w3.org/2000/svg" width="100" height="100" viewBox="0 0 100 100" preserveAspectRatio="none"><style>line { stroke-width: 8px; stroke: #{_palette(fg)}; }</style><line x1="15" y1="15" x2="85" y2="85" /><line x1="85" y1="15" x2="15" y2="85" /></svg>');[m[41m[m
[32m+[m				[32mopacity: 1;[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m			[32m&:hover {[m[41m[m
[32m+[m				[32m&:before {[m[41m[m
[32m+[m					[32mopacity: 1;[m[41m[m
[32m+[m				[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m				[32m&:after {[m[41m[m
[32m+[m					[32mopacity: 0;[m[41m[m
[32m+[m				[32m}[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m@include breakpoint('<=small') {[m[41m[m
[32m+[m			[32m@include vendor('transform', 'translateX(#{_size(menu) * 0.75})');[m[41m[m
[32m+[m			[32mwidth: (_size(menu) * 0.75);[m[41m[m
[32m+[m[41m[m
[32m+[m			[32m> .inner {[m[41m[m
[32m+[m				[32mpadding: 2.75em 1.5em;[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m			[32m> .close {[m[41m[m
[32m+[m				[32mtop: 0.5em;[m[41m[m
[32m+[m				[32mleft: -4.25em;[m[41m[m
[32m+[m				[32mwidth: 4.25em;[m[41m[m
[32m+[m				[32mtext-indent: 4.25em;[m[41m[m
[32m+[m[41m[m
[32m+[m				[32m&:before, &:after {[m[41m[m
[32m+[m					[32mbackground-size: 1.5em 1.5em;[m[41m[m
[32m+[m				[32m}[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m	[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m	[32mbody.is-menu-visible {[m[41m[m
[32m+[m		[32m#wrapper {[m[41m[m
[32m+[m			[32m@include vendor('pointer-events', 'none');[m[41m[m
[32m+[m			[32mcursor: default;[m[41m[m
[32m+[m			[32mopacity: 0.25;[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m#menu {[m[41m[m
[32m+[m			[32m@include vendor('transform', 'translateX(0)');[m[41m[m
[32m+[m			[32mvisibility: visible;[m[41m[m
[32m+[m[41m[m
[32m+[m			[32m> * {[m[41m[m
[32m+[m				[32mopacity: 1;[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m			[32m.close {[m[41m[m
[32m+[m				[32m@include vendor('transform', 'scale(1.0) rotate(0deg)');[m[41m[m
[32m+[m				[32mopacity: 1;[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m	[32m}[m
\ No newline at end of file[m
[1mdiff --git a/app/assets/stylesheets/layout/_wrapper.scss b/app/assets/stylesheets/layout/_wrapper.scss[m
[1mnew file mode 100644[m
[1mindex 0000000..926a94f[m
[1m--- /dev/null[m
[1m+++ b/app/assets/stylesheets/layout/_wrapper.scss[m
[36m@@ -0,0 +1,26 @@[m
[32m+[m[32m///[m[41m[m
[32m+[m[32m/// Phantom by HTML5 UP[m[41m[m
[32m+[m[32m/// html5up.net | @ajlkn[m[41m[m
[32m+[m[32m/// Free for personal and commercial use under the CCA 3.0 license (html5up.net/license)[m[41m[m
[32m+[m[32m///[m[41m[m
[32m+[m[41m[m
[32m+[m[32m/* Wrapper */[m[41m[m
[32m+[m[41m[m
[32m+[m	[32m#wrapper {[m[41m[m
[32m+[m		[32m> * {[m[41m[m
[32m+[m			[32m> .inner {[m[41m[m
[32m+[m				[32m$gutter: _size(gutter);[m[41m[m
[32m+[m[41m[m
[32m+[m				[32mwidth: 100%;[m[41m[m
[32m+[m				[32mmax-width: _size(inner);[m[41m[m
[32m+[m				[32mmargin: 0 auto;[m[41m[m
[32m+[m				[32mpadding: 0 $gutter;[m[41m[m
[32m+[m[41m[m
[32m+[m				[32m@include breakpoint('<=small') {[m[41m[m
[32m+[m					[32m$gutter: _size(gutter) * 0.5;[m[41m[m
[32m+[m[41m[m
[32m+[m					[32mpadding: 0 $gutter;[m[41m[m
[32m+[m				[32m}[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m	[32m}[m
\ No newline at end of file[m
[1mdiff --git a/app/assets/stylesheets/libs/_breakpoints.scss b/app/assets/stylesheets/libs/_breakpoints.scss[m
[1mnew file mode 100644[m
[1mindex 0000000..c5301d8[m
[1m--- /dev/null[m
[1m+++ b/app/assets/stylesheets/libs/_breakpoints.scss[m
[36m@@ -0,0 +1,223 @@[m
[32m+[m[32m// breakpoints.scss v1.0 | @ajlkn | MIT licensed */[m
[32m+[m
[32m+[m[32m// Vars.[m
[32m+[m
[32m+[m	[32m/// Breakpoints.[m
[32m+[m	[32m/// @var {list}[m
[32m+[m	[32m$breakpoints: () !global;[m
[32m+[m
[32m+[m[32m// Mixins.[m
[32m+[m
[32m+[m	[32m/// Sets breakpoints.[m
[32m+[m	[32m/// @param {map} $x Breakpoints.[m
[32m+[m	[32m@mixin breakpoints($x: ()) {[m
[32m+[m		[32m$breakpoints: $x !global;[m
[32m+[m	[32m}[m
[32m+[m
[32m+[m	[32m/// Wraps @content in a @media block targeting a specific orientation.[m
[32m+[m	[32m/// @param {string} $orientation Orientation.[m
[32m+[m	[32m@mixin orientation($orientation) {[m
[32m+[m		[32m@media screen and (orientation: #{$orientation}) {[m
[32m+[m			[32m@content;[m
[32m+[m		[32m}[m
[32m+[m	[32m}[m
[32m+[m
[32m+[m	[32m/// Wraps @content in a @media block using a given query.[m
[32m+[m	[32m/// @param {string} $query Query.[m
[32m+[m	[32m@mixin breakpoint($query: null) {[m
[32m+[m
[32m+[m		[32m$breakpoint: null;[m
[32m+[m		[32m$op: null;[m
[32m+[m		[32m$media: null;[m
[32m+[m
[32m+[m		[32m// Determine operator, breakpoint.[m
[32m+[m
[32m+[m			[32m// Greater than or equal.[m
[32m+[m				[32m@if (str-slice($query, 0, 2) == '>=') {[m
[32m+[m
[32m+[m					[32m$op: 'gte';[m
[32m+[m					[32m$breakpoint: str-slice($query, 3);[m
[32m+[m
[32m+[m				[32m}[m
[32m+[m
[32m+[m			[32m// Less than or equal.[m
[32m+[m				[32m@elseif (str-slice($query, 0, 2) == '<=') {[m
[32m+[m
[32m+[m					[32m$op: 'lte';[m
[32m+[m					[32m$breakpoint: str-slice($query, 3);[m
[32m+[m
[32m+[m				[32m}[m
[32m+[m
[32m+[m			[32m// Greater than.[m
[32m+[m				[32m@elseif (str-slice($query, 0, 1) == '>') {[m
[32m+[m
[32m+[m					[32m$op: 'gt';[m
[32m+[m					[32m$breakpoint: str-slice($query, 2);[m
[32m+[m
[32m+[m				[32m}[m
[32m+[m
[32m+[m			[32m// Less than.[m
[32m+[m				[32m@elseif (str-slice($query, 0, 1) == '<') {[m
[32m+[m
[32m+[m					[32m$op: 'lt';[m
[32m+[m					[32m$breakpoint: str-slice($query, 2);[m
[32m+[m
[32m+[m				[32m}[m
[32m+[m
[32m+[m			[32m// Not.[m
[32m+[m				[32m@elseif (str-slice($query, 0, 1) == '!') {[m
[32m+[m
[32m+[m					[32m$op: 'not';[m
[32m+[m					[32m$breakpoint: str-slice($query, 2);[m
[32m+[m
[32m+[m				[32m}[m
[32m+[m
[32m+[m			[32m// Equal.[m
[32m+[m				[32m@else {[m
[32m+[m
[32m+[m					[32m$op: 'eq';[m
[32m+[m					[32m$breakpoint: $query;[m
[32m+[m
[32m+[m				[32m}[m
[32m+[m
[32m+[m		[32m// Build media.[m
[32m+[m			[32m@if ($breakpoint and map-has-key($breakpoints, $breakpoint)) {[m
[32m+[m
[32m+[m				[32m$a: map-get($breakpoints, $breakpoint);[m
[32m+[m
[32m+[m				[32m// Range.[m
[32m+[m					[32m@if (type-of($a) == 'list') {[m
[32m+[m
[32m+[m						[32m$x: nth($a, 1);[m
[32m+[m						[32m$y: nth($a, 2);[m
[32m+[m
[32m+[m						[32m// Max only.[m
[32m+[m							[32m@if ($x == null) {[m
[32m+[m
[32m+[m								[32m// Greater than or equal (>= 0 / anything)[m
[32m+[m									[32m@if ($op == 'gte') {[m
[32m+[m										[32m$media: 'screen';[m
[32m+[m									[32m}[m
[32m+[m
[32m+[m								[32m// Less than or equal (<= y)[m
[32m+[m									[32m@elseif ($op == 'lte') {[m
[32m+[m										[32m$media: 'screen and (max-width: ' + $y + ')';[m
[32m+[m									[32m}[m
[32m+[m
[32m+[m								[32m// Greater than (> y)[m
[32m+[m									[32m@elseif ($op == 'gt') {[m
[32m+[m										[32m$media: 'screen and (min-width: ' + ($y + 1) + ')';[m
[32m+[m									[32m}[m
[32m+[m
[32m+[m								[32m// Less than (< 0 / invalid)[m
[32m+[m									[32m@elseif ($op == 'lt') {[m
[32m+[m										[32m$media: 'screen and (max-width: -1px)';[m
[32m+[m									[32m}[m
[32m+[m
[32m+[m								[32m// Not (> y)[m
[32m+[m									[32m@elseif ($op == 'not') {[m
[32m+[m										[32m$media: 'screen and (min-width: ' + ($y + 1) + ')';[m
[32m+[m									[32m}[m
[32m+[m
[32m+[m								[32m// Equal (<= y)[m
[32m+[m									[32m@else {[m
[32m+[m										[32m$media: 'screen and (max-width: ' + $y + ')';[m
[32m+[m									[32m}[m
[32m+[m
[32m+[m							[32m}[m
[32m+[m
[32m+[m						[32m// Min only.[m
[32m+[m							[32m@else if ($y == null) {[m
[32m+[m
[32m+[m								[32m// Greater than or equal (>= x)[m
[32m+[m									[32m@if ($op == 'gte') {[m
[32m+[m										[32m$media: 'screen and (min-width: ' + $x + ')';[m
[32m+[m									[32m}[m
[32m+[m
[32m+[m								[32m// Less than or equal (<= inf / anything)[m
[32m+[m									[32m@elseif ($op == 'lte') {[m
[32m+[m										[32m$media: 'screen';[m
[32m+[m									[32m}[m
[32m+[m
[32m+[m								[32m// Greater than (> inf / invalid)[m
[32m+[m									[32m@elseif ($op == 'gt') {[m
[32m+[m										[32m$media: 'screen and (max-width: -1px)';[m
[32m+[m									[32m}[m
[32m+[m
[32m+[m								[32m// Less than (< x)[m
[32m+[m									[32m@elseif ($op == 'lt') {[m
[32m+[m										[32m$media: 'screen and (max-width: ' + ($x - 1) + ')';[m
[32m+[m									[32m}[m
[32m+[m
[32m+[m								[32m// Not (< x)[m
[32m+[m									[32m@elseif ($op == 'not') {[m
[32m+[m										[32m$media: 'screen and (max-width: ' + ($x - 1) + ')';[m
[32m+[m									[32m}[m
[32m+[m
[32m+[m								[32m// Equal (>= x)[m
[32m+[m									[32m@else {[m
[32m+[m										[32m$media: 'screen and (min-width: ' + $x + ')';[m
[32m+[m									[32m}[m
[32m+[m
[32m+[m							[32m}[m
[32m+[m
[32m+[m						[32m// Min and max.[m
[32m+[m							[32m@else {[m
[32m+[m
[32m+[m								[32m// Greater than or equal (>= x)[m
[32m+[m									[32m@if ($op == 'gte') {[m
[32m+[m										[32m$media: 'screen and (min-width: ' + $x + ')';[m
[32m+[m									[32m}[m
[32m+[m
[32m+[m								[32m// Less than or equal (<= y)[m
[32m+[m									[32m@elseif ($op == 'lte') {[m
[32m+[m										[32m$media: 'screen and (max-width: ' + $y + ')';[m
[32m+[m									[32m}[m
[32m+[m
[32m+[m								[32m// Greater than (> y)[m
[32m+[m									[32m@elseif ($op == 'gt') {[m
[32m+[m										[32m$media: 'screen and (min-width: ' + ($y + 1) + ')';[m
[32m+[m									[32m}[m
[32m+[m
[32m+[m								[32m// Less than (< x)[m
[32m+[m									[32m@elseif ($op == 'lt') {[m
[32m+[m										[32m$media: 'screen and (max-width: ' + ($x - 1) + ')';[m
[32m+[m									[32m}[m
[32m+[m
[32m+[m								[32m// Not (< x and > y)[m
[32m+[m									[32m@elseif ($op == 'not') {[m
[32m+[m										[32m$media: 'screen and (max-width: ' + ($x - 1) + '), screen and (min-width: ' + ($y + 1) + ')';[m
[32m+[m									[32m}[m
[32m+[m
[32m+[m								[32m// Equal (>= x and <= y)[m
[32m+[m									[32m@else {[m
[32m+[m										[32m$media: 'screen and (min-width: ' + $x + ') and (max-width: ' + $y + ')';[m
[32m+[m									[32m}[m
[32m+[m
[32m+[m							[32m}[m
[32m+[m
[32m+[m					[32m}[m
[32m+[m
[32m+[m				[32m// String.[m
[32m+[m					[32m@else {[m
[32m+[m
[32m+[m						[32m// Missing a media type? Prefix with "screen".[m
[32m+[m							[32m@if (str-slice($a, 0, 1) == '(') {[m
[32m+[m								[32m$media: 'screen and ' + $a;[m
[32m+[m							[32m}[m
[32m+[m
[32m+[m						[32m// Otherwise, use as-is.[m
[32m+[m							[32m@else {[m
[32m+[m								[32m$media: $a;[m
[32m+[m							[32m}[m
[32m+[m
[32m+[m					[32m}[m
[32m+[m
[32m+[m			[32m}[m
[32m+[m
[32m+[m		[32m// Output.[m
[32m+[m	[32m        @media #{$media} {[m
[32m+[m				[32m@content;[m
[32m+[m			[32m}[m
[32m+[m
[32m+[m	[32m}[m
\ No newline at end of file[m
[1mdiff --git a/app/assets/stylesheets/libs/_functions.scss b/app/assets/stylesheets/libs/_functions.scss[m
[1mnew file mode 100644[m
[1mindex 0000000..f563aab[m
[1m--- /dev/null[m
[1m+++ b/app/assets/stylesheets/libs/_functions.scss[m
[36m@@ -0,0 +1,90 @@[m
[32m+[m[32m/// Removes a specific item from a list.[m[41m[m
[32m+[m[32m/// @author Hugo Giraudel[m[41m[m
[32m+[m[32m/// @param {list} $list List.[m[41m[m
[32m+[m[32m/// @param {integer} $index Index.[m[41m[m
[32m+[m[32m/// @return {list} Updated list.[m[41m[m
[32m+[m[32m@function remove-nth($list, $index) {[m[41m[m
[32m+[m[41m[m
[32m+[m	[32m$result: null;[m[41m[m
[32m+[m[41m[m
[32m+[m	[32m@if type-of($index) != number {[m[41m[m
[32m+[m		[32m@warn "$index: #{quote($index)} is not a number for `remove-nth`.";[m[41m[m
[32m+[m	[32m}[m[41m[m
[32m+[m	[32m@else if $index == 0 {[m[41m[m
[32m+[m		[32m@warn "List index 0 must be a non-zero integer for `remove-nth`.";[m[41m[m
[32m+[m	[32m}[m[41m[m
[32m+[m	[32m@else if abs($index) > length($list) {[m[41m[m
[32m+[m		[32m@warn "List index is #{$index} but list is only #{length($list)} item long for `remove-nth`.";[m[41m[m
[32m+[m	[32m}[m[41m[m
[32m+[m	[32m@else {[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m$result: ();[m[41m[m
[32m+[m		[32m$index: if($index < 0, length($list) + $index + 1, $index);[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m@for $i from 1 through length($list) {[m[41m[m
[32m+[m[41m[m
[32m+[m			[32m@if $i != $index {[m[41m[m
[32m+[m				[32m$result: append($result, nth($list, $i));[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m	[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m	[32m@return $result;[m[41m[m
[32m+[m[41m[m
[32m+[m[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m[32m/// Gets a value from a map.[m[41m[m
[32m+[m[32m/// @author Hugo Giraudel[m[41m[m
[32m+[m[32m/// @param {map} $map Map.[m[41m[m
[32m+[m[32m/// @param {string} $keys Key(s).[m[41m[m
[32m+[m[32m/// @return {string} Value.[m[41m[m
[32m+[m[32m@function val($map, $keys...) {[m[41m[m
[32m+[m[41m[m
[32m+[m	[32m@if nth($keys, 1) == null {[m[41m[m
[32m+[m		[32m$keys: remove-nth($keys, 1);[m[41m[m
[32m+[m	[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m	[32m@each $key in $keys {[m[41m[m
[32m+[m		[32m$map: map-get($map, $key);[m[41m[m
[32m+[m	[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m	[32m@return $map;[m[41m[m
[32m+[m[41m[m
[32m+[m[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m[32m/// Gets a duration value.[m[41m[m
[32m+[m[32m/// @param {string} $keys Key(s).[m[41m[m
[32m+[m[32m/// @return {string} Value.[m[41m[m
[32m+[m[32m@function _duration($keys...) {[m[41m[m
[32m+[m	[32m@return val($duration, $keys...);[m[41m[m
[32m+[m[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m[32m/// Gets a font value.[m[41m[m
[32m+[m[32m/// @param {string} $keys Key(s).[m[41m[m
[32m+[m[32m/// @return {string} Value.[m[41m[m
[32m+[m[32m@function _font($keys...) {[m[41m[m
[32m+[m	[32m@return val($font, $keys...);[m[41m[m
[32m+[m[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m[32m/// Gets a misc value.[m[41m[m
[32m+[m[32m/// @param {string} $keys Key(s).[m[41m[m
[32m+[m[32m/// @return {string} Value.[m[41m[m
[32m+[m[32m@function _misc($keys...) {[m[41m[m
[32m+[m	[32m@return val($misc, $keys...);[m[41m[m
[32m+[m[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m[32m/// Gets a palette value.[m[41m[m
[32m+[m[32m/// @param {string} $keys Key(s).[m[41m[m
[32m+[m[32m/// @return {string} Value.[m[41m[m
[32m+[m[32m@function _palette($keys...) {[m[41m[m
[32m+[m	[32m@return val($palette, $keys...);[m[41m[m
[32m+[m[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m[32m/// Gets a size value.[m[41m[m
[32m+[m[32m/// @param {string} $keys Key(s).[m[41m[m
[32m+[m[32m/// @return {string} Value.[m[41m[m
[32m+[m[32m@function _size($keys...) {[m[41m[m
[32m+[m	[32m@return val($size, $keys...);[m[41m[m
[32m+[m[32m}[m
\ No newline at end of file[m
[1mdiff --git a/app/assets/stylesheets/libs/_html-grid.scss b/app/assets/stylesheets/libs/_html-grid.scss[m
[1mnew file mode 100644[m
[1mindex 0000000..7438a8c[m
[1m--- /dev/null[m
[1m+++ b/app/assets/stylesheets/libs/_html-grid.scss[m
[36m@@ -0,0 +1,149 @@[m
[32m+[m[32m// html-grid.scss v1.0 | @ajlkn | MIT licensed */[m[41m[m
[32m+[m[41m[m
[32m+[m[32m// Mixins.[m[41m[m
[32m+[m[41m[m
[32m+[m	[32m/// Initializes the current element as an HTML grid.[m[41m[m
[32m+[m	[32m/// @param {mixed} $gutters Gutters (either a single number to set both column/row gutters, or a list to set them individually).[m[41m[m
[32m+[m	[32m/// @param {mixed} $suffix Column class suffix (optional; either a single suffix or a list).[m[41m[m
[32m+[m	[32m@mixin html-grid($gutters: 1.5em, $suffix: '') {[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m// Initialize.[m[41m[m
[32m+[m			[32m$cols: 12;[m[41m[m
[32m+[m			[32m$multipliers: 0, 0.25, 0.5, 1, 1.50, 2.00;[m[41m[m
[32m+[m			[32m$unit: 100% / $cols;[m[41m[m
[32m+[m[41m[m
[32m+[m			[32m// Suffixes.[m[41m[m
[32m+[m				[32m$suffixes: null;[m[41m[m
[32m+[m[41m[m
[32m+[m				[32m@if (type-of($suffix) == 'list') {[m[41m[m
[32m+[m					[32m$suffixes: $suffix;[m[41m[m
[32m+[m				[32m}[m[41m[m
[32m+[m				[32m@else {[m[41m[m
[32m+[m					[32m$suffixes: ($suffix);[m[41m[m
[32m+[m				[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m			[32m// Gutters.[m[41m[m
[32m+[m				[32m$guttersCols: null;[m[41m[m
[32m+[m				[32m$guttersRows: null;[m[41m[m
[32m+[m[41m[m
[32m+[m				[32m@if (type-of($gutters) == 'list') {[m[41m[m
[32m+[m[41m[m
[32m+[m					[32m$guttersCols: nth($gutters, 1);[m[41m[m
[32m+[m					[32m$guttersRows: nth($gutters, 2);[m[41m[m
[32m+[m[41m[m
[32m+[m				[32m}[m[41m[m
[32m+[m				[32m@else {[m[41m[m
[32m+[m[41m[m
[32m+[m					[32m$guttersCols: $gutters;[m[41m[m
[32m+[m					[32m$guttersRows: 0;[m[41m[m
[32m+[m[41m[m
[32m+[m				[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m// Row.[m[41m[m
[32m+[m			[32mdisplay: flex;[m[41m[m
[32m+[m			[32mflex-wrap: wrap;[m[41m[m
[32m+[m			[32mbox-sizing: border-box;[m[41m[m
[32m+[m			[32malign-items: stretch;[m[41m[m
[32m+[m[41m[m
[32m+[m			[32m// Columns.[m[41m[m
[32m+[m				[32m> * {[m[41m[m
[32m+[m					[32mbox-sizing: border-box;[m[41m[m
[32m+[m				[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m			[32m// Gutters.[m[41m[m
[32m+[m				[32m&.gtr-uniform {[m[41m[m
[32m+[m					[32m> * {[m[41m[m
[32m+[m						[32m> :last-child {[m[41m[m
[32m+[m							[32mmargin-bottom: 0;[m[41m[m
[32m+[m						[32m}[m[41m[m
[32m+[m					[32m}[m[41m[m
[32m+[m				[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m			[32m// Alignment.[m[41m[m
[32m+[m				[32m&.aln-left {[m[41m[m
[32m+[m					[32mjustify-content: flex-start;[m[41m[m
[32m+[m				[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m				[32m&.aln-center {[m[41m[m
[32m+[m					[32mjustify-content: center;[m[41m[m
[32m+[m				[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m				[32m&.aln-right {[m[41m[m
[32m+[m					[32mjustify-content: flex-end;[m[41m[m
[32m+[m				[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m				[32m&.aln-top {[m[41m[m
[32m+[m					[32malign-items: flex-start;[m[41m[m
[32m+[m				[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m				[32m&.aln-middle {[m[41m[m
[32m+[m					[32malign-items: center;[m[41m[m
[32m+[m				[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m				[32m&.aln-bottom {[m[41m[m
[32m+[m					[32malign-items: flex-end;[m[41m[m
[32m+[m				[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m// Step through suffixes.[m[41m[m
[32m+[m			[32m@each $suffix in $suffixes {[m[41m[m
[32m+[m[41m[m
[32m+[m				[32m// Suffix.[m[41m[m
[32m+[m					[32m@if ($suffix != '') {[m[41m[m
[32m+[m						[32m$suffix: '-' + $suffix;[m[41m[m
[32m+[m					[32m}[m[41m[m
[32m+[m					[32m@else {[m[41m[m
[32m+[m						[32m$suffix: '';[m[41m[m
[32m+[m					[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m				[32m// Row.[m[41m[m
[32m+[m[41m[m
[32m+[m					[32m// Important.[m[41m[m
[32m+[m						[32m> .imp#{$suffix} {[m[41m[m
[32m+[m							[32morder: -1;[m[41m[m
[32m+[m						[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m					[32m// Columns, offsets.[m[41m[m
[32m+[m						[32m@for $i from 1 through $cols {[m[41m[m
[32m+[m							[32m> .col-#{$i}#{$suffix} {[m[41m[m
[32m+[m								[32mwidth: $unit * $i;[m[41m[m
[32m+[m							[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m							[32m> .off-#{$i}#{$suffix} {[m[41m[m
[32m+[m								[32mmargin-left: $unit * $i;[m[41m[m
[32m+[m							[32m}[m[41m[m
[32m+[m						[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m					[32m// Step through multipliers.[m[41m[m
[32m+[m						[32m@each $multiplier in $multipliers {[m[41m[m
[32m+[m[41m[m
[32m+[m							[32m// Gutters.[m[41m[m
[32m+[m								[32m$class: null;[m[41m[m
[32m+[m[41m[m
[32m+[m								[32m@if ($multiplier != 1) {[m[41m[m
[32m+[m									[32m$class: '.gtr-' + ($multiplier * 100);[m[41m[m
[32m+[m								[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m								[32m&#{$class} {[m[41m[m
[32m+[m									[32mmargin-top: ($guttersRows * $multiplier * -1);[m[41m[m
[32m+[m									[32mmargin-left: ($guttersCols * $multiplier * -1);[m[41m[m
[32m+[m[41m[m
[32m+[m									[32m> * {[m[41m[m
[32m+[m										[32mpadding: ($guttersRows * $multiplier) 0 0 ($guttersCols * $multiplier);[m[41m[m
[32m+[m									[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m									[32m// Uniform.[m[41m[m
[32m+[m										[32m&.gtr-uniform {[m[41m[m
[32m+[m											[32mmargin-top: $guttersCols * $multiplier * -1;[m[41m[m
[32m+[m[41m[m
[32m+[m											[32m> * {[m[41m[m
[32m+[m												[32mpadding-top: $guttersCols * $multiplier;[m[41m[m
[32m+[m											[32m}[m[41m[m
[32m+[m										[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m								[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m						[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m			[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m	[32m}[m
\ No newline at end of file[m
[1mdiff --git a/app/assets/stylesheets/libs/_mixins.scss b/app/assets/stylesheets/libs/_mixins.scss[m
[1mnew file mode 100644[m
[1mindex 0000000..2fc1bda[m
[1m--- /dev/null[m
[1m+++ b/app/assets/stylesheets/libs/_mixins.scss[m
[36m@@ -0,0 +1,63 @@[m
[32m+[m[32m/// Makes an element's :before pseudoelement a FontAwesome icon.[m[41m[m
[32m+[m[32m/// @param {string} $content Optional content value to use.[m[41m[m
[32m+[m[32m/// @param {string} $where Optional pseudoelement to target (before or after).[m[41m[m
[32m+[m[32m@mixin icon($content: false, $where: before) {[m[41m[m
[32m+[m[41m[m
[32m+[m	[32mtext-decoration: none;[m[41m[m
[32m+[m[41m[m
[32m+[m	[32m&:#{$where} {[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m@if $content {[m[41m[m
[32m+[m			[32mcontent: $content;[m[41m[m
[32m+[m		[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m		[32m-moz-osx-font-smoothing: grayscale;[m[41m[m
[32m+[m		[32m-webkit-font-smoothing: antialiased;[m[41m[m
[32m+[m		[32mfont-family: FontAwesome;[m[41m[m
[32m+[m		[32mfont-style: normal;[m[41m[m
[32m+[m		[32mfont-weight: normal;[m[41m[m
[32m+[m		[32mtext-transform: none !important;[m[41m[m
[32m+[m[41m[m
[32m+[m	[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m[32m/// Applies padding to an element, taking the current element-margin value into account.[m[41m[m
[32m+[m[32m/// @param {mixed} $tb Top/bottom padding.[m[41m[m
[32m+[m[32m/// @param {mixed} $lr Left/right padding.[m[41m[m
[32m+[m[32m/// @param {list} $pad Optional extra padding (in the following order top, right, bottom, left)[m[41m[m
[32m+[m[32m/// @param {bool} $important If true, adds !important.[m[41m[m
[32m+[m[32m@mixin padding($tb, $lr, $pad: (0,0,0,0), $important: null) {[m[41m[m
[32m+[m[41m[m
[32m+[m	[32m@if $important {[m[41m[m
[32m+[m		[32m$important: '!important';[m[41m[m
[32m+[m	[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m	[32m$x: 0.1em;[m[41m[m
[32m+[m[41m[m
[32m+[m	[32m@if unit(_size(element-margin)) == 'rem' {[m[41m[m
[32m+[m		[32m$x: 0.1rem;[m[41m[m
[32m+[m	[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m	[32mpadding: ($tb + nth($pad,1)) ($lr + nth($pad,2)) max($x, $tb - _size(element-margin) + nth($pad,3)) ($lr + nth($pad,4)) #{$important};[m[41m[m
[32m+[m[41m[m
[32m+[m[32m}[m[41m[m
[32m+[m[41m[m
[32m+[m[32m/// Encodes a SVG data URL so IE doesn't choke (via codepen.io/jakob-e/pen/YXXBrp).[m[41m[m
[32m+[m[32m/// @param {string} $svg SVG data URL.[m[41m[m
[32m+[m[32m/// @return {string} Encoded SVG data URL.[m[41m[m
[32m+[m[32m@function svg-url($svg) {[m[41m[m
[32m+[m[41m[m
[32m+[m	[32m$svg: str-replace($svg, '"', '\'');[m[41m[m
[32m+[m	[32m$svg: str-replace($svg, '%', '%25');[m[41m[m
[32m+[m	[32m$svg: str-replace($svg, '<', '%3C');[m[41m[m
[32m+[m	[32m$svg: str-replace($svg, '>', '%3E');[m[41m[m
[32m+[m	[32m$svg: str-replace($svg, '&', '%26');[m[41m[m
[32m+[m	[32m$svg: str-replace($svg, '#', '%23');[m[41m[m
[32m+[m	[32m$svg: str-replace($svg, '{', '%7B');[m[41m[m
[32m+[m	[32m$svg: str-replace($svg, '}', '%7D');[m[41m[m
[32m+[m	[32m$svg: str-replace($svg, ';', '%3B');[m[41m[m
[32m+[m[41m[m
[32m+[m	[32m@return url("data:image/svg+xml;charset=utf8,#{$svg}");[m[41m[m
[32m+[m[41m[m
[32m+[m[32m}[m
\ No newline at end of file[m
[1mdiff --git a/app/assets/stylesheets/libs/_vars.scss b/app/assets/stylesheets/libs/_vars.scss[m
[1mnew file mode 100644[m
[1mindex 0000000..9cea5e9[m
[1m--- /dev/null[m
[1m+++ b/app/assets/stylesheets/libs/_vars.scss[m
[36m@@ -0,0 +1,50 @@[m
[32m+[m[32m// Misc.[m[41m[m
[32m+[m	[32m$misc: ([m[41m[m
[32m+[m		[32mz-index-base:		10000[m[41m[m
[32m+[m	[32m);[m[41m[m
[32m+[m[41m[m
[32m+[m[32m// Duration.[m[41m[m
[32m+[m	[32m$duration: ([m[41m[m
[32m+[m		[32mmenu:				0.45s,[m[41m[m
[32m+[m		[32mtransition:			0.2s[m[41m[m
[32m+[m	[32m);[m[41m[m
[32m+[m[41m[m
[32m+[m[32m// Size.[m[41m[m
[32m+[m	[32m$size: ([m[41m[m
[32m+[m		[32mborder-radius:		4px,[m[41m[m
[32m+[m		[32mborder-width:		1px,[m[41m[m
[32m+[m		[32melement-height:		3em,[m[41m[m
[32m+[m		[32melement-margin:		2em,[m[41m[m
[32m+[m		[32mgutter:				2.5em,[m[41m[m
[32m+[m		[32mfield-gutter:		2em,[m[41m[m
[32m+[m		[32minner:				68em,[m[41m[m
[32m+[m		[32mmenu:				22em[m[41m[m
[32m+[m	[32m);[m[41m[m
[32m+[m[41m[m
[32m+[m[32m// Font.[m[41m[m
[32m+[m	[32m$font: ([m[41m[m
[32m+[m		[32mfamily:				('Source Sans Pro', Helvetica, sans-serif),[m[41m[m
[32m+[m		[32mfamily-fixed:		('Courier New', monospace),[m[41m[m
[32m+[m		[32mweight:				300,[m[41m[m
[32m+[m		[32mweight-bold:		900,[m[41m[m
[32m+[m		[32mweight-bold-alt:	700,[m[41m[m
[32m+[m		[32mletter-spacing:		0.35em,[m[41m[m
[32m+[m		[32mletter-spacing-alt:	-0.035em[m[41m[m
[32m+[m	[32m);[m[41m[m
[32m+[m[41m[m
[32m+[m[32m// Palette.[m[41m[m
[32m+[m	[32m$palette: ([m[41m[m
[32m+[m		[32mbg:					#ffffff,[m[41m[m
[32m+[m		[32mbg-accent:			#333333,[m[41m[m
[32m+[m		[32mbg-alt:				#f6f6f6,[m[41m[m
[32m+[m		[32mfg:					#585858,[m[41m[m
[32m+[m		[32mfg-accent:			#ffffff,[m[41m[m
[32m+[m		[32mborder:				#c9c9c9,[m[41m[m
[32m+[m		[32mborder-bg:			rgba(144,144,144,0.075),[m[41m[m
[32m+[m		[32maccent1:			#f2849e,[m[41m[m
[32m+[m		[32maccent2:			#7ecaf6,[m[41m[m
[32m+[m		[32maccent3:			#7bd0c1,[m[41m[m
[32m+[m		[32maccent4:			#c75b9b,[m[41m[m
[32m+[m		[32maccent5:			#ae85ca,[m[41m[m
[32m+[m		[32maccent6:			#8499e7,[m[41m[m
[32m+[m	[32m);[m
\ No newline at end of file[m
[1mdiff --git a/app/assets/stylesheets/libs/_vendor.scss b/app/assets/stylesheets/libs/_vendor.scss[m
[1mnew file mode 100644[m
[1mindex 0000000..6599a3f[m
[1m--- /dev/null[m
[1m+++ b/app/assets/stylesheets/libs/_vendor.scss[m
[36m@@ -0,0 +1,376 @@[m
[32m+[m[32m// vendor.scss v1.0 | @ajlkn | MIT licensed */[m
[32m+[m
[32m+[m[32m// Vars.[m
[32m+[m
[32m+[m	[32m/// Vendor prefixes.[m
[32m+[m	[32m/// @var {list}[m
[32m+[m	[32m$vendor-prefixes: ([m
[32m+[m		[32m'-moz-',[m
[32m+[m		[32m'-webkit-',[m
[32m+[m		[32m'-ms-',[m
[32m+[m		[32m''[m
[32m+[m	[32m);[m
[32m+[m
[32m+[m	[32m/// Properties that should be vendorized.[m
[32m+[m	[32m/// Data via caniuse.com, github.com/postcss/autoprefixer, and developer.mozilla.org[m
[32m+[m	[32m/// @var {list}[m
[32m+[m	[32m$vendor-properties: ([m
[32m+[m
[32m+[m		[32m// Animation.[m
[32m+[m			[32m'animation',[m
[32m+[m			[32m'animation-delay',[m
[32m+[m			[32m'animation-direction',[m
[32m+[m			[32m'animation-duration',[m
[32m+[m			[32m'animation-fill-mode',[m
[32m+[m			[32m'animation-iteration-count',[m
[32m+[m			[32m'animation-name',[m
[32m+[m			[32m'animation-play-state',[m
[32m+[m			[32m'animation-timing-function',[m
[32m+[m
[32m+[m		[32m// Appearance.[m
[32m+[m			[32m'appearance',[m
[32m+[m
[32m+[m		[32m// Backdrop filter.[m
[32m+[m			[32m'backdrop-filter',[m
[32m+[m
[32m+[m		[32m// Background image options.[m
[32m+[m			[32m'background-clip',[m
[32m+[m			[32m'background-origin',[m
[32m+[m			[32m'background-size',[m
[32m+[m
[32m+[m		[32m// Box sizing.[m
[32m+[m			[32m'box-sizing',[m
[32m+[m
[32m+[m		[32m// Clip path.[m
[32m+[m			[32m'clip-path',[m
[32m+[m
[32m+[m		[32m// Filter effects.[m
[32m+[m			[32m'filter',[m
[32m+[m
[32m+[m		[32m// Flexbox.[m
[32m+[m			[32m'align-content',[m
[32m+[m			[32m'align-items',[m
[32m+[m			[32m'align-self',[m
[32m+[m			[32m'flex',[m
[32m+[m			[32m'flex-basis',[m
[32m+[m			[32m'flex-direction',[m
[32m+[m			[32m'flex-flow',[m
[32m+[m			[32m'flex-grow',[m
[32m+[m			[32m'flex-shrink',[m
[32m+[m			[32m'flex-wrap',[m
[32m+[m			[32m'justify-content',[m
[32m+[m			[32m'order',[m
[32m+[m
[32m+[m		[32m// Font feature.[m
[32m+[m			[32m'font-feature-settings',[m
[32m+[m			[32m'font-language-override',[m
[32m+[m			[32m'font-variant-ligatures',[m
[32m+[m
[32m+[m		[32m// Font kerning.[m
[32m+[m			[32m'font-kerning',[m
[32m+[m
[32m+[m		[32m// Fragmented borders and backgrounds.[m
[32m+[m			[32m'box-decoration-break',[m
[32m+[m
[32m+[m		[32m// Grid layout.[m
[32m+[m			[32m'grid-column',[m
[32m+[m			[32m'grid-column-align',[m
[32m+[m			[32m'grid-column-end',[m
[32m+[m			[32m'grid-column-start',[m
[32m+[m			[32m'grid-row',[m
[32m+[m			[32m'grid-row-align',[m
[32m+[m			[32m'grid-row-end',[m
[32m+[m			[32m'grid-row-start',[m
[32m+[m			[32m'grid-template-columns',[m
[32m+[m			[32m'grid-template-rows',[m
[32m+[m
[32m+[m		[32m// Hyphens.[m
[32m+[m			[32m'hyphens',[m
[32m+[m			[32m'word-break',[m
[32m+[m
[32m+[m		[32m// Masks.[m
[32m+[m			[32m'mask',[m
[32m+[m			[32m'mask-border',[m
[32m+[m			[32m'mask-border-outset',[m
[32m+[m			[32m'mask-border-repeat',[m
[32m+[m			[32m'mask-border-slice',[m
[32m+[m			[32m'mask-border-source',[m
[32m+[m			[32m'mask-border-width',[m
[32m+[m			[32m'mask-clip',[m
[32m+[m			[32m'mask-composite',[m
[32m+[m			[32m'mask-image',[m
[32m+[m			[32m'mask-origin',[m
[32m+[m			[32m'mask-position',[m
[32m+[m			[32m'mask-repeat',[m
[32m+[m			[32m'mask-size',[m
[32m+[m
[32m+[m		[32m// Multicolumn.[m
[32m+[m			[32m'break-after',[m
[32m+[m			[32m'break-before',[m
[32m+[m			[32m'break-inside',[m
[32m+[m			[32m'column-count',[m
[32m+[m			[32m'column-fill',[m
[32m+[m			[32m'column-gap',[m
[32m+[m			[32m'column-rule',[m
[32m+[m			[32m'column-rule-color',[m
[32m+[m			[32m'column-rule-style',[m
[32m+[m			[32m'column-rule-width',[m
[32m+[m			[32m'column-span',[m
[32m+[m			[32m'column-width',[m
[32m+[m			[32m'columns',[m
[32m+[m
[32m+[m		[32m// Object fit.[m
[32m+[m			[32m'object-fit',[m
[32m+[m			[32m'object-position',[m
[32m+[m
[32m+[m		[32m// Regions.[m
[32m+[m			[32m'flow-from',[m
[32m+[m			[32m'flow-into',[m
[32m+[m			[32m'region-fragment',[m
[32m+[m
[32m+[m		[32m// Scroll snap points.[m
[32m+[m			[32m'scroll-snap-coordinate',[m
[32m+[m			[32m'scroll-snap-destination',[m
[32m+[m			[32m'scroll-snap-points-x',[m
[32m+[m			[32m'scroll-snap-points-y',[m
[32m+[m			[32m'scroll-snap-type',[m
[32m+[m
[32m+[m		[32m// Shapes.[m
[32m+[m			[32m'shape-image-threshold',[m
[32m+[m			[32m'shape-margin',[m
[32m+[m			[32m'shape-outside',[m
[32m+[m
[32m+[m		[32m// Tab size.[m
[32m+[m			[32m'tab-size',[m
[32m+[m
[32m+[m		[32m// Text align last.[m
[32m+[m			[32m'text-align-last',[m
[32m+[m
[32m+[m		[32m// Text decoration.[m
[32m+[m			[32m'text-decoration-color',[m
[32m+[m			[32m'text-decoration-line',[m
[32m+[m			[32m'text-decoration-skip',[m
[32m+[m			[32m'text-decoration-style',[m
[32m+[m
[32m+[m		[32m// Text emphasis.[m
[32m+[m			[32m'text-emphasis',[m
[32m+[m			[32m'text-emphasis-color',[m
[32m+[m			[32m'text-emphasis-position',[m
[32m+[m			[32m'text-emphasis-style',[m
[32m+[m
[32m+[m		[32m// Text size adjust.[m
[32m+[m			[32m'text-size-adjust',[m
[32m+[m
[32m+[m		[32m// Text spacing.[m
[32m+[m			[32m'text-spacing',[m
[32m+[m
[32m+[m		[32m// Transform.[m
[32m+[m			[32m'transform',[m
[32m+[m			[32m'transform-origin',[m
[32m+[m
[32m+[m		[32m// Transform 3D.[m
[32m+[m			[32m'backface-visibility',[m
[32m+[m			[32m'perspective',[m
[32m+[m			[32m'perspective-origin',[m
[32m+[m			[32m'transform-style',[m
[32m+[m
[32m+[m		[32m// Transition.[m
[32m+[m			[32m'transition',[m
[32m+[m			[32m'transition-delay',[m
[32m+[m			[32m'transition-duration',[m
[32m+[m			[32m'transition-property',[m
[32m+[m			[32m'transition-timing-function',[m
[32m+[m
[32m+[m		[32m// Unicode bidi.[m
[32m+[m			[32m'unicode-bidi',[m
[32m+[m
[32m+[m		[32m// User select.[m
[32m+[m			[32m'user-select',[m
[32m+[m
[32m+[m		[32m// Writing mode.[m
[32m+[m			[32m'writing-mode',[m
[32m+[m
[32m+[m	[32m);[m
[32m+[m
[32m+[m	[32m/// Values that should be vendorized.[m
[32m+[m	[32m/// Data via caniuse.com, github.com/postcss/autoprefixer, and developer.mozilla.org[m
[32m+[m	[32m/// @var {list}[m
[32m+[m	[32m$vendor-values: ([m
[32m+[m
[32m+[m		[32m// Cross fade.[m
[32m+[m			[32m'cross-fade',[m
[32m+[m
[32m+[m		[32m// Element function.[m
[32m+[m			[32m'element',[m
[32m+[m
[32m+[m		[32m// Filter function.[m
[32m+[m			[32m'filter',[m
[32m+[m
[32m+[m		[32m// Flexbox.[m
[32m+[m			[32m'flex',[m
[32m+[m			[32m'inline-flex',[m
[32m+[m
[32m+[m		[32m// Grab cursors.[m
[32m+[m			[32m'grab',[m
[32m+[m			[32m'grabbing',[m
[32m+[m
[32m+[m		[32m// Gradients.[m
[32m+[m			[32m'linear-gradient',[m
[32m+[m			[32m'repeating-linear-gradient',[m
[32m+[m			[32m'radial-gradient',[m
[32m+[m			[32m'repeating-radial-gradient',[m
[32m+[m
[32m+[m		[32m// Grid layout.[m
[32m+[m			[32m'grid',[m
[32m+[m			[32m'inline-grid',[m
[32m+[m
[32m+[m		[32m// Image set.[m
[32m+[m			[32m'image-set',[m
[32m+[m
[32m+[m		[32m// Intrinsic width.[m
[32m+[m			[32m'max-content',[m
[32m+[m			[32m'min-content',[m
[32m+[m			[32m'fit-content',[m
[32m+[m			[32m'fill',[m
[32m+[m			[32m'fill-available',[m
[32m+[m			[32m'stretch',[m
[32m+[m
[32m+[m		[32m// Sticky position.[m
[32m+[m			[32m'sticky',[m
[32m+[m
[32m+[m		[32m// Transform.[m
[32m+[m			[32m'transform',[m
[32m+[m
[32m+[m		[32m// Zoom cursors.[m
[32m+[m			[32m'zoom-in',[m
[32m+[m			[32m'zoom-out',[m
[32m+[m
[32m+[m	[32m);[m
[32m+[m
[32m+[m[32m// Functions.[m
[32m+[m
[32m+[m	[32m/// Removes a specific item from a list.[m
[32m+[m	[32m/// @author Hugo Giraudel[m
[32m+[m	[32m/// @param {list} $list List.[m
[32m+[m	[32m/// @param {integer} $index Index.[m
[32m+[m	[32m/// @return {list} Updated list.[m
[32m+[m	[32m@function remove-nth($list, $index) {[m
[32m+[m
[32m+[m		[32m$result: null;[m
[32m+[m
[32m+[m		[32m@if type-of($index) != number {[m
[32m+[m			[32m@warn "$index: #{quote($index)} is not a number for `remove-nth`.";[m
[32m+[m		[32m}[m
[32m+[m		[32m@else if $index == 0 {[m
[32m+[m			[32m@warn "List index 0 must be a non-zero integer for `remove-nth`.";[m
[32m+[m		[32m}[m
[32m+[m		[32m@else if abs($index) > length($list) {[m
[32m+[m			[32m@warn "List index is #{$index} but list is only #{length($list)} item long for `remove-nth`.";[m
[32m+[m		[32m}[m
[32m+[m		[32m@else {[m
[32m+[m
[32m+[m			[32m$result: ();[m
[32m+[m			[32m$index: if($index < 0, length($list) + $index + 1, $index);[m
[32m+[m
[32m+[m			[32m@for $i from 1 through length($list) {[m
[32m+[m
[32m+[m				[32m@if $i != $index {[m
[32m+[m					[32m$result: append($result, nth($list, $i));[m
[32m+[m				[32m}[m
[32m+[m
[32m+[m			[32m}[m
[32m+[m
[32m+[m		[32m}[m
[32m+[m
[32m+[m		[32m@return $result;[m
[32m+[m
[32m+[m	[32m}[m
[32m+[m
[32m+[m	[32m/// Replaces a substring within another string.[m
[32m+[m	[32m/// @author Hugo Giraudel[m
[32m+[m	[32m/// @param {string} $string String.[m
[32m+[m	[32m/// @param {string} $search Substring.[m
[32m+[m	[32m/// @param {string} $replace Replacement.[m
[32m+[m	[32m/// @return {string} Updated string.[m
[32m+[m	[32m@function str-replace($string, $search, $replace: '') {[m
[32m+[m
[32m+[m		[32m$index: str-index($string, $search);[m
[32m+[m
[32m+[m		[32m@if $index {[m
[32m+[m			[32m@return str-slice($string, 1, $index - 1) + $replace + str-replace(str-slice($string, $index + str-length($search)), $search, $replace);[m
[32m+[m		[32m}[m
[32m+[m
[32m+[m		[32m@return $string;[m
[32m+[m
[32m+[m	[32m}[m
[32m+[m
[32m+[m	[32m/// Replaces a substring within each string in a list.[m
[32m+[m	[32m/// @param {list} $strings List of strings.[m
[32m+[m	[32m/// @param {string} $search Substring.[m
[32m+[m	[32m/// @param {string} $replace Replacement.[m
[32m+[m	[32m/// @return {list} Updated list of strings.[m
[32m+[m	[32m@function str-replace-all($strings, $search, $replace: '') {[m
[32m+[m
[32m+[m		[32m@each $string in $strings {[m
[32m+[m			[32m$strings: set-nth($strings, index($strings, $string), str-replace($string, $search, $replace));[m
[32m+[m		[32m}[m
[32m+[m
[32m+[m		[32m@return $strings;[m
[32m+[m
[32m+[m	[32m}[m
[32m+[m
[32m+[m[32m// Mixins.[m
[32m+[m
[32m+[m	[32m/// Wraps @content in vendorized keyframe blocks.[m
[32m+[m	[32m/// @param {string} $name Name.[m
[32m+[m	[32m@mixin keyframes($name) {[m
[32m+[m
[32m+[m		[32m@-moz-keyframes #{$name} { @content; }[m
[32m+[m		[32m@-webkit-keyframes #{$name} { @content; }[m
[32m+[m		[32m@-ms-keyframes #{$name} { @content; }[m
[32m+[m		[32m@keyframes #{$name} { @content; }[m
[32m+[m
[32m+[m	[32m}[m
[32m+[m
[32m+[m	[32m/// Vendorizes a declaration's property and/or value(s).[m
[32m+[m	[32m/// @param {string} $property Property.[m
[32m+[m	[32m/// @param {mixed} $value String/list of value(s).[m
[32m+[m	[32m@mixin vendor($property, $value) {[m
[32m+[m
[32m+[m		[32m// Determine if property should expand.[m
[32m+[m			[32m$expandProperty: index($vendor-properties, $property);[m
[32m+[m
[32m+[m		[32m// Determine if value should expand (and if so, add '-prefix-' placeholder).[m
[32m+[m			[32m$expandValue: false;[m
[32m+[m
[32m+[m			[32m@each $x in $value {[m
[32m+[m				[32m@each $y in $vendor-values {[m
[32m+[m					[32m@if $y == str-slice($x, 1, str-length($y)) {[m
[32m+[m
[32m+[m						[32m$value: set-nth($value, index($value, $x), '-prefix-' + $x);[m
[32m+[m						[32m$expandValue: true;[m
[32m+[m
[32m+[m					[32m}[m
[32m+[m				[32m}[m
[32m+[m			[32m}[m
[32m+[m
[32m+[m		[32m// Expand property?[m
[32m+[m			[32m@if $expandProperty {[m
[32m+[m			[32m    @each $vendor in $vendor-prefixes {[m
[32m+[m			[32m        #{$vendor}#{$property}: #{str-replace-all($value, '-prefix-', $vendor)};[m
[32m+[m			[32m    }[m
[32m+[m			[32m}[m
[32m+[m
[32m+[m		[32m// Expand just the value?[m
[32m+[m			[32m@elseif $expandValue {[m
[32m+[m			[32m    @each $vendor in $vendor-prefixes {[m
[32m+[m			[32m        #{$property}: #{str-replace-all($value, '-prefix-', $vendor)};[m
[32m+[m			[32m    }[m
[32m+[m			[32m}[m
[32m+[m
[32m+[m		[32m// Neither? Treat them as a normal declaration.[m
[32m+[m			[32m@else {[m
[32m+[m		[32m        #{$property}: #{$value};[m
[32m+[m			[32m}[m
[32m+[m
[32m+[m	[32m}[m
\ No newline at end of file[m
[1mdiff --git a/app/controllers/pages_controller.rb b/app/controllers/pages_controller.rb[m
[1mnew file mode 100644[m
[1mindex 0000000..b92000f[m
[1m--- /dev/null[m
[1m+++ b/app/controllers/pages_controller.rb[m
[36m@@ -0,0 +1,5 @@[m
[32m+[m[32mclass PagesController < ApplicationController[m
[32m+[m[32m  def home[m
[32m+[m[41m    [m
[32m+[m[32m  end[m
[32m+[m[32mend[m
\ No newline at end of file[m
[1mdiff --git a/app/views/layouts/application.html.erb b/app/views/layouts/application.html.erb[m
[1mindex 8a9ab02..0f451d2 100644[m
[1m--- a/app/views/layouts/application.html.erb[m
[1m+++ b/app/views/layouts/application.html.erb[m
[36m@@ -1,15 +1,57 @@[m
[31m-<!DOCTYPE html>[m
[31m-<html>[m
[31m-  <head>[m
[31m-    <title>AssandoEventos2019</title>[m
[31m-    <%= csrf_meta_tags %>[m
[31m-    <%= csp_meta_tag %>[m
[31m-[m
[31m-    <%= stylesheet_link_tag    'application', media: 'all', 'data-turbolinks-track': 'reload' %>[m
[31m-    <%= javascript_include_tag 'application', 'data-turbolinks-track': 'reload' %>[m
[31m-  </head>[m
[31m-[m
[31m-  <body>[m
[32m+[m[32m<!DOCTYPE HTML>[m
[32m+[m[32m<html lang="pt-BR">[m
[32m+[m[32m<head>[m
[32m+[m[32m  <title>Assando Eventos</title>[m
[32m+[m[32m  <meta charset="utf-8" />[m
[32m+[m[32m  <meta name="viewport" content="width=device-width, initial-scale=1, user-scalable=no" />[m
[32m+[m[32m  <%= stylesheet_link_tag 'application', media: 'all', 'data-turbolinks-track': 'reload' %>[m
[32m+[m[32m</head>[m
[32m+[m[32m<body class="is-preload">[m
[32m+[m[32m  <!-- Wrapper -->[m
[32m+[m[32m  <div id="wrapper">[m
[32m+[m
[32m+[m[32m    <!-- Header -->[m
[32m+[m[32m    <header id="header">[m
[32m+[m[32m      <div class="inner">[m
[32m+[m[32m        <!-- Logo -->[m
[32m+[m[32m        <a href="index.html" class="logo">[m
[32m+[m[32m          <span class="symbol"><%= image_tag('logo.svg')%></span><span class="title">Assando Eventos</span>[m
[32m+[m[32m        </a>[m
[32m+[m[32m        <!-- Nav -->[m
[32m+[m[32m        <nav>[m
[32m+[m[32m          <ul>[m
[32m+[m[32m            <li><a href="#menu">Menu</a></li>[m
[32m+[m[32m          </ul>[m
[32m+[m[32m        </nav>[m
[32m+[m[32m      </div>[m
[32m+[m[32m    </header>[m
[32m+[m
[32m+[m[32m    <!-- Menu -->[m
[32m+[m[32m    <nav id="menu">[m
[32m+[m[32m      <h2>Menu</h2>[m
[32m+[m[32m      <ul>[m
[32m+[m[32m        <li><a href="index.html">Home</a></li>[m
[32m+[m[32m        <li><a href="generic.html">Ipsum veroeros</a></li>[m
[32m+[m[32m        <li><a href="generic.html">Tempus etiam</a></li>[m
[32m+[m[32m        <li><a href="generic.html">Consequat dolor</a></li>[m
[32m+[m[32m        <li><a href="elements.html">Elements</a></li>[m
[32m+[m[32m      </ul>[m
[32m+[m[32m    </nav>[m
[32m+[m
[32m+[m[32m    <!-- Main -->[m
     <%= yield %>[m
[31m-  </body>[m
[31m-</html>[m
[32m+[m
[32m+[m[32m    <!-- Footer -->[m
[32m+[m[32m    <footer id="footer">[m
[32m+[m[32m      <div class="inner">[m
[32m+[m[32m        <ul class="copyright">[m
[32m+[m[32m          <li>&copy; Untitled. All rights reserved</li><li>Design: <a href="http://html5up.net">HTML5 UP</a></li>[m
[32m+[m[32m        </ul>[m
[32m+[m[32m      </div>[m
[32m+[m[32m    </footer>[m
[32m+[m[32m  </div>[m
[32m+[m
[32m+[m[32m  <!-- Scripts -->[m
[32m+[m[32m  <%= javascript_include_tag 'application', 'data-turbolinks-track': 'reload' %>[m
[32m+[m[32m</body>[m
[32m+[m[32m</html>[m
\ No newline at end of file[m
[1mdiff --git a/app/views/pages/home.html.erb b/app/views/pages/home.html.erb[m
[1mnew file mode 100644[m
[1mindex 0000000..ef11c9f[m
[1m--- /dev/null[m
[1m+++ b/app/views/pages/home.html.erb[m
[36m@@ -0,0 +1,5 @@[m
[32m+[m[32m<div>[m
[32m+[m[32m  <div class="inner">[m
[32m+[m[32m    <p> Hello world! </p>[m
[32m+[m[32m  </div>[m
[32m+[m[32m</div>[m
\ No newline at end of file[m
[1mdiff --git a/config/routes.rb b/config/routes.rb[m
[1mindex 787824f..b62363e 100644[m
[1m--- a/config/routes.rb[m
[1m+++ b/config/routes.rb[m
[36m@@ -1,3 +1,3 @@[m
 Rails.application.routes.draw do[m
[31m-  # For details on the DSL available within this file, see http://guides.rubyonrails.org/routing.html[m
[32m+[m[32m  root 'pages#home'[m
 end[m
