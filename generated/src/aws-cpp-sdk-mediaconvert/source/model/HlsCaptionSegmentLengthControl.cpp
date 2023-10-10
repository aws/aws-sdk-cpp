/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/HlsCaptionSegmentLengthControl.h>
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
      namespace HlsCaptionSegmentLengthControlMapper
      {

        static const int LARGE_SEGMENTS_HASH = HashingUtils::HashString("LARGE_SEGMENTS");
        static const int MATCH_VIDEO_HASH = HashingUtils::HashString("MATCH_VIDEO");


        HlsCaptionSegmentLengthControl GetHlsCaptionSegmentLengthControlForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LARGE_SEGMENTS_HASH)
          {
            return HlsCaptionSegmentLengthControl::LARGE_SEGMENTS;
          }
          else if (hashCode == MATCH_VIDEO_HASH)
          {
            return HlsCaptionSegmentLengthControl::MATCH_VIDEO;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HlsCaptionSegmentLengthControl>(hashCode);
          }

          return HlsCaptionSegmentLengthControl::NOT_SET;
        }

        Aws::String GetNameForHlsCaptionSegmentLengthControl(HlsCaptionSegmentLengthControl enumValue)
        {
          switch(enumValue)
          {
          case HlsCaptionSegmentLengthControl::NOT_SET:
            return {};
          case HlsCaptionSegmentLengthControl::LARGE_SEGMENTS:
            return "LARGE_SEGMENTS";
          case HlsCaptionSegmentLengthControl::MATCH_VIDEO:
            return "MATCH_VIDEO";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HlsCaptionSegmentLengthControlMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
