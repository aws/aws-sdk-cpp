/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/supplychain/model/DataLakeDatasetSchemaFieldType.h>
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
      namespace DataLakeDatasetSchemaFieldTypeMapper
      {

        static const int INT_HASH = HashingUtils::HashString("INT");
        static const int DOUBLE_HASH = HashingUtils::HashString("DOUBLE");
        static const int STRING_HASH = HashingUtils::HashString("STRING");
        static const int TIMESTAMP_HASH = HashingUtils::HashString("TIMESTAMP");
        static const int LONG_HASH = HashingUtils::HashString("LONG");


        DataLakeDatasetSchemaFieldType GetDataLakeDatasetSchemaFieldTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INT_HASH)
          {
            return DataLakeDatasetSchemaFieldType::INT;
          }
          else if (hashCode == DOUBLE_HASH)
          {
            return DataLakeDatasetSchemaFieldType::DOUBLE;
          }
          else if (hashCode == STRING_HASH)
          {
            return DataLakeDatasetSchemaFieldType::STRING;
          }
          else if (hashCode == TIMESTAMP_HASH)
          {
            return DataLakeDatasetSchemaFieldType::TIMESTAMP;
          }
          else if (hashCode == LONG_HASH)
          {
            return DataLakeDatasetSchemaFieldType::LONG;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataLakeDatasetSchemaFieldType>(hashCode);
          }

          return DataLakeDatasetSchemaFieldType::NOT_SET;
        }

        Aws::String GetNameForDataLakeDatasetSchemaFieldType(DataLakeDatasetSchemaFieldType enumValue)
        {
          switch(enumValue)
          {
          case DataLakeDatasetSchemaFieldType::NOT_SET:
            return {};
          case DataLakeDatasetSchemaFieldType::INT:
            return "INT";
          case DataLakeDatasetSchemaFieldType::DOUBLE:
            return "DOUBLE";
          case DataLakeDatasetSchemaFieldType::STRING:
            return "STRING";
          case DataLakeDatasetSchemaFieldType::TIMESTAMP:
            return "TIMESTAMP";
          case DataLakeDatasetSchemaFieldType::LONG:
            return "LONG";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataLakeDatasetSchemaFieldTypeMapper
    } // namespace Model
  } // namespace SupplyChain
} // namespace Aws
