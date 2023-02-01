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

        static const int DUALSTACK_HASH = HashingUtils::HashString("DUALSTACK");
        static const int IPV4_HASH = HashingUtils::HashString("IPV4");


        IPAddressType GetIPAddressTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DUALSTACK_HASH)
          {
            return IPAddressType::DUALSTACK;
          }
          else if (hashCode == IPV4_HASH)
          {
            return IPAddressType::IPV4;
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
          case IPAddressType::DUALSTACK:
            return "DUALSTACK";
          case IPAddressType::IPV4:
            return "IPV4";
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
