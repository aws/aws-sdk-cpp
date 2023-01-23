/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Eac3DynamicRangeCompressionRf.h>
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
      namespace Eac3DynamicRangeCompressionRfMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int FILM_STANDARD_HASH = HashingUtils::HashString("FILM_STANDARD");
        static const int FILM_LIGHT_HASH = HashingUtils::HashString("FILM_LIGHT");
        static const int MUSIC_STANDARD_HASH = HashingUtils::HashString("MUSIC_STANDARD");
        static const int MUSIC_LIGHT_HASH = HashingUtils::HashString("MUSIC_LIGHT");
        static const int SPEECH_HASH = HashingUtils::HashString("SPEECH");


        Eac3DynamicRangeCompressionRf GetEac3DynamicRangeCompressionRfForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return Eac3DynamicRangeCompressionRf::NONE;
          }
          else if (hashCode == FILM_STANDARD_HASH)
          {
            return Eac3DynamicRangeCompressionRf::FILM_STANDARD;
          }
          else if (hashCode == FILM_LIGHT_HASH)
          {
            return Eac3DynamicRangeCompressionRf::FILM_LIGHT;
          }
          else if (hashCode == MUSIC_STANDARD_HASH)
          {
            return Eac3DynamicRangeCompressionRf::MUSIC_STANDARD;
          }
          else if (hashCode == MUSIC_LIGHT_HASH)
          {
            return Eac3DynamicRangeCompressionRf::MUSIC_LIGHT;
          }
          else if (hashCode == SPEECH_HASH)
          {
            return Eac3DynamicRangeCompressionRf::SPEECH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Eac3DynamicRangeCompressionRf>(hashCode);
          }

          return Eac3DynamicRangeCompressionRf::NOT_SET;
        }

        Aws::String GetNameForEac3DynamicRangeCompressionRf(Eac3DynamicRangeCompressionRf enumValue)
        {
          switch(enumValue)
          {
          case Eac3DynamicRangeCompressionRf::NONE:
            return "NONE";
          case Eac3DynamicRangeCompressionRf::FILM_STANDARD:
            return "FILM_STANDARD";
          case Eac3DynamicRangeCompressionRf::FILM_LIGHT:
            return "FILM_LIGHT";
          case Eac3DynamicRangeCompressionRf::MUSIC_STANDARD:
            return "MUSIC_STANDARD";
          case Eac3DynamicRangeCompressionRf::MUSIC_LIGHT:
            return "MUSIC_LIGHT";
          case Eac3DynamicRangeCompressionRf::SPEECH:
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

      } // namespace Eac3DynamicRangeCompressionRfMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
