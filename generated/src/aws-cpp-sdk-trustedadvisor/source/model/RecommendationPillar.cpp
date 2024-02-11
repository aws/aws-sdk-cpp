/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/trustedadvisor/model/RecommendationPillar.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace TrustedAdvisor
  {
    namespace Model
    {
      namespace RecommendationPillarMapper
      {

        static const int cost_optimizing_HASH = HashingUtils::HashString("cost_optimizing");
        static const int performance_HASH = HashingUtils::HashString("performance");
        static const int security_HASH = HashingUtils::HashString("security");
        static const int service_limits_HASH = HashingUtils::HashString("service_limits");
        static const int fault_tolerance_HASH = HashingUtils::HashString("fault_tolerance");
        static const int operational_excellence_HASH = HashingUtils::HashString("operational_excellence");


        RecommendationPillar GetRecommendationPillarForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == cost_optimizing_HASH)
          {
            return RecommendationPillar::cost_optimizing;
          }
          else if (hashCode == performance_HASH)
          {
            return RecommendationPillar::performance;
          }
          else if (hashCode == security_HASH)
          {
            return RecommendationPillar::security;
          }
          else if (hashCode == service_limits_HASH)
          {
            return RecommendationPillar::service_limits;
          }
          else if (hashCode == fault_tolerance_HASH)
          {
            return RecommendationPillar::fault_tolerance;
          }
          else if (hashCode == operational_excellence_HASH)
          {
            return RecommendationPillar::operational_excellence;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecommendationPillar>(hashCode);
          }

          return RecommendationPillar::NOT_SET;
        }

        Aws::String GetNameForRecommendationPillar(RecommendationPillar enumValue)
        {
          switch(enumValue)
          {
          case RecommendationPillar::NOT_SET:
            return {};
          case RecommendationPillar::cost_optimizing:
            return "cost_optimizing";
          case RecommendationPillar::performance:
            return "performance";
          case RecommendationPillar::security:
            return "security";
          case RecommendationPillar::service_limits:
            return "service_limits";
          case RecommendationPillar::fault_tolerance:
            return "fault_tolerance";
          case RecommendationPillar::operational_excellence:
            return "operational_excellence";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RecommendationPillarMapper
    } // namespace Model
  } // namespace TrustedAdvisor
} // namespace Aws
