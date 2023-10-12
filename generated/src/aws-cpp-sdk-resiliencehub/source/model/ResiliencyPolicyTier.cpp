/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/ResiliencyPolicyTier.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ResilienceHub
  {
    namespace Model
    {
      namespace ResiliencyPolicyTierMapper
      {

        static constexpr uint32_t MissionCritical_HASH = ConstExprHashingUtils::HashString("MissionCritical");
        static constexpr uint32_t Critical_HASH = ConstExprHashingUtils::HashString("Critical");
        static constexpr uint32_t Important_HASH = ConstExprHashingUtils::HashString("Important");
        static constexpr uint32_t CoreServices_HASH = ConstExprHashingUtils::HashString("CoreServices");
        static constexpr uint32_t NonCritical_HASH = ConstExprHashingUtils::HashString("NonCritical");
        static constexpr uint32_t NotApplicable_HASH = ConstExprHashingUtils::HashString("NotApplicable");


        ResiliencyPolicyTier GetResiliencyPolicyTierForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MissionCritical_HASH)
          {
            return ResiliencyPolicyTier::MissionCritical;
          }
          else if (hashCode == Critical_HASH)
          {
            return ResiliencyPolicyTier::Critical;
          }
          else if (hashCode == Important_HASH)
          {
            return ResiliencyPolicyTier::Important;
          }
          else if (hashCode == CoreServices_HASH)
          {
            return ResiliencyPolicyTier::CoreServices;
          }
          else if (hashCode == NonCritical_HASH)
          {
            return ResiliencyPolicyTier::NonCritical;
          }
          else if (hashCode == NotApplicable_HASH)
          {
            return ResiliencyPolicyTier::NotApplicable;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResiliencyPolicyTier>(hashCode);
          }

          return ResiliencyPolicyTier::NOT_SET;
        }

        Aws::String GetNameForResiliencyPolicyTier(ResiliencyPolicyTier enumValue)
        {
          switch(enumValue)
          {
          case ResiliencyPolicyTier::NOT_SET:
            return {};
          case ResiliencyPolicyTier::MissionCritical:
            return "MissionCritical";
          case ResiliencyPolicyTier::Critical:
            return "Critical";
          case ResiliencyPolicyTier::Important:
            return "Important";
          case ResiliencyPolicyTier::CoreServices:
            return "CoreServices";
          case ResiliencyPolicyTier::NonCritical:
            return "NonCritical";
          case ResiliencyPolicyTier::NotApplicable:
            return "NotApplicable";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResiliencyPolicyTierMapper
    } // namespace Model
  } // namespace ResilienceHub
} // namespace Aws
