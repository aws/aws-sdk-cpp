/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/NamedFilterType.h>
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
      namespace NamedFilterTypeMapper
      {

        static const int CATEGORY_FILTER_HASH = HashingUtils::HashString("CATEGORY_FILTER");
        static const int NUMERIC_EQUALITY_FILTER_HASH = HashingUtils::HashString("NUMERIC_EQUALITY_FILTER");
        static const int NUMERIC_RANGE_FILTER_HASH = HashingUtils::HashString("NUMERIC_RANGE_FILTER");
        static const int DATE_RANGE_FILTER_HASH = HashingUtils::HashString("DATE_RANGE_FILTER");
        static const int RELATIVE_DATE_FILTER_HASH = HashingUtils::HashString("RELATIVE_DATE_FILTER");


        NamedFilterType GetNamedFilterTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CATEGORY_FILTER_HASH)
          {
            return NamedFilterType::CATEGORY_FILTER;
          }
          else if (hashCode == NUMERIC_EQUALITY_FILTER_HASH)
          {
            return NamedFilterType::NUMERIC_EQUALITY_FILTER;
          }
          else if (hashCode == NUMERIC_RANGE_FILTER_HASH)
          {
            return NamedFilterType::NUMERIC_RANGE_FILTER;
          }
          else if (hashCode == DATE_RANGE_FILTER_HASH)
          {
            return NamedFilterType::DATE_RANGE_FILTER;
          }
          else if (hashCode == RELATIVE_DATE_FILTER_HASH)
          {
            return NamedFilterType::RELATIVE_DATE_FILTER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NamedFilterType>(hashCode);
          }

          return NamedFilterType::NOT_SET;
        }

        Aws::String GetNameForNamedFilterType(NamedFilterType enumValue)
        {
          switch(enumValue)
          {
          case NamedFilterType::NOT_SET:
            return {};
          case NamedFilterType::CATEGORY_FILTER:
            return "CATEGORY_FILTER";
          case NamedFilterType::NUMERIC_EQUALITY_FILTER:
            return "NUMERIC_EQUALITY_FILTER";
          case NamedFilterType::NUMERIC_RANGE_FILTER:
            return "NUMERIC_RANGE_FILTER";
          case NamedFilterType::DATE_RANGE_FILTER:
            return "DATE_RANGE_FILTER";
          case NamedFilterType::RELATIVE_DATE_FILTER:
            return "RELATIVE_DATE_FILTER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NamedFilterTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
