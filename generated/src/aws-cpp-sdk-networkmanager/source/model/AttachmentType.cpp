/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/AttachmentType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NetworkManager
  {
    namespace Model
    {
      namespace AttachmentTypeMapper
      {

        static constexpr uint32_t CONNECT_HASH = ConstExprHashingUtils::HashString("CONNECT");
        static constexpr uint32_t SITE_TO_SITE_VPN_HASH = ConstExprHashingUtils::HashString("SITE_TO_SITE_VPN");
        static constexpr uint32_t VPC_HASH = ConstExprHashingUtils::HashString("VPC");
        static constexpr uint32_t TRANSIT_GATEWAY_ROUTE_TABLE_HASH = ConstExprHashingUtils::HashString("TRANSIT_GATEWAY_ROUTE_TABLE");


        AttachmentType GetAttachmentTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CONNECT_HASH)
          {
            return AttachmentType::CONNECT;
          }
          else if (hashCode == SITE_TO_SITE_VPN_HASH)
          {
            return AttachmentType::SITE_TO_SITE_VPN;
          }
          else if (hashCode == VPC_HASH)
          {
            return AttachmentType::VPC;
          }
          else if (hashCode == TRANSIT_GATEWAY_ROUTE_TABLE_HASH)
          {
            return AttachmentType::TRANSIT_GATEWAY_ROUTE_TABLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AttachmentType>(hashCode);
          }

          return AttachmentType::NOT_SET;
        }

        Aws::String GetNameForAttachmentType(AttachmentType enumValue)
        {
          switch(enumValue)
          {
          case AttachmentType::NOT_SET:
            return {};
          case AttachmentType::CONNECT:
            return "CONNECT";
          case AttachmentType::SITE_TO_SITE_VPN:
            return "SITE_TO_SITE_VPN";
          case AttachmentType::VPC:
            return "VPC";
          case AttachmentType::TRANSIT_GATEWAY_ROUTE_TABLE:
            return "TRANSIT_GATEWAY_ROUTE_TABLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AttachmentTypeMapper
    } // namespace Model
  } // namespace NetworkManager
} // namespace Aws
