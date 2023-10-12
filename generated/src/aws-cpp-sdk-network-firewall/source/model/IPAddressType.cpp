/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/IPAddressType.h>
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
      namespace IPAddressTypeMapper
      {

        static constexpr uint32_t DUALSTACK_HASH = ConstExprHashingUtils::HashString("DUALSTACK");
        static constexpr uint32_t IPV4_HASH = ConstExprHashingUtils::HashString("IPV4");
        static constexpr uint32_t IPV6_HASH = ConstExprHashingUtils::HashString("IPV6");


        IPAddressType GetIPAddressTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DUALSTACK_HASH)
          {
            return IPAddressType::DUALSTACK;
          }
          else if (hashCode == IPV4_HASH)
          {
            return IPAddressType::IPV4;
          }
          else if (hashCode == IPV6_HASH)
          {
            return IPAddressType::IPV6;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IPAddressType>(hashCode);
          }

          return IPAddressType::NOT_SET;
        }

        Aws::String GetNameForIPAddressType(IPAddressType enumValue)
        {
          switch(enumValue)
          {
          case IPAddressType::NOT_SET:
            return {};
          case IPAddressType::DUALSTACK:
            return "DUALSTACK";
          case IPAddressType::IPV4:
            return "IPV4";
          case IPAddressType::IPV6:
            return "IPV6";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IPAddressTypeMapper
    } // namespace Model
  } // namespace NetworkFirewall
} // namespace Aws
