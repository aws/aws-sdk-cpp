/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/FlowOperationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NetworkFirewall
  {
    namespace Model
    {
      namespace FlowOperationStatusMapper
      {

        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int COMPLETED_WITH_ERRORS_HASH = HashingUtils::HashString("COMPLETED_WITH_ERRORS");


        FlowOperationStatus GetFlowOperationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COMPLETED_HASH)
          {
            return FlowOperationStatus::COMPLETED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return FlowOperationStatus::IN_PROGRESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return FlowOperationStatus::FAILED;
          }
          else if (hashCode == COMPLETED_WITH_ERRORS_HASH)
          {
            return FlowOperationStatus::COMPLETED_WITH_ERRORS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FlowOperationStatus>(hashCode);
          }

          return FlowOperationStatus::NOT_SET;
        }

        Aws::String GetNameForFlowOperationStatus(FlowOperationStatus enumValue)
        {
          switch(enumValue)
          {
          case FlowOperationStatus::NOT_SET:
            return {};
          case FlowOperationStatus::COMPLETED:
            return "COMPLETED";
          case FlowOperationStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case FlowOperationStatus::FAILED:
            return "FAILED";
          case FlowOperationStatus::COMPLETED_WITH_ERRORS:
            return "COMPLETED_WITH_ERRORS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FlowOperationStatusMapper
    } // namespace Model
  } // namespace NetworkFirewall
} // namespace Aws
