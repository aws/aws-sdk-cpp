/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/CategoryFilterType.h>
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
      namespace CategoryFilterTypeMapper
      {

        static const int CUSTOM_FILTER_HASH = HashingUtils::HashString("CUSTOM_FILTER");
        static const int CUSTOM_FILTER_LIST_HASH = HashingUtils::HashString("CUSTOM_FILTER_LIST");
        static const int FILTER_LIST_HASH = HashingUtils::HashString("FILTER_LIST");


        CategoryFilterType GetCategoryFilterTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CUSTOM_FILTER_HASH)
          {
            return CategoryFilterType::CUSTOM_FILTER;
          }
          else if (hashCode == CUSTOM_FILTER_LIST_HASH)
          {
            return CategoryFilterType::CUSTOM_FILTER_LIST;
          }
          else if (hashCode == FILTER_LIST_HASH)
          {
            return CategoryFilterType::FILTER_LIST;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CategoryFilterType>(hashCode);
          }

          return CategoryFilterType::NOT_SET;
        }

        Aws::String GetNameForCategoryFilterType(CategoryFilterType enumValue)
        {
          switch(enumValue)
          {
          case CategoryFilterType::NOT_SET:
            return {};
          case CategoryFilterType::CUSTOM_FILTER:
            return "CUSTOM_FILTER";
          case CategoryFilterType::CUSTOM_FILTER_LIST:
            return "CUSTOM_FILTER_LIST";
          case CategoryFilterType::FILTER_LIST:
            return "FILTER_LIST";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CategoryFilterTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
