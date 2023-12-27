/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/voice-id/model/FraudsterRegistrationJobStatus.h>
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
      namespace FraudsterRegistrationJobStatusMapper
      {

        static const int SUBMITTED_HASH = HashingUtils::HashString("SUBMITTED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int COMPLETED_WITH_ERRORS_HASH = HashingUtils::HashString("COMPLETED_WITH_ERRORS");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        FraudsterRegistrationJobStatus GetFraudsterRegistrationJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUBMITTED_HASH)
          {
            return FraudsterRegistrationJobStatus::SUBMITTED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return FraudsterRegistrationJobStatus::IN_PROGRESS;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return FraudsterRegistrationJobStatus::COMPLETED;
          }
          else if (hashCode == COMPLETED_WITH_ERRORS_HASH)
          {
            return FraudsterRegistrationJobStatus::COMPLETED_WITH_ERRORS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return FraudsterRegistrationJobStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FraudsterRegistrationJobStatus>(hashCode);
          }

          return FraudsterRegistrationJobStatus::NOT_SET;
        }

        Aws::String GetNameForFraudsterRegistrationJobStatus(FraudsterRegistrationJobStatus enumValue)
        {
          switch(enumValue)
          {
          case FraudsterRegistrationJobStatus::NOT_SET:
            return {};
          case FraudsterRegistrationJobStatus::SUBMITTED:
            return "SUBMITTED";
          case FraudsterRegistrationJobStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case FraudsterRegistrationJobStatus::COMPLETED:
            return "COMPLETED";
          case FraudsterRegistrationJobStatus::COMPLETED_WITH_ERRORS:
            return "COMPLETED_WITH_ERRORS";
          case FraudsterRegistrationJobStatus::FAILED:
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

      } // namespace FraudsterRegistrationJobStatusMapper
    } // namespace Model
  } // namespace VoiceID
} // namespace Aws
