/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/FirewallDomainUpdateOperation.h>
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
      namespace FirewallDomainUpdateOperationMapper
      {

        static const int ADD_HASH = HashingUtils::HashString("ADD");
        static const int REMOVE_HASH = HashingUtils::HashString("REMOVE");
        static const int REPLACE_HASH = HashingUtils::HashString("REPLACE");


        FirewallDomainUpdateOperation GetFirewallDomainUpdateOperationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ADD_HASH)
          {
            return FirewallDomainUpdateOperation::ADD;
          }
          else if (hashCode == REMOVE_HASH)
          {
            return FirewallDomainUpdateOperation::REMOVE;
          }
          else if (hashCode == REPLACE_HASH)
          {
            return FirewallDomainUpdateOperation::REPLACE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FirewallDomainUpdateOperation>(hashCode);
          }

          return FirewallDomainUpdateOperation::NOT_SET;
        }

        Aws::String GetNameForFirewallDomainUpdateOperation(FirewallDomainUpdateOperation enumValue)
        {
          switch(enumValue)
          {
          case FirewallDomainUpdateOperation::NOT_SET:
            return {};
          case FirewallDomainUpdateOperation::ADD:
            return "ADD";
          case FirewallDomainUpdateOperation::REMOVE:
            return "REMOVE";
          case FirewallDomainUpdateOperation::REPLACE:
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

      } // namespace FirewallDomainUpdateOperationMapper
    } // namespace Model
  } // namespace Route53Resolver
} // namespace Aws
