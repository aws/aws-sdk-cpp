/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TopicIRFilterType.h>
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
      namespace TopicIRFilterTypeMapper
      {

        static const int CATEGORY_FILTER_HASH = HashingUtils::HashString("CATEGORY_FILTER");
        static const int NUMERIC_EQUALITY_FILTER_HASH = HashingUtils::HashString("NUMERIC_EQUALITY_FILTER");
        static const int NUMERIC_RANGE_FILTER_HASH = HashingUtils::HashString("NUMERIC_RANGE_FILTER");
        static const int DATE_RANGE_FILTER_HASH = HashingUtils::HashString("DATE_RANGE_FILTER");
        static const int RELATIVE_DATE_FILTER_HASH = HashingUtils::HashString("RELATIVE_DATE_FILTER");
        static const int TOP_BOTTOM_FILTER_HASH = HashingUtils::HashString("TOP_BOTTOM_FILTER");
        static const int EQUALS_HASH = HashingUtils::HashString("EQUALS");
        static const int RANK_LIMIT_FILTER_HASH = HashingUtils::HashString("RANK_LIMIT_FILTER");
        static const int ACCEPT_ALL_FILTER_HASH = HashingUtils::HashString("ACCEPT_ALL_FILTER");


        TopicIRFilterType GetTopicIRFilterTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CATEGORY_FILTER_HASH)
          {
            return TopicIRFilterType::CATEGORY_FILTER;
          }
          else if (hashCode == NUMERIC_EQUALITY_FILTER_HASH)
          {
            return TopicIRFilterType::NUMERIC_EQUALITY_FILTER;
          }
          else if (hashCode == NUMERIC_RANGE_FILTER_HASH)
          {
            return TopicIRFilterType::NUMERIC_RANGE_FILTER;
          }
          else if (hashCode == DATE_RANGE_FILTER_HASH)
          {
            return TopicIRFilterType::DATE_RANGE_FILTER;
          }
          else if (hashCode == RELATIVE_DATE_FILTER_HASH)
          {
            return TopicIRFilterType::RELATIVE_DATE_FILTER;
          }
          else if (hashCode == TOP_BOTTOM_FILTER_HASH)
          {
            return TopicIRFilterType::TOP_BOTTOM_FILTER;
          }
          else if (hashCode == EQUALS_HASH)
          {
            return TopicIRFilterType::EQUALS;
          }
          else if (hashCode == RANK_LIMIT_FILTER_HASH)
          {
            return TopicIRFilterType::RANK_LIMIT_FILTER;
          }
          else if (hashCode == ACCEPT_ALL_FILTER_HASH)
          {
            return TopicIRFilterType::ACCEPT_ALL_FILTER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TopicIRFilterType>(hashCode);
          }

          return TopicIRFilterType::NOT_SET;
        }

        Aws::String GetNameForTopicIRFilterType(TopicIRFilterType enumValue)
        {
          switch(enumValue)
          {
          case TopicIRFilterType::NOT_SET:
            return {};
          case TopicIRFilterType::CATEGORY_FILTER:
            return "CATEGORY_FILTER";
          case TopicIRFilterType::NUMERIC_EQUALITY_FILTER:
            return "NUMERIC_EQUALITY_FILTER";
          case TopicIRFilterType::NUMERIC_RANGE_FILTER:
            return "NUMERIC_RANGE_FILTER";
          case TopicIRFilterType::DATE_RANGE_FILTER:
            return "DATE_RANGE_FILTER";
          case TopicIRFilterType::RELATIVE_DATE_FILTER:
            return "RELATIVE_DATE_FILTER";
          case TopicIRFilterType::TOP_BOTTOM_FILTER:
            return "TOP_BOTTOM_FILTER";
          case TopicIRFilterType::EQUALS:
            return "EQUALS";
          case TopicIRFilterType::RANK_LIMIT_FILTER:
            return "RANK_LIMIT_FILTER";
          case TopicIRFilterType::ACCEPT_ALL_FILTER:
            return "ACCEPT_ALL_FILTER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TopicIRFilterTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
