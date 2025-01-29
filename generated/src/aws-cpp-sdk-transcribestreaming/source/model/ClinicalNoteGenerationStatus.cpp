/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribestreaming/model/ClinicalNoteGenerationStatus.h>
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
      namespace ClinicalNoteGenerationStatusMapper
      {

        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");


        ClinicalNoteGenerationStatus GetClinicalNoteGenerationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return ClinicalNoteGenerationStatus::IN_PROGRESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ClinicalNoteGenerationStatus::FAILED;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return ClinicalNoteGenerationStatus::COMPLETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ClinicalNoteGenerationStatus>(hashCode);
          }

          return ClinicalNoteGenerationStatus::NOT_SET;
        }

        Aws::String GetNameForClinicalNoteGenerationStatus(ClinicalNoteGenerationStatus enumValue)
        {
          switch(enumValue)
          {
          case ClinicalNoteGenerationStatus::NOT_SET:
            return {};
          case ClinicalNoteGenerationStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case ClinicalNoteGenerationStatus::FAILED:
            return "FAILED";
          case ClinicalNoteGenerationStatus::COMPLETED:
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

      } // namespace ClinicalNoteGenerationStatusMapper
    } // namespace Model
  } // namespace TranscribeStreamingService
} // namespace Aws
