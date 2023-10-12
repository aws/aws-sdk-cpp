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

        static constexpr uint32_t QUEUED_HASH = ConstExprHashingUtils::HashString("QUEUED");
        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        SnapshotJobStatus GetSnapshotJobStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
