/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/AccountLimitName.h>
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
      namespace AccountLimitNameMapper
      {

        static const int PHONE_NUMBERS_HASH = HashingUtils::HashString("PHONE_NUMBERS");
        static const int POOLS_HASH = HashingUtils::HashString("POOLS");
        static const int CONFIGURATION_SETS_HASH = HashingUtils::HashString("CONFIGURATION_SETS");
        static const int OPT_OUT_LISTS_HASH = HashingUtils::HashString("OPT_OUT_LISTS");
        static const int SENDER_IDS_HASH = HashingUtils::HashString("SENDER_IDS");
        static const int REGISTRATIONS_HASH = HashingUtils::HashString("REGISTRATIONS");
        static const int REGISTRATION_ATTACHMENTS_HASH = HashingUtils::HashString("REGISTRATION_ATTACHMENTS");
        static const int VERIFIED_DESTINATION_NUMBERS_HASH = HashingUtils::HashString("VERIFIED_DESTINATION_NUMBERS");


        AccountLimitName GetAccountLimitNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PHONE_NUMBERS_HASH)
          {
            return AccountLimitName::PHONE_NUMBERS;
          }
          else if (hashCode == POOLS_HASH)
          {
            return AccountLimitName::POOLS;
          }
          else if (hashCode == CONFIGURATION_SETS_HASH)
          {
            return AccountLimitName::CONFIGURATION_SETS;
          }
          else if (hashCode == OPT_OUT_LISTS_HASH)
          {
            return AccountLimitName::OPT_OUT_LISTS;
          }
          else if (hashCode == SENDER_IDS_HASH)
          {
            return AccountLimitName::SENDER_IDS;
          }
          else if (hashCode == REGISTRATIONS_HASH)
          {
            return AccountLimitName::REGISTRATIONS;
          }
          else if (hashCode == REGISTRATION_ATTACHMENTS_HASH)
          {
            return AccountLimitName::REGISTRATION_ATTACHMENTS;
          }
          else if (hashCode == VERIFIED_DESTINATION_NUMBERS_HASH)
          {
            return AccountLimitName::VERIFIED_DESTINATION_NUMBERS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccountLimitName>(hashCode);
          }

          return AccountLimitName::NOT_SET;
        }

        Aws::String GetNameForAccountLimitName(AccountLimitName enumValue)
        {
          switch(enumValue)
          {
          case AccountLimitName::NOT_SET:
            return {};
          case AccountLimitName::PHONE_NUMBERS:
            return "PHONE_NUMBERS";
          case AccountLimitName::POOLS:
            return "POOLS";
          case AccountLimitName::CONFIGURATION_SETS:
            return "CONFIGURATION_SETS";
          case AccountLimitName::OPT_OUT_LISTS:
            return "OPT_OUT_LISTS";
          case AccountLimitName::SENDER_IDS:
            return "SENDER_IDS";
          case AccountLimitName::REGISTRATIONS:
            return "REGISTRATIONS";
          case AccountLimitName::REGISTRATION_ATTACHMENTS:
            return "REGISTRATION_ATTACHMENTS";
          case AccountLimitName::VERIFIED_DESTINATION_NUMBERS:
            return "VERIFIED_DESTINATION_NUMBERS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AccountLimitNameMapper
    } // namespace Model
  } // namespace PinpointSMSVoiceV2
} // namespace Aws
