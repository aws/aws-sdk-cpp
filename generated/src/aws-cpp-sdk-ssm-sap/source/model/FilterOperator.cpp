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

        static constexpr uint32_t Equals_HASH = ConstExprHashingUtils::HashString("Equals");
        static constexpr uint32_t GreaterThanOrEquals_HASH = ConstExprHashingUtils::HashString("GreaterThanOrEquals");
        static constexpr uint32_t LessThanOrEquals_HASH = ConstExprHashingUtils::HashString("LessThanOrEquals");


        FilterOperator GetFilterOperatorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
