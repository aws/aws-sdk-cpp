/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/QueryConditionComparisonOperator.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QConnect
  {
    namespace Model
    {
      namespace QueryConditionComparisonOperatorMapper
      {

        static const int EQUALS_HASH = HashingUtils::HashString("EQUALS");


        QueryConditionComparisonOperator GetQueryConditionComparisonOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EQUALS_HASH)
          {
            return QueryConditionComparisonOperator::EQUALS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QueryConditionComparisonOperator>(hashCode);
          }

          return QueryConditionComparisonOperator::NOT_SET;
        }

        Aws::String GetNameForQueryConditionComparisonOperator(QueryConditionComparisonOperator enumValue)
        {
          switch(enumValue)
          {
          case QueryConditionComparisonOperator::NOT_SET:
            return {};
          case QueryConditionComparisonOperator::EQUALS:
            return "EQUALS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace QueryConditionComparisonOperatorMapper
    } // namespace Model
  } // namespace QConnect
} // namespace Aws
