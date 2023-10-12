/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/FirewallDomainListStatus.h>
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
      namespace FirewallDomainListStatusMapper
      {

        static constexpr uint32_t COMPLETE_HASH = ConstExprHashingUtils::HashString("COMPLETE");
        static constexpr uint32_t COMPLETE_IMPORT_FAILED_HASH = ConstExprHashingUtils::HashString("COMPLETE_IMPORT_FAILED");
        static constexpr uint32_t IMPORTING_HASH = ConstExprHashingUtils::HashString("IMPORTING");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");


        FirewallDomainListStatus GetFirewallDomainListStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COMPLETE_HASH)
          {
            return FirewallDomainListStatus::COMPLETE;
          }
          else if (hashCode == COMPLETE_IMPORT_FAILED_HASH)
          {
            return FirewallDomainListStatus::COMPLETE_IMPORT_FAILED;
          }
          else if (hashCode == IMPORTING_HASH)
          {
            return FirewallDomainListStatus::IMPORTING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return FirewallDomainListStatus::DELETING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return FirewallDomainListStatus::UPDATING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FirewallDomainListStatus>(hashCode);
          }

          return FirewallDomainListStatus::NOT_SET;
        }

        Aws::String GetNameForFirewallDomainListStatus(FirewallDomainListStatus enumValue)
        {
          switch(enumValue)
          {
          case FirewallDomainListStatus::NOT_SET:
            return {};
          case FirewallDomainListStatus::COMPLETE:
            return "COMPLETE";
          case FirewallDomainListStatus::COMPLETE_IMPORT_FAILED:
            return "COMPLETE_IMPORT_FAILED";
          case FirewallDomainListStatus::IMPORTING:
            return "IMPORTING";
          case FirewallDomainListStatus::DELETING:
            return "DELETING";
          case FirewallDomainListStatus::UPDATING:
            return "UPDATING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FirewallDomainListStatusMapper
    } // namespace Model
  } // namespace Route53Resolver
} // namespace Aws
