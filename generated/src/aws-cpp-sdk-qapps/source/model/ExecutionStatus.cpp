/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qapps/model/ExecutionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QApps
  {
    namespace Model
    {
      namespace ExecutionStatusMapper
      {

        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int WAITING_HASH = HashingUtils::HashString("WAITING");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");


        ExecutionStatus GetExecutionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return ExecutionStatus::IN_PROGRESS;
          }
          else if (hashCode == WAITING_HASH)
          {
            return ExecutionStatus::WAITING;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return ExecutionStatus::COMPLETED;
          }
          else if (hashCode == ERROR__HASH)
          {
            return ExecutionStatus::ERROR_;
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
          case ExecutionStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case ExecutionStatus::WAITING:
            return "WAITING";
          case ExecutionStatus::COMPLETED:
            return "COMPLETED";
          case ExecutionStatus::ERROR_:
            return "ERROR";
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
  } // namespace QApps
} // namespace Aws
