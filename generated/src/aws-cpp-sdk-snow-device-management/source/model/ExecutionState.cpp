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

        static const int QUEUED_HASH = HashingUtils::HashString("QUEUED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int CANCELED_HASH = HashingUtils::HashString("CANCELED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");
        static const int TIMED_OUT_HASH = HashingUtils::HashString("TIMED_OUT");


        ExecutionState GetExecutionStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
