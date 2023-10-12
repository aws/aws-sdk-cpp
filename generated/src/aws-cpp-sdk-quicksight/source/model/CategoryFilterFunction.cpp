/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/CategoryFilterFunction.h>
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
      namespace CategoryFilterFunctionMapper
      {

        static constexpr uint32_t EXACT_HASH = ConstExprHashingUtils::HashString("EXACT");
        static constexpr uint32_t CONTAINS_HASH = ConstExprHashingUtils::HashString("CONTAINS");


        CategoryFilterFunction GetCategoryFilterFunctionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EXACT_HASH)
          {
            return CategoryFilterFunction::EXACT;
          }
          else if (hashCode == CONTAINS_HASH)
          {
            return CategoryFilterFunction::CONTAINS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CategoryFilterFunction>(hashCode);
          }

          return CategoryFilterFunction::NOT_SET;
        }

        Aws::String GetNameForCategoryFilterFunction(CategoryFilterFunction enumValue)
        {
          switch(enumValue)
          {
          case CategoryFilterFunction::NOT_SET:
            return {};
          case CategoryFilterFunction::EXACT:
            return "EXACT";
          case CategoryFilterFunction::CONTAINS:
            return "CONTAINS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CategoryFilterFunctionMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
