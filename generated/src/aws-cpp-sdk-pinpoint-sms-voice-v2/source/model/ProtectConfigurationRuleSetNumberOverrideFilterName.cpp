/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/ProtectConfigurationRuleSetNumberOverrideFilterName.h>
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
      namespace ProtectConfigurationRuleSetNumberOverrideFilterNameMapper
      {

        static const int iso_country_code_HASH = HashingUtils::HashString("iso-country-code");
        static const int destination_phone_number_begins_with_HASH = HashingUtils::HashString("destination-phone-number-begins-with");
        static const int action_HASH = HashingUtils::HashString("action");
        static const int expires_before_HASH = HashingUtils::HashString("expires-before");
        static const int expires_after_HASH = HashingUtils::HashString("expires-after");
        static const int created_before_HASH = HashingUtils::HashString("created-before");
        static const int created_after_HASH = HashingUtils::HashString("created-after");


        ProtectConfigurationRuleSetNumberOverrideFilterName GetProtectConfigurationRuleSetNumberOverrideFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == iso_country_code_HASH)
          {
            return ProtectConfigurationRuleSetNumberOverrideFilterName::iso_country_code;
          }
          else if (hashCode == destination_phone_number_begins_with_HASH)
          {
            return ProtectConfigurationRuleSetNumberOverrideFilterName::destination_phone_number_begins_with;
          }
          else if (hashCode == action_HASH)
          {
            return ProtectConfigurationRuleSetNumberOverrideFilterName::action;
          }
          else if (hashCode == expires_before_HASH)
          {
            return ProtectConfigurationRuleSetNumberOverrideFilterName::expires_before;
          }
          else if (hashCode == expires_after_HASH)
          {
            return ProtectConfigurationRuleSetNumberOverrideFilterName::expires_after;
          }
          else if (hashCode == created_before_HASH)
          {
            return ProtectConfigurationRuleSetNumberOverrideFilterName::created_before;
          }
          else if (hashCode == created_after_HASH)
          {
            return ProtectConfigurationRuleSetNumberOverrideFilterName::created_after;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProtectConfigurationRuleSetNumberOverrideFilterName>(hashCode);
          }

          return ProtectConfigurationRuleSetNumberOverrideFilterName::NOT_SET;
        }

        Aws::String GetNameForProtectConfigurationRuleSetNumberOverrideFilterName(ProtectConfigurationRuleSetNumberOverrideFilterName enumValue)
        {
          switch(enumValue)
          {
          case ProtectConfigurationRuleSetNumberOverrideFilterName::NOT_SET:
            return {};
          case ProtectConfigurationRuleSetNumberOverrideFilterName::iso_country_code:
            return "iso-country-code";
          case ProtectConfigurationRuleSetNumberOverrideFilterName::destination_phone_number_begins_with:
            return "destination-phone-number-begins-with";
          case ProtectConfigurationRuleSetNumberOverrideFilterName::action:
            return "action";
          case ProtectConfigurationRuleSetNumberOverrideFilterName::expires_before:
            return "expires-before";
          case ProtectConfigurationRuleSetNumberOverrideFilterName::expires_after:
            return "expires-after";
          case ProtectConfigurationRuleSetNumberOverrideFilterName::created_before:
            return "created-before";
          case ProtectConfigurationRuleSetNumberOverrideFilterName::created_after:
            return "created-after";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProtectConfigurationRuleSetNumberOverrideFilterNameMapper
    } // namespace Model
  } // namespace PinpointSMSVoiceV2
} // namespace Aws
