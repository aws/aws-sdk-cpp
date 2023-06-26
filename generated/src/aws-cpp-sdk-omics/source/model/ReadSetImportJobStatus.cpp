/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/ReadSetImportJobStatus.h>
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
      namespace ReadSetImportJobStatusMapper
      {

        static const int SUBMITTED_HASH = HashingUtils::HashString("SUBMITTED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int CANCELLING_HASH = HashingUtils::HashString("CANCELLING");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int COMPLETED_WITH_FAILURES_HASH = HashingUtils::HashString("COMPLETED_WITH_FAILURES");


        ReadSetImportJobStatus GetReadSetImportJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUBMITTED_HASH)
          {
            return ReadSetImportJobStatus::SUBMITTED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return ReadSetImportJobStatus::IN_PROGRESS;
          }
          else if (hashCode == CANCELLING_HASH)
          {
            return ReadSetImportJobStatus::CANCELLING;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return ReadSetImportJobStatus::CANCELLED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ReadSetImportJobStatus::FAILED;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return ReadSetImportJobStatus::COMPLETED;
          }
          else if (hashCode == COMPLETED_WITH_FAILURES_HASH)
          {
            return ReadSetImportJobStatus::COMPLETED_WITH_FAILURES;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReadSetImportJobStatus>(hashCode);
          }

          return ReadSetImportJobStatus::NOT_SET;
        }

        Aws::String GetNameForReadSetImportJobStatus(ReadSetImportJobStatus enumValue)
        {
          switch(enumValue)
          {
          case ReadSetImportJobStatus::SUBMITTED:
            return "SUBMITTED";
          case ReadSetImportJobStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case ReadSetImportJobStatus::CANCELLING:
            return "CANCELLING";
          case ReadSetImportJobStatus::CANCELLED:
            return "CANCELLED";
          case ReadSetImportJobStatus::FAILED:
            return "FAILED";
          case ReadSetImportJobStatus::COMPLETED:
            return "COMPLETED";
          case ReadSetImportJobStatus::COMPLETED_WITH_FAILURES:
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

      } // namespace ReadSetImportJobStatusMapper
    } // namespace Model
  } // namespace Omics
} // namespace Aws
