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
