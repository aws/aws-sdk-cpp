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

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int STARTING_HASH = HashingUtils::HashString("STARTING");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        RunStatus GetRunStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
