/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Av1GopSizeUnits.h>
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
      namespace Av1GopSizeUnitsMapper
      {

        static const int FRAMES_HASH = HashingUtils::HashString("FRAMES");
        static const int SECONDS_HASH = HashingUtils::HashString("SECONDS");


        Av1GopSizeUnits GetAv1GopSizeUnitsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FRAMES_HASH)
          {
            return Av1GopSizeUnits::FRAMES;
          }
          else if (hashCode == SECONDS_HASH)
          {
            return Av1GopSizeUnits::SECONDS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Av1GopSizeUnits>(hashCode);
          }

          return Av1GopSizeUnits::NOT_SET;
        }

        Aws::String GetNameForAv1GopSizeUnits(Av1GopSizeUnits enumValue)
        {
          switch(enumValue)
          {
          case Av1GopSizeUnits::NOT_SET:
            return {};
          case Av1GopSizeUnits::FRAMES:
            return "FRAMES";
          case Av1GopSizeUnits::SECONDS:
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

      } // namespace Av1GopSizeUnitsMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
