/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TopicNumericSeparatorSymbol.h>
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
      namespace TopicNumericSeparatorSymbolMapper
      {

        static const int COMMA_HASH = HashingUtils::HashString("COMMA");
        static const int DOT_HASH = HashingUtils::HashString("DOT");


        TopicNumericSeparatorSymbol GetTopicNumericSeparatorSymbolForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COMMA_HASH)
          {
            return TopicNumericSeparatorSymbol::COMMA;
          }
          else if (hashCode == DOT_HASH)
          {
            return TopicNumericSeparatorSymbol::DOT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TopicNumericSeparatorSymbol>(hashCode);
          }

          return TopicNumericSeparatorSymbol::NOT_SET;
        }

        Aws::String GetNameForTopicNumericSeparatorSymbol(TopicNumericSeparatorSymbol enumValue)
        {
          switch(enumValue)
          {
          case TopicNumericSeparatorSymbol::NOT_SET:
            return {};
          case TopicNumericSeparatorSymbol::COMMA:
            return "COMMA";
          case TopicNumericSeparatorSymbol::DOT:
            return "DOT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TopicNumericSeparatorSymbolMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
