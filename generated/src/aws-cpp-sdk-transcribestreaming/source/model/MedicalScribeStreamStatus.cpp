/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribestreaming/model/MedicalScribeStreamStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace TranscribeStreamingService
  {
    namespace Model
    {
      namespace MedicalScribeStreamStatusMapper
      {

        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int PAUSED_HASH = HashingUtils::HashString("PAUSED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");


        MedicalScribeStreamStatus GetMedicalScribeStreamStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return MedicalScribeStreamStatus::IN_PROGRESS;
          }
          else if (hashCode == PAUSED_HASH)
          {
            return MedicalScribeStreamStatus::PAUSED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return MedicalScribeStreamStatus::FAILED;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return MedicalScribeStreamStatus::COMPLETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MedicalScribeStreamStatus>(hashCode);
          }

          return MedicalScribeStreamStatus::NOT_SET;
        }

        Aws::String GetNameForMedicalScribeStreamStatus(MedicalScribeStreamStatus enumValue)
        {
          switch(enumValue)
          {
          case MedicalScribeStreamStatus::NOT_SET:
            return {};
          case MedicalScribeStreamStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case MedicalScribeStreamStatus::PAUSED:
            return "PAUSED";
          case MedicalScribeStreamStatus::FAILED:
            return "FAILED";
          case MedicalScribeStreamStatus::COMPLETED:
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

      } // namespace MedicalScribeStreamStatusMapper
    } // namespace Model
  } // namespace TranscribeStreamingService
} // namespace Aws
