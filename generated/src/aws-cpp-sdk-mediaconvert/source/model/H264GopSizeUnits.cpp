/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/H264GopSizeUnits.h>
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
      namespace H264GopSizeUnitsMapper
      {

        static const int FRAMES_HASH = HashingUtils::HashString("FRAMES");
        static const int SECONDS_HASH = HashingUtils::HashString("SECONDS");
        static const int AUTO_HASH = HashingUtils::HashString("AUTO");


        H264GopSizeUnits GetH264GopSizeUnitsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FRAMES_HASH)
          {
            return H264GopSizeUnits::FRAMES;
          }
          else if (hashCode == SECONDS_HASH)
          {
            return H264GopSizeUnits::SECONDS;
          }
          else if (hashCode == AUTO_HASH)
          {
            return H264GopSizeUnits::AUTO;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<H264GopSizeUnits>(hashCode);
          }

          return H264GopSizeUnits::NOT_SET;
        }

        Aws::String GetNameForH264GopSizeUnits(H264GopSizeUnits enumValue)
        {
          switch(enumValue)
          {
          case H264GopSizeUnits::NOT_SET:
            return {};
          case H264GopSizeUnits::FRAMES:
            return "FRAMES";
          case H264GopSizeUnits::SECONDS:
            return "SECONDS";
          case H264GopSizeUnits::AUTO:
            return "AUTO";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace H264GopSizeUnitsMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
