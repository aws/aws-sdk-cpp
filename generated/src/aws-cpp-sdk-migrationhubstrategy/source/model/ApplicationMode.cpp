/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/ApplicationMode.h>
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
      namespace ApplicationModeMapper
      {

        static const int ALL_HASH = HashingUtils::HashString("ALL");
        static const int KNOWN_HASH = HashingUtils::HashString("KNOWN");
        static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");


        ApplicationMode GetApplicationModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_HASH)
          {
            return ApplicationMode::ALL;
          }
          else if (hashCode == KNOWN_HASH)
          {
            return ApplicationMode::KNOWN;
          }
          else if (hashCode == UNKNOWN_HASH)
          {
            return ApplicationMode::UNKNOWN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ApplicationMode>(hashCode);
          }

          return ApplicationMode::NOT_SET;
        }

        Aws::String GetNameForApplicationMode(ApplicationMode enumValue)
        {
          switch(enumValue)
          {
          case ApplicationMode::ALL:
            return "ALL";
          case ApplicationMode::KNOWN:
            return "KNOWN";
          case ApplicationMode::UNKNOWN:
            return "UNKNOWN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ApplicationModeMapper
    } // namespace Model
  } // namespace MigrationHubStrategyRecommendations
} // namespace Aws
