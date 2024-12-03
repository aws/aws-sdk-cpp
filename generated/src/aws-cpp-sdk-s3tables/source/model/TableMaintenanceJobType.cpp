/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3tables/model/TableMaintenanceJobType.h>
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
      namespace TableMaintenanceJobTypeMapper
      {

        static const int icebergCompaction_HASH = HashingUtils::HashString("icebergCompaction");
        static const int icebergSnapshotManagement_HASH = HashingUtils::HashString("icebergSnapshotManagement");
        static const int icebergUnreferencedFileRemoval_HASH = HashingUtils::HashString("icebergUnreferencedFileRemoval");


        TableMaintenanceJobType GetTableMaintenanceJobTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == icebergCompaction_HASH)
          {
            return TableMaintenanceJobType::icebergCompaction;
          }
          else if (hashCode == icebergSnapshotManagement_HASH)
          {
            return TableMaintenanceJobType::icebergSnapshotManagement;
          }
          else if (hashCode == icebergUnreferencedFileRemoval_HASH)
          {
            return TableMaintenanceJobType::icebergUnreferencedFileRemoval;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TableMaintenanceJobType>(hashCode);
          }

          return TableMaintenanceJobType::NOT_SET;
        }

        Aws::String GetNameForTableMaintenanceJobType(TableMaintenanceJobType enumValue)
        {
          switch(enumValue)
          {
          case TableMaintenanceJobType::NOT_SET:
            return {};
          case TableMaintenanceJobType::icebergCompaction:
            return "icebergCompaction";
          case TableMaintenanceJobType::icebergSnapshotManagement:
            return "icebergSnapshotManagement";
          case TableMaintenanceJobType::icebergUnreferencedFileRemoval:
            return "icebergUnreferencedFileRemoval";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TableMaintenanceJobTypeMapper
    } // namespace Model
  } // namespace S3Tables
} // namespace Aws
