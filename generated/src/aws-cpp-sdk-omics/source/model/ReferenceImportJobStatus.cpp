/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/ReferenceImportJobStatus.h>
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
      namespace ReferenceImportJobStatusMapper
      {

        static const int SUBMITTED_HASH = HashingUtils::HashString("SUBMITTED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int CANCELLING_HASH = HashingUtils::HashString("CANCELLING");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int COMPLETED_WITH_FAILURES_HASH = HashingUtils::HashString("COMPLETED_WITH_FAILURES");


        ReferenceImportJobStatus GetReferenceImportJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUBMITTED_HASH)
          {
            return ReferenceImportJobStatus::SUBMITTED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return ReferenceImportJobStatus::IN_PROGRESS;
          }
          else if (hashCode == CANCELLING_HASH)
          {
            return ReferenceImportJobStatus::CANCELLING;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return ReferenceImportJobStatus::CANCELLED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ReferenceImportJobStatus::FAILED;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return ReferenceImportJobStatus::COMPLETED;
          }
          else if (hashCode == COMPLETED_WITH_FAILURES_HASH)
          {
            return ReferenceImportJobStatus::COMPLETED_WITH_FAILURES;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReferenceImportJobStatus>(hashCode);
          }

          return ReferenceImportJobStatus::NOT_SET;
        }

        Aws::String GetNameForReferenceImportJobStatus(ReferenceImportJobStatus enumValue)
        {
          switch(enumValue)
          {
          case ReferenceImportJobStatus::SUBMITTED:
            return "SUBMITTED";
          case ReferenceImportJobStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case ReferenceImportJobStatus::CANCELLING:
            return "CANCELLING";
          case ReferenceImportJobStatus::CANCELLED:
            return "CANCELLED";
          case ReferenceImportJobStatus::FAILED:
            return "FAILED";
          case ReferenceImportJobStatus::COMPLETED:
            return "COMPLETED";
          case ReferenceImportJobStatus::COMPLETED_WITH_FAILURES:
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

      } // namespace ReferenceImportJobStatusMapper
    } // namespace Model
  } // namespace Omics
} // namespace Aws
