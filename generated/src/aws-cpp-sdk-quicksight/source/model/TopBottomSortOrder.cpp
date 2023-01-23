/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TopBottomSortOrder.h>
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
      namespace TopBottomSortOrderMapper
      {

        static const int PERCENT_DIFFERENCE_HASH = HashingUtils::HashString("PERCENT_DIFFERENCE");
        static const int ABSOLUTE_DIFFERENCE_HASH = HashingUtils::HashString("ABSOLUTE_DIFFERENCE");


        TopBottomSortOrder GetTopBottomSortOrderForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PERCENT_DIFFERENCE_HASH)
          {
            return TopBottomSortOrder::PERCENT_DIFFERENCE;
          }
          else if (hashCode == ABSOLUTE_DIFFERENCE_HASH)
          {
            return TopBottomSortOrder::ABSOLUTE_DIFFERENCE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TopBottomSortOrder>(hashCode);
          }

          return TopBottomSortOrder::NOT_SET;
        }

        Aws::String GetNameForTopBottomSortOrder(TopBottomSortOrder enumValue)
        {
          switch(enumValue)
          {
          case TopBottomSortOrder::PERCENT_DIFFERENCE:
            return "PERCENT_DIFFERENCE";
          case TopBottomSortOrder::ABSOLUTE_DIFFERENCE:
            return "ABSOLUTE_DIFFERENCE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TopBottomSortOrderMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
