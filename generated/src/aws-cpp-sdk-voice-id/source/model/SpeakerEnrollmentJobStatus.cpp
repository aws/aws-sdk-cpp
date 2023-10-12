/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/voice-id/model/SpeakerEnrollmentJobStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace VoiceID
  {
    namespace Model
    {
      namespace SpeakerEnrollmentJobStatusMapper
      {

        static constexpr uint32_t SUBMITTED_HASH = ConstExprHashingUtils::HashString("SUBMITTED");
        static constexpr uint32_t IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IN_PROGRESS");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");
        static constexpr uint32_t COMPLETED_WITH_ERRORS_HASH = ConstExprHashingUtils::HashString("COMPLETED_WITH_ERRORS");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        SpeakerEnrollmentJobStatus GetSpeakerEnrollmentJobStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUBMITTED_HASH)
          {
            return SpeakerEnrollmentJobStatus::SUBMITTED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return SpeakerEnrollmentJobStatus::IN_PROGRESS;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return SpeakerEnrollmentJobStatus::COMPLETED;
          }
          else if (hashCode == COMPLETED_WITH_ERRORS_HASH)
          {
            return SpeakerEnrollmentJobStatus::COMPLETED_WITH_ERRORS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return SpeakerEnrollmentJobStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SpeakerEnrollmentJobStatus>(hashCode);
          }

          return SpeakerEnrollmentJobStatus::NOT_SET;
        }

        Aws::String GetNameForSpeakerEnrollmentJobStatus(SpeakerEnrollmentJobStatus enumValue)
        {
          switch(enumValue)
          {
          case SpeakerEnrollmentJobStatus::NOT_SET:
            return {};
          case SpeakerEnrollmentJobStatus::SUBMITTED:
            return "SUBMITTED";
          case SpeakerEnrollmentJobStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case SpeakerEnrollmentJobStatus::COMPLETED:
            return "COMPLETED";
          case SpeakerEnrollmentJobStatus::COMPLETED_WITH_ERRORS:
            return "COMPLETED_WITH_ERRORS";
          case SpeakerEnrollmentJobStatus::FAILED:
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

      } // namespace SpeakerEnrollmentJobStatusMapper
    } // namespace Model
  } // namespace VoiceID
} // namespace Aws
