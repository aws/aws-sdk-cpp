/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/BurninSubtitleFallbackFont.h>
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
      namespace BurninSubtitleFallbackFontMapper
      {

        static const int BEST_MATCH_HASH = HashingUtils::HashString("BEST_MATCH");
        static const int MONOSPACED_SANSSERIF_HASH = HashingUtils::HashString("MONOSPACED_SANSSERIF");
        static const int MONOSPACED_SERIF_HASH = HashingUtils::HashString("MONOSPACED_SERIF");
        static const int PROPORTIONAL_SANSSERIF_HASH = HashingUtils::HashString("PROPORTIONAL_SANSSERIF");
        static const int PROPORTIONAL_SERIF_HASH = HashingUtils::HashString("PROPORTIONAL_SERIF");


        BurninSubtitleFallbackFont GetBurninSubtitleFallbackFontForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BEST_MATCH_HASH)
          {
            return BurninSubtitleFallbackFont::BEST_MATCH;
          }
          else if (hashCode == MONOSPACED_SANSSERIF_HASH)
          {
            return BurninSubtitleFallbackFont::MONOSPACED_SANSSERIF;
          }
          else if (hashCode == MONOSPACED_SERIF_HASH)
          {
            return BurninSubtitleFallbackFont::MONOSPACED_SERIF;
          }
          else if (hashCode == PROPORTIONAL_SANSSERIF_HASH)
          {
            return BurninSubtitleFallbackFont::PROPORTIONAL_SANSSERIF;
          }
          else if (hashCode == PROPORTIONAL_SERIF_HASH)
          {
            return BurninSubtitleFallbackFont::PROPORTIONAL_SERIF;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BurninSubtitleFallbackFont>(hashCode);
          }

          return BurninSubtitleFallbackFont::NOT_SET;
        }

        Aws::String GetNameForBurninSubtitleFallbackFont(BurninSubtitleFallbackFont enumValue)
        {
          switch(enumValue)
          {
          case BurninSubtitleFallbackFont::NOT_SET:
            return {};
          case BurninSubtitleFallbackFont::BEST_MATCH:
            return "BEST_MATCH";
          case BurninSubtitleFallbackFont::MONOSPACED_SANSSERIF:
            return "MONOSPACED_SANSSERIF";
          case BurninSubtitleFallbackFont::MONOSPACED_SERIF:
            return "MONOSPACED_SERIF";
          case BurninSubtitleFallbackFont::PROPORTIONAL_SANSSERIF:
            return "PROPORTIONAL_SANSSERIF";
          case BurninSubtitleFallbackFont::PROPORTIONAL_SERIF:
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

      } // namespace BurninSubtitleFallbackFontMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
