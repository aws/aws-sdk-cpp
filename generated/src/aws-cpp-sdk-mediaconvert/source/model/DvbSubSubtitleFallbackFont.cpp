/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/DvbSubSubtitleFallbackFont.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace DvbSubSubtitleFallbackFontMapper
      {

        static constexpr uint32_t BEST_MATCH_HASH = ConstExprHashingUtils::HashString("BEST_MATCH");
        static constexpr uint32_t MONOSPACED_SANSSERIF_HASH = ConstExprHashingUtils::HashString("MONOSPACED_SANSSERIF");
        static constexpr uint32_t MONOSPACED_SERIF_HASH = ConstExprHashingUtils::HashString("MONOSPACED_SERIF");
        static constexpr uint32_t PROPORTIONAL_SANSSERIF_HASH = ConstExprHashingUtils::HashString("PROPORTIONAL_SANSSERIF");
        static constexpr uint32_t PROPORTIONAL_SERIF_HASH = ConstExprHashingUtils::HashString("PROPORTIONAL_SERIF");


        DvbSubSubtitleFallbackFont GetDvbSubSubtitleFallbackFontForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BEST_MATCH_HASH)
          {
            return DvbSubSubtitleFallbackFont::BEST_MATCH;
          }
          else if (hashCode == MONOSPACED_SANSSERIF_HASH)
          {
            return DvbSubSubtitleFallbackFont::MONOSPACED_SANSSERIF;
          }
          else if (hashCode == MONOSPACED_SERIF_HASH)
          {
            return DvbSubSubtitleFallbackFont::MONOSPACED_SERIF;
          }
          else if (hashCode == PROPORTIONAL_SANSSERIF_HASH)
          {
            return DvbSubSubtitleFallbackFont::PROPORTIONAL_SANSSERIF;
          }
          else if (hashCode == PROPORTIONAL_SERIF_HASH)
          {
            return DvbSubSubtitleFallbackFont::PROPORTIONAL_SERIF;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DvbSubSubtitleFallbackFont>(hashCode);
          }

          return DvbSubSubtitleFallbackFont::NOT_SET;
        }

        Aws::String GetNameForDvbSubSubtitleFallbackFont(DvbSubSubtitleFallbackFont enumValue)
        {
          switch(enumValue)
          {
          case DvbSubSubtitleFallbackFont::NOT_SET:
            return {};
          case DvbSubSubtitleFallbackFont::BEST_MATCH:
            return "BEST_MATCH";
          case DvbSubSubtitleFallbackFont::MONOSPACED_SANSSERIF:
            return "MONOSPACED_SANSSERIF";
          case DvbSubSubtitleFallbackFont::MONOSPACED_SERIF:
            return "MONOSPACED_SERIF";
          case DvbSubSubtitleFallbackFont::PROPORTIONAL_SANSSERIF:
            return "PROPORTIONAL_SANSSERIF";
          case DvbSubSubtitleFallbackFont::PROPORTIONAL_SERIF:
            return "PROPORTIONAL_SERIF";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DvbSubSubtitleFallbackFontMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
