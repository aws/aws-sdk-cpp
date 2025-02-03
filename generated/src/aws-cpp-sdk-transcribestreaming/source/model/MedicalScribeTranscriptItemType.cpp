/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribestreaming/model/MedicalScribeTranscriptItemType.h>
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
      namespace MedicalScribeTranscriptItemTypeMapper
      {

        static const int pronunciation_HASH = HashingUtils::HashString("pronunciation");
        static const int punctuation_HASH = HashingUtils::HashString("punctuation");


        MedicalScribeTranscriptItemType GetMedicalScribeTranscriptItemTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == pronunciation_HASH)
          {
            return MedicalScribeTranscriptItemType::pronunciation;
          }
          else if (hashCode == punctuation_HASH)
          {
            return MedicalScribeTranscriptItemType::punctuation;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MedicalScribeTranscriptItemType>(hashCode);
          }

          return MedicalScribeTranscriptItemType::NOT_SET;
        }

        Aws::String GetNameForMedicalScribeTranscriptItemType(MedicalScribeTranscriptItemType enumValue)
        {
          switch(enumValue)
          {
          case MedicalScribeTranscriptItemType::NOT_SET:
            return {};
          case MedicalScribeTranscriptItemType::pronunciation:
            return "pronunciation";
          case MedicalScribeTranscriptItemType::punctuation:
            return "punctuation";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MedicalScribeTranscriptItemTypeMapper
    } // namespace Model
  } // namespace TranscribeStreamingService
} // namespace Aws
