/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/ExecutionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SFN
  {
    namespace Model
    {
      namespace ExecutionStatusMapper
      {

        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t SUCCEEDED_HASH = ConstExprHashingUtils::HashString("SUCCEEDED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t TIMED_OUT_HASH = ConstExprHashingUtils::HashString("TIMED_OUT");
        static constexpr uint32_t ABORTED_HASH = ConstExprHashingUtils::HashString("ABORTED");


        ExecutionStatus GetExecutionStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RUNNING_HASH)
          {
            return ExecutionStatus::RUNNING;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return ExecutionStatus::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ExecutionStatus::FAILED;
          }
          else if (hashCode == TIMED_OUT_HASH)
          {
            return ExecutionStatus::TIMED_OUT;
          }
          else if (hashCode == ABORTED_HASH)
          {
            return ExecutionStatus::ABORTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExecutionStatus>(hashCode);
          }

          return ExecutionStatus::NOT_SET;
        }

        Aws::String GetNameForExecutionStatus(ExecutionStatus enumValue)
        {
          switch(enumValue)
          {
          case ExecutionStatus::NOT_SET:
            return {};
          case ExecutionStatus::RUNNING:
            return "RUNNING";
          case ExecutionStatus::SUCCEEDED:
            return "SUCCEEDED";
          case ExecutionStatus::FAILED:
            return "FAILED";
          case ExecutionStatus::TIMED_OUT:
            return "TIMED_OUT";
          case ExecutionStatus::ABORTED:
            return "ABORTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExecutionStatusMapper
    } // namespace Model
  } // namespace SFN
} // namespace Aws
