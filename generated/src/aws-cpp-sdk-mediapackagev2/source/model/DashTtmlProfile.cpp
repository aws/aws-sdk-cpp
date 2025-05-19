/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/DashTtmlProfile.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace mediapackagev2
  {
    namespace Model
    {
      namespace DashTtmlProfileMapper
      {

        static const int IMSC_1_HASH = HashingUtils::HashString("IMSC_1");
        static const int EBU_TT_D_101_HASH = HashingUtils::HashString("EBU_TT_D_101");


        DashTtmlProfile GetDashTtmlProfileForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IMSC_1_HASH)
          {
            return DashTtmlProfile::IMSC_1;
          }
          else if (hashCode == EBU_TT_D_101_HASH)
          {
            return DashTtmlProfile::EBU_TT_D_101;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DashTtmlProfile>(hashCode);
          }

          return DashTtmlProfile::NOT_SET;
        }

        Aws::String GetNameForDashTtmlProfile(DashTtmlProfile enumValue)
        {
          switch(enumValue)
          {
          case DashTtmlProfile::NOT_SET:
            return {};
          case DashTtmlProfile::IMSC_1:
            return "IMSC_1";
          case DashTtmlProfile::EBU_TT_D_101:
            return "EBU_TT_D_101";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DashTtmlProfileMapper
    } // namespace Model
  } // namespace mediapackagev2
} // namespace Aws
