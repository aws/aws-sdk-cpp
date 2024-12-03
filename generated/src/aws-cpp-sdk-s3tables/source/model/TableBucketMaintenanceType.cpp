/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3tables/model/TableBucketMaintenanceType.h>
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
      namespace TableBucketMaintenanceTypeMapper
      {

        static const int icebergUnreferencedFileRemoval_HASH = HashingUtils::HashString("icebergUnreferencedFileRemoval");


        TableBucketMaintenanceType GetTableBucketMaintenanceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == icebergUnreferencedFileRemoval_HASH)
          {
            return TableBucketMaintenanceType::icebergUnreferencedFileRemoval;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TableBucketMaintenanceType>(hashCode);
          }

          return TableBucketMaintenanceType::NOT_SET;
        }

        Aws::String GetNameForTableBucketMaintenanceType(TableBucketMaintenanceType enumValue)
        {
          switch(enumValue)
          {
          case TableBucketMaintenanceType::NOT_SET:
            return {};
          case TableBucketMaintenanceType::icebergUnreferencedFileRemoval:
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

      } // namespace TableBucketMaintenanceTypeMapper
    } // namespace Model
  } // namespace S3Tables
} // namespace Aws
