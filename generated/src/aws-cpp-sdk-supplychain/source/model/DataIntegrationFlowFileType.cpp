/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/supplychain/model/DataIntegrationFlowFileType.h>
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
      namespace DataIntegrationFlowFileTypeMapper
      {

        static const int CSV_HASH = HashingUtils::HashString("CSV");
        static const int PARQUET_HASH = HashingUtils::HashString("PARQUET");
        static const int JSON_HASH = HashingUtils::HashString("JSON");


        DataIntegrationFlowFileType GetDataIntegrationFlowFileTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CSV_HASH)
          {
            return DataIntegrationFlowFileType::CSV;
          }
          else if (hashCode == PARQUET_HASH)
          {
            return DataIntegrationFlowFileType::PARQUET;
          }
          else if (hashCode == JSON_HASH)
          {
            return DataIntegrationFlowFileType::JSON;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataIntegrationFlowFileType>(hashCode);
          }

          return DataIntegrationFlowFileType::NOT_SET;
        }

        Aws::String GetNameForDataIntegrationFlowFileType(DataIntegrationFlowFileType enumValue)
        {
          switch(enumValue)
          {
          case DataIntegrationFlowFileType::NOT_SET:
            return {};
          case DataIntegrationFlowFileType::CSV:
            return "CSV";
          case DataIntegrationFlowFileType::PARQUET:
            return "PARQUET";
          case DataIntegrationFlowFileType::JSON:
            return "JSON";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataIntegrationFlowFileTypeMapper
    } // namespace Model
  } // namespace SupplyChain
} // namespace Aws
