/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/AccessDeniedExceptionReason.h>
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
      namespace AccessDeniedExceptionReasonMapper
      {

        static constexpr uint32_t INSUFFICIENT_ACCOUNT_REPUTATION_HASH = ConstExprHashingUtils::HashString("INSUFFICIENT_ACCOUNT_REPUTATION");
        static constexpr uint32_t ACCOUNT_DISABLED_HASH = ConstExprHashingUtils::HashString("ACCOUNT_DISABLED");


        AccessDeniedExceptionReason GetAccessDeniedExceptionReasonForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INSUFFICIENT_ACCOUNT_REPUTATION_HASH)
          {
            return AccessDeniedExceptionReason::INSUFFICIENT_ACCOUNT_REPUTATION;
          }
          else if (hashCode == ACCOUNT_DISABLED_HASH)
          {
            return AccessDeniedExceptionReason::ACCOUNT_DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccessDeniedExceptionReason>(hashCode);
          }

          return AccessDeniedExceptionReason::NOT_SET;
        }

        Aws::String GetNameForAccessDeniedExceptionReason(AccessDeniedExceptionReason enumValue)
        {
          switch(enumValue)
          {
          case AccessDeniedExceptionReason::NOT_SET:
            return {};
          case AccessDeniedExceptionReason::INSUFFICIENT_ACCOUNT_REPUTATION:
            return "INSUFFICIENT_ACCOUNT_REPUTATION";
          case AccessDeniedExceptionReason::ACCOUNT_DISABLED:
            return "ACCOUNT_DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AccessDeniedExceptionReasonMapper
    } // namespace Model
  } // namespace PinpointSMSVoiceV2
} // namespace Aws
