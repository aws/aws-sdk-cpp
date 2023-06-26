/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Eac3AtmosDrcLine.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace Eac3AtmosDrcLineMapper
      {

        static const int FILM_LIGHT_HASH = HashingUtils::HashString("FILM_LIGHT");
        static const int FILM_STANDARD_HASH = HashingUtils::HashString("FILM_STANDARD");
        static const int MUSIC_LIGHT_HASH = HashingUtils::HashString("MUSIC_LIGHT");
        static const int MUSIC_STANDARD_HASH = HashingUtils::HashString("MUSIC_STANDARD");
        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int SPEECH_HASH = HashingUtils::HashString("SPEECH");


        Eac3AtmosDrcLine GetEac3AtmosDrcLineForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FILM_LIGHT_HASH)
          {
            return Eac3AtmosDrcLine::FILM_LIGHT;
          }
          else if (hashCode == FILM_STANDARD_HASH)
          {
            return Eac3AtmosDrcLine::FILM_STANDARD;
          }
          else if (hashCode == MUSIC_LIGHT_HASH)
          {
            return Eac3AtmosDrcLine::MUSIC_LIGHT;
          }
          else if (hashCode == MUSIC_STANDARD_HASH)
          {
            return Eac3AtmosDrcLine::MUSIC_STANDARD;
          }
          else if (hashCode == NONE_HASH)
          {
            return Eac3AtmosDrcLine::NONE;
          }
          else if (hashCode == SPEECH_HASH)
          {
            return Eac3AtmosDrcLine::SPEECH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Eac3AtmosDrcLine>(hashCode);
          }

          return Eac3AtmosDrcLine::NOT_SET;
        }

        Aws::String GetNameForEac3AtmosDrcLine(Eac3AtmosDrcLine enumValue)
        {
          switch(enumValue)
          {
          case Eac3AtmosDrcLine::FILM_LIGHT:
            return "FILM_LIGHT";
          case Eac3AtmosDrcLine::FILM_STANDARD:
            return "FILM_STANDARD";
          case Eac3AtmosDrcLine::MUSIC_LIGHT:
            return "MUSIC_LIGHT";
          case Eac3AtmosDrcLine::MUSIC_STANDARD:
            return "MUSIC_STANDARD";
          case Eac3AtmosDrcLine::NONE:
            return "NONE";
          case Eac3AtmosDrcLine::SPEECH:
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

      } // namespace Eac3AtmosDrcLineMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
