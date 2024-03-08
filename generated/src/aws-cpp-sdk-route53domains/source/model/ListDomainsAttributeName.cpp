/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53domains/model/ListDomainsAttributeName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Route53Domains
  {
    namespace Model
    {
      namespace ListDomainsAttributeNameMapper
      {

        static const int DomainName_HASH = HashingUtils::HashString("DomainName");
        static const int Expiry_HASH = HashingUtils::HashString("Expiry");


        ListDomainsAttributeName GetListDomainsAttributeNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DomainName_HASH)
          {
            return ListDomainsAttributeName::DomainName;
          }
          else if (hashCode == Expiry_HASH)
          {
            return ListDomainsAttributeName::Expiry;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ListDomainsAttributeName>(hashCode);
          }

          return ListDomainsAttributeName::NOT_SET;
        }

        Aws::String GetNameForListDomainsAttributeName(ListDomainsAttributeName enumValue)
        {
          switch(enumValue)
          {
          case ListDomainsAttributeName::NOT_SET:
            return {};
          case ListDomainsAttributeName::DomainName:
            return "DomainName";
          case ListDomainsAttributeName::Expiry:
            return "Expiry";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ListDomainsAttributeNameMapper
    } // namespace Model
  } // namespace Route53Domains
} // namespace Aws
