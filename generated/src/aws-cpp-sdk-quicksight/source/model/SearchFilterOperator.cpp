/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SearchFilterOperator.h>
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
      namespace SearchFilterOperatorMapper
      {

        static const int StringEquals_HASH = HashingUtils::HashString("StringEquals");
        static const int StringLike_HASH = HashingUtils::HashString("StringLike");


        SearchFilterOperator GetSearchFilterOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == StringEquals_HASH)
          {
            return SearchFilterOperator::StringEquals;
          }
          else if (hashCode == StringLike_HASH)
          {
            return SearchFilterOperator::StringLike;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SearchFilterOperator>(hashCode);
          }

          return SearchFilterOperator::NOT_SET;
        }

        Aws::String GetNameForSearchFilterOperator(SearchFilterOperator enumValue)
        {
          switch(enumValue)
          {
          case SearchFilterOperator::NOT_SET:
            return {};
          case SearchFilterOperator::StringEquals:
            return "StringEquals";
          case SearchFilterOperator::StringLike:
            return "StringLike";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SearchFilterOperatorMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
