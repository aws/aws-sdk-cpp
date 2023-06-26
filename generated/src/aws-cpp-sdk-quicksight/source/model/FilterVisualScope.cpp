/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/FilterVisualScope.h>
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
      namespace FilterVisualScopeMapper
      {

        static const int ALL_VISUALS_HASH = HashingUtils::HashString("ALL_VISUALS");
        static const int SELECTED_VISUALS_HASH = HashingUtils::HashString("SELECTED_VISUALS");


        FilterVisualScope GetFilterVisualScopeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_VISUALS_HASH)
          {
            return FilterVisualScope::ALL_VISUALS;
          }
          else if (hashCode == SELECTED_VISUALS_HASH)
          {
            return FilterVisualScope::SELECTED_VISUALS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FilterVisualScope>(hashCode);
          }

          return FilterVisualScope::NOT_SET;
        }

        Aws::String GetNameForFilterVisualScope(FilterVisualScope enumValue)
        {
          switch(enumValue)
          {
          case FilterVisualScope::ALL_VISUALS:
            return "ALL_VISUALS";
          case FilterVisualScope::SELECTED_VISUALS:
            return "SELECTED_VISUALS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FilterVisualScopeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
