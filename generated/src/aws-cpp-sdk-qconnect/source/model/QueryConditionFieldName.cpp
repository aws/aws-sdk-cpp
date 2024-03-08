/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/QueryConditionFieldName.h>
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
      namespace QueryConditionFieldNameMapper
      {

        static const int RESULT_TYPE_HASH = HashingUtils::HashString("RESULT_TYPE");


        QueryConditionFieldName GetQueryConditionFieldNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RESULT_TYPE_HASH)
          {
            return QueryConditionFieldName::RESULT_TYPE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QueryConditionFieldName>(hashCode);
          }

          return QueryConditionFieldName::NOT_SET;
        }

        Aws::String GetNameForQueryConditionFieldName(QueryConditionFieldName enumValue)
        {
          switch(enumValue)
          {
          case QueryConditionFieldName::NOT_SET:
            return {};
          case QueryConditionFieldName::RESULT_TYPE:
            return "RESULT_TYPE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace QueryConditionFieldNameMapper
    } // namespace Model
  } // namespace QConnect
} // namespace Aws
