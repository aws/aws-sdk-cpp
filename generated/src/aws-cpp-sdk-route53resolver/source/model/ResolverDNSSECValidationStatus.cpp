/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/ResolverDNSSECValidationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Route53Resolver
  {
    namespace Model
    {
      namespace ResolverDNSSECValidationStatusMapper
      {

        static const int ENABLING_HASH = HashingUtils::HashString("ENABLING");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLING_HASH = HashingUtils::HashString("DISABLING");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int UPDATING_TO_USE_LOCAL_RESOURCE_SETTING_HASH = HashingUtils::HashString("UPDATING_TO_USE_LOCAL_RESOURCE_SETTING");
        static const int USE_LOCAL_RESOURCE_SETTING_HASH = HashingUtils::HashString("USE_LOCAL_RESOURCE_SETTING");


        ResolverDNSSECValidationStatus GetResolverDNSSECValidationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLING_HASH)
          {
            return ResolverDNSSECValidationStatus::ENABLING;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return ResolverDNSSECValidationStatus::ENABLED;
          }
          else if (hashCode == DISABLING_HASH)
          {
            return ResolverDNSSECValidationStatus::DISABLING;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return ResolverDNSSECValidationStatus::DISABLED;
          }
          else if (hashCode == UPDATING_TO_USE_LOCAL_RESOURCE_SETTING_HASH)
          {
            return ResolverDNSSECValidationStatus::UPDATING_TO_USE_LOCAL_RESOURCE_SETTING;
          }
          else if (hashCode == USE_LOCAL_RESOURCE_SETTING_HASH)
          {
            return ResolverDNSSECValidationStatus::USE_LOCAL_RESOURCE_SETTING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResolverDNSSECValidationStatus>(hashCode);
          }

          return ResolverDNSSECValidationStatus::NOT_SET;
        }

        Aws::String GetNameForResolverDNSSECValidationStatus(ResolverDNSSECValidationStatus enumValue)
        {
          switch(enumValue)
          {
          case ResolverDNSSECValidationStatus::NOT_SET:
            return {};
          case ResolverDNSSECValidationStatus::ENABLING:
            return "ENABLING";
          case ResolverDNSSECValidationStatus::ENABLED:
            return "ENABLED";
          case ResolverDNSSECValidationStatus::DISABLING:
            return "DISABLING";
          case ResolverDNSSECValidationStatus::DISABLED:
            return "DISABLED";
          case ResolverDNSSECValidationStatus::UPDATING_TO_USE_LOCAL_RESOURCE_SETTING:
            return "UPDATING_TO_USE_LOCAL_RESOURCE_SETTING";
          case ResolverDNSSECValidationStatus::USE_LOCAL_RESOURCE_SETTING:
            return "USE_LOCAL_RESOURCE_SETTING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResolverDNSSECValidationStatusMapper
    } // namespace Model
  } // namespace Route53Resolver
} // namespace Aws
