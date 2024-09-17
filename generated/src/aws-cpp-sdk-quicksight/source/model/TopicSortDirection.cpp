/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TopicSortDirection.h>
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
      namespace TopicSortDirectionMapper
      {

        static const int ASCENDING_HASH = HashingUtils::HashString("ASCENDING");
        static const int DESCENDING_HASH = HashingUtils::HashString("DESCENDING");


        TopicSortDirection GetTopicSortDirectionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ASCENDING_HASH)
          {
            return TopicSortDirection::ASCENDING;
          }
          else if (hashCode == DESCENDING_HASH)
          {
            return TopicSortDirection::DESCENDING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TopicSortDirection>(hashCode);
          }

          return TopicSortDirection::NOT_SET;
        }

        Aws::String GetNameForTopicSortDirection(TopicSortDirection enumValue)
        {
          switch(enumValue)
          {
          case TopicSortDirection::NOT_SET:
            return {};
          case TopicSortDirection::ASCENDING:
            return "ASCENDING";
          case TopicSortDirection::DESCENDING:
            return "DESCENDING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TopicSortDirectionMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
