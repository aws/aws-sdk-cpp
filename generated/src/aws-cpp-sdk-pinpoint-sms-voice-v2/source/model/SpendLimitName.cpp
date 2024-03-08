/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/SpendLimitName.h>
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
      namespace SpendLimitNameMapper
      {

        static const int TEXT_MESSAGE_MONTHLY_SPEND_LIMIT_HASH = HashingUtils::HashString("TEXT_MESSAGE_MONTHLY_SPEND_LIMIT");
        static const int VOICE_MESSAGE_MONTHLY_SPEND_LIMIT_HASH = HashingUtils::HashString("VOICE_MESSAGE_MONTHLY_SPEND_LIMIT");


        SpendLimitName GetSpendLimitNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TEXT_MESSAGE_MONTHLY_SPEND_LIMIT_HASH)
          {
            return SpendLimitName::TEXT_MESSAGE_MONTHLY_SPEND_LIMIT;
          }
          else if (hashCode == VOICE_MESSAGE_MONTHLY_SPEND_LIMIT_HASH)
          {
            return SpendLimitName::VOICE_MESSAGE_MONTHLY_SPEND_LIMIT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SpendLimitName>(hashCode);
          }

          return SpendLimitName::NOT_SET;
        }

        Aws::String GetNameForSpendLimitName(SpendLimitName enumValue)
        {
          switch(enumValue)
          {
          case SpendLimitName::NOT_SET:
            return {};
          case SpendLimitName::TEXT_MESSAGE_MONTHLY_SPEND_LIMIT:
            return "TEXT_MESSAGE_MONTHLY_SPEND_LIMIT";
          case SpendLimitName::VOICE_MESSAGE_MONTHLY_SPEND_LIMIT:
            return "VOICE_MESSAGE_MONTHLY_SPEND_LIMIT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SpendLimitNameMapper
    } // namespace Model
  } // namespace PinpointSMSVoiceV2
} // namespace Aws
