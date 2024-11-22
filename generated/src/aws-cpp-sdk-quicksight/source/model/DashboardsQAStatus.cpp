/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DashboardsQAStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace DashboardsQAStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        DashboardsQAStatus GetDashboardsQAStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return DashboardsQAStatus::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return DashboardsQAStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DashboardsQAStatus>(hashCode);
          }

          return DashboardsQAStatus::NOT_SET;
        }

        Aws::String GetNameForDashboardsQAStatus(DashboardsQAStatus enumValue)
        {
          switch(enumValue)
          {
          case DashboardsQAStatus::NOT_SET:
            return {};
          case DashboardsQAStatus::ENABLED:
            return "ENABLED";
          case DashboardsQAStatus::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DashboardsQAStatusMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
