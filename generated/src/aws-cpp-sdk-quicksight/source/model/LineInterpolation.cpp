/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/LineInterpolation.h>
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
      namespace LineInterpolationMapper
      {

        static constexpr uint32_t LINEAR_HASH = ConstExprHashingUtils::HashString("LINEAR");
        static constexpr uint32_t SMOOTH_HASH = ConstExprHashingUtils::HashString("SMOOTH");
        static constexpr uint32_t STEPPED_HASH = ConstExprHashingUtils::HashString("STEPPED");


        LineInterpolation GetLineInterpolationForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LINEAR_HASH)
          {
            return LineInterpolation::LINEAR;
          }
          else if (hashCode == SMOOTH_HASH)
          {
            return LineInterpolation::SMOOTH;
          }
          else if (hashCode == STEPPED_HASH)
          {
            return LineInterpolation::STEPPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LineInterpolation>(hashCode);
          }

          return LineInterpolation::NOT_SET;
        }

        Aws::String GetNameForLineInterpolation(LineInterpolation enumValue)
        {
          switch(enumValue)
          {
          case LineInterpolation::NOT_SET:
            return {};
          case LineInterpolation::LINEAR:
            return "LINEAR";
          case LineInterpolation::SMOOTH:
            return "SMOOTH";
          case LineInterpolation::STEPPED:
            return "STEPPED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LineInterpolationMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
