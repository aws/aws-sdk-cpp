/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DashboardFilterAttribute.h>
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
      namespace DashboardFilterAttributeMapper
      {

        static const int QUICKSIGHT_USER_HASH = HashingUtils::HashString("QUICKSIGHT_USER");
        static const int QUICKSIGHT_VIEWER_OR_OWNER_HASH = HashingUtils::HashString("QUICKSIGHT_VIEWER_OR_OWNER");
        static const int DIRECT_QUICKSIGHT_VIEWER_OR_OWNER_HASH = HashingUtils::HashString("DIRECT_QUICKSIGHT_VIEWER_OR_OWNER");
        static const int QUICKSIGHT_OWNER_HASH = HashingUtils::HashString("QUICKSIGHT_OWNER");
        static const int DIRECT_QUICKSIGHT_OWNER_HASH = HashingUtils::HashString("DIRECT_QUICKSIGHT_OWNER");
        static const int DIRECT_QUICKSIGHT_SOLE_OWNER_HASH = HashingUtils::HashString("DIRECT_QUICKSIGHT_SOLE_OWNER");
        static const int DASHBOARD_NAME_HASH = HashingUtils::HashString("DASHBOARD_NAME");


        DashboardFilterAttribute GetDashboardFilterAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == QUICKSIGHT_USER_HASH)
          {
            return DashboardFilterAttribute::QUICKSIGHT_USER;
          }
          else if (hashCode == QUICKSIGHT_VIEWER_OR_OWNER_HASH)
          {
            return DashboardFilterAttribute::QUICKSIGHT_VIEWER_OR_OWNER;
          }
          else if (hashCode == DIRECT_QUICKSIGHT_VIEWER_OR_OWNER_HASH)
          {
            return DashboardFilterAttribute::DIRECT_QUICKSIGHT_VIEWER_OR_OWNER;
          }
          else if (hashCode == QUICKSIGHT_OWNER_HASH)
          {
            return DashboardFilterAttribute::QUICKSIGHT_OWNER;
          }
          else if (hashCode == DIRECT_QUICKSIGHT_OWNER_HASH)
          {
            return DashboardFilterAttribute::DIRECT_QUICKSIGHT_OWNER;
          }
          else if (hashCode == DIRECT_QUICKSIGHT_SOLE_OWNER_HASH)
          {
            return DashboardFilterAttribute::DIRECT_QUICKSIGHT_SOLE_OWNER;
          }
          else if (hashCode == DASHBOARD_NAME_HASH)
          {
            return DashboardFilterAttribute::DASHBOARD_NAME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DashboardFilterAttribute>(hashCode);
          }

          return DashboardFilterAttribute::NOT_SET;
        }

        Aws::String GetNameForDashboardFilterAttribute(DashboardFilterAttribute enumValue)
        {
          switch(enumValue)
          {
          case DashboardFilterAttribute::QUICKSIGHT_USER:
            return "QUICKSIGHT_USER";
          case DashboardFilterAttribute::QUICKSIGHT_VIEWER_OR_OWNER:
            return "QUICKSIGHT_VIEWER_OR_OWNER";
          case DashboardFilterAttribute::DIRECT_QUICKSIGHT_VIEWER_OR_OWNER:
            return "DIRECT_QUICKSIGHT_VIEWER_OR_OWNER";
          case DashboardFilterAttribute::QUICKSIGHT_OWNER:
            return "QUICKSIGHT_OWNER";
          case DashboardFilterAttribute::DIRECT_QUICKSIGHT_OWNER:
            return "DIRECT_QUICKSIGHT_OWNER";
          case DashboardFilterAttribute::DIRECT_QUICKSIGHT_SOLE_OWNER:
            return "DIRECT_QUICKSIGHT_SOLE_OWNER";
          case DashboardFilterAttribute::DASHBOARD_NAME:
            return "DASHBOARD_NAME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DashboardFilterAttributeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
