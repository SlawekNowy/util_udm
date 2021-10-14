/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef __UDM_DEFINITIONS_HPP__
#define __UDM_DEFINITIONS_HPP__

#ifndef UDM_SHARED
	#define DLLUDM
#elif UDM_EXPORT
	#ifdef __linux__
		#define DLLUDM __attribute__((visibility("default")))
	#else
		#define DLLUDM __declspec(dllexport)
	#endif
#else
	#ifdef __linux__
		#define DLLUDM
	#else
		#define DLLUDM __declspec(dllimport)
	#endif
#endif

#endif
