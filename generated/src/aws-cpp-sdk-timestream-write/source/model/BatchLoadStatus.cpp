/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-write/model/BatchLoadStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace TimestreamWrite
  {
    namespace Model
    {
      namespace BatchLoadStatusMapper
      {

        static constexpr uint32_t CREATED_HASH = ConstExprHashingUtils::HashString("CREATED");
        static constexpr uint32_t IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IN_PROGRESS");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t SUCCEEDED_HASH = ConstExprHashingUtils::HashString("SUCCEEDED");
        static constexpr uint32_t PROGRESS_STOPPED_HASH = ConstExprHashingUtils::HashString("PROGRESS_STOPPED");
        static constexpr uint32_t PENDING_RESUME_HASH = ConstExprHashingUtils::HashString("PENDING_RESUME");


        BatchLoadStatus GetBatchLoadStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATED_HASH)
          {
            return BatchLoadStatus::CREATED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return BatchLoadStatus::IN_PROGRESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return BatchLoadStatus::FAILED;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return BatchLoadStatus::SUCCEEDED;
          }
          else if (hashCode == PROGRESS_STOPPED_HASH)
          {
            return BatchLoadStatus::PROGRESS_STOPPED;
          }
          else if (hashCode == PENDING_RESUME_HASH)
          {
            return BatchLoadStatus::PENDING_RESUME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BatchLoadStatus>(hashCode);
          }

          return BatchLoadStatus::NOT_SET;
        }

        Aws::String GetNameForBatchLoadStatus(BatchLoadStatus enumValue)
        {
          switch(enumValue)
          {
          case BatchLoadStatus::NOT_SET:
            return {};
          case BatchLoadStatus::CREATED:
            return "CREATED";
          case BatchLoadStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case BatchLoadStatus::FAILED:
            return "FAILED";
          case BatchLoadStatus::SUCCEEDED:
            return "SUCCEEDED";
          case BatchLoadStatus::PROGRESS_STOPPED:
            return "PROGRESS_STOPPED";
          case BatchLoadStatus::PENDING_RESUME:
            return "PENDING_RESUME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BatchLoadStatusMapper
    } // namespace Model
  } // namespace TimestreamWrite
} // namespace Aws
