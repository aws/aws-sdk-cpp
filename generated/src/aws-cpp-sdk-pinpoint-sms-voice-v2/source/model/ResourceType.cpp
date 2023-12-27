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

        static const int account_HASH = HashingUtils::HashString("account");
        static const int phone_number_HASH = HashingUtils::HashString("phone-number");
        static const int sender_id_HASH = HashingUtils::HashString("sender-id");
        static const int pool_HASH = HashingUtils::HashString("pool");
        static const int configuration_set_HASH = HashingUtils::HashString("configuration-set");
        static const int opt_out_list_HASH = HashingUtils::HashString("opt-out-list");
        static const int event_destination_HASH = HashingUtils::HashString("event-destination");
        static const int keyword_HASH = HashingUtils::HashString("keyword");
        static const int opted_out_number_HASH = HashingUtils::HashString("opted-out-number");
        static const int registration_HASH = HashingUtils::HashString("registration");
        static const int registration_attachment_HASH = HashingUtils::HashString("registration-attachment");
        static const int verified_destination_number_HASH = HashingUtils::HashString("verified-destination-number");


        ResourceType GetResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
          else if (hashCode == registration_attachment_HASH)
          {
            return ResourceType::registration_attachment;
          }
          else if (hashCode == verified_destination_number_HASH)
          {
            return ResourceType::verified_destination_number;
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
          case ResourceType::registration_attachment:
            return "registration-attachment";
          case ResourceType::verified_destination_number:
            return "verified-destination-number";
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
