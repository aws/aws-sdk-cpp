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

        static const int LINEAR_HASH = HashingUtils::HashString("LINEAR");
        static const int SMOOTH_HASH = HashingUtils::HashString("SMOOTH");
        static const int STEPPED_HASH = HashingUtils::HashString("STEPPED");


        LineInterpolation GetLineInterpolationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
