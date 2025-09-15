/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/observabilityadmin/model/RuleHealth.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ObservabilityAdmin
  {
    namespace Model
    {
      namespace RuleHealthMapper
      {

        static const int Healthy_HASH = HashingUtils::HashString("Healthy");
        static const int Unhealthy_HASH = HashingUtils::HashString("Unhealthy");
        static const int Provisioning_HASH = HashingUtils::HashString("Provisioning");


        RuleHealth GetRuleHealthForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Healthy_HASH)
          {
            return RuleHealth::Healthy;
          }
          else if (hashCode == Unhealthy_HASH)
          {
            return RuleHealth::Unhealthy;
          }
          else if (hashCode == Provisioning_HASH)
          {
            return RuleHealth::Provisioning;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RuleHealth>(hashCode);
          }

          return RuleHealth::NOT_SET;
        }

        Aws::String GetNameForRuleHealth(RuleHealth enumValue)
        {
          switch(enumValue)
          {
          case RuleHealth::NOT_SET:
            return {};
          case RuleHealth::Healthy:
            return "Healthy";
          case RuleHealth::Unhealthy:
            return "Unhealthy";
          case RuleHealth::Provisioning:
            return "Provisioning";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RuleHealthMapper
    } // namespace Model
  } // namespace ObservabilityAdmin
} // namespace Aws
