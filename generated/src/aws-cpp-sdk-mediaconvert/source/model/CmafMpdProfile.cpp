/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/CmafMpdProfile.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace CmafMpdProfileMapper
      {

        static const int MAIN_PROFILE_HASH = HashingUtils::HashString("MAIN_PROFILE");
        static const int ON_DEMAND_PROFILE_HASH = HashingUtils::HashString("ON_DEMAND_PROFILE");


        CmafMpdProfile GetCmafMpdProfileForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MAIN_PROFILE_HASH)
          {
            return CmafMpdProfile::MAIN_PROFILE;
          }
          else if (hashCode == ON_DEMAND_PROFILE_HASH)
          {
            return CmafMpdProfile::ON_DEMAND_PROFILE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CmafMpdProfile>(hashCode);
          }

          return CmafMpdProfile::NOT_SET;
        }

        Aws::String GetNameForCmafMpdProfile(CmafMpdProfile enumValue)
        {
          switch(enumValue)
          {
          case CmafMpdProfile::MAIN_PROFILE:
            return "MAIN_PROFILE";
          case CmafMpdProfile::ON_DEMAND_PROFILE:
            return "ON_DEMAND_PROFILE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CmafMpdProfileMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
