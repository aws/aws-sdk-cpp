/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/Condition.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MigrationHubStrategyRecommendations
  {
    namespace Model
    {
      namespace ConditionMapper
      {

        static const int EQUALS_HASH = HashingUtils::HashString("EQUALS");
        static const int NOT_EQUALS_HASH = HashingUtils::HashString("NOT_EQUALS");
        static const int CONTAINS_HASH = HashingUtils::HashString("CONTAINS");
        static const int NOT_CONTAINS_HASH = HashingUtils::HashString("NOT_CONTAINS");


        Condition GetConditionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EQUALS_HASH)
          {
            return Condition::EQUALS;
          }
          else if (hashCode == NOT_EQUALS_HASH)
          {
            return Condition::NOT_EQUALS;
          }
          else if (hashCode == CONTAINS_HASH)
          {
            return Condition::CONTAINS;
          }
          else if (hashCode == NOT_CONTAINS_HASH)
          {
            return Condition::NOT_CONTAINS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Condition>(hashCode);
          }

          return Condition::NOT_SET;
        }

        Aws::String GetNameForCondition(Condition enumValue)
        {
          switch(enumValue)
          {
          case Condition::EQUALS:
            return "EQUALS";
          case Condition::NOT_EQUALS:
            return "NOT_EQUALS";
          case Condition::CONTAINS:
            return "CONTAINS";
          case Condition::NOT_CONTAINS:
            return "NOT_CONTAINS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConditionMapper
    } // namespace Model
  } // namespace MigrationHubStrategyRecommendations
} // namespace Aws
