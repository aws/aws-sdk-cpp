/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/supplychain/model/DataIntegrationFlowExecutionStatus.h>
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
      namespace DataIntegrationFlowExecutionStatusMapper
      {

        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        DataIntegrationFlowExecutionStatus GetDataIntegrationFlowExecutionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUCCEEDED_HASH)
          {
            return DataIntegrationFlowExecutionStatus::SUCCEEDED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return DataIntegrationFlowExecutionStatus::IN_PROGRESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return DataIntegrationFlowExecutionStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataIntegrationFlowExecutionStatus>(hashCode);
          }

          return DataIntegrationFlowExecutionStatus::NOT_SET;
        }

        Aws::String GetNameForDataIntegrationFlowExecutionStatus(DataIntegrationFlowExecutionStatus enumValue)
        {
          switch(enumValue)
          {
          case DataIntegrationFlowExecutionStatus::NOT_SET:
            return {};
          case DataIntegrationFlowExecutionStatus::SUCCEEDED:
            return "SUCCEEDED";
          case DataIntegrationFlowExecutionStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case DataIntegrationFlowExecutionStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataIntegrationFlowExecutionStatusMapper
    } // namespace Model
  } // namespace SupplyChain
} // namespace Aws
