/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/AssessmentDataSourceType.h>
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
      namespace AssessmentDataSourceTypeMapper
      {

        static const int StrategyRecommendationsApplicationDataCollector_HASH = HashingUtils::HashString("StrategyRecommendationsApplicationDataCollector");
        static const int ManualImport_HASH = HashingUtils::HashString("ManualImport");
        static const int ApplicationDiscoveryService_HASH = HashingUtils::HashString("ApplicationDiscoveryService");


        AssessmentDataSourceType GetAssessmentDataSourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == StrategyRecommendationsApplicationDataCollector_HASH)
          {
            return AssessmentDataSourceType::StrategyRecommendationsApplicationDataCollector;
          }
          else if (hashCode == ManualImport_HASH)
          {
            return AssessmentDataSourceType::ManualImport;
          }
          else if (hashCode == ApplicationDiscoveryService_HASH)
          {
            return AssessmentDataSourceType::ApplicationDiscoveryService;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssessmentDataSourceType>(hashCode);
          }

          return AssessmentDataSourceType::NOT_SET;
        }

        Aws::String GetNameForAssessmentDataSourceType(AssessmentDataSourceType enumValue)
        {
          switch(enumValue)
          {
          case AssessmentDataSourceType::NOT_SET:
            return {};
          case AssessmentDataSourceType::StrategyRecommendationsApplicationDataCollector:
            return "StrategyRecommendationsApplicationDataCollector";
          case AssessmentDataSourceType::ManualImport:
            return "ManualImport";
          case AssessmentDataSourceType::ApplicationDiscoveryService:
            return "ApplicationDiscoveryService";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AssessmentDataSourceTypeMapper
    } // namespace Model
  } // namespace MigrationHubStrategyRecommendations
} // namespace Aws
