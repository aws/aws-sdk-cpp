/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmonitor/model/AddressFamily.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NetworkMonitor
  {
    namespace Model
    {
      namespace AddressFamilyMapper
      {

        static const int IPV4_HASH = HashingUtils::HashString("IPV4");
        static const int IPV6_HASH = HashingUtils::HashString("IPV6");


        AddressFamily GetAddressFamilyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IPV4_HASH)
          {
            return AddressFamily::IPV4;
          }
          else if (hashCode == IPV6_HASH)
          {
            return AddressFamily::IPV6;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AddressFamily>(hashCode);
          }

          return AddressFamily::NOT_SET;
        }

        Aws::String GetNameForAddressFamily(AddressFamily enumValue)
        {
          switch(enumValue)
          {
          case AddressFamily::NOT_SET:
            return {};
          case AddressFamily::IPV4:
            return "IPV4";
          case AddressFamily::IPV6:
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

      } // namespace AddressFamilyMapper
    } // namespace Model
  } // namespace NetworkMonitor
} // namespace Aws
