/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Ac3DynamicRangeCompressionRf.h>
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
      namespace Ac3DynamicRangeCompressionRfMapper
      {

        static const int FILM_STANDARD_HASH = HashingUtils::HashString("FILM_STANDARD");
        static const int FILM_LIGHT_HASH = HashingUtils::HashString("FILM_LIGHT");
        static const int MUSIC_STANDARD_HASH = HashingUtils::HashString("MUSIC_STANDARD");
        static const int MUSIC_LIGHT_HASH = HashingUtils::HashString("MUSIC_LIGHT");
        static const int SPEECH_HASH = HashingUtils::HashString("SPEECH");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        Ac3DynamicRangeCompressionRf GetAc3DynamicRangeCompressionRfForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FILM_STANDARD_HASH)
          {
            return Ac3DynamicRangeCompressionRf::FILM_STANDARD;
          }
          else if (hashCode == FILM_LIGHT_HASH)
          {
            return Ac3DynamicRangeCompressionRf::FILM_LIGHT;
          }
          else if (hashCode == MUSIC_STANDARD_HASH)
          {
            return Ac3DynamicRangeCompressionRf::MUSIC_STANDARD;
          }
          else if (hashCode == MUSIC_LIGHT_HASH)
          {
            return Ac3DynamicRangeCompressionRf::MUSIC_LIGHT;
          }
          else if (hashCode == SPEECH_HASH)
          {
            return Ac3DynamicRangeCompressionRf::SPEECH;
          }
          else if (hashCode == NONE_HASH)
          {
            return Ac3DynamicRangeCompressionRf::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Ac3DynamicRangeCompressionRf>(hashCode);
          }

          return Ac3DynamicRangeCompressionRf::NOT_SET;
        }

        Aws::String GetNameForAc3DynamicRangeCompressionRf(Ac3DynamicRangeCompressionRf enumValue)
        {
          switch(enumValue)
          {
          case Ac3DynamicRangeCompressionRf::NOT_SET:
            return {};
          case Ac3DynamicRangeCompressionRf::FILM_STANDARD:
            return "FILM_STANDARD";
          case Ac3DynamicRangeCompressionRf::FILM_LIGHT:
            return "FILM_LIGHT";
          case Ac3DynamicRangeCompressionRf::MUSIC_STANDARD:
            return "MUSIC_STANDARD";
          case Ac3DynamicRangeCompressionRf::MUSIC_LIGHT:
            return "MUSIC_LIGHT";
          case Ac3DynamicRangeCompressionRf::SPEECH:
            return "SPEECH";
          case Ac3DynamicRangeCompressionRf::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Ac3DynamicRangeCompressionRfMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
