/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Eac3DrcLine.h>
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
      namespace Eac3DrcLineMapper
      {

        static const int FILM_LIGHT_HASH = HashingUtils::HashString("FILM_LIGHT");
        static const int FILM_STANDARD_HASH = HashingUtils::HashString("FILM_STANDARD");
        static const int MUSIC_LIGHT_HASH = HashingUtils::HashString("MUSIC_LIGHT");
        static const int MUSIC_STANDARD_HASH = HashingUtils::HashString("MUSIC_STANDARD");
        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int SPEECH_HASH = HashingUtils::HashString("SPEECH");


        Eac3DrcLine GetEac3DrcLineForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FILM_LIGHT_HASH)
          {
            return Eac3DrcLine::FILM_LIGHT;
          }
          else if (hashCode == FILM_STANDARD_HASH)
          {
            return Eac3DrcLine::FILM_STANDARD;
          }
          else if (hashCode == MUSIC_LIGHT_HASH)
          {
            return Eac3DrcLine::MUSIC_LIGHT;
          }
          else if (hashCode == MUSIC_STANDARD_HASH)
          {
            return Eac3DrcLine::MUSIC_STANDARD;
          }
          else if (hashCode == NONE_HASH)
          {
            return Eac3DrcLine::NONE;
          }
          else if (hashCode == SPEECH_HASH)
          {
            return Eac3DrcLine::SPEECH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Eac3DrcLine>(hashCode);
          }

          return Eac3DrcLine::NOT_SET;
        }

        Aws::String GetNameForEac3DrcLine(Eac3DrcLine enumValue)
        {
          switch(enumValue)
          {
          case Eac3DrcLine::FILM_LIGHT:
            return "FILM_LIGHT";
          case Eac3DrcLine::FILM_STANDARD:
            return "FILM_STANDARD";
          case Eac3DrcLine::MUSIC_LIGHT:
            return "MUSIC_LIGHT";
          case Eac3DrcLine::MUSIC_STANDARD:
            return "MUSIC_STANDARD";
          case Eac3DrcLine::NONE:
            return "NONE";
          case Eac3DrcLine::SPEECH:
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

      } // namespace Eac3DrcLineMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
