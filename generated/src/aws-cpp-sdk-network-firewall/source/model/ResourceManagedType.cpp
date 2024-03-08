/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/ResourceManagedType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NetworkFirewall
  {
    namespace Model
    {
      namespace ResourceManagedTypeMapper
      {

        static const int AWS_MANAGED_THREAT_SIGNATURES_HASH = HashingUtils::HashString("AWS_MANAGED_THREAT_SIGNATURES");
        static const int AWS_MANAGED_DOMAIN_LISTS_HASH = HashingUtils::HashString("AWS_MANAGED_DOMAIN_LISTS");


        ResourceManagedType GetResourceManagedTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_MANAGED_THREAT_SIGNATURES_HASH)
          {
            return ResourceManagedType::AWS_MANAGED_THREAT_SIGNATURES;
          }
          else if (hashCode == AWS_MANAGED_DOMAIN_LISTS_HASH)
          {
            return ResourceManagedType::AWS_MANAGED_DOMAIN_LISTS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceManagedType>(hashCode);
          }

          return ResourceManagedType::NOT_SET;
        }

        Aws::String GetNameForResourceManagedType(ResourceManagedType enumValue)
        {
          switch(enumValue)
          {
          case ResourceManagedType::NOT_SET:
            return {};
          case ResourceManagedType::AWS_MANAGED_THREAT_SIGNATURES:
            return "AWS_MANAGED_THREAT_SIGNATURES";
          case ResourceManagedType::AWS_MANAGED_DOMAIN_LISTS:
            return "AWS_MANAGED_DOMAIN_LISTS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceManagedTypeMapper
    } // namespace Model
  } // namespace NetworkFirewall
} // namespace Aws
