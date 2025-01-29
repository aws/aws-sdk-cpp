/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribestreaming/model/MedicalScribeVocabularyFilterMethod.h>
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
      namespace MedicalScribeVocabularyFilterMethodMapper
      {

        static const int remove_HASH = HashingUtils::HashString("remove");
        static const int mask_HASH = HashingUtils::HashString("mask");
        static const int tag_HASH = HashingUtils::HashString("tag");


        MedicalScribeVocabularyFilterMethod GetMedicalScribeVocabularyFilterMethodForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == remove_HASH)
          {
            return MedicalScribeVocabularyFilterMethod::remove;
          }
          else if (hashCode == mask_HASH)
          {
            return MedicalScribeVocabularyFilterMethod::mask;
          }
          else if (hashCode == tag_HASH)
          {
            return MedicalScribeVocabularyFilterMethod::tag;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MedicalScribeVocabularyFilterMethod>(hashCode);
          }

          return MedicalScribeVocabularyFilterMethod::NOT_SET;
        }

        Aws::String GetNameForMedicalScribeVocabularyFilterMethod(MedicalScribeVocabularyFilterMethod enumValue)
        {
          switch(enumValue)
          {
          case MedicalScribeVocabularyFilterMethod::NOT_SET:
            return {};
          case MedicalScribeVocabularyFilterMethod::remove:
            return "remove";
          case MedicalScribeVocabularyFilterMethod::mask:
            return "mask";
          case MedicalScribeVocabularyFilterMethod::tag:
            return "tag";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MedicalScribeVocabularyFilterMethodMapper
    } // namespace Model
  } // namespace TranscribeStreamingService
} // namespace Aws
