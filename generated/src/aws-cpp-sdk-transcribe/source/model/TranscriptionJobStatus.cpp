/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/TranscriptionJobStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace TranscribeService
  {
    namespace Model
    {
      namespace TranscriptionJobStatusMapper
      {

        static const int QUEUED_HASH = HashingUtils::HashString("QUEUED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");


        TranscriptionJobStatus GetTranscriptionJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == QUEUED_HASH)
          {
            return TranscriptionJobStatus::QUEUED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return TranscriptionJobStatus::IN_PROGRESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return TranscriptionJobStatus::FAILED;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return TranscriptionJobStatus::COMPLETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TranscriptionJobStatus>(hashCode);
          }

          return TranscriptionJobStatus::NOT_SET;
        }

        Aws::String GetNameForTranscriptionJobStatus(TranscriptionJobStatus enumValue)
        {
          switch(enumValue)
          {
          case TranscriptionJobStatus::QUEUED:
            return "QUEUED";
          case TranscriptionJobStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case TranscriptionJobStatus::FAILED:
            return "FAILED";
          case TranscriptionJobStatus::COMPLETED:
            return "COMPLETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TranscriptionJobStatusMapper
    } // namespace Model
  } // namespace TranscribeService
} // namespace Aws
