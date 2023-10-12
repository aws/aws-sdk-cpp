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

        static constexpr uint32_t status_HASH = ConstExprHashingUtils::HashString("status");
        static constexpr uint32_t iso_country_code_HASH = ConstExprHashingUtils::HashString("iso-country-code");
        static constexpr uint32_t message_type_HASH = ConstExprHashingUtils::HashString("message-type");
        static constexpr uint32_t number_capability_HASH = ConstExprHashingUtils::HashString("number-capability");
        static constexpr uint32_t number_type_HASH = ConstExprHashingUtils::HashString("number-type");
        static constexpr uint32_t two_way_enabled_HASH = ConstExprHashingUtils::HashString("two-way-enabled");
        static constexpr uint32_t self_managed_opt_outs_enabled_HASH = ConstExprHashingUtils::HashString("self-managed-opt-outs-enabled");
        static constexpr uint32_t opt_out_list_name_HASH = ConstExprHashingUtils::HashString("opt-out-list-name");
        static constexpr uint32_t deletion_protection_enabled_HASH = ConstExprHashingUtils::HashString("deletion-protection-enabled");


        PhoneNumberFilterName GetPhoneNumberFilterNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
