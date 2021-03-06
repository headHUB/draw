/*

Copyright (c) 2016, Embedded Adventures, www.embeddedadventures.com
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

- Redistributions of source code must retain the above copyright notice,
  this list of conditions and the following disclaimer.

- Redistributions in binary form must reproduce the above copyright
  notice, this list of conditions and the following disclaimer in the
  documentation and/or other materials provided with the distribution.

- Neither the name of Embedded Adventures nor the names of its contributors
  may be used to endorse or promote products derived from this software
  without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
THE POSSIBILITY OF SUCH DAMAGE.

Contact us at admin [at] embeddedadventures.com
*/

#include "draw_font_10arial.h"

uns16  const font_10arial_index[]  = {
    0, // 32 -  
    5, // 33 - !
    6, // 34 - "
    9, // 35 - #
    14, // 36 - $
    19, // 37 - %
    26, // 38 - &
    31, // 39 - '
    32, // 40 - (
    34, // 41 - )
    36, // 42 - *
    39, // 43 - +
    44, // 44 - ,
    46, // 45 - -
    48, // 46 - .
    49, // 47 - /
    52, // 48 - 0
    56, // 49 - 1
    59, // 50 - 2
    63, // 51 - 3
    67, // 52 - 4
    72, // 53 - 5
    76, // 54 - 6
    80, // 55 - 7
    84, // 56 - 8
    88, // 57 - 9
    92, // 58 - :
    93, // 59 - ;
    95, // 60 - <
    99, // 61 - =
    103, // 62 - >
    107, // 63 - ?
    111, // 64 - @
    119, // 65 - A
    124, // 66 - B
    129, // 67 - C
    135, // 68 - D
    140, // 69 - E
    145, // 70 - F
    149, // 71 - G
    155, // 72 - H
    160, // 73 - I
    161, // 74 - J
    165, // 75 - K
    170, // 76 - L
    174, // 77 - M
    181, // 78 - N
    187, // 79 - O
    193, // 80 - P
    198, // 81 - Q
    204, // 82 - R
    210, // 83 - S
    215, // 84 - T
    220, // 85 - U
    226, // 86 - V
    231, // 87 - W
    238, // 88 - X
    244, // 89 - Y
    249, // 90 - Z
    254, // 91 - [
    256, // 92 - backslash
    259, // 93 - ]
    261, // 94 - ^
    264, // 95 - _
    269, // 96 - `
    271, // 97 - a
    275, // 98 - b
    279, // 99 - c
    283, // 100 - d
    287, // 101 - e
    291, // 102 - f
    293, // 103 - g
    297, // 104 - h
    301, // 105 - i
    302, // 106 - j
    303, // 107 - k
    307, // 108 - l
    308, // 109 - m
    315, // 110 - n
    319, // 111 - o
    323, // 112 - p
    327, // 113 - q
    331, // 114 - r
    334, // 115 - s
    338, // 116 - t
    340, // 117 - u
    344, // 118 - v
    349, // 119 - w
    356, // 120 - x
    361, // 121 - y
    366, // 122 - z
    370, // 123 - {
    373, // 124 - |
    374, // 125 - }
    377, // 126 - ~
    382, // 127 - 
    385, // 128 - �

};
uns8  const font_10arial_data[]  = {


    // 0,  32 -  
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
//                 
//                 
//                 
//                 
//                 

    // 5,  33 - !
 0x2f, 0xc0,
//   * ******      

    // 6,  34 - "
 0x01, 0xc0, 0x00, 0x00, 0x01, 0xc0,
//        ***      
//                 
//        ***      

    // 9,  35 - #
 0x09, 0x00, 0x3f, 0xc0, 0x09, 0x00, 0x3f, 0xc0, 0x09, 0x00,
//     *  *        
//   ********      
//     *  *        
//   ********      
//     *  *        

    // 14,  36 - $
 0x23, 0x00, 0x44, 0x80, 0xff, 0xc0, 0x44, 0x80, 0x39, 0x00,
//   *   **        
//  *   *  *       
// **********      
//  *   *  *       
//   ***  *        

    // 19,  37 - %
 0x01, 0x80, 0x02, 0x40, 0x31, 0x80, 0x0e, 0x00, 0x19, 0x80, 0x24, 0x40, 0x18, 0x00,
//        **       
//       *  *      
//   **   **       
//     ***         
//    **  **       
//   *  *   *      
//    **           

    // 26,  38 - &
 0x1c, 0x00, 0x25, 0x80, 0x26, 0x40, 0x19, 0x80, 0x1c, 0x00,
//    ***          
//   *  * **       
//   *  **  *      
//    **  **       
//    ***          

    // 31,  39 - '
 0x01, 0xc0,
//        ***      

    // 32,  40 - (
 0x7f, 0x80, 0x80, 0x40,
//  ********       
// *        *      

    // 34,  41 - )
 0x80, 0x40, 0x7f, 0x80,
// *        *      
//  ********       

    // 36,  42 - *
 0x02, 0x80, 0x01, 0xc0, 0x02, 0x80,
//       * *       
//        ***      
//       * *       

    // 39,  43 - +
 0x04, 0x00, 0x04, 0x00, 0x1f, 0x00, 0x04, 0x00, 0x04, 0x00,
//      *          
//      *          
//    *****        
//      *          
//      *          

    // 44,  44 - ,
 0x80, 0x00, 0x60, 0x00,
// *               
//  **             

    // 46,  45 - -
 0x08, 0x00, 0x08, 0x00,
//     *           
//     *           

    // 48,  46 - .
 0x20, 0x00,
//   *             

    // 49,  47 - /
 0x38, 0x00, 0x06, 0x00, 0x01, 0xc0,
//   ***           
//      **         
//        ***      

    // 52,  48 - 0
 0x1f, 0x80, 0x20, 0x40, 0x20, 0x40, 0x1f, 0x80,
//    ******       
//   *      *      
//   *      *      
//    ******       

    // 56,  49 - 1
 0x01, 0x00, 0x00, 0x80, 0x3f, 0xc0,
//        *        
//         *       
//   ********      

    // 59,  50 - 2
 0x30, 0x80, 0x28, 0x40, 0x24, 0x40, 0x23, 0x80,
//   **    *       
//   * *    *      
//   *  *   *      
//   *   ***       

    // 63,  51 - 3
 0x10, 0x80, 0x22, 0x40, 0x22, 0x40, 0x1d, 0x80,
//    *    *       
//   *   *  *      
//   *   *  *      
//    *** **       

    // 67,  52 - 4
 0x0c, 0x00, 0x0b, 0x00, 0x08, 0x80, 0x3f, 0xc0, 0x08, 0x00,
//     **          
//     * **        
//     *   *       
//   ********      
//     *           

    // 72,  53 - 5
 0x13, 0x00, 0x22, 0xc0, 0x22, 0x40, 0x1c, 0x40,
//    *  **        
//   *   * **      
//   *   *  *      
//    ***   *      

    // 76,  54 - 6
 0x1f, 0x80, 0x24, 0x40, 0x22, 0x40, 0x1c, 0x80,
//    ******       
//   *  *   *      
//   *   *  *      
//    ***  *       

    // 80,  55 - 7
 0x00, 0x40, 0x38, 0x40, 0x07, 0x40, 0x00, 0xc0,
//          *      
//   ***    *      
//      *** *      
//         **      

    // 84,  56 - 8
 0x1d, 0x80, 0x22, 0x40, 0x22, 0x40, 0x1d, 0x80,
//    *** **       
//   *   *  *      
//   *   *  *      
//    *** **       

    // 88,  57 - 9
 0x13, 0x80, 0x24, 0x40, 0x22, 0x40, 0x1f, 0x80,
//    *  ***       
//   *  *   *      
//   *   *  *      
//    ******       

    // 92,  58 - :
 0x21, 0x00,
//   *    *        

    // 93,  59 - ;
 0x80, 0x00, 0x61, 0x00,
// *               
//  **    *        

    // 95,  60 - <
 0x04, 0x00, 0x0a, 0x00, 0x0a, 0x00, 0x11, 0x00,
//      *          
//     * *         
//     * *         
//    *   *        

    // 99,  61 - =
 0x0a, 0x00, 0x0a, 0x00, 0x0a, 0x00, 0x0a, 0x00,
//     * *         
//     * *         
//     * *         
//     * *         

    // 103,  62 - >
 0x11, 0x00, 0x0a, 0x00, 0x0a, 0x00, 0x04, 0x00,
//    *   *        
//     * *         
//     * *         
//      *          

    // 107,  63 - ?
 0x00, 0x80, 0x2c, 0x40, 0x02, 0x40, 0x01, 0x80,
//         *       
//   * **   *      
//       *  *      
//        **       

    // 111,  64 - @
 0x1f, 0x00, 0x20, 0x80, 0x4e, 0x40, 0x91, 0x40, 0x91, 0x40, 0x9e, 0x40, 0x50, 0x80, 0x2f, 0x80,
//    *****        
//   *     *       
//  *  ***  *      
// *  *   * *      
// *  *   * *      
// *  ****  *      
//  * *    *       
//   * *****       

    // 119,  65 - A
 0x30, 0x00, 0x0f, 0x80, 0x08, 0x40, 0x0f, 0x80, 0x30, 0x00,
//   **            
//     *****       
//     *    *      
//     *****       
//   **            

    // 124,  66 - B
 0x3f, 0xc0, 0x22, 0x40, 0x22, 0x40, 0x22, 0x40, 0x1d, 0x80,
//   ********      
//   *   *  *      
//   *   *  *      
//   *   *  *      
//    *** **       

    // 129,  67 - C
 0x0f, 0x00, 0x10, 0x80, 0x20, 0x40, 0x20, 0x40, 0x20, 0x40, 0x19, 0x80,
//     ****        
//    *    *       
//   *      *      
//   *      *      
//   *      *      
//    **  **       

    // 135,  68 - D
 0x3f, 0xc0, 0x20, 0x40, 0x20, 0x40, 0x10, 0x80, 0x0f, 0x00,
//   ********      
//   *      *      
//   *      *      
//    *    *       
//     ****        

    // 140,  69 - E
 0x3f, 0xc0, 0x22, 0x40, 0x22, 0x40, 0x22, 0x40, 0x22, 0x40,
//   ********      
//   *   *  *      
//   *   *  *      
//   *   *  *      
//   *   *  *      

    // 145,  70 - F
 0x3f, 0xc0, 0x02, 0x40, 0x02, 0x40, 0x00, 0x40,
//   ********      
//       *  *      
//       *  *      
//          *      

    // 149,  71 - G
 0x0f, 0x00, 0x10, 0x80, 0x20, 0x40, 0x24, 0x40, 0x24, 0x40, 0x1d, 0x80,
//     ****        
//    *    *       
//   *      *      
//   *  *   *      
//   *  *   *      
//    *** **       

    // 155,  72 - H
 0x3f, 0xc0, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x3f, 0xc0,
//   ********      
//       *         
//       *         
//       *         
//   ********      

    // 160,  73 - I
 0x3f, 0xc0,
//   ********      

    // 161,  74 - J
 0x18, 0x00, 0x20, 0x00, 0x20, 0x00, 0x1f, 0xc0,
//    **           
//   *             
//   *             
//    *******      

    // 165,  75 - K
 0x3f, 0xc0, 0x02, 0x00, 0x07, 0x00, 0x18, 0x80, 0x20, 0x40,
//   ********      
//       *         
//      ***        
//    **   *       
//   *      *      

    // 170,  76 - L
 0x3f, 0xc0, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00,
//   ********      
//   *             
//   *             
//   *             

    // 174,  77 - M
 0x3f, 0xc0, 0x01, 0x80, 0x1e, 0x00, 0x20, 0x00, 0x1e, 0x00, 0x01, 0x80, 0x3f, 0xc0,
//   ********      
//        **       
//    ****         
//   *             
//    ****         
//        **       
//   ********      

    // 181,  78 - N
 0x3f, 0xc0, 0x00, 0x80, 0x03, 0x00, 0x0c, 0x00, 0x10, 0x00, 0x3f, 0xc0,
//   ********      
//         *       
//       **        
//     **          
//    *            
//   ********      

    // 187,  79 - O
 0x0f, 0x00, 0x10, 0x80, 0x20, 0x40, 0x20, 0x40, 0x10, 0x80, 0x0f, 0x00,
//     ****        
//    *    *       
//   *      *      
//   *      *      
//    *    *       
//     ****        

    // 193,  80 - P
 0x3f, 0xc0, 0x04, 0x40, 0x04, 0x40, 0x04, 0x40, 0x03, 0x80,
//   ********      
//      *   *      
//      *   *      
//      *   *      
//       ***       

    // 198,  81 - Q
 0x0f, 0x00, 0x10, 0x80, 0x20, 0x40, 0x30, 0x40, 0x10, 0x80, 0x6f, 0x00,
//     ****        
//    *    *       
//   *      *      
//   **     *      
//    *    *       
//  ** ****        

    // 204,  82 - R
 0x3f, 0xc0, 0x02, 0x40, 0x06, 0x40, 0x0a, 0x40, 0x11, 0x80, 0x20, 0x00,
//   ********      
//       *  *      
//      **  *      
//     * *  *      
//    *   **       
//   *             

    // 210,  83 - S
 0x19, 0x80, 0x22, 0x40, 0x22, 0x40, 0x22, 0x40, 0x1c, 0x80,
//    **  **       
//   *   *  *      
//   *   *  *      
//   *   *  *      
//    ***  *       

    // 215,  84 - T
 0x00, 0x40, 0x00, 0x40, 0x3f, 0xc0, 0x00, 0x40, 0x00, 0x40,
//          *      
//          *      
//   ********      
//          *      
//          *      

    // 220,  85 - U
 0x0f, 0xc0, 0x10, 0x00, 0x20, 0x00, 0x20, 0x00, 0x10, 0x00, 0x0f, 0xc0,
//     ******      
//    *            
//   *             
//   *             
//    *            
//     ******      

    // 226,  86 - V
 0x00, 0xc0, 0x1f, 0x00, 0x20, 0x00, 0x1f, 0x00, 0x00, 0xc0,
//         **      
//    *****        
//   *             
//    *****        
//         **      

    // 231,  87 - W
 0x1f, 0xc0, 0x20, 0x00, 0x1f, 0x80, 0x00, 0x40, 0x1f, 0x80, 0x20, 0x00, 0x1f, 0xc0,
//    *******      
//   *             
//    ******       
//          *      
//    ******       
//   *             
//    *******      

    // 238,  88 - X
 0x20, 0x40, 0x19, 0x80, 0x06, 0x00, 0x06, 0x00, 0x19, 0x80, 0x20, 0x40,
//   *      *      
//    **  **       
//      **         
//      **         
//    **  **       
//   *      *      

    // 244,  89 - Y
 0x00, 0x40, 0x01, 0x80, 0x3e, 0x00, 0x01, 0x80, 0x00, 0x40,
//          *      
//        **       
//   *****         
//        **       
//          *      

    // 249,  90 - Z
 0x30, 0x40, 0x28, 0x40, 0x26, 0x40, 0x21, 0x40, 0x20, 0xc0,
//   **     *      
//   * *    *      
//   *  **  *      
//   *    * *      
//   *     **      

    // 254,  91 - [
 0xff, 0xc0, 0x80, 0x40,
// **********      
// *        *      

    // 256,  92 - backslash
 0x00, 0xc0, 0x0f, 0x00, 0x30, 0x00,
//         **      
//     ****        
//   **            

    // 259,  93 - ]
 0x80, 0x40, 0xff, 0xc0,
// *        *      
// **********      

    // 261,  94 - ^
 0x03, 0x80, 0x00, 0x40, 0x03, 0x80,
//       ***       
//          *      
//       ***       

    // 264,  95 - _
 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00,
//  *              
//  *              
//  *              
//  *              
//  *              

    // 269,  96 - `
 0x00, 0x40, 0x00, 0x80,
//          *      
//         *       

    // 271,  97 - a
 0x19, 0x00, 0x25, 0x00, 0x25, 0x00, 0x3e, 0x00,
//    **  *        
//   *  * *        
//   *  * *        
//   *****         

    // 275,  98 - b
 0x3f, 0xc0, 0x12, 0x00, 0x21, 0x00, 0x1e, 0x00,
//   ********      
//    *  *         
//   *    *        
//    ****         

    // 279,  99 - c
 0x1e, 0x00, 0x21, 0x00, 0x21, 0x00, 0x12, 0x00,
//    ****         
//   *    *        
//   *    *        
//    *  *         

    // 283,  100 - d
 0x1e, 0x00, 0x21, 0x00, 0x12, 0x00, 0x3f, 0xc0,
//    ****         
//   *    *        
//    *  *         
//   ********      

    // 287,  101 - e
 0x1e, 0x00, 0x25, 0x00, 0x25, 0x00, 0x16, 0x00,
//    ****         
//   *  * *        
//   *  * *        
//    * **         

    // 291,  102 - f
 0x3f, 0x80, 0x01, 0x40,
//   *******       
//        * *      

    // 293,  103 - g
 0x9e, 0x00, 0xa1, 0x00, 0x92, 0x00, 0x7f, 0x00,
// *  ****         
// * *    *        
// *  *  *         
//  *******        

    // 297,  104 - h
 0x3f, 0xc0, 0x02, 0x00, 0x01, 0x00, 0x3e, 0x00,
//   ********      
//       *         
//        *        
//   *****         

    // 301,  105 - i
 0x3f, 0x40,
//   ****** *      

    // 302,  106 - j
 0xff, 0x40,
// ******** *      

    // 303,  107 - k
 0x3f, 0xc0, 0x04, 0x00, 0x0a, 0x00, 0x31, 0x00,
//   ********      
//      *          
//     * *         
//   **   *        

    // 307,  108 - l
 0x3f, 0xc0,
//   ********      

    // 308,  109 - m
 0x3f, 0x00, 0x02, 0x00, 0x01, 0x00, 0x3e, 0x00, 0x02, 0x00, 0x01, 0x00, 0x3f, 0x00,
//   ******        
//       *         
//        *        
//   *****         
//       *         
//        *        
//   ******        

    // 315,  110 - n
 0x3f, 0x00, 0x02, 0x00, 0x01, 0x00, 0x3e, 0x00,
//   ******        
//       *         
//        *        
//   *****         

    // 319,  111 - o
 0x1e, 0x00, 0x21, 0x00, 0x21, 0x00, 0x1e, 0x00,
//    ****         
//   *    *        
//   *    *        
//    ****         

    // 323,  112 - p
 0xff, 0x00, 0x12, 0x00, 0x21, 0x00, 0x1e, 0x00,
// ********        
//    *  *         
//   *    *        
//    ****         

    // 327,  113 - q
 0x1e, 0x00, 0x21, 0x00, 0x12, 0x00, 0xff, 0x00,
//    ****         
//   *    *        
//    *  *         
// ********        

    // 331,  114 - r
 0x3f, 0x00, 0x02, 0x00, 0x01, 0x00,
//   ******        
//       *         
//        *        

    // 334,  115 - s
 0x12, 0x00, 0x25, 0x00, 0x29, 0x00, 0x12, 0x00,
//    *  *         
//   *  * *        
//   * *  *        
//    *  *         

    // 338,  116 - t
 0x3f, 0xc0, 0x21, 0x00,
//   ********      
//   *    *        

    // 340,  117 - u
 0x1f, 0x00, 0x20, 0x00, 0x10, 0x00, 0x3f, 0x00,
//    *****        
//   *             
//    *            
//   ******        

    // 344,  118 - v
 0x03, 0x00, 0x1c, 0x00, 0x20, 0x00, 0x1c, 0x00, 0x03, 0x00,
//       **        
//    ***          
//   *             
//    ***          
//       **        

    // 349,  119 - w
 0x1f, 0x00, 0x20, 0x00, 0x1e, 0x00, 0x01, 0x00, 0x1e, 0x00, 0x20, 0x00, 0x1f, 0x00,
//    *****        
//   *             
//    ****         
//        *        
//    ****         
//   *             
//    *****        

    // 356,  120 - x
 0x21, 0x00, 0x12, 0x00, 0x0c, 0x00, 0x12, 0x00, 0x21, 0x00,
//   *    *        
//    *  *         
//     **          
//    *  *         
//   *    *        

    // 361,  121 - y
 0x01, 0x00, 0x8e, 0x00, 0x70, 0x00, 0x0e, 0x00, 0x01, 0x00,
//        *        
// *   ***         
//  ***            
//     ***         
//        *        

    // 366,  122 - z
 0x31, 0x00, 0x29, 0x00, 0x25, 0x00, 0x23, 0x00,
//   **   *        
//   * *  *        
//   *  * *        
//   *   **        

    // 370,  123 - {
 0x04, 0x00, 0x7b, 0xc0, 0x40, 0x40,
//      *          
//  **** ****      
//  *       *      

    // 373,  124 - |
 0xff, 0xc0,
// **********      

    // 374,  125 - }
 0x80, 0x40, 0xfb, 0xc0, 0x04, 0x00,
// *        *      
// ***** ****      
//      *          

    // 377,  126 - ~
 0x04, 0x00, 0x02, 0x00, 0x06, 0x00, 0x04, 0x00, 0x02, 0x00,
//      *          
//       *         
//      **         
//      *          
//       *         

    // 382,  127 - 
 0x01, 0xc0, 0x01, 0x40, 0x01, 0xc0,
//        ***      
//        * *      
//        ***      

};	


