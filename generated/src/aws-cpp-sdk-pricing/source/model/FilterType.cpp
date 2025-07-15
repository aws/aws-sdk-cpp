/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pricing/model/FilterType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Pricing
  {
    namespace Model
    {
      namespace FilterTypeMapper
      {

        static const int TERM_MATCH_HASH = HashingUtils::HashString("TERM_MATCH");
        static const int EQUALS_HASH = HashingUtils::HashString("EQUALS");
        static const int CONTAINS_HASH = HashingUtils::HashString("CONTAINS");
        static const int ANY_OF_HASH = HashingUtils::HashString("ANY_OF");
        static const int NONE_OF_HASH = HashingUtils::HashString("NONE_OF");


        FilterType GetFilterTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TERM_MATCH_HASH)
          {
            return FilterType::TERM_MATCH;
          }
          else if (hashCode == EQUALS_HASH)
          {
            return FilterType::EQUALS;
          }
          else if (hashCode == CONTAINS_HASH)
          {
            return FilterType::CONTAINS;
          }
          else if (hashCode == ANY_OF_HASH)
          {
            return FilterType::ANY_OF;
          }
          else if (hashCode == NONE_OF_HASH)
          {
            return FilterType::NONE_OF;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FilterType>(hashCode);
          }

          return FilterType::NOT_SET;
        }

        Aws::String GetNameForFilterType(FilterType enumValue)
        {
          switch(enumValue)
          {
          case FilterType::NOT_SET:
            return {};
          case FilterType::TERM_MATCH:
            return "TERM_MATCH";
          case FilterType::EQUALS:
            return "EQUALS";
          case FilterType::CONTAINS:
            return "CONTAINS";
          case FilterType::ANY_OF:
            return "ANY_OF";
          case FilterType::NONE_OF:
            return "NONE_OF";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FilterTypeMapper
    } // namespace Model
  } // namespace Pricing
} // namespace Aws
