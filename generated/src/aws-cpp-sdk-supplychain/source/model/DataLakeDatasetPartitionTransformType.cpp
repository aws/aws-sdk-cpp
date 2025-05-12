/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/supplychain/model/DataLakeDatasetPartitionTransformType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SupplyChain
  {
    namespace Model
    {
      namespace DataLakeDatasetPartitionTransformTypeMapper
      {

        static const int YEAR_HASH = HashingUtils::HashString("YEAR");
        static const int MONTH_HASH = HashingUtils::HashString("MONTH");
        static const int DAY_HASH = HashingUtils::HashString("DAY");
        static const int HOUR_HASH = HashingUtils::HashString("HOUR");
        static const int IDENTITY_HASH = HashingUtils::HashString("IDENTITY");


        DataLakeDatasetPartitionTransformType GetDataLakeDatasetPartitionTransformTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == YEAR_HASH)
          {
            return DataLakeDatasetPartitionTransformType::YEAR;
          }
          else if (hashCode == MONTH_HASH)
          {
            return DataLakeDatasetPartitionTransformType::MONTH;
          }
          else if (hashCode == DAY_HASH)
          {
            return DataLakeDatasetPartitionTransformType::DAY;
          }
          else if (hashCode == HOUR_HASH)
          {
            return DataLakeDatasetPartitionTransformType::HOUR;
          }
          else if (hashCode == IDENTITY_HASH)
          {
            return DataLakeDatasetPartitionTransformType::IDENTITY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataLakeDatasetPartitionTransformType>(hashCode);
          }

          return DataLakeDatasetPartitionTransformType::NOT_SET;
        }

        Aws::String GetNameForDataLakeDatasetPartitionTransformType(DataLakeDatasetPartitionTransformType enumValue)
        {
          switch(enumValue)
          {
          case DataLakeDatasetPartitionTransformType::NOT_SET:
            return {};
          case DataLakeDatasetPartitionTransformType::YEAR:
            return "YEAR";
          case DataLakeDatasetPartitionTransformType::MONTH:
            return "MONTH";
          case DataLakeDatasetPartitionTransformType::DAY:
            return "DAY";
          case DataLakeDatasetPartitionTransformType::HOUR:
            return "HOUR";
          case DataLakeDatasetPartitionTransformType::IDENTITY:
            return "IDENTITY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataLakeDatasetPartitionTransformTypeMapper
    } // namespace Model
  } // namespace SupplyChain
} // namespace Aws
