/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/PhoneNumberFilterName.h>
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
      namespace PhoneNumberFilterNameMapper
      {

        static const int status_HASH = HashingUtils::HashString("status");
        static const int iso_country_code_HASH = HashingUtils::HashString("iso-country-code");
        static const int message_type_HASH = HashingUtils::HashString("message-type");
        static const int number_capability_HASH = HashingUtils::HashString("number-capability");
        static const int number_type_HASH = HashingUtils::HashString("number-type");
        static const int two_way_enabled_HASH = HashingUtils::HashString("two-way-enabled");
        static const int self_managed_opt_outs_enabled_HASH = HashingUtils::HashString("self-managed-opt-outs-enabled");
        static const int opt_out_list_name_HASH = HashingUtils::HashString("opt-out-list-name");
        static const int deletion_protection_enabled_HASH = HashingUtils::HashString("deletion-protection-enabled");
        static const int two_way_channel_arn_HASH = HashingUtils::HashString("two-way-channel-arn");


        PhoneNumberFilterName GetPhoneNumberFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == status_HASH)
          {
            return PhoneNumberFilterName::status;
          }
          else if (hashCode == iso_country_code_HASH)
          {
            return PhoneNumberFilterName::iso_country_code;
          }
          else if (hashCode == message_type_HASH)
          {
            return PhoneNumberFilterName::message_type;
          }
          else if (hashCode == number_capability_HASH)
          {
            return PhoneNumberFilterName::number_capability;
          }
          else if (hashCode == number_type_HASH)
          {
            return PhoneNumberFilterName::number_type;
          }
          else if (hashCode == two_way_enabled_HASH)
          {
            return PhoneNumberFilterName::two_way_enabled;
          }
          else if (hashCode == self_managed_opt_outs_enabled_HASH)
          {
            return PhoneNumberFilterName::self_managed_opt_outs_enabled;
          }
          else if (hashCode == opt_out_list_name_HASH)
          {
            return PhoneNumberFilterName::opt_out_list_name;
          }
          else if (hashCode == deletion_protection_enabled_HASH)
          {
            return PhoneNumberFilterName::deletion_protection_enabled;
          }
          else if (hashCode == two_way_channel_arn_HASH)
          {
            return PhoneNumberFilterName::two_way_channel_arn;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PhoneNumberFilterName>(hashCode);
          }

          return PhoneNumberFilterName::NOT_SET;
        }

        Aws::String GetNameForPhoneNumberFilterName(PhoneNumberFilterName enumValue)
        {
          switch(enumValue)
          {
          case PhoneNumberFilterName::NOT_SET:
            return {};
          case PhoneNumberFilterName::status:
            return "status";
          case PhoneNumberFilterName::iso_country_code:
            return "iso-country-code";
          case PhoneNumberFilterName::message_type:
            return "message-type";
          case PhoneNumberFilterName::number_capability:
            return "number-capability";
          case PhoneNumberFilterName::number_type:
            return "number-type";
          case PhoneNumberFilterName::two_way_enabled:
            return "two-way-enabled";
          case PhoneNumberFilterName::self_managed_opt_outs_enabled:
            return "self-managed-opt-outs-enabled";
          case PhoneNumberFilterName::opt_out_list_name:
            return "opt-out-list-name";
          case PhoneNumberFilterName::deletion_protection_enabled:
            return "deletion-protection-enabled";
          case PhoneNumberFilterName::two_way_channel_arn:
            return "two-way-channel-arn";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PhoneNumberFilterNameMapper
    } // namespace Model
  } // namespace PinpointSMSVoiceV2
} // namespace Aws
