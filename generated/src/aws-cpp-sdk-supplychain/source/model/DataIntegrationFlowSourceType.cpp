/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/supplychain/model/DataIntegrationFlowSourceType.h>
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
      namespace DataIntegrationFlowSourceTypeMapper
      {

        static const int S3_HASH = HashingUtils::HashString("S3");
        static const int DATASET_HASH = HashingUtils::HashString("DATASET");


        DataIntegrationFlowSourceType GetDataIntegrationFlowSourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == S3_HASH)
          {
            return DataIntegrationFlowSourceType::S3;
          }
          else if (hashCode == DATASET_HASH)
          {
            return DataIntegrationFlowSourceType::DATASET;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataIntegrationFlowSourceType>(hashCode);
          }

          return DataIntegrationFlowSourceType::NOT_SET;
        }

        Aws::String GetNameForDataIntegrationFlowSourceType(DataIntegrationFlowSourceType enumValue)
        {
          switch(enumValue)
          {
          case DataIntegrationFlowSourceType::NOT_SET:
            return {};
          case DataIntegrationFlowSourceType::S3:
            return "S3";
          case DataIntegrationFlowSourceType::DATASET:
            return "DATASET";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataIntegrationFlowSourceTypeMapper
    } // namespace Model
  } // namespace SupplyChain
} // namespace Aws
