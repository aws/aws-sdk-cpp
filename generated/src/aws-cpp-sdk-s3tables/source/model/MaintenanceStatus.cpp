/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3tables/model/MaintenanceStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace S3Tables
  {
    namespace Model
    {
      namespace MaintenanceStatusMapper
      {

        static const int enabled_HASH = HashingUtils::HashString("enabled");
        static const int disabled_HASH = HashingUtils::HashString("disabled");


        MaintenanceStatus GetMaintenanceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == enabled_HASH)
          {
            return MaintenanceStatus::enabled;
          }
          else if (hashCode == disabled_HASH)
          {
            return MaintenanceStatus::disabled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MaintenanceStatus>(hashCode);
          }

          return MaintenanceStatus::NOT_SET;
        }

        Aws::String GetNameForMaintenanceStatus(MaintenanceStatus enumValue)
        {
          switch(enumValue)
          {
          case MaintenanceStatus::NOT_SET:
            return {};
          case MaintenanceStatus::enabled:
            return "enabled";
          case MaintenanceStatus::disabled:
            return "disabled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MaintenanceStatusMapper
    } // namespace Model
  } // namespace S3Tables
} // namespace Aws
