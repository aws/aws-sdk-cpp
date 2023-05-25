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

        static const int START_HASH = HashingUtils::HashString("START");
        static const int END_HASH = HashingUtils::HashString("END");


        TableTotalsPlacement GetTableTotalsPlacementForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == START_HASH)
          {
            return TableTotalsPlacement::START;
          }
          else if (hashCode == END_HASH)
          {
            return TableTotalsPlacement::END;
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
          case TableTotalsPlacement::START:
            return "START";
          case TableTotalsPlacement::END:
            return "END";
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
