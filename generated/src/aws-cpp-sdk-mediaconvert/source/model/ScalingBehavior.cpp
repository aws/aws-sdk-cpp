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

        static constexpr uint32_t DEFAULT_HASH = ConstExprHashingUtils::HashString("DEFAULT");
        static constexpr uint32_t STRETCH_TO_OUTPUT_HASH = ConstExprHashingUtils::HashString("STRETCH_TO_OUTPUT");


        ScalingBehavior GetScalingBehaviorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEFAULT_HASH)
          {
            return ScalingBehavior::DEFAULT;
          }
          else if (hashCode == STRETCH_TO_OUTPUT_HASH)
          {
            return ScalingBehavior::STRETCH_TO_OUTPUT;
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
