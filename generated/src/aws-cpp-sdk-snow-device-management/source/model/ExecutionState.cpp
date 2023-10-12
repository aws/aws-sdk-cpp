/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snow-device-management/model/ExecutionState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SnowDeviceManagement
  {
    namespace Model
    {
      namespace ExecutionStateMapper
      {

        static constexpr uint32_t QUEUED_HASH = ConstExprHashingUtils::HashString("QUEUED");
        static constexpr uint32_t IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IN_PROGRESS");
        static constexpr uint32_t CANCELED_HASH = ConstExprHashingUtils::HashString("CANCELED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t SUCCEEDED_HASH = ConstExprHashingUtils::HashString("SUCCEEDED");
        static constexpr uint32_t REJECTED_HASH = ConstExprHashingUtils::HashString("REJECTED");
        static constexpr uint32_t TIMED_OUT_HASH = ConstExprHashingUtils::HashString("TIMED_OUT");


        ExecutionState GetExecutionStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == QUEUED_HASH)
          {
            return ExecutionState::QUEUED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return ExecutionState::IN_PROGRESS;
          }
          else if (hashCode == CANCELED_HASH)
          {
            return ExecutionState::CANCELED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ExecutionState::FAILED;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return ExecutionState::SUCCEEDED;
          }
          else if (hashCode == REJECTED_HASH)
          {
            return ExecutionState::REJECTED;
          }
          else if (hashCode == TIMED_OUT_HASH)
          {
            return ExecutionState::TIMED_OUT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExecutionState>(hashCode);
          }

          return ExecutionState::NOT_SET;
        }

        Aws::String GetNameForExecutionState(ExecutionState enumValue)
        {
          switch(enumValue)
          {
          case ExecutionState::NOT_SET:
            return {};
          case ExecutionState::QUEUED:
            return "QUEUED";
          case ExecutionState::IN_PROGRESS:
            return "IN_PROGRESS";
          case ExecutionState::CANCELED:
            return "CANCELED";
          case ExecutionState::FAILED:
            return "FAILED";
          case ExecutionState::SUCCEEDED:
            return "SUCCEEDED";
          case ExecutionState::REJECTED:
            return "REJECTED";
          case ExecutionState::TIMED_OUT:
            return "TIMED_OUT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExecutionStateMapper
    } // namespace Model
  } // namespace SnowDeviceManagement
} // namespace Aws
