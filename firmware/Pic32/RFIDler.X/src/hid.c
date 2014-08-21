/***************************************************************************
 * A copy of the GNU GPL is appended to this file.                         *
 *                                                                         *
 * This licence is based on the nmap licence, and we express our gratitude *
 * for the work that went into producing it. There is no other connection  *
 * between RFIDler and nmap either expressed or implied.                   *
 *                                                                         *
 ********************** IMPORTANT RFIDler LICENSE TERMS ********************
 *                                                                         *
 *                                                                         *
 * All references to RFIDler herein imply all it's derivatives, namely:    *
 *                                                                         *
 * o RFIDler-LF Standard                                                   *
 * o RFIDler-LF Lite                                                       *
 * o RFIDler-LF Nekkid                                                     *
 *                                                                         *
 *                                                                         *
 * RFIDler is (C) 2013-2014 Aperture Labs Ltd.                             *
 *                                                                         *
 * This program is free software; you may redistribute and/or modify it    *
 * under the terms of the GNU General Public License as published by the   *
 * Free Software Foundation; Version 2 ("GPL"), BUT ONLY WITH ALL OF THE   *
 * CLARIFICATIONS AND EXCEPTIONS DESCRIBED HEREIN.  This guarantees your   *
 * right to use, modify, and redistribute this software under certain      *
 * conditions.  If you wish to embed RFIDler technology into proprietary   *
 * software or hardware, we sell alternative licenses                      *
 * (contact sales@aperturelabs.com).                                       *
 *                                                                         *
 * Note that the GPL places important restrictions on "derivative works",  *
 * yet it does not provide a detailed definition of that term.  To avoid   *
 * misunderstandings, we interpret that term as broadly as copyright law   *
 * allows.  For example, we consider an application to constitute a        *
 * derivative work for the purpose of this license if it does any of the   *
 * following with any software or content covered by this license          *
 * ("Covered Software"):                                                   *
 *                                                                         *
 * o Integrates source code from Covered Software.                         *
 *                                                                         *
 * o Is designed specifically to execute Covered Software and parse the    *
 * results (as opposed to typical shell or execution-menu apps, which will *
 * execute anything you tell them to).                                     *
 *                                                                         *
 * o Includes Covered Software in a proprietary executable installer.  The *
 * installers produced by InstallShield are an example of this.  Including *
 * RFIDler with other software in compressed or archival form does not     *
 * trigger this provision, provided appropriate open source decompression  *
 * or de-archiving software is widely available for no charge.  For the    *
 * purposes of this license, an installer is considered to include Covered *
 * Software even if it actually retrieves a copy of Covered Software from  *
 * another source during runtime (such as by downloading it from the       *
 * Internet).                                                              *
 *                                                                         *
 * o Links (statically or dynamically) to a library which does any of the  *
 * above.                                                                  *
 *                                                                         *
 * o Executes a helper program, module, or script to do any of the above.  *
 *                                                                         *
 * This list is not exclusive, but is meant to clarify our interpretation  *
 * of derived works with some common examples.  Other people may interpret *
 * the plain GPL differently, so we consider this a special exception to   *
 * the GPL that we apply to Covered Software.  Works which meet any of     *
 * these conditions must conform to all of the terms of this license,      *
 * particularly including the GPL Section 3 requirements of providing      *
 * source code and allowing free redistribution of the work as a whole.    *
 *                                                                         *
 * As another special exception to the GPL terms, Aperture Labs Ltd. grants*
 * permission to link the code of this program with any version of the     *
 * OpenSSL library which is distributed under a license identical to that  *
 * listed in the included docs/licenses/OpenSSL.txt file, and distribute   *
 * linked combinations including the two.                                  *
 *                                                                         *
 * Any redistribution of Covered Software, including any derived works,    *
 * must obey and carry forward all of the terms of this license, including *
 * obeying all GPL rules and restrictions.  For example, source code of    *
 * the whole work must be provided and free redistribution must be         *
 * allowed.  All GPL references to "this License", are to be treated as    *
 * including the terms and conditions of this license text as well.        *
 *                                                                         *
 * Because this license imposes special exceptions to the GPL, Covered     *
 * Work may not be combined (even as part of a larger work) with plain GPL *
 * software.  The terms, conditions, and exceptions of this license must   *
 * be included as well.  This license is incompatible with some other open *
 * source licenses as well.  In some cases we can relicense portions of    *
 * RFIDler or grant special permissions to use it in other open source     *
 * software.  Please contact sales@aperturelabs.com with any such requests.*
 * Similarly, we don't incorporate incompatible open source software into  *
 * Covered Software without special permission from the copyright holders. *
 *                                                                         *
 * If you have any questions about the licensing restrictions on using     *
 * RFIDler in other works, are happy to help.  As mentioned above, we also *
 * offer alternative license to integrate RFIDler into proprietary         *
 * applications and appliances.  These contracts have been sold to dozens  *
 * of software vendors, and generally include a perpetual license as well  *
 * as providing for priority support and updates.  They also fund the      *
 * continued development of RFIDler.  Please email sales@aperturelabs.com  *
 * for further information.                                                *
 * If you have received a written license agreement or contract for        *
 * Covered Software stating terms other than these, you may choose to use  *
 * and redistribute Covered Software under those terms instead of these.   *
 *                                                                         *
 * Source is provided to this software because we believe users have a     *
 * right to know exactly what a program is going to do before they run it. *
 * This also allows you to audit the software for security holes (none     *
 * have been found so far).                                                *
 *                                                                         *
 * Source code also allows you to port RFIDler to new platforms, fix bugs, *
 * and add new features.  You are highly encouraged to send your changes   *
 * to the RFIDler mailing list for possible incorporation into the         *
 * main distribution.  By sending these changes to Aperture Labs Ltd. or   *
 * one of the Aperture Labs Ltd. development mailing lists, or checking    *
 * them into the RFIDler source code repository, it is understood (unless  *
 * you specify otherwise) that you are offering the RFIDler Project        *
 * (Aperture Labs Ltd.) the unlimited, non-exclusive right to reuse,       *
 * modify, and relicense the code.  RFIDler will always be available Open  *
 * Source, but this is important because the inability to relicense code   *
 * has caused devastating problems for other Free Software projects (such  *
 * as KDE and NASM).  We also occasionally relicense the code to third     *
 * parties as discussed above. If you wish to specify special license      *
 * conditions of your contributions, just say so when you send them.       *
 *                                                                         *
 * This program is distributed in the hope that it will be useful, but     *
 * WITHOUT ANY WARRANTY; without even the implied warranty of              *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the RFIDler   *
 * license file for more details (it's in a COPYING file included with     *
 * RFIDler, and also available from                                        *
 *   https://github.com/ApertureLabsLtd/RFIDler/COPYING                    *
 *                                                                         *
 ***************************************************************************/

// Author: Adam Laurie <adam@aperturelabs.com>


#include "HardwareProfile.h"
#include "util.h"
#include "rfidler.h"
#include "hid.h"
#include "wiegand.h"

// convert null-terminated BCD UID (8 digits) to hid26 encoded hex
// UID is SSSIIIII where S is site-code and I is ID
BOOL bcd_to_hid26_hex(unsigned char *hid26, unsigned char *bcd)
{
    if(bcd_to_hid26_bin(hid26, bcd))
        return binarraytohex(hid26, hid26, 96);
    else
        return FALSE;
}

// convert 96 bit HID FSK data to 8 digit BCD UID
BOOL hid26_hex_to_uid(unsigned char *response, unsigned char *hid26)
{
    BYTE tmp[96], tmp1[7];
    unsigned int site;
    unsigned int id;
    // todo parity checking etc.

    if(!hextobinarray(tmp, hid26))
        return FALSE;
    
    // skip 44 bit header
    memcpy(tmp, tmp + 44, 52);
    
    // manchester decode
    if(manchester_decode(tmp, tmp, 52) != 26)
        return FALSE;

    // convert to hex, ignoring parity bits
    if(!binarraytohex(tmp1, tmp + 1, 24))
        return FALSE;
    // convert hex to site/id
    sscanf(tmp1,"%2X%4X", &site, &id);
    // final output 8 byte BCD
    sprintf(response,"%03d%05d", site, id);

    return TRUE;
}

// convert null-terminated BCD UID (8 digits) to 96 bit hid26 encoded binary array
BOOL bcd_to_hid26_bin(unsigned char *hid26, unsigned char *bcd)
{
    unsigned char tmp1[8], tmp2[26];
    unsigned int tmpint;

    if(strlen(bcd) != 8)
        return FALSE;

    // convert BCD site code to HEX
    sscanf(bcd, "%03d", &tmpint);
    sprintf(tmp2, "%02x", tmpint);
    memcpy(tmp1, tmp2, 2);

    // convert BCD ID to HEX
    sscanf(bcd + 3, "%05d", &tmpint);;
    sprintf(tmp2, "%04x", tmpint);
    // copy with trailing NULL
    memcpy(tmp1 + 2, tmp2, 5);

    // convert full HEX to binary, leaving room for parity prefix
    hextobinarray(tmp2 + 1, tmp1);
    
    wiegand_add_parity(tmp2, tmp2 + 1, 24);
    // magic 44 bit hid26 header
    hextobinarray(hid26, "1D555955556");
    // add manchester encoded hid data
    manchester_encode(hid26 + 44, tmp2, 26);
    return TRUE;
}

// return raw HEX UID
BOOL hid26_get_uid(BYTE *response)
{
    return fsk_raw_get_uid(response);
}


// convert null-terminated BCD UID (11 digits) to hid35 encoded hex
// UID is SSSSIIIIIII where S is site-code and I is ID
BOOL bcd_to_hid35_hex(unsigned char *hid35, unsigned char *bcd)
{
    if(bcd_to_hid35_bin(hid35, bcd))
        return binarraytohex(hid35, hid35, 96);
    else
        return FALSE;
}

// convert 96 bit HID FSK data to 11 digit BCD UID
BOOL hid35_hex_to_uid(unsigned char *response, unsigned char *hid35)
{
    BYTE tmp[96], tmp1[9];
    unsigned int site;
    unsigned int id;
    // todo parity checking etc.

    if(!hextobinarray(tmp, hid35))
        return FALSE;

    // skip 26 bit header
    memcpy(tmp, tmp + 26, 70);

    // manchester decode
    if(manchester_decode(tmp, tmp, 70) != 35)
        return FALSE;

    // convert to hex, ignoring parity bits
    if(!binarraytohex(tmp1, tmp + 2, 32))
        return FALSE;

    // convert hex to site/id
    sscanf(tmp1,"%3X%5X", &site, &id);
    // final output 11 byte BCD
    sprintf(response,"%04d%07d", site, id);

    return TRUE;
}

// convert null-terminated BCD UID (11 digits) to 96 bit hid35 encoded binary array
BOOL bcd_to_hid35_bin(unsigned char *hid35, unsigned char *bcd)
{
    unsigned char tmp1[10], tmp2[35];
    unsigned int tmpint;

    if(strlen(bcd) != 10)
        return FALSE;

    // convert BCD site code to HEX
    sscanf(bcd, "%04d", &tmpint);
    sprintf(tmp2, "%03x", tmpint);
    memcpy(tmp1, tmp2, 3);

    // convert BCD ID to HEX
    sscanf(bcd + 3, "%07d", &tmpint);;
    sprintf(tmp2, "%05x", tmpint);
    // copy with trailing NULL
    memcpy(tmp1 + 3, tmp2, 6);

    // convert full HEX to binary, leaving room for parity prefix
    hextobinarray(tmp2 + 1, tmp1);

    wiegand_add_parity(tmp2, tmp2 + 1, 24);
    // magic 20 bit hid35 header
    hextobinarray(hid35, "05");
    // add manchester encoded hid data
    manchester_encode(hid35 + 26, tmp2, 35);
    return TRUE;
}

// return raw HEX UID
BOOL hid35_get_uid(BYTE *response)
{
    return fsk_raw_get_uid(response);
}
