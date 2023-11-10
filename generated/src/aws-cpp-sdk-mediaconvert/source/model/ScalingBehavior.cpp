/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/ScalingBehavior.h>
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
      namespace ScalingBehaviorMapper
      {

        static const int DEFAULT_HASH = HashingUtils::HashString("DEFAULT");
        static const int STRETCH_TO_OUTPUT_HASH = HashingUtils::HashString("STRETCH_TO_OUTPUT");
        static const int FIT_HASH = HashingUtils::HashString("FIT");
        static const int FIT_NO_UPSCALE_HASH = HashingUtils::HashString("FIT_NO_UPSCALE");
        static const int FILL_HASH = HashingUtils::HashString("FILL");


        ScalingBehavior GetScalingBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEFAULT_HASH)
          {
            return ScalingBehavior::DEFAULT;
          }
          else if (hashCode == STRETCH_TO_OUTPUT_HASH)
          {
            return ScalingBehavior::STRETCH_TO_OUTPUT;
          }
          else if (hashCode == FIT_HASH)
          {
            return ScalingBehavior::FIT;
          }
          else if (hashCode == FIT_NO_UPSCALE_HASH)
          {
            return ScalingBehavior::FIT_NO_UPSCALE;
          }
          else if (hashCode == FILL_HASH)
          {
            return ScalingBehavior::FILL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScalingBehavior>(hashCode);
          }

          return ScalingBehavior::NOT_SET;
        }

        Aws::String GetNameForScalingBehavior(ScalingBehavior enumValue)
        {
          switch(enumValue)
          {
          case ScalingBehavior::NOT_SET:
            return {};
          case ScalingBehavior::DEFAULT:
            return "DEFAULT";
          case ScalingBehavior::STRETCH_TO_OUTPUT:
            return "STRETCH_TO_OUTPUT";
          case ScalingBehavior::FIT:
            return "FIT";
          case ScalingBehavior::FIT_NO_UPSCALE:
            return "FIT_NO_UPSCALE";
          case ScalingBehavior::FILL:
            return "FILL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScalingBehaviorMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
