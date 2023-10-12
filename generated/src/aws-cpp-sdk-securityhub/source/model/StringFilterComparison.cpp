/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/StringFilterComparison.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityHub
  {
    namespace Model
    {
      namespace StringFilterComparisonMapper
      {

        static constexpr uint32_t EQUALS_HASH = ConstExprHashingUtils::HashString("EQUALS");
        static constexpr uint32_t PREFIX_HASH = ConstExprHashingUtils::HashString("PREFIX");
        static constexpr uint32_t NOT_EQUALS_HASH = ConstExprHashingUtils::HashString("NOT_EQUALS");
        static constexpr uint32_t PREFIX_NOT_EQUALS_HASH = ConstExprHashingUtils::HashString("PREFIX_NOT_EQUALS");
        static constexpr uint32_t CONTAINS_HASH = ConstExprHashingUtils::HashString("CONTAINS");
        static constexpr uint32_t NOT_CONTAINS_HASH = ConstExprHashingUtils::HashString("NOT_CONTAINS");


        StringFilterComparison GetStringFilterComparisonForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EQUALS_HASH)
          {
            return StringFilterComparison::EQUALS;
          }
          else if (hashCode == PREFIX_HASH)
          {
            return StringFilterComparison::PREFIX;
          }
          else if (hashCode == NOT_EQUALS_HASH)
          {
            return StringFilterComparison::NOT_EQUALS;
          }
          else if (hashCode == PREFIX_NOT_EQUALS_HASH)
          {
            return StringFilterComparison::PREFIX_NOT_EQUALS;
          }
          else if (hashCode == CONTAINS_HASH)
          {
            return StringFilterComparison::CONTAINS;
          }
          else if (hashCode == NOT_CONTAINS_HASH)
          {
            return StringFilterComparison::NOT_CONTAINS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StringFilterComparison>(hashCode);
          }

          return StringFilterComparison::NOT_SET;
        }

        Aws::String GetNameForStringFilterComparison(StringFilterComparison enumValue)
        {
          switch(enumValue)
          {
          case StringFilterComparison::NOT_SET:
            return {};
          case StringFilterComparison::EQUALS:
            return "EQUALS";
          case StringFilterComparison::PREFIX:
            return "PREFIX";
          case StringFilterComparison::NOT_EQUALS:
            return "NOT_EQUALS";
          case StringFilterComparison::PREFIX_NOT_EQUALS:
            return "PREFIX_NOT_EQUALS";
          case StringFilterComparison::CONTAINS:
            return "CONTAINS";
          case StringFilterComparison::NOT_CONTAINS:
            return "NOT_CONTAINS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StringFilterComparisonMapper
    } // namespace Model
  } // namespace SecurityHub
} // namespace Aws
