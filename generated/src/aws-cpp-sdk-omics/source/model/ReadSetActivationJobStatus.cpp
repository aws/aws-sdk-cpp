/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/ReadSetActivationJobStatus.h>
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
      namespace ReadSetActivationJobStatusMapper
      {

        static constexpr uint32_t SUBMITTED_HASH = ConstExprHashingUtils::HashString("SUBMITTED");
        static constexpr uint32_t IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IN_PROGRESS");
        static constexpr uint32_t CANCELLING_HASH = ConstExprHashingUtils::HashString("CANCELLING");
        static constexpr uint32_t CANCELLED_HASH = ConstExprHashingUtils::HashString("CANCELLED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");
        static constexpr uint32_t COMPLETED_WITH_FAILURES_HASH = ConstExprHashingUtils::HashString("COMPLETED_WITH_FAILURES");


        ReadSetActivationJobStatus GetReadSetActivationJobStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUBMITTED_HASH)
          {
            return ReadSetActivationJobStatus::SUBMITTED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return ReadSetActivationJobStatus::IN_PROGRESS;
          }
          else if (hashCode == CANCELLING_HASH)
          {
            return ReadSetActivationJobStatus::CANCELLING;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return ReadSetActivationJobStatus::CANCELLED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ReadSetActivationJobStatus::FAILED;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return ReadSetActivationJobStatus::COMPLETED;
          }
          else if (hashCode == COMPLETED_WITH_FAILURES_HASH)
          {
            return ReadSetActivationJobStatus::COMPLETED_WITH_FAILURES;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReadSetActivationJobStatus>(hashCode);
          }

          return ReadSetActivationJobStatus::NOT_SET;
        }

        Aws::String GetNameForReadSetActivationJobStatus(ReadSetActivationJobStatus enumValue)
        {
          switch(enumValue)
          {
          case ReadSetActivationJobStatus::NOT_SET:
            return {};
          case ReadSetActivationJobStatus::SUBMITTED:
            return "SUBMITTED";
          case ReadSetActivationJobStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case ReadSetActivationJobStatus::CANCELLING:
            return "CANCELLING";
          case ReadSetActivationJobStatus::CANCELLED:
            return "CANCELLED";
          case ReadSetActivationJobStatus::FAILED:
            return "FAILED";
          case ReadSetActivationJobStatus::COMPLETED:
            return "COMPLETED";
          case ReadSetActivationJobStatus::COMPLETED_WITH_FAILURES:
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

      } // namespace ReadSetActivationJobStatusMapper
    } // namespace Model
  } // namespace Omics
} // namespace Aws
