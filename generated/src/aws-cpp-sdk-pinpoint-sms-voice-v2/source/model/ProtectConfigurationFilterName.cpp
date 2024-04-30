/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/ProtectConfigurationFilterName.h>
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
      namespace ProtectConfigurationFilterNameMapper
      {

        static const int account_default_HASH = HashingUtils::HashString("account-default");
        static const int deletion_protection_enabled_HASH = HashingUtils::HashString("deletion-protection-enabled");


        ProtectConfigurationFilterName GetProtectConfigurationFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == account_default_HASH)
          {
            return ProtectConfigurationFilterName::account_default;
          }
          else if (hashCode == deletion_protection_enabled_HASH)
          {
            return ProtectConfigurationFilterName::deletion_protection_enabled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProtectConfigurationFilterName>(hashCode);
          }

          return ProtectConfigurationFilterName::NOT_SET;
        }

        Aws::String GetNameForProtectConfigurationFilterName(ProtectConfigurationFilterName enumValue)
        {
          switch(enumValue)
          {
          case ProtectConfigurationFilterName::NOT_SET:
            return {};
          case ProtectConfigurationFilterName::account_default:
            return "account-default";
          case ProtectConfigurationFilterName::deletion_protection_enabled:
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

      } // namespace ProtectConfigurationFilterNameMapper
    } // namespace Model
  } // namespace PinpointSMSVoiceV2
} // namespace Aws
