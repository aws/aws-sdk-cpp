/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/supplychain/model/DataIntegrationFlowDedupeStrategyType.h>
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
      namespace DataIntegrationFlowDedupeStrategyTypeMapper
      {

        static const int FIELD_PRIORITY_HASH = HashingUtils::HashString("FIELD_PRIORITY");


        DataIntegrationFlowDedupeStrategyType GetDataIntegrationFlowDedupeStrategyTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FIELD_PRIORITY_HASH)
          {
            return DataIntegrationFlowDedupeStrategyType::FIELD_PRIORITY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataIntegrationFlowDedupeStrategyType>(hashCode);
          }

          return DataIntegrationFlowDedupeStrategyType::NOT_SET;
        }

        Aws::String GetNameForDataIntegrationFlowDedupeStrategyType(DataIntegrationFlowDedupeStrategyType enumValue)
        {
          switch(enumValue)
          {
          case DataIntegrationFlowDedupeStrategyType::NOT_SET:
            return {};
          case DataIntegrationFlowDedupeStrategyType::FIELD_PRIORITY:
            return "FIELD_PRIORITY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataIntegrationFlowDedupeStrategyTypeMapper
    } // namespace Model
  } // namespace SupplyChain
} // namespace Aws
