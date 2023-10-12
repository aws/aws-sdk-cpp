/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ArcThicknessOptions.h>
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
      namespace ArcThicknessOptionsMapper
      {

        static constexpr uint32_t SMALL_HASH = ConstExprHashingUtils::HashString("SMALL");
        static constexpr uint32_t MEDIUM_HASH = ConstExprHashingUtils::HashString("MEDIUM");
        static constexpr uint32_t LARGE_HASH = ConstExprHashingUtils::HashString("LARGE");


        ArcThicknessOptions GetArcThicknessOptionsForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SMALL_HASH)
          {
            return ArcThicknessOptions::SMALL;
          }
          else if (hashCode == MEDIUM_HASH)
          {
            return ArcThicknessOptions::MEDIUM;
          }
          else if (hashCode == LARGE_HASH)
          {
            return ArcThicknessOptions::LARGE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ArcThicknessOptions>(hashCode);
          }

          return ArcThicknessOptions::NOT_SET;
        }

        Aws::String GetNameForArcThicknessOptions(ArcThicknessOptions enumValue)
        {
          switch(enumValue)
          {
          case ArcThicknessOptions::NOT_SET:
            return {};
          case ArcThicknessOptions::SMALL:
            return "SMALL";
          case ArcThicknessOptions::MEDIUM:
            return "MEDIUM";
          case ArcThicknessOptions::LARGE:
            return "LARGE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ArcThicknessOptionsMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
