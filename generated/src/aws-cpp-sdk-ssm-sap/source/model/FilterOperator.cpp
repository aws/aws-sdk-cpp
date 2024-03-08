/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-sap/model/FilterOperator.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SsmSap
  {
    namespace Model
    {
      namespace FilterOperatorMapper
      {

        static const int Equals_HASH = HashingUtils::HashString("Equals");
        static const int GreaterThanOrEquals_HASH = HashingUtils::HashString("GreaterThanOrEquals");
        static const int LessThanOrEquals_HASH = HashingUtils::HashString("LessThanOrEquals");


        FilterOperator GetFilterOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Equals_HASH)
          {
            return FilterOperator::Equals;
          }
          else if (hashCode == GreaterThanOrEquals_HASH)
          {
            return FilterOperator::GreaterThanOrEquals;
          }
          else if (hashCode == LessThanOrEquals_HASH)
          {
            return FilterOperator::LessThanOrEquals;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FilterOperator>(hashCode);
          }

          return FilterOperator::NOT_SET;
        }

        Aws::String GetNameForFilterOperator(FilterOperator enumValue)
        {
          switch(enumValue)
          {
          case FilterOperator::NOT_SET:
            return {};
          case FilterOperator::Equals:
            return "Equals";
          case FilterOperator::GreaterThanOrEquals:
            return "GreaterThanOrEquals";
          case FilterOperator::LessThanOrEquals:
            return "LessThanOrEquals";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FilterOperatorMapper
    } // namespace Model
  } // namespace SsmSap
} // namespace Aws
