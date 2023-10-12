/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/CategoryFilterMatchOperator.h>
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
      namespace CategoryFilterMatchOperatorMapper
      {

        static constexpr uint32_t EQUALS_HASH = ConstExprHashingUtils::HashString("EQUALS");
        static constexpr uint32_t DOES_NOT_EQUAL_HASH = ConstExprHashingUtils::HashString("DOES_NOT_EQUAL");
        static constexpr uint32_t CONTAINS_HASH = ConstExprHashingUtils::HashString("CONTAINS");
        static constexpr uint32_t DOES_NOT_CONTAIN_HASH = ConstExprHashingUtils::HashString("DOES_NOT_CONTAIN");
        static constexpr uint32_t STARTS_WITH_HASH = ConstExprHashingUtils::HashString("STARTS_WITH");
        static constexpr uint32_t ENDS_WITH_HASH = ConstExprHashingUtils::HashString("ENDS_WITH");


        CategoryFilterMatchOperator GetCategoryFilterMatchOperatorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EQUALS_HASH)
          {
            return CategoryFilterMatchOperator::EQUALS;
          }
          else if (hashCode == DOES_NOT_EQUAL_HASH)
          {
            return CategoryFilterMatchOperator::DOES_NOT_EQUAL;
          }
          else if (hashCode == CONTAINS_HASH)
          {
            return CategoryFilterMatchOperator::CONTAINS;
          }
          else if (hashCode == DOES_NOT_CONTAIN_HASH)
          {
            return CategoryFilterMatchOperator::DOES_NOT_CONTAIN;
          }
          else if (hashCode == STARTS_WITH_HASH)
          {
            return CategoryFilterMatchOperator::STARTS_WITH;
          }
          else if (hashCode == ENDS_WITH_HASH)
          {
            return CategoryFilterMatchOperator::ENDS_WITH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CategoryFilterMatchOperator>(hashCode);
          }

          return CategoryFilterMatchOperator::NOT_SET;
        }

        Aws::String GetNameForCategoryFilterMatchOperator(CategoryFilterMatchOperator enumValue)
        {
          switch(enumValue)
          {
          case CategoryFilterMatchOperator::NOT_SET:
            return {};
          case CategoryFilterMatchOperator::EQUALS:
            return "EQUALS";
          case CategoryFilterMatchOperator::DOES_NOT_EQUAL:
            return "DOES_NOT_EQUAL";
          case CategoryFilterMatchOperator::CONTAINS:
            return "CONTAINS";
          case CategoryFilterMatchOperator::DOES_NOT_CONTAIN:
            return "DOES_NOT_CONTAIN";
          case CategoryFilterMatchOperator::STARTS_WITH:
            return "STARTS_WITH";
          case CategoryFilterMatchOperator::ENDS_WITH:
            return "ENDS_WITH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CategoryFilterMatchOperatorMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
