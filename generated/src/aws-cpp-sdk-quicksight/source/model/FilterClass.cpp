/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/FilterClass.h>
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
      namespace FilterClassMapper
      {

        static constexpr uint32_t ENFORCED_VALUE_FILTER_HASH = ConstExprHashingUtils::HashString("ENFORCED_VALUE_FILTER");
        static constexpr uint32_t CONDITIONAL_VALUE_FILTER_HASH = ConstExprHashingUtils::HashString("CONDITIONAL_VALUE_FILTER");
        static constexpr uint32_t NAMED_VALUE_FILTER_HASH = ConstExprHashingUtils::HashString("NAMED_VALUE_FILTER");


        FilterClass GetFilterClassForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENFORCED_VALUE_FILTER_HASH)
          {
            return FilterClass::ENFORCED_VALUE_FILTER;
          }
          else if (hashCode == CONDITIONAL_VALUE_FILTER_HASH)
          {
            return FilterClass::CONDITIONAL_VALUE_FILTER;
          }
          else if (hashCode == NAMED_VALUE_FILTER_HASH)
          {
            return FilterClass::NAMED_VALUE_FILTER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FilterClass>(hashCode);
          }

          return FilterClass::NOT_SET;
        }

        Aws::String GetNameForFilterClass(FilterClass enumValue)
        {
          switch(enumValue)
          {
          case FilterClass::NOT_SET:
            return {};
          case FilterClass::ENFORCED_VALUE_FILTER:
            return "ENFORCED_VALUE_FILTER";
          case FilterClass::CONDITIONAL_VALUE_FILTER:
            return "CONDITIONAL_VALUE_FILTER";
          case FilterClass::NAMED_VALUE_FILTER:
            return "NAMED_VALUE_FILTER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FilterClassMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
