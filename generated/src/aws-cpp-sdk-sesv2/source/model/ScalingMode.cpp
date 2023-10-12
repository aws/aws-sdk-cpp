/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/ScalingMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SESV2
  {
    namespace Model
    {
      namespace ScalingModeMapper
      {

        static constexpr uint32_t STANDARD_HASH = ConstExprHashingUtils::HashString("STANDARD");
        static constexpr uint32_t MANAGED_HASH = ConstExprHashingUtils::HashString("MANAGED");


        ScalingMode GetScalingModeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STANDARD_HASH)
          {
            return ScalingMode::STANDARD;
          }
          else if (hashCode == MANAGED_HASH)
          {
            return ScalingMode::MANAGED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScalingMode>(hashCode);
          }

          return ScalingMode::NOT_SET;
        }

        Aws::String GetNameForScalingMode(ScalingMode enumValue)
        {
          switch(enumValue)
          {
          case ScalingMode::NOT_SET:
            return {};
          case ScalingMode::STANDARD:
            return "STANDARD";
          case ScalingMode::MANAGED:
            return "MANAGED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScalingModeMapper
    } // namespace Model
  } // namespace SESV2
} // namespace Aws
