/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/ResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PinpointSMSVoiceV2
  {
    namespace Model
    {
      namespace ResourceTypeMapper
      {

        static constexpr uint32_t account_HASH = ConstExprHashingUtils::HashString("account");
        static constexpr uint32_t phone_number_HASH = ConstExprHashingUtils::HashString("phone-number");
        static constexpr uint32_t sender_id_HASH = ConstExprHashingUtils::HashString("sender-id");
        static constexpr uint32_t pool_HASH = ConstExprHashingUtils::HashString("pool");
        static constexpr uint32_t configuration_set_HASH = ConstExprHashingUtils::HashString("configuration-set");
        static constexpr uint32_t opt_out_list_HASH = ConstExprHashingUtils::HashString("opt-out-list");
        static constexpr uint32_t event_destination_HASH = ConstExprHashingUtils::HashString("event-destination");
        static constexpr uint32_t keyword_HASH = ConstExprHashingUtils::HashString("keyword");
        static constexpr uint32_t opted_out_number_HASH = ConstExprHashingUtils::HashString("opted-out-number");
        static constexpr uint32_t registration_HASH = ConstExprHashingUtils::HashString("registration");


        ResourceType GetResourceTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == account_HASH)
          {
            return ResourceType::account;
          }
          else if (hashCode == phone_number_HASH)
          {
            return ResourceType::phone_number;
          }
          else if (hashCode == sender_id_HASH)
          {
            return ResourceType::sender_id;
          }
          else if (hashCode == pool_HASH)
          {
            return ResourceType::pool;
          }
          else if (hashCode == configuration_set_HASH)
          {
            return ResourceType::configuration_set;
          }
          else if (hashCode == opt_out_list_HASH)
          {
            return ResourceType::opt_out_list;
          }
          else if (hashCode == event_destination_HASH)
          {
            return ResourceType::event_destination;
          }
          else if (hashCode == keyword_HASH)
          {
            return ResourceType::keyword;
          }
          else if (hashCode == opted_out_number_HASH)
          {
            return ResourceType::opted_out_number;
          }
          else if (hashCode == registration_HASH)
          {
            return ResourceType::registration;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceType>(hashCode);
          }

          return ResourceType::NOT_SET;
        }

        Aws::String GetNameForResourceType(ResourceType enumValue)
        {
          switch(enumValue)
          {
          case ResourceType::NOT_SET:
            return {};
          case ResourceType::account:
            return "account";
          case ResourceType::phone_number:
            return "phone-number";
          case ResourceType::sender_id:
            return "sender-id";
          case ResourceType::pool:
            return "pool";
          case ResourceType::configuration_set:
            return "configuration-set";
          case ResourceType::opt_out_list:
            return "opt-out-list";
          case ResourceType::event_destination:
            return "event-destination";
          case ResourceType::keyword:
            return "keyword";
          case ResourceType::opted_out_number:
            return "opted-out-number";
          case ResourceType::registration:
            return "registration";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceTypeMapper
    } // namespace Model
  } // namespace PinpointSMSVoiceV2
} // namespace Aws
