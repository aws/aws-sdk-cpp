/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/HlsSegmentationMode.h>
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
      namespace HlsSegmentationModeMapper
      {

        static constexpr uint32_t USE_INPUT_SEGMENTATION_HASH = ConstExprHashingUtils::HashString("USE_INPUT_SEGMENTATION");
        static constexpr uint32_t USE_SEGMENT_DURATION_HASH = ConstExprHashingUtils::HashString("USE_SEGMENT_DURATION");


        HlsSegmentationMode GetHlsSegmentationModeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == USE_INPUT_SEGMENTATION_HASH)
          {
            return HlsSegmentationMode::USE_INPUT_SEGMENTATION;
          }
          else if (hashCode == USE_SEGMENT_DURATION_HASH)
          {
            return HlsSegmentationMode::USE_SEGMENT_DURATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HlsSegmentationMode>(hashCode);
          }

          return HlsSegmentationMode::NOT_SET;
        }

        Aws::String GetNameForHlsSegmentationMode(HlsSegmentationMode enumValue)
        {
          switch(enumValue)
          {
          case HlsSegmentationMode::NOT_SET:
            return {};
          case HlsSegmentationMode::USE_INPUT_SEGMENTATION:
            return "USE_INPUT_SEGMENTATION";
          case HlsSegmentationMode::USE_SEGMENT_DURATION:
            return "USE_SEGMENT_DURATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HlsSegmentationModeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
