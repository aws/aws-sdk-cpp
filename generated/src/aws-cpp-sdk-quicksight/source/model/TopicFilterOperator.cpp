/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TopicFilterOperator.h>
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
      namespace TopicFilterOperatorMapper
      {

        static const int StringEquals_HASH = HashingUtils::HashString("StringEquals");
        static const int StringLike_HASH = HashingUtils::HashString("StringLike");


        TopicFilterOperator GetTopicFilterOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == StringEquals_HASH)
          {
            return TopicFilterOperator::StringEquals;
          }
          else if (hashCode == StringLike_HASH)
          {
            return TopicFilterOperator::StringLike;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TopicFilterOperator>(hashCode);
          }

          return TopicFilterOperator::NOT_SET;
        }

        Aws::String GetNameForTopicFilterOperator(TopicFilterOperator enumValue)
        {
          switch(enumValue)
          {
          case TopicFilterOperator::NOT_SET:
            return {};
          case TopicFilterOperator::StringEquals:
            return "StringEquals";
          case TopicFilterOperator::StringLike:
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

      } // namespace TopicFilterOperatorMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
