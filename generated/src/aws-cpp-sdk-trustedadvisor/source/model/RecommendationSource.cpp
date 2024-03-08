/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/trustedadvisor/model/RecommendationSource.h>
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
      namespace RecommendationSourceMapper
      {

        static const int aws_config_HASH = HashingUtils::HashString("aws_config");
        static const int compute_optimizer_HASH = HashingUtils::HashString("compute_optimizer");
        static const int cost_explorer_HASH = HashingUtils::HashString("cost_explorer");
        static const int lse_HASH = HashingUtils::HashString("lse");
        static const int manual_HASH = HashingUtils::HashString("manual");
        static const int pse_HASH = HashingUtils::HashString("pse");
        static const int rds_HASH = HashingUtils::HashString("rds");
        static const int resilience_HASH = HashingUtils::HashString("resilience");
        static const int resilience_hub_HASH = HashingUtils::HashString("resilience_hub");
        static const int security_hub_HASH = HashingUtils::HashString("security_hub");
        static const int stir_HASH = HashingUtils::HashString("stir");
        static const int ta_check_HASH = HashingUtils::HashString("ta_check");
        static const int well_architected_HASH = HashingUtils::HashString("well_architected");


        RecommendationSource GetRecommendationSourceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == aws_config_HASH)
          {
            return RecommendationSource::aws_config;
          }
          else if (hashCode == compute_optimizer_HASH)
          {
            return RecommendationSource::compute_optimizer;
          }
          else if (hashCode == cost_explorer_HASH)
          {
            return RecommendationSource::cost_explorer;
          }
          else if (hashCode == lse_HASH)
          {
            return RecommendationSource::lse;
          }
          else if (hashCode == manual_HASH)
          {
            return RecommendationSource::manual;
          }
          else if (hashCode == pse_HASH)
          {
            return RecommendationSource::pse;
          }
          else if (hashCode == rds_HASH)
          {
            return RecommendationSource::rds;
          }
          else if (hashCode == resilience_HASH)
          {
            return RecommendationSource::resilience;
          }
          else if (hashCode == resilience_hub_HASH)
          {
            return RecommendationSource::resilience_hub;
          }
          else if (hashCode == security_hub_HASH)
          {
            return RecommendationSource::security_hub;
          }
          else if (hashCode == stir_HASH)
          {
            return RecommendationSource::stir;
          }
          else if (hashCode == ta_check_HASH)
          {
            return RecommendationSource::ta_check;
          }
          else if (hashCode == well_architected_HASH)
          {
            return RecommendationSource::well_architected;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecommendationSource>(hashCode);
          }

          return RecommendationSource::NOT_SET;
        }

        Aws::String GetNameForRecommendationSource(RecommendationSource enumValue)
        {
          switch(enumValue)
          {
          case RecommendationSource::NOT_SET:
            return {};
          case RecommendationSource::aws_config:
            return "aws_config";
          case RecommendationSource::compute_optimizer:
            return "compute_optimizer";
          case RecommendationSource::cost_explorer:
            return "cost_explorer";
          case RecommendationSource::lse:
            return "lse";
          case RecommendationSource::manual:
            return "manual";
          case RecommendationSource::pse:
            return "pse";
          case RecommendationSource::rds:
            return "rds";
          case RecommendationSource::resilience:
            return "resilience";
          case RecommendationSource::resilience_hub:
            return "resilience_hub";
          case RecommendationSource::security_hub:
            return "security_hub";
          case RecommendationSource::stir:
            return "stir";
          case RecommendationSource::ta_check:
            return "ta_check";
          case RecommendationSource::well_architected:
            return "well_architected";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RecommendationSourceMapper
    } // namespace Model
  } // namespace TrustedAdvisor
} // namespace Aws
