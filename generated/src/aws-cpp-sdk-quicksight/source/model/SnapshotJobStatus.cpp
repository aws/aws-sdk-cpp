/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SnapshotJobStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace SnapshotJobStatusMapper
      {

        static const int QUEUED_HASH = HashingUtils::HashString("QUEUED");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        SnapshotJobStatus GetSnapshotJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == QUEUED_HASH)
          {
            return SnapshotJobStatus::QUEUED;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return SnapshotJobStatus::RUNNING;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return SnapshotJobStatus::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return SnapshotJobStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SnapshotJobStatus>(hashCode);
          }

          return SnapshotJobStatus::NOT_SET;
        }

        Aws::String GetNameForSnapshotJobStatus(SnapshotJobStatus enumValue)
        {
          switch(enumValue)
          {
          case SnapshotJobStatus::NOT_SET:
            return {};
          case SnapshotJobStatus::QUEUED:
            return "QUEUED";
          case SnapshotJobStatus::RUNNING:
            return "RUNNING";
          case SnapshotJobStatus::COMPLETED:
            return "COMPLETED";
          case SnapshotJobStatus::FAILED:
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

      } // namespace SnapshotJobStatusMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
