/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/DashProfile.h>
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
      namespace DashProfileMapper
      {

        static const int DVB_DASH_HASH = HashingUtils::HashString("DVB_DASH");


        DashProfile GetDashProfileForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DVB_DASH_HASH)
          {
            return DashProfile::DVB_DASH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DashProfile>(hashCode);
          }

          return DashProfile::NOT_SET;
        }

        Aws::String GetNameForDashProfile(DashProfile enumValue)
        {
          switch(enumValue)
          {
          case DashProfile::NOT_SET:
            return {};
          case DashProfile::DVB_DASH:
            return "DVB_DASH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DashProfileMapper
    } // namespace Model
  } // namespace mediapackagev2
} // namespace Aws
