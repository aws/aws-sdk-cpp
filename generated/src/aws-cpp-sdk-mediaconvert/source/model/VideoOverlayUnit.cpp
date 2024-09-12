/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/VideoOverlayUnit.h>
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
      namespace VideoOverlayUnitMapper
      {

        static const int PIXELS_HASH = HashingUtils::HashString("PIXELS");
        static const int PERCENTAGE_HASH = HashingUtils::HashString("PERCENTAGE");


        VideoOverlayUnit GetVideoOverlayUnitForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PIXELS_HASH)
          {
            return VideoOverlayUnit::PIXELS;
          }
          else if (hashCode == PERCENTAGE_HASH)
          {
            return VideoOverlayUnit::PERCENTAGE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VideoOverlayUnit>(hashCode);
          }

          return VideoOverlayUnit::NOT_SET;
        }

        Aws::String GetNameForVideoOverlayUnit(VideoOverlayUnit enumValue)
        {
          switch(enumValue)
          {
          case VideoOverlayUnit::NOT_SET:
            return {};
          case VideoOverlayUnit::PIXELS:
            return "PIXELS";
          case VideoOverlayUnit::PERCENTAGE:
            return "PERCENTAGE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VideoOverlayUnitMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
