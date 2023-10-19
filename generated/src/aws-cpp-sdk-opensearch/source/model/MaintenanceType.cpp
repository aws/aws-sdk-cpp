/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/MaintenanceType.h>
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
      namespace MaintenanceTypeMapper
      {

        static const int REBOOT_NODE_HASH = HashingUtils::HashString("REBOOT_NODE");
        static const int RESTART_SEARCH_PROCESS_HASH = HashingUtils::HashString("RESTART_SEARCH_PROCESS");
        static const int RESTART_DASHBOARD_HASH = HashingUtils::HashString("RESTART_DASHBOARD");


        MaintenanceType GetMaintenanceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REBOOT_NODE_HASH)
          {
            return MaintenanceType::REBOOT_NODE;
          }
          else if (hashCode == RESTART_SEARCH_PROCESS_HASH)
          {
            return MaintenanceType::RESTART_SEARCH_PROCESS;
          }
          else if (hashCode == RESTART_DASHBOARD_HASH)
          {
            return MaintenanceType::RESTART_DASHBOARD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MaintenanceType>(hashCode);
          }

          return MaintenanceType::NOT_SET;
        }

        Aws::String GetNameForMaintenanceType(MaintenanceType enumValue)
        {
          switch(enumValue)
          {
          case MaintenanceType::NOT_SET:
            return {};
          case MaintenanceType::REBOOT_NODE:
            return "REBOOT_NODE";
          case MaintenanceType::RESTART_SEARCH_PROCESS:
            return "RESTART_SEARCH_PROCESS";
          case MaintenanceType::RESTART_DASHBOARD:
            return "RESTART_DASHBOARD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MaintenanceTypeMapper
    } // namespace Model
  } // namespace OpenSearchService
} // namespace Aws
