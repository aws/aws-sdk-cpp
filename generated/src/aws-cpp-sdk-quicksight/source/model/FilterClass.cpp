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

        static const int ENFORCED_VALUE_FILTER_HASH = HashingUtils::HashString("ENFORCED_VALUE_FILTER");
        static const int CONDITIONAL_VALUE_FILTER_HASH = HashingUtils::HashString("CONDITIONAL_VALUE_FILTER");
        static const int NAMED_VALUE_FILTER_HASH = HashingUtils::HashString("NAMED_VALUE_FILTER");


        FilterClass GetFilterClassForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
