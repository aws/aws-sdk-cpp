/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/IpAddressStatus.h>
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
      namespace IpAddressStatusMapper
      {

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t FAILED_CREATION_HASH = ConstExprHashingUtils::HashString("FAILED_CREATION");
        static constexpr uint32_t ATTACHING_HASH = ConstExprHashingUtils::HashString("ATTACHING");
        static constexpr uint32_t ATTACHED_HASH = ConstExprHashingUtils::HashString("ATTACHED");
        static constexpr uint32_t REMAP_DETACHING_HASH = ConstExprHashingUtils::HashString("REMAP_DETACHING");
        static constexpr uint32_t REMAP_ATTACHING_HASH = ConstExprHashingUtils::HashString("REMAP_ATTACHING");
        static constexpr uint32_t DETACHING_HASH = ConstExprHashingUtils::HashString("DETACHING");
        static constexpr uint32_t FAILED_RESOURCE_GONE_HASH = ConstExprHashingUtils::HashString("FAILED_RESOURCE_GONE");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t DELETE_FAILED_FAS_EXPIRED_HASH = ConstExprHashingUtils::HashString("DELETE_FAILED_FAS_EXPIRED");
        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");
        static constexpr uint32_t UPDATE_FAILED_HASH = ConstExprHashingUtils::HashString("UPDATE_FAILED");


        IpAddressStatus GetIpAddressStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return IpAddressStatus::CREATING;
          }
          else if (hashCode == FAILED_CREATION_HASH)
          {
            return IpAddressStatus::FAILED_CREATION;
          }
          else if (hashCode == ATTACHING_HASH)
          {
            return IpAddressStatus::ATTACHING;
          }
          else if (hashCode == ATTACHED_HASH)
          {
            return IpAddressStatus::ATTACHED;
          }
          else if (hashCode == REMAP_DETACHING_HASH)
          {
            return IpAddressStatus::REMAP_DETACHING;
          }
          else if (hashCode == REMAP_ATTACHING_HASH)
          {
            return IpAddressStatus::REMAP_ATTACHING;
          }
          else if (hashCode == DETACHING_HASH)
          {
            return IpAddressStatus::DETACHING;
          }
          else if (hashCode == FAILED_RESOURCE_GONE_HASH)
          {
            return IpAddressStatus::FAILED_RESOURCE_GONE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return IpAddressStatus::DELETING;
          }
          else if (hashCode == DELETE_FAILED_FAS_EXPIRED_HASH)
          {
            return IpAddressStatus::DELETE_FAILED_FAS_EXPIRED;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return IpAddressStatus::UPDATING;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return IpAddressStatus::UPDATE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IpAddressStatus>(hashCode);
          }

          return IpAddressStatus::NOT_SET;
        }

        Aws::String GetNameForIpAddressStatus(IpAddressStatus enumValue)
        {
          switch(enumValue)
          {
          case IpAddressStatus::NOT_SET:
            return {};
          case IpAddressStatus::CREATING:
            return "CREATING";
          case IpAddressStatus::FAILED_CREATION:
            return "FAILED_CREATION";
          case IpAddressStatus::ATTACHING:
            return "ATTACHING";
          case IpAddressStatus::ATTACHED:
            return "ATTACHED";
          case IpAddressStatus::REMAP_DETACHING:
            return "REMAP_DETACHING";
          case IpAddressStatus::REMAP_ATTACHING:
            return "REMAP_ATTACHING";
          case IpAddressStatus::DETACHING:
            return "DETACHING";
          case IpAddressStatus::FAILED_RESOURCE_GONE:
            return "FAILED_RESOURCE_GONE";
          case IpAddressStatus::DELETING:
            return "DELETING";
          case IpAddressStatus::DELETE_FAILED_FAS_EXPIRED:
            return "DELETE_FAILED_FAS_EXPIRED";
          case IpAddressStatus::UPDATING:
            return "UPDATING";
          case IpAddressStatus::UPDATE_FAILED:
            return "UPDATE_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IpAddressStatusMapper
    } // namespace Model
  } // namespace Route53Resolver
} // namespace Aws
