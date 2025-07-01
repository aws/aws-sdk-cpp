/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/odb/model/DbNodeMaintenanceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace odb
  {
    namespace Model
    {
      namespace DbNodeMaintenanceTypeMapper
      {

        static const int VMDB_REBOOT_MIGRATION_HASH = HashingUtils::HashString("VMDB_REBOOT_MIGRATION");


        DbNodeMaintenanceType GetDbNodeMaintenanceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VMDB_REBOOT_MIGRATION_HASH)
          {
            return DbNodeMaintenanceType::VMDB_REBOOT_MIGRATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DbNodeMaintenanceType>(hashCode);
          }

          return DbNodeMaintenanceType::NOT_SET;
        }

        Aws::String GetNameForDbNodeMaintenanceType(DbNodeMaintenanceType enumValue)
        {
          switch(enumValue)
          {
          case DbNodeMaintenanceType::NOT_SET:
            return {};
          case DbNodeMaintenanceType::VMDB_REBOOT_MIGRATION:
            return "VMDB_REBOOT_MIGRATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DbNodeMaintenanceTypeMapper
    } // namespace Model
  } // namespace odb
} // namespace Aws
