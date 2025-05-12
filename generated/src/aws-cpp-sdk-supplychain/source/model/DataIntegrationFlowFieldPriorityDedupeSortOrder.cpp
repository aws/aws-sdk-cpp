/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/supplychain/model/DataIntegrationFlowFieldPriorityDedupeSortOrder.h>
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
      namespace DataIntegrationFlowFieldPriorityDedupeSortOrderMapper
      {

        static const int ASC_HASH = HashingUtils::HashString("ASC");
        static const int DESC_HASH = HashingUtils::HashString("DESC");


        DataIntegrationFlowFieldPriorityDedupeSortOrder GetDataIntegrationFlowFieldPriorityDedupeSortOrderForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ASC_HASH)
          {
            return DataIntegrationFlowFieldPriorityDedupeSortOrder::ASC;
          }
          else if (hashCode == DESC_HASH)
          {
            return DataIntegrationFlowFieldPriorityDedupeSortOrder::DESC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataIntegrationFlowFieldPriorityDedupeSortOrder>(hashCode);
          }

          return DataIntegrationFlowFieldPriorityDedupeSortOrder::NOT_SET;
        }

        Aws::String GetNameForDataIntegrationFlowFieldPriorityDedupeSortOrder(DataIntegrationFlowFieldPriorityDedupeSortOrder enumValue)
        {
          switch(enumValue)
          {
          case DataIntegrationFlowFieldPriorityDedupeSortOrder::NOT_SET:
            return {};
          case DataIntegrationFlowFieldPriorityDedupeSortOrder::ASC:
            return "ASC";
          case DataIntegrationFlowFieldPriorityDedupeSortOrder::DESC:
            return "DESC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataIntegrationFlowFieldPriorityDedupeSortOrderMapper
    } // namespace Model
  } // namespace SupplyChain
} // namespace Aws
