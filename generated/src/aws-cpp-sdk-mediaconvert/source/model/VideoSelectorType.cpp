/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/VideoSelectorType.h>
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
      namespace VideoSelectorTypeMapper
      {

        static const int AUTO_HASH = HashingUtils::HashString("AUTO");
        static const int STREAM_HASH = HashingUtils::HashString("STREAM");


        VideoSelectorType GetVideoSelectorTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTO_HASH)
          {
            return VideoSelectorType::AUTO;
          }
          else if (hashCode == STREAM_HASH)
          {
            return VideoSelectorType::STREAM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VideoSelectorType>(hashCode);
          }

          return VideoSelectorType::NOT_SET;
        }

        Aws::String GetNameForVideoSelectorType(VideoSelectorType enumValue)
        {
          switch(enumValue)
          {
          case VideoSelectorType::NOT_SET:
            return {};
          case VideoSelectorType::AUTO:
            return "AUTO";
          case VideoSelectorType::STREAM:
            return "STREAM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VideoSelectorTypeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
