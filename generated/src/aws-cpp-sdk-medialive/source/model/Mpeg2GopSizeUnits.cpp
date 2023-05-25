/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Mpeg2GopSizeUnits.h>
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
      namespace Mpeg2GopSizeUnitsMapper
      {

        static const int FRAMES_HASH = HashingUtils::HashString("FRAMES");
        static const int SECONDS_HASH = HashingUtils::HashString("SECONDS");


        Mpeg2GopSizeUnits GetMpeg2GopSizeUnitsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FRAMES_HASH)
          {
            return Mpeg2GopSizeUnits::FRAMES;
          }
          else if (hashCode == SECONDS_HASH)
          {
            return Mpeg2GopSizeUnits::SECONDS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Mpeg2GopSizeUnits>(hashCode);
          }

          return Mpeg2GopSizeUnits::NOT_SET;
        }

        Aws::String GetNameForMpeg2GopSizeUnits(Mpeg2GopSizeUnits enumValue)
        {
          switch(enumValue)
          {
          case Mpeg2GopSizeUnits::FRAMES:
            return "FRAMES";
          case Mpeg2GopSizeUnits::SECONDS:
            return "SECONDS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Mpeg2GopSizeUnitsMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
