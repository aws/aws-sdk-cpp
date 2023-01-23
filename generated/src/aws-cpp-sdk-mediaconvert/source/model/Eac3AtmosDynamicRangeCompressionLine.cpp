/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Eac3AtmosDynamicRangeCompressionLine.h>
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
      namespace Eac3AtmosDynamicRangeCompressionLineMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int FILM_STANDARD_HASH = HashingUtils::HashString("FILM_STANDARD");
        static const int FILM_LIGHT_HASH = HashingUtils::HashString("FILM_LIGHT");
        static const int MUSIC_STANDARD_HASH = HashingUtils::HashString("MUSIC_STANDARD");
        static const int MUSIC_LIGHT_HASH = HashingUtils::HashString("MUSIC_LIGHT");
        static const int SPEECH_HASH = HashingUtils::HashString("SPEECH");


        Eac3AtmosDynamicRangeCompressionLine GetEac3AtmosDynamicRangeCompressionLineForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return Eac3AtmosDynamicRangeCompressionLine::NONE;
          }
          else if (hashCode == FILM_STANDARD_HASH)
          {
            return Eac3AtmosDynamicRangeCompressionLine::FILM_STANDARD;
          }
          else if (hashCode == FILM_LIGHT_HASH)
          {
            return Eac3AtmosDynamicRangeCompressionLine::FILM_LIGHT;
          }
          else if (hashCode == MUSIC_STANDARD_HASH)
          {
            return Eac3AtmosDynamicRangeCompressionLine::MUSIC_STANDARD;
          }
          else if (hashCode == MUSIC_LIGHT_HASH)
          {
            return Eac3AtmosDynamicRangeCompressionLine::MUSIC_LIGHT;
          }
          else if (hashCode == SPEECH_HASH)
          {
            return Eac3AtmosDynamicRangeCompressionLine::SPEECH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Eac3AtmosDynamicRangeCompressionLine>(hashCode);
          }

          return Eac3AtmosDynamicRangeCompressionLine::NOT_SET;
        }

        Aws::String GetNameForEac3AtmosDynamicRangeCompressionLine(Eac3AtmosDynamicRangeCompressionLine enumValue)
        {
          switch(enumValue)
          {
          case Eac3AtmosDynamicRangeCompressionLine::NONE:
            return "NONE";
          case Eac3AtmosDynamicRangeCompressionLine::FILM_STANDARD:
            return "FILM_STANDARD";
          case Eac3AtmosDynamicRangeCompressionLine::FILM_LIGHT:
            return "FILM_LIGHT";
          case Eac3AtmosDynamicRangeCompressionLine::MUSIC_STANDARD:
            return "MUSIC_STANDARD";
          case Eac3AtmosDynamicRangeCompressionLine::MUSIC_LIGHT:
            return "MUSIC_LIGHT";
          case Eac3AtmosDynamicRangeCompressionLine::SPEECH:
            return "SPEECH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Eac3AtmosDynamicRangeCompressionLineMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
