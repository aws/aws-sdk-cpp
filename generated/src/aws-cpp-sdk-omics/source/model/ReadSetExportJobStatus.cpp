/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/ReadSetExportJobStatus.h>
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
      namespace ReadSetExportJobStatusMapper
      {

        static constexpr uint32_t SUBMITTED_HASH = ConstExprHashingUtils::HashString("SUBMITTED");
        static constexpr uint32_t IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IN_PROGRESS");
        static constexpr uint32_t CANCELLING_HASH = ConstExprHashingUtils::HashString("CANCELLING");
        static constexpr uint32_t CANCELLED_HASH = ConstExprHashingUtils::HashString("CANCELLED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");
        static constexpr uint32_t COMPLETED_WITH_FAILURES_HASH = ConstExprHashingUtils::HashString("COMPLETED_WITH_FAILURES");


        ReadSetExportJobStatus GetReadSetExportJobStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUBMITTED_HASH)
          {
            return ReadSetExportJobStatus::SUBMITTED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return ReadSetExportJobStatus::IN_PROGRESS;
          }
          else if (hashCode == CANCELLING_HASH)
          {
            return ReadSetExportJobStatus::CANCELLING;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return ReadSetExportJobStatus::CANCELLED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ReadSetExportJobStatus::FAILED;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return ReadSetExportJobStatus::COMPLETED;
          }
          else if (hashCode == COMPLETED_WITH_FAILURES_HASH)
          {
            return ReadSetExportJobStatus::COMPLETED_WITH_FAILURES;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReadSetExportJobStatus>(hashCode);
          }

          return ReadSetExportJobStatus::NOT_SET;
        }

        Aws::String GetNameForReadSetExportJobStatus(ReadSetExportJobStatus enumValue)
        {
          switch(enumValue)
          {
          case ReadSetExportJobStatus::NOT_SET:
            return {};
          case ReadSetExportJobStatus::SUBMITTED:
            return "SUBMITTED";
          case ReadSetExportJobStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case ReadSetExportJobStatus::CANCELLING:
            return "CANCELLING";
          case ReadSetExportJobStatus::CANCELLED:
            return "CANCELLED";
          case ReadSetExportJobStatus::FAILED:
            return "FAILED";
          case ReadSetExportJobStatus::COMPLETED:
            return "COMPLETED";
          case ReadSetExportJobStatus::COMPLETED_WITH_FAILURES:
            return "COMPLETED_WITH_FAILURES";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReadSetExportJobStatusMapper
    } // namespace Model
  } // namespace Omics
} // namespace Aws
