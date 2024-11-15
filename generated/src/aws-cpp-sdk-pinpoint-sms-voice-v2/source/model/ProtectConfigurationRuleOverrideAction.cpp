/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/ProtectConfigurationRuleOverrideAction.h>
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
      namespace ProtectConfigurationRuleOverrideActionMapper
      {

        static const int ALLOW_HASH = HashingUtils::HashString("ALLOW");
        static const int BLOCK_HASH = HashingUtils::HashString("BLOCK");


        ProtectConfigurationRuleOverrideAction GetProtectConfigurationRuleOverrideActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALLOW_HASH)
          {
            return ProtectConfigurationRuleOverrideAction::ALLOW;
          }
          else if (hashCode == BLOCK_HASH)
          {
            return ProtectConfigurationRuleOverrideAction::BLOCK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProtectConfigurationRuleOverrideAction>(hashCode);
          }

          return ProtectConfigurationRuleOverrideAction::NOT_SET;
        }

        Aws::String GetNameForProtectConfigurationRuleOverrideAction(ProtectConfigurationRuleOverrideAction enumValue)
        {
          switch(enumValue)
          {
          case ProtectConfigurationRuleOverrideAction::NOT_SET:
            return {};
          case ProtectConfigurationRuleOverrideAction::ALLOW:
            return "ALLOW";
          case ProtectConfigurationRuleOverrideAction::BLOCK:
            return "BLOCK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProtectConfigurationRuleOverrideActionMapper
    } // namespace Model
  } // namespace PinpointSMSVoiceV2
} // namespace Aws
