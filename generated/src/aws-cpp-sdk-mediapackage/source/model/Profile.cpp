﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackage/model/Profile.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaPackage
  {
    namespace Model
    {
      namespace ProfileMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int HBBTV_1_5_HASH = HashingUtils::HashString("HBBTV_1_5");
        static const int HYBRIDCAST_HASH = HashingUtils::HashString("HYBRIDCAST");
        static const int DVB_DASH_2014_HASH = HashingUtils::HashString("DVB_DASH_2014");


        Profile GetProfileForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return Profile::NONE;
          }
          else if (hashCode == HBBTV_1_5_HASH)
          {
            return Profile::HBBTV_1_5;
          }
          else if (hashCode == HYBRIDCAST_HASH)
          {
            return Profile::HYBRIDCAST;
          }
          else if (hashCode == DVB_DASH_2014_HASH)
          {
            return Profile::DVB_DASH_2014;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Profile>(hashCode);
          }

          return Profile::NOT_SET;
        }

        Aws::String GetNameForProfile(Profile enumValue)
        {
          switch(enumValue)
          {
          case Profile::NOT_SET:
            return {};
          case Profile::NONE:
            return "NONE";
          case Profile::HBBTV_1_5:
            return "HBBTV_1_5";
          case Profile::HYBRIDCAST:
            return "HYBRIDCAST";
          case Profile::DVB_DASH_2014:
            return "DVB_DASH_2014";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProfileMapper
    } // namespace Model
  } // namespace MediaPackage
} // namespace Aws
