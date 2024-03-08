/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/MedicalScribeJobStatus.h>
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
      namespace MedicalScribeJobStatusMapper
      {

        static const int QUEUED_HASH = HashingUtils::HashString("QUEUED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");


        MedicalScribeJobStatus GetMedicalScribeJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == QUEUED_HASH)
          {
            return MedicalScribeJobStatus::QUEUED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return MedicalScribeJobStatus::IN_PROGRESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return MedicalScribeJobStatus::FAILED;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return MedicalScribeJobStatus::COMPLETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MedicalScribeJobStatus>(hashCode);
          }

          return MedicalScribeJobStatus::NOT_SET;
        }

        Aws::String GetNameForMedicalScribeJobStatus(MedicalScribeJobStatus enumValue)
        {
          switch(enumValue)
          {
          case MedicalScribeJobStatus::NOT_SET:
            return {};
          case MedicalScribeJobStatus::QUEUED:
            return "QUEUED";
          case MedicalScribeJobStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case MedicalScribeJobStatus::FAILED:
            return "FAILED";
          case MedicalScribeJobStatus::COMPLETED:
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

      } // namespace MedicalScribeJobStatusMapper
    } // namespace Model
  } // namespace TranscribeService
} // namespace Aws
