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

        static const int MissionCritical_HASH = HashingUtils::HashString("MissionCritical");
        static const int Critical_HASH = HashingUtils::HashString("Critical");
        static const int Important_HASH = HashingUtils::HashString("Important");
        static const int CoreServices_HASH = HashingUtils::HashString("CoreServices");
        static const int NonCritical_HASH = HashingUtils::HashString("NonCritical");
        static const int NotApplicable_HASH = HashingUtils::HashString("NotApplicable");


        ResiliencyPolicyTier GetResiliencyPolicyTierForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
