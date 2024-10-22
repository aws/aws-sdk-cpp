/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-query/model/QueryInsightsMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace TimestreamQuery
  {
    namespace Model
    {
      namespace QueryInsightsModeMapper
      {

        static const int ENABLED_WITH_RATE_CONTROL_HASH = HashingUtils::HashString("ENABLED_WITH_RATE_CONTROL");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        QueryInsightsMode GetQueryInsightsModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_WITH_RATE_CONTROL_HASH)
          {
            return QueryInsightsMode::ENABLED_WITH_RATE_CONTROL;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return QueryInsightsMode::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QueryInsightsMode>(hashCode);
          }

          return QueryInsightsMode::NOT_SET;
        }

        Aws::String GetNameForQueryInsightsMode(QueryInsightsMode enumValue)
        {
          switch(enumValue)
          {
          case QueryInsightsMode::NOT_SET:
            return {};
          case QueryInsightsMode::ENABLED_WITH_RATE_CONTROL:
            return "ENABLED_WITH_RATE_CONTROL";
          case QueryInsightsMode::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace QueryInsightsModeMapper
    } // namespace Model
  } // namespace TimestreamQuery
} // namespace Aws
