/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/CustomContentImageScalingConfiguration.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace CustomContentImageScalingConfigurationMapper
      {

        static const int FIT_TO_HEIGHT_HASH = HashingUtils::HashString("FIT_TO_HEIGHT");
        static const int FIT_TO_WIDTH_HASH = HashingUtils::HashString("FIT_TO_WIDTH");
        static const int DO_NOT_SCALE_HASH = HashingUtils::HashString("DO_NOT_SCALE");
        static const int SCALE_TO_VISUAL_HASH = HashingUtils::HashString("SCALE_TO_VISUAL");


        CustomContentImageScalingConfiguration GetCustomContentImageScalingConfigurationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FIT_TO_HEIGHT_HASH)
          {
            return CustomContentImageScalingConfiguration::FIT_TO_HEIGHT;
          }
          else if (hashCode == FIT_TO_WIDTH_HASH)
          {
            return CustomContentImageScalingConfiguration::FIT_TO_WIDTH;
          }
          else if (hashCode == DO_NOT_SCALE_HASH)
          {
            return CustomContentImageScalingConfiguration::DO_NOT_SCALE;
          }
          else if (hashCode == SCALE_TO_VISUAL_HASH)
          {
            return CustomContentImageScalingConfiguration::SCALE_TO_VISUAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CustomContentImageScalingConfiguration>(hashCode);
          }

          return CustomContentImageScalingConfiguration::NOT_SET;
        }

        Aws::String GetNameForCustomContentImageScalingConfiguration(CustomContentImageScalingConfiguration enumValue)
        {
          switch(enumValue)
          {
          case CustomContentImageScalingConfiguration::FIT_TO_HEIGHT:
            return "FIT_TO_HEIGHT";
          case CustomContentImageScalingConfiguration::FIT_TO_WIDTH:
            return "FIT_TO_WIDTH";
          case CustomContentImageScalingConfiguration::DO_NOT_SCALE:
            return "DO_NOT_SCALE";
          case CustomContentImageScalingConfiguration::SCALE_TO_VISUAL:
            return "SCALE_TO_VISUAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CustomContentImageScalingConfigurationMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
