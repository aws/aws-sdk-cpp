/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TopicRelativeDateFilterFunction.h>
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
      namespace TopicRelativeDateFilterFunctionMapper
      {

        static constexpr uint32_t PREVIOUS_HASH = ConstExprHashingUtils::HashString("PREVIOUS");
        static constexpr uint32_t THIS_HASH = ConstExprHashingUtils::HashString("THIS");
        static constexpr uint32_t LAST_HASH = ConstExprHashingUtils::HashString("LAST");
        static constexpr uint32_t NEXT_HASH = ConstExprHashingUtils::HashString("NEXT");
        static constexpr uint32_t NOW_HASH = ConstExprHashingUtils::HashString("NOW");


        TopicRelativeDateFilterFunction GetTopicRelativeDateFilterFunctionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PREVIOUS_HASH)
          {
            return TopicRelativeDateFilterFunction::PREVIOUS;
          }
          else if (hashCode == THIS_HASH)
          {
            return TopicRelativeDateFilterFunction::THIS;
          }
          else if (hashCode == LAST_HASH)
          {
            return TopicRelativeDateFilterFunction::LAST;
          }
          else if (hashCode == NEXT_HASH)
          {
            return TopicRelativeDateFilterFunction::NEXT;
          }
          else if (hashCode == NOW_HASH)
          {
            return TopicRelativeDateFilterFunction::NOW;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TopicRelativeDateFilterFunction>(hashCode);
          }

          return TopicRelativeDateFilterFunction::NOT_SET;
        }

        Aws::String GetNameForTopicRelativeDateFilterFunction(TopicRelativeDateFilterFunction enumValue)
        {
          switch(enumValue)
          {
          case TopicRelativeDateFilterFunction::NOT_SET:
            return {};
          case TopicRelativeDateFilterFunction::PREVIOUS:
            return "PREVIOUS";
          case TopicRelativeDateFilterFunction::THIS:
            return "THIS";
          case TopicRelativeDateFilterFunction::LAST:
            return "LAST";
          case TopicRelativeDateFilterFunction::NEXT:
            return "NEXT";
          case TopicRelativeDateFilterFunction::NOW:
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

      } // namespace TopicRelativeDateFilterFunctionMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
