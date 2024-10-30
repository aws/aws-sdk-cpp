/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/AppConfigType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OpenSearchService
  {
    namespace Model
    {
      namespace AppConfigTypeMapper
      {

        static const int opensearchDashboards_dashboardAdmin_users_HASH = HashingUtils::HashString("opensearchDashboards.dashboardAdmin.users");
        static const int opensearchDashboards_dashboardAdmin_groups_HASH = HashingUtils::HashString("opensearchDashboards.dashboardAdmin.groups");


        AppConfigType GetAppConfigTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == opensearchDashboards_dashboardAdmin_users_HASH)
          {
            return AppConfigType::opensearchDashboards_dashboardAdmin_users;
          }
          else if (hashCode == opensearchDashboards_dashboardAdmin_groups_HASH)
          {
            return AppConfigType::opensearchDashboards_dashboardAdmin_groups;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AppConfigType>(hashCode);
          }

          return AppConfigType::NOT_SET;
        }

        Aws::String GetNameForAppConfigType(AppConfigType enumValue)
        {
          switch(enumValue)
          {
          case AppConfigType::NOT_SET:
            return {};
          case AppConfigType::opensearchDashboards_dashboardAdmin_users:
            return "opensearchDashboards.dashboardAdmin.users";
          case AppConfigType::opensearchDashboards_dashboardAdmin_groups:
            return "opensearchDashboards.dashboardAdmin.groups";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AppConfigTypeMapper
    } // namespace Model
  } // namespace OpenSearchService
} // namespace Aws
