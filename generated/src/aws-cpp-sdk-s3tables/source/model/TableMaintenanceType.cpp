/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3tables/model/TableMaintenanceType.h>
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
      namespace TableMaintenanceTypeMapper
      {

        static const int icebergCompaction_HASH = HashingUtils::HashString("icebergCompaction");
        static const int icebergSnapshotManagement_HASH = HashingUtils::HashString("icebergSnapshotManagement");


        TableMaintenanceType GetTableMaintenanceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == icebergCompaction_HASH)
          {
            return TableMaintenanceType::icebergCompaction;
          }
          else if (hashCode == icebergSnapshotManagement_HASH)
          {
            return TableMaintenanceType::icebergSnapshotManagement;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TableMaintenanceType>(hashCode);
          }

          return TableMaintenanceType::NOT_SET;
        }

        Aws::String GetNameForTableMaintenanceType(TableMaintenanceType enumValue)
        {
          switch(enumValue)
          {
          case TableMaintenanceType::NOT_SET:
            return {};
          case TableMaintenanceType::icebergCompaction:
            return "icebergCompaction";
          case TableMaintenanceType::icebergSnapshotManagement:
            return "icebergSnapshotManagement";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TableMaintenanceTypeMapper
    } // namespace Model
  } // namespace S3Tables
} // namespace Aws
