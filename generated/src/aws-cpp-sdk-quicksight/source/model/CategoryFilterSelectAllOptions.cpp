/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/CategoryFilterSelectAllOptions.h>
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
      namespace CategoryFilterSelectAllOptionsMapper
      {

        static const int FILTER_ALL_VALUES_HASH = HashingUtils::HashString("FILTER_ALL_VALUES");


        CategoryFilterSelectAllOptions GetCategoryFilterSelectAllOptionsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FILTER_ALL_VALUES_HASH)
          {
            return CategoryFilterSelectAllOptions::FILTER_ALL_VALUES;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CategoryFilterSelectAllOptions>(hashCode);
          }

          return CategoryFilterSelectAllOptions::NOT_SET;
        }

        Aws::String GetNameForCategoryFilterSelectAllOptions(CategoryFilterSelectAllOptions enumValue)
        {
          switch(enumValue)
          {
          case CategoryFilterSelectAllOptions::FILTER_ALL_VALUES:
            return "FILTER_ALL_VALUES";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CategoryFilterSelectAllOptionsMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
