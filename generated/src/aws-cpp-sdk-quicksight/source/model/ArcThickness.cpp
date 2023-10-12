/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ArcThickness.h>
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
      namespace ArcThicknessMapper
      {

        static constexpr uint32_t SMALL_HASH = ConstExprHashingUtils::HashString("SMALL");
        static constexpr uint32_t MEDIUM_HASH = ConstExprHashingUtils::HashString("MEDIUM");
        static constexpr uint32_t LARGE_HASH = ConstExprHashingUtils::HashString("LARGE");
        static constexpr uint32_t WHOLE_HASH = ConstExprHashingUtils::HashString("WHOLE");


        ArcThickness GetArcThicknessForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SMALL_HASH)
          {
            return ArcThickness::SMALL;
          }
          else if (hashCode == MEDIUM_HASH)
          {
            return ArcThickness::MEDIUM;
          }
          else if (hashCode == LARGE_HASH)
          {
            return ArcThickness::LARGE;
          }
          else if (hashCode == WHOLE_HASH)
          {
            return ArcThickness::WHOLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ArcThickness>(hashCode);
          }

          return ArcThickness::NOT_SET;
        }

        Aws::String GetNameForArcThickness(ArcThickness enumValue)
        {
          switch(enumValue)
          {
          case ArcThickness::NOT_SET:
            return {};
          case ArcThickness::SMALL:
            return "SMALL";
          case ArcThickness::MEDIUM:
            return "MEDIUM";
          case ArcThickness::LARGE:
            return "LARGE";
          case ArcThickness::WHOLE:
            return "WHOLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ArcThicknessMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
