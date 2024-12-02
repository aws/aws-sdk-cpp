/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/ResourceGatewayIpAddressType.h>
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
      namespace ResourceGatewayIpAddressTypeMapper
      {

        static const int IPV4_HASH = HashingUtils::HashString("IPV4");
        static const int IPV6_HASH = HashingUtils::HashString("IPV6");
        static const int DUALSTACK_HASH = HashingUtils::HashString("DUALSTACK");


        ResourceGatewayIpAddressType GetResourceGatewayIpAddressTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IPV4_HASH)
          {
            return ResourceGatewayIpAddressType::IPV4;
          }
          else if (hashCode == IPV6_HASH)
          {
            return ResourceGatewayIpAddressType::IPV6;
          }
          else if (hashCode == DUALSTACK_HASH)
          {
            return ResourceGatewayIpAddressType::DUALSTACK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceGatewayIpAddressType>(hashCode);
          }

          return ResourceGatewayIpAddressType::NOT_SET;
        }

        Aws::String GetNameForResourceGatewayIpAddressType(ResourceGatewayIpAddressType enumValue)
        {
          switch(enumValue)
          {
          case ResourceGatewayIpAddressType::NOT_SET:
            return {};
          case ResourceGatewayIpAddressType::IPV4:
            return "IPV4";
          case ResourceGatewayIpAddressType::IPV6:
            return "IPV6";
          case ResourceGatewayIpAddressType::DUALSTACK:
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

      } // namespace ResourceGatewayIpAddressTypeMapper
    } // namespace Model
  } // namespace VPCLattice
} // namespace Aws
