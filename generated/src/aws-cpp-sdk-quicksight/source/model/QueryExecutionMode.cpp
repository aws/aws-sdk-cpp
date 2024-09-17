/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/QueryExecutionMode.h>
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
      namespace QueryExecutionModeMapper
      {

        static const int AUTO_HASH = HashingUtils::HashString("AUTO");
        static const int MANUAL_HASH = HashingUtils::HashString("MANUAL");


        QueryExecutionMode GetQueryExecutionModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTO_HASH)
          {
            return QueryExecutionMode::AUTO;
          }
          else if (hashCode == MANUAL_HASH)
          {
            return QueryExecutionMode::MANUAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QueryExecutionMode>(hashCode);
          }

          return QueryExecutionMode::NOT_SET;
        }

        Aws::String GetNameForQueryExecutionMode(QueryExecutionMode enumValue)
        {
          switch(enumValue)
          {
          case QueryExecutionMode::NOT_SET:
            return {};
          case QueryExecutionMode::AUTO:
            return "AUTO";
          case QueryExecutionMode::MANUAL:
            return "MANUAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace QueryExecutionModeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
