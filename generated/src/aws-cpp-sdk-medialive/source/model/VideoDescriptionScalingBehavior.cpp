/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/VideoDescriptionScalingBehavior.h>
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
      namespace VideoDescriptionScalingBehaviorMapper
      {

        static constexpr uint32_t DEFAULT_HASH = ConstExprHashingUtils::HashString("DEFAULT");
        static constexpr uint32_t STRETCH_TO_OUTPUT_HASH = ConstExprHashingUtils::HashString("STRETCH_TO_OUTPUT");


        VideoDescriptionScalingBehavior GetVideoDescriptionScalingBehaviorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEFAULT_HASH)
          {
            return VideoDescriptionScalingBehavior::DEFAULT;
          }
          else if (hashCode == STRETCH_TO_OUTPUT_HASH)
          {
            return VideoDescriptionScalingBehavior::STRETCH_TO_OUTPUT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VideoDescriptionScalingBehavior>(hashCode);
          }

          return VideoDescriptionScalingBehavior::NOT_SET;
        }

        Aws::String GetNameForVideoDescriptionScalingBehavior(VideoDescriptionScalingBehavior enumValue)
        {
          switch(enumValue)
          {
          case VideoDescriptionScalingBehavior::NOT_SET:
            return {};
          case VideoDescriptionScalingBehavior::DEFAULT:
            return "DEFAULT";
          case VideoDescriptionScalingBehavior::STRETCH_TO_OUTPUT:
            return "STRETCH_TO_OUTPUT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VideoDescriptionScalingBehaviorMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
