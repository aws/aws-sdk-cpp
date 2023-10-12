/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/polly/model/SpeechMarkType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Polly
  {
    namespace Model
    {
      namespace SpeechMarkTypeMapper
      {

        static constexpr uint32_t sentence_HASH = ConstExprHashingUtils::HashString("sentence");
        static constexpr uint32_t ssml_HASH = ConstExprHashingUtils::HashString("ssml");
        static constexpr uint32_t viseme_HASH = ConstExprHashingUtils::HashString("viseme");
        static constexpr uint32_t word_HASH = ConstExprHashingUtils::HashString("word");


        SpeechMarkType GetSpeechMarkTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == sentence_HASH)
          {
            return SpeechMarkType::sentence;
          }
          else if (hashCode == ssml_HASH)
          {
            return SpeechMarkType::ssml;
          }
          else if (hashCode == viseme_HASH)
          {
            return SpeechMarkType::viseme;
          }
          else if (hashCode == word_HASH)
          {
            return SpeechMarkType::word;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SpeechMarkType>(hashCode);
          }

          return SpeechMarkType::NOT_SET;
        }

        Aws::String GetNameForSpeechMarkType(SpeechMarkType enumValue)
        {
          switch(enumValue)
          {
          case SpeechMarkType::NOT_SET:
            return {};
          case SpeechMarkType::sentence:
            return "sentence";
          case SpeechMarkType::ssml:
            return "ssml";
          case SpeechMarkType::viseme:
            return "viseme";
          case SpeechMarkType::word:
            return "word";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SpeechMarkTypeMapper
    } // namespace Model
  } // namespace Polly
} // namespace Aws
