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

        static constexpr uint32_t FOLLOW_HASH = ConstExprHashingUtils::HashString("FOLLOW");
        static constexpr uint32_t HDR10_HASH = ConstExprHashingUtils::HashString("HDR10");
        static constexpr uint32_t HLG_2020_HASH = ConstExprHashingUtils::HashString("HLG_2020");
        static constexpr uint32_t REC_601_HASH = ConstExprHashingUtils::HashString("REC_601");
        static constexpr uint32_t REC_709_HASH = ConstExprHashingUtils::HashString("REC_709");


        VideoSelectorColorSpace GetVideoSelectorColorSpaceForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
