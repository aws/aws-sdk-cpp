/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/RunStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Omics
  {
    namespace Model
    {
      namespace RunStatusMapper
      {

        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t STARTING_HASH = ConstExprHashingUtils::HashString("STARTING");
        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t STOPPING_HASH = ConstExprHashingUtils::HashString("STOPPING");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");
        static constexpr uint32_t DELETED_HASH = ConstExprHashingUtils::HashString("DELETED");
        static constexpr uint32_t CANCELLED_HASH = ConstExprHashingUtils::HashString("CANCELLED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        RunStatus GetRunStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return RunStatus::PENDING;
          }
          else if (hashCode == STARTING_HASH)
          {
            return RunStatus::STARTING;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return RunStatus::RUNNING;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return RunStatus::STOPPING;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return RunStatus::COMPLETED;
          }
          else if (hashCode == DELETED_HASH)
          {
            return RunStatus::DELETED;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return RunStatus::CANCELLED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return RunStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RunStatus>(hashCode);
          }

          return RunStatus::NOT_SET;
        }

        Aws::String GetNameForRunStatus(RunStatus enumValue)
        {
          switch(enumValue)
          {
          case RunStatus::NOT_SET:
            return {};
          case RunStatus::PENDING:
            return "PENDING";
          case RunStatus::STARTING:
            return "STARTING";
          case RunStatus::RUNNING:
            return "RUNNING";
          case RunStatus::STOPPING:
            return "STOPPING";
          case RunStatus::COMPLETED:
            return "COMPLETED";
          case RunStatus::DELETED:
            return "DELETED";
          case RunStatus::CANCELLED:
            return "CANCELLED";
          case RunStatus::FAILED:
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

      } // namespace RunStatusMapper
    } // namespace Model
  } // namespace Omics
} // namespace Aws
