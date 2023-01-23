/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ColorFillType.h>
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
      namespace ColorFillTypeMapper
      {

        static const int DISCRETE_HASH = HashingUtils::HashString("DISCRETE");
        static const int GRADIENT_HASH = HashingUtils::HashString("GRADIENT");


        ColorFillType GetColorFillTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISCRETE_HASH)
          {
            return ColorFillType::DISCRETE;
          }
          else if (hashCode == GRADIENT_HASH)
          {
            return ColorFillType::GRADIENT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ColorFillType>(hashCode);
          }

          return ColorFillType::NOT_SET;
        }

        Aws::String GetNameForColorFillType(ColorFillType enumValue)
        {
          switch(enumValue)
          {
          case ColorFillType::DISCRETE:
            return "DISCRETE";
          case ColorFillType::GRADIENT:
            return "GRADIENT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ColorFillTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
