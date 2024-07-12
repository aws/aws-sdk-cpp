/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TopicIRFilterFunction.h>
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
      namespace TopicIRFilterFunctionMapper
      {

        static const int CONTAINS_HASH = HashingUtils::HashString("CONTAINS");
        static const int EXACT_HASH = HashingUtils::HashString("EXACT");
        static const int STARTS_WITH_HASH = HashingUtils::HashString("STARTS_WITH");
        static const int ENDS_WITH_HASH = HashingUtils::HashString("ENDS_WITH");
        static const int CONTAINS_STRING_HASH = HashingUtils::HashString("CONTAINS_STRING");
        static const int PREVIOUS_HASH = HashingUtils::HashString("PREVIOUS");
        static const int THIS_HASH = HashingUtils::HashString("THIS");
        static const int LAST_HASH = HashingUtils::HashString("LAST");
        static const int NEXT_HASH = HashingUtils::HashString("NEXT");
        static const int NOW_HASH = HashingUtils::HashString("NOW");


        TopicIRFilterFunction GetTopicIRFilterFunctionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CONTAINS_HASH)
          {
            return TopicIRFilterFunction::CONTAINS;
          }
          else if (hashCode == EXACT_HASH)
          {
            return TopicIRFilterFunction::EXACT;
          }
          else if (hashCode == STARTS_WITH_HASH)
          {
            return TopicIRFilterFunction::STARTS_WITH;
          }
          else if (hashCode == ENDS_WITH_HASH)
          {
            return TopicIRFilterFunction::ENDS_WITH;
          }
          else if (hashCode == CONTAINS_STRING_HASH)
          {
            return TopicIRFilterFunction::CONTAINS_STRING;
          }
          else if (hashCode == PREVIOUS_HASH)
          {
            return TopicIRFilterFunction::PREVIOUS;
          }
          else if (hashCode == THIS_HASH)
          {
            return TopicIRFilterFunction::THIS;
          }
          else if (hashCode == LAST_HASH)
          {
            return TopicIRFilterFunction::LAST;
          }
          else if (hashCode == NEXT_HASH)
          {
            return TopicIRFilterFunction::NEXT;
          }
          else if (hashCode == NOW_HASH)
          {
            return TopicIRFilterFunction::NOW;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TopicIRFilterFunction>(hashCode);
          }

          return TopicIRFilterFunction::NOT_SET;
        }

        Aws::String GetNameForTopicIRFilterFunction(TopicIRFilterFunction enumValue)
        {
          switch(enumValue)
          {
          case TopicIRFilterFunction::NOT_SET:
            return {};
          case TopicIRFilterFunction::CONTAINS:
            return "CONTAINS";
          case TopicIRFilterFunction::EXACT:
            return "EXACT";
          case TopicIRFilterFunction::STARTS_WITH:
            return "STARTS_WITH";
          case TopicIRFilterFunction::ENDS_WITH:
            return "ENDS_WITH";
          case TopicIRFilterFunction::CONTAINS_STRING:
            return "CONTAINS_STRING";
          case TopicIRFilterFunction::PREVIOUS:
            return "PREVIOUS";
          case TopicIRFilterFunction::THIS:
            return "THIS";
          case TopicIRFilterFunction::LAST:
            return "LAST";
          case TopicIRFilterFunction::NEXT:
            return "NEXT";
          case TopicIRFilterFunction::NOW:
            return "NOW";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TopicIRFilterFunctionMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
