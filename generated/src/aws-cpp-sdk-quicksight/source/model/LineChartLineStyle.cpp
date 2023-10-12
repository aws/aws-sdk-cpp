/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/LineChartLineStyle.h>
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
      namespace LineChartLineStyleMapper
      {

        static constexpr uint32_t SOLID_HASH = ConstExprHashingUtils::HashString("SOLID");
        static constexpr uint32_t DOTTED_HASH = ConstExprHashingUtils::HashString("DOTTED");
        static constexpr uint32_t DASHED_HASH = ConstExprHashingUtils::HashString("DASHED");


        LineChartLineStyle GetLineChartLineStyleForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SOLID_HASH)
          {
            return LineChartLineStyle::SOLID;
          }
          else if (hashCode == DOTTED_HASH)
          {
            return LineChartLineStyle::DOTTED;
          }
          else if (hashCode == DASHED_HASH)
          {
            return LineChartLineStyle::DASHED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LineChartLineStyle>(hashCode);
          }

          return LineChartLineStyle::NOT_SET;
        }

        Aws::String GetNameForLineChartLineStyle(LineChartLineStyle enumValue)
        {
          switch(enumValue)
          {
          case LineChartLineStyle::NOT_SET:
            return {};
          case LineChartLineStyle::SOLID:
            return "SOLID";
          case LineChartLineStyle::DOTTED:
            return "DOTTED";
          case LineChartLineStyle::DASHED:
            return "DASHED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LineChartLineStyleMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
