/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/VocabularyFilterMethod.h>
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
      namespace VocabularyFilterMethodMapper
      {

        static constexpr uint32_t remove_HASH = ConstExprHashingUtils::HashString("remove");
        static constexpr uint32_t mask_HASH = ConstExprHashingUtils::HashString("mask");
        static constexpr uint32_t tag_HASH = ConstExprHashingUtils::HashString("tag");


        VocabularyFilterMethod GetVocabularyFilterMethodForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == remove_HASH)
          {
            return VocabularyFilterMethod::remove;
          }
          else if (hashCode == mask_HASH)
          {
            return VocabularyFilterMethod::mask;
          }
          else if (hashCode == tag_HASH)
          {
            return VocabularyFilterMethod::tag;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VocabularyFilterMethod>(hashCode);
          }

          return VocabularyFilterMethod::NOT_SET;
        }

        Aws::String GetNameForVocabularyFilterMethod(VocabularyFilterMethod enumValue)
        {
          switch(enumValue)
          {
          case VocabularyFilterMethod::NOT_SET:
            return {};
          case VocabularyFilterMethod::remove:
            return "remove";
          case VocabularyFilterMethod::mask:
            return "mask";
          case VocabularyFilterMethod::tag:
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

      } // namespace VocabularyFilterMethodMapper
    } // namespace Model
  } // namespace TranscribeService
} // namespace Aws
