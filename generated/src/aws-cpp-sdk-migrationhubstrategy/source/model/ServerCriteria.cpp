/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/ServerCriteria.h>
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
      namespace ServerCriteriaMapper
      {

        static constexpr uint32_t NOT_DEFINED_HASH = ConstExprHashingUtils::HashString("NOT_DEFINED");
        static constexpr uint32_t OS_NAME_HASH = ConstExprHashingUtils::HashString("OS_NAME");
        static constexpr uint32_t STRATEGY_HASH = ConstExprHashingUtils::HashString("STRATEGY");
        static constexpr uint32_t DESTINATION_HASH = ConstExprHashingUtils::HashString("DESTINATION");
        static constexpr uint32_t SERVER_ID_HASH = ConstExprHashingUtils::HashString("SERVER_ID");
        static constexpr uint32_t ANALYSIS_STATUS_HASH = ConstExprHashingUtils::HashString("ANALYSIS_STATUS");
        static constexpr uint32_t ERROR_CATEGORY_HASH = ConstExprHashingUtils::HashString("ERROR_CATEGORY");


        ServerCriteria GetServerCriteriaForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NOT_DEFINED_HASH)
          {
            return ServerCriteria::NOT_DEFINED;
          }
          else if (hashCode == OS_NAME_HASH)
          {
            return ServerCriteria::OS_NAME;
          }
          else if (hashCode == STRATEGY_HASH)
          {
            return ServerCriteria::STRATEGY;
          }
          else if (hashCode == DESTINATION_HASH)
          {
            return ServerCriteria::DESTINATION;
          }
          else if (hashCode == SERVER_ID_HASH)
          {
            return ServerCriteria::SERVER_ID;
          }
          else if (hashCode == ANALYSIS_STATUS_HASH)
          {
            return ServerCriteria::ANALYSIS_STATUS;
          }
          else if (hashCode == ERROR_CATEGORY_HASH)
          {
            return ServerCriteria::ERROR_CATEGORY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServerCriteria>(hashCode);
          }

          return ServerCriteria::NOT_SET;
        }

        Aws::String GetNameForServerCriteria(ServerCriteria enumValue)
        {
          switch(enumValue)
          {
          case ServerCriteria::NOT_SET:
            return {};
          case ServerCriteria::NOT_DEFINED:
            return "NOT_DEFINED";
          case ServerCriteria::OS_NAME:
            return "OS_NAME";
          case ServerCriteria::STRATEGY:
            return "STRATEGY";
          case ServerCriteria::DESTINATION:
            return "DESTINATION";
          case ServerCriteria::SERVER_ID:
            return "SERVER_ID";
          case ServerCriteria::ANALYSIS_STATUS:
            return "ANALYSIS_STATUS";
          case ServerCriteria::ERROR_CATEGORY:
            return "ERROR_CATEGORY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServerCriteriaMapper
    } // namespace Model
  } // namespace MigrationHubStrategyRecommendations
} // namespace Aws
