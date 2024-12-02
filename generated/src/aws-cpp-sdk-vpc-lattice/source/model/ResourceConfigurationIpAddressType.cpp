/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/ResourceConfigurationIpAddressType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace VPCLattice
  {
    namespace Model
    {
      namespace ResourceConfigurationIpAddressTypeMapper
      {

        static const int IPV4_HASH = HashingUtils::HashString("IPV4");
        static const int IPV6_HASH = HashingUtils::HashString("IPV6");
        static const int DUALSTACK_HASH = HashingUtils::HashString("DUALSTACK");


        ResourceConfigurationIpAddressType GetResourceConfigurationIpAddressTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IPV4_HASH)
          {
            return ResourceConfigurationIpAddressType::IPV4;
          }
          else if (hashCode == IPV6_HASH)
          {
            return ResourceConfigurationIpAddressType::IPV6;
          }
          else if (hashCode == DUALSTACK_HASH)
          {
            return ResourceConfigurationIpAddressType::DUALSTACK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceConfigurationIpAddressType>(hashCode);
          }

          return ResourceConfigurationIpAddressType::NOT_SET;
        }

        Aws::String GetNameForResourceConfigurationIpAddressType(ResourceConfigurationIpAddressType enumValue)
        {
          switch(enumValue)
          {
          case ResourceConfigurationIpAddressType::NOT_SET:
            return {};
          case ResourceConfigurationIpAddressType::IPV4:
            return "IPV4";
          case ResourceConfigurationIpAddressType::IPV6:
            return "IPV6";
          case ResourceConfigurationIpAddressType::DUALSTACK:
            return "DUALSTACK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceConfigurationIpAddressTypeMapper
    } // namespace Model
  } // namespace VPCLattice
} // namespace Aws
