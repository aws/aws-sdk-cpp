/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/FirewallDomainRedirectionAction.h>
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
      namespace FirewallDomainRedirectionActionMapper
      {

        static const int INSPECT_REDIRECTION_DOMAIN_HASH = HashingUtils::HashString("INSPECT_REDIRECTION_DOMAIN");
        static const int TRUST_REDIRECTION_DOMAIN_HASH = HashingUtils::HashString("TRUST_REDIRECTION_DOMAIN");


        FirewallDomainRedirectionAction GetFirewallDomainRedirectionActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INSPECT_REDIRECTION_DOMAIN_HASH)
          {
            return FirewallDomainRedirectionAction::INSPECT_REDIRECTION_DOMAIN;
          }
          else if (hashCode == TRUST_REDIRECTION_DOMAIN_HASH)
          {
            return FirewallDomainRedirectionAction::TRUST_REDIRECTION_DOMAIN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FirewallDomainRedirectionAction>(hashCode);
          }

          return FirewallDomainRedirectionAction::NOT_SET;
        }

        Aws::String GetNameForFirewallDomainRedirectionAction(FirewallDomainRedirectionAction enumValue)
        {
          switch(enumValue)
          {
          case FirewallDomainRedirectionAction::NOT_SET:
            return {};
          case FirewallDomainRedirectionAction::INSPECT_REDIRECTION_DOMAIN:
            return "INSPECT_REDIRECTION_DOMAIN";
          case FirewallDomainRedirectionAction::TRUST_REDIRECTION_DOMAIN:
            return "TRUST_REDIRECTION_DOMAIN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FirewallDomainRedirectionActionMapper
    } // namespace Model
  } // namespace Route53Resolver
} // namespace Aws
