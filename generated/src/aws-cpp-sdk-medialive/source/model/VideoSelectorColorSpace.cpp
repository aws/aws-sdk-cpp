/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/VideoSelectorColorSpace.h>
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
      namespace VideoSelectorColorSpaceMapper
      {

        static const int FOLLOW_HASH = HashingUtils::HashString("FOLLOW");
        static const int HDR10_HASH = HashingUtils::HashString("HDR10");
        static const int HLG_2020_HASH = HashingUtils::HashString("HLG_2020");
        static const int REC_601_HASH = HashingUtils::HashString("REC_601");
        static const int REC_709_HASH = HashingUtils::HashString("REC_709");


        VideoSelectorColorSpace GetVideoSelectorColorSpaceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FOLLOW_HASH)
          {
            return VideoSelectorColorSpace::FOLLOW;
          }
          else if (hashCode == HDR10_HASH)
          {
            return VideoSelectorColorSpace::HDR10;
          }
          else if (hashCode == HLG_2020_HASH)
          {
            return VideoSelectorColorSpace::HLG_2020;
          }
          else if (hashCode == REC_601_HASH)
          {
            return VideoSelectorColorSpace::REC_601;
          }
          else if (hashCode == REC_709_HASH)
          {
            return VideoSelectorColorSpace::REC_709;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VideoSelectorColorSpace>(hashCode);
          }

          return VideoSelectorColorSpace::NOT_SET;
        }

        Aws::String GetNameForVideoSelectorColorSpace(VideoSelectorColorSpace enumValue)
        {
          switch(enumValue)
          {
          case VideoSelectorColorSpace::NOT_SET:
            return {};
          case VideoSelectorColorSpace::FOLLOW:
            return "FOLLOW";
          case VideoSelectorColorSpace::HDR10:
            return "HDR10";
          case VideoSelectorColorSpace::HLG_2020:
            return "HLG_2020";
          case VideoSelectorColorSpace::REC_601:
            return "REC_601";
          case VideoSelectorColorSpace::REC_709:
            return "REC_709";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VideoSelectorColorSpaceMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
