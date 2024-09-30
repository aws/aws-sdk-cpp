/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/supplychain/model/DataIntegrationFlowTargetType.h>
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
      namespace DataIntegrationFlowTargetTypeMapper
      {

        static const int S3_HASH = HashingUtils::HashString("S3");
        static const int DATASET_HASH = HashingUtils::HashString("DATASET");


        DataIntegrationFlowTargetType GetDataIntegrationFlowTargetTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == S3_HASH)
          {
            return DataIntegrationFlowTargetType::S3;
          }
          else if (hashCode == DATASET_HASH)
          {
            return DataIntegrationFlowTargetType::DATASET;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataIntegrationFlowTargetType>(hashCode);
          }

          return DataIntegrationFlowTargetType::NOT_SET;
        }

        Aws::String GetNameForDataIntegrationFlowTargetType(DataIntegrationFlowTargetType enumValue)
        {
          switch(enumValue)
          {
          case DataIntegrationFlowTargetType::NOT_SET:
            return {};
          case DataIntegrationFlowTargetType::S3:
            return "S3";
          case DataIntegrationFlowTargetType::DATASET:
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

      } // namespace DataIntegrationFlowTargetTypeMapper
    } // namespace Model
  } // namespace SupplyChain
} // namespace Aws
