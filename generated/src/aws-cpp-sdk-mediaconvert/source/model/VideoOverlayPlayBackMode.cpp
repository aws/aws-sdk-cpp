/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/VideoOverlayPlayBackMode.h>
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
      namespace VideoOverlayPlayBackModeMapper
      {

        static const int ONCE_HASH = HashingUtils::HashString("ONCE");
        static const int REPEAT_HASH = HashingUtils::HashString("REPEAT");


        VideoOverlayPlayBackMode GetVideoOverlayPlayBackModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ONCE_HASH)
          {
            return VideoOverlayPlayBackMode::ONCE;
          }
          else if (hashCode == REPEAT_HASH)
          {
            return VideoOverlayPlayBackMode::REPEAT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VideoOverlayPlayBackMode>(hashCode);
          }

          return VideoOverlayPlayBackMode::NOT_SET;
        }

        Aws::String GetNameForVideoOverlayPlayBackMode(VideoOverlayPlayBackMode enumValue)
        {
          switch(enumValue)
          {
          case VideoOverlayPlayBackMode::NOT_SET:
            return {};
          case VideoOverlayPlayBackMode::ONCE:
            return "ONCE";
          case VideoOverlayPlayBackMode::REPEAT:
            return "REPEAT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VideoOverlayPlayBackModeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
