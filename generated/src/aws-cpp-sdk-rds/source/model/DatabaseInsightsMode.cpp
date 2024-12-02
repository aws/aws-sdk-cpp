/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DatabaseInsightsMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RDS
  {
    namespace Model
    {
      namespace DatabaseInsightsModeMapper
      {

        static const int standard_HASH = HashingUtils::HashString("standard");
        static const int advanced_HASH = HashingUtils::HashString("advanced");


        DatabaseInsightsMode GetDatabaseInsightsModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == standard_HASH)
          {
            return DatabaseInsightsMode::standard;
          }
          else if (hashCode == advanced_HASH)
          {
            return DatabaseInsightsMode::advanced;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DatabaseInsightsMode>(hashCode);
          }

          return DatabaseInsightsMode::NOT_SET;
        }

        Aws::String GetNameForDatabaseInsightsMode(DatabaseInsightsMode enumValue)
        {
          switch(enumValue)
          {
          case DatabaseInsightsMode::NOT_SET:
            return {};
          case DatabaseInsightsMode::standard:
            return "standard";
          case DatabaseInsightsMode::advanced:
            return "advanced";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DatabaseInsightsModeMapper
    } // namespace Model
  } // namespace RDS
} // namespace Aws
