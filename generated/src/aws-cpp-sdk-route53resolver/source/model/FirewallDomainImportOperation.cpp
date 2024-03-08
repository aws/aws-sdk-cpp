/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/FirewallDomainImportOperation.h>
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
      namespace FirewallDomainImportOperationMapper
      {

        static const int REPLACE_HASH = HashingUtils::HashString("REPLACE");


        FirewallDomainImportOperation GetFirewallDomainImportOperationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REPLACE_HASH)
          {
            return FirewallDomainImportOperation::REPLACE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FirewallDomainImportOperation>(hashCode);
          }

          return FirewallDomainImportOperation::NOT_SET;
        }

        Aws::String GetNameForFirewallDomainImportOperation(FirewallDomainImportOperation enumValue)
        {
          switch(enumValue)
          {
          case FirewallDomainImportOperation::NOT_SET:
            return {};
          case FirewallDomainImportOperation::REPLACE:
            return "REPLACE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FirewallDomainImportOperationMapper
    } // namespace Model
  } // namespace Route53Resolver
} // namespace Aws
