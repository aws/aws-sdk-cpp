/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snow-device-management/model/IpAddressAssignment.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SnowDeviceManagement
  {
    namespace Model
    {
      namespace IpAddressAssignmentMapper
      {

        static const int DHCP_HASH = HashingUtils::HashString("DHCP");
        static const int STATIC__HASH = HashingUtils::HashString("STATIC");


        IpAddressAssignment GetIpAddressAssignmentForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DHCP_HASH)
          {
            return IpAddressAssignment::DHCP;
          }
          else if (hashCode == STATIC__HASH)
          {
            return IpAddressAssignment::STATIC_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IpAddressAssignment>(hashCode);
          }

          return IpAddressAssignment::NOT_SET;
        }

        Aws::String GetNameForIpAddressAssignment(IpAddressAssignment enumValue)
        {
          switch(enumValue)
          {
          case IpAddressAssignment::NOT_SET:
            return {};
          case IpAddressAssignment::DHCP:
            return "DHCP";
          case IpAddressAssignment::STATIC_:
            return "STATIC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IpAddressAssignmentMapper
    } // namespace Model
  } // namespace SnowDeviceManagement
} // namespace Aws
