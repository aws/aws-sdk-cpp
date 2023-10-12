/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TableTotalsPlacement.h>
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
      namespace TableTotalsPlacementMapper
      {

        static constexpr uint32_t START_HASH = ConstExprHashingUtils::HashString("START");
        static constexpr uint32_t END_HASH = ConstExprHashingUtils::HashString("END");
        static constexpr uint32_t AUTO_HASH = ConstExprHashingUtils::HashString("AUTO");


        TableTotalsPlacement GetTableTotalsPlacementForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == START_HASH)
          {
            return TableTotalsPlacement::START;
          }
          else if (hashCode == END_HASH)
          {
            return TableTotalsPlacement::END;
          }
          else if (hashCode == AUTO_HASH)
          {
            return TableTotalsPlacement::AUTO;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TableTotalsPlacement>(hashCode);
          }

          return TableTotalsPlacement::NOT_SET;
        }

        Aws::String GetNameForTableTotalsPlacement(TableTotalsPlacement enumValue)
        {
          switch(enumValue)
          {
          case TableTotalsPlacement::NOT_SET:
            return {};
          case TableTotalsPlacement::START:
            return "START";
          case TableTotalsPlacement::END:
            return "END";
          case TableTotalsPlacement::AUTO:
            return "AUTO";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TableTotalsPlacementMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
