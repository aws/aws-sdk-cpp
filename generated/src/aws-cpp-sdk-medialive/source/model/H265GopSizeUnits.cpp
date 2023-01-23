/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/H265GopSizeUnits.h>
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
      namespace H265GopSizeUnitsMapper
      {

        static const int FRAMES_HASH = HashingUtils::HashString("FRAMES");
        static const int SECONDS_HASH = HashingUtils::HashString("SECONDS");


        H265GopSizeUnits GetH265GopSizeUnitsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FRAMES_HASH)
          {
            return H265GopSizeUnits::FRAMES;
          }
          else if (hashCode == SECONDS_HASH)
          {
            return H265GopSizeUnits::SECONDS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<H265GopSizeUnits>(hashCode);
          }

          return H265GopSizeUnits::NOT_SET;
        }

        Aws::String GetNameForH265GopSizeUnits(H265GopSizeUnits enumValue)
        {
          switch(enumValue)
          {
          case H265GopSizeUnits::FRAMES:
            return "FRAMES";
          case H265GopSizeUnits::SECONDS:
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

      } // namespace H265GopSizeUnitsMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
