﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/ServiceQuotaExceededExceptionReason.h>
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
      namespace ServiceQuotaExceededExceptionReasonMapper
      {

        static const int CONFIGURATION_SETS_PER_ACCOUNT_HASH = HashingUtils::HashString("CONFIGURATION_SETS_PER_ACCOUNT");
        static const int DAILY_DESTINATION_CALL_LIMIT_HASH = HashingUtils::HashString("DAILY_DESTINATION_CALL_LIMIT");
        static const int EVENT_DESTINATIONS_PER_CONFIGURATION_SET_HASH = HashingUtils::HashString("EVENT_DESTINATIONS_PER_CONFIGURATION_SET");
        static const int KEYWORDS_PER_PHONE_NUMBER_HASH = HashingUtils::HashString("KEYWORDS_PER_PHONE_NUMBER");
        static const int KEYWORDS_PER_POOL_HASH = HashingUtils::HashString("KEYWORDS_PER_POOL");
        static const int MONTHLY_SPEND_LIMIT_REACHED_FOR_TEXT_HASH = HashingUtils::HashString("MONTHLY_SPEND_LIMIT_REACHED_FOR_TEXT");
        static const int MONTHLY_SPEND_LIMIT_REACHED_FOR_VOICE_HASH = HashingUtils::HashString("MONTHLY_SPEND_LIMIT_REACHED_FOR_VOICE");
        static const int OPT_OUT_LISTS_PER_ACCOUNT_HASH = HashingUtils::HashString("OPT_OUT_LISTS_PER_ACCOUNT");
        static const int ORIGINATION_IDENTITIES_PER_POOL_HASH = HashingUtils::HashString("ORIGINATION_IDENTITIES_PER_POOL");
        static const int PHONE_NUMBERS_PER_ACCOUNT_HASH = HashingUtils::HashString("PHONE_NUMBERS_PER_ACCOUNT");
        static const int PHONE_NUMBERS_PER_REGISTRATION_HASH = HashingUtils::HashString("PHONE_NUMBERS_PER_REGISTRATION");
        static const int POOLS_PER_ACCOUNT_HASH = HashingUtils::HashString("POOLS_PER_ACCOUNT");
        static const int TAGS_PER_RESOURCE_HASH = HashingUtils::HashString("TAGS_PER_RESOURCE");


        ServiceQuotaExceededExceptionReason GetServiceQuotaExceededExceptionReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CONFIGURATION_SETS_PER_ACCOUNT_HASH)
          {
            return ServiceQuotaExceededExceptionReason::CONFIGURATION_SETS_PER_ACCOUNT;
          }
          else if (hashCode == DAILY_DESTINATION_CALL_LIMIT_HASH)
          {
            return ServiceQuotaExceededExceptionReason::DAILY_DESTINATION_CALL_LIMIT;
          }
          else if (hashCode == EVENT_DESTINATIONS_PER_CONFIGURATION_SET_HASH)
          {
            return ServiceQuotaExceededExceptionReason::EVENT_DESTINATIONS_PER_CONFIGURATION_SET;
          }
          else if (hashCode == KEYWORDS_PER_PHONE_NUMBER_HASH)
          {
            return ServiceQuotaExceededExceptionReason::KEYWORDS_PER_PHONE_NUMBER;
          }
          else if (hashCode == KEYWORDS_PER_POOL_HASH)
          {
            return ServiceQuotaExceededExceptionReason::KEYWORDS_PER_POOL;
          }
          else if (hashCode == MONTHLY_SPEND_LIMIT_REACHED_FOR_TEXT_HASH)
          {
            return ServiceQuotaExceededExceptionReason::MONTHLY_SPEND_LIMIT_REACHED_FOR_TEXT;
          }
          else if (hashCode == MONTHLY_SPEND_LIMIT_REACHED_FOR_VOICE_HASH)
          {
            return ServiceQuotaExceededExceptionReason::MONTHLY_SPEND_LIMIT_REACHED_FOR_VOICE;
          }
          else if (hashCode == OPT_OUT_LISTS_PER_ACCOUNT_HASH)
          {
            return ServiceQuotaExceededExceptionReason::OPT_OUT_LISTS_PER_ACCOUNT;
          }
          else if (hashCode == ORIGINATION_IDENTITIES_PER_POOL_HASH)
          {
            return ServiceQuotaExceededExceptionReason::ORIGINATION_IDENTITIES_PER_POOL;
          }
          else if (hashCode == PHONE_NUMBERS_PER_ACCOUNT_HASH)
          {
            return ServiceQuotaExceededExceptionReason::PHONE_NUMBERS_PER_ACCOUNT;
          }
          else if (hashCode == PHONE_NUMBERS_PER_REGISTRATION_HASH)
          {
            return ServiceQuotaExceededExceptionReason::PHONE_NUMBERS_PER_REGISTRATION;
          }
          else if (hashCode == POOLS_PER_ACCOUNT_HASH)
          {
            return ServiceQuotaExceededExceptionReason::POOLS_PER_ACCOUNT;
          }
          else if (hashCode == TAGS_PER_RESOURCE_HASH)
          {
            return ServiceQuotaExceededExceptionReason::TAGS_PER_RESOURCE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServiceQuotaExceededExceptionReason>(hashCode);
          }

          return ServiceQuotaExceededExceptionReason::NOT_SET;
        }

        Aws::String GetNameForServiceQuotaExceededExceptionReason(ServiceQuotaExceededExceptionReason enumValue)
        {
          switch(enumValue)
          {
          case ServiceQuotaExceededExceptionReason::NOT_SET:
            return {};
          case ServiceQuotaExceededExceptionReason::CONFIGURATION_SETS_PER_ACCOUNT:
            return "CONFIGURATION_SETS_PER_ACCOUNT";
          case ServiceQuotaExceededExceptionReason::DAILY_DESTINATION_CALL_LIMIT:
            return "DAILY_DESTINATION_CALL_LIMIT";
          case ServiceQuotaExceededExceptionReason::EVENT_DESTINATIONS_PER_CONFIGURATION_SET:
            return "EVENT_DESTINATIONS_PER_CONFIGURATION_SET";
          case ServiceQuotaExceededExceptionReason::KEYWORDS_PER_PHONE_NUMBER:
            return "KEYWORDS_PER_PHONE_NUMBER";
          case ServiceQuotaExceededExceptionReason::KEYWORDS_PER_POOL:
            return "KEYWORDS_PER_POOL";
          case ServiceQuotaExceededExceptionReason::MONTHLY_SPEND_LIMIT_REACHED_FOR_TEXT:
            return "MONTHLY_SPEND_LIMIT_REACHED_FOR_TEXT";
          case ServiceQuotaExceededExceptionReason::MONTHLY_SPEND_LIMIT_REACHED_FOR_VOICE:
            return "MONTHLY_SPEND_LIMIT_REACHED_FOR_VOICE";
          case ServiceQuotaExceededExceptionReason::OPT_OUT_LISTS_PER_ACCOUNT:
            return "OPT_OUT_LISTS_PER_ACCOUNT";
          case ServiceQuotaExceededExceptionReason::ORIGINATION_IDENTITIES_PER_POOL:
            return "ORIGINATION_IDENTITIES_PER_POOL";
          case ServiceQuotaExceededExceptionReason::PHONE_NUMBERS_PER_ACCOUNT:
            return "PHONE_NUMBERS_PER_ACCOUNT";
          case ServiceQuotaExceededExceptionReason::PHONE_NUMBERS_PER_REGISTRATION:
            return "PHONE_NUMBERS_PER_REGISTRATION";
          case ServiceQuotaExceededExceptionReason::POOLS_PER_ACCOUNT:
            return "POOLS_PER_ACCOUNT";
          case ServiceQuotaExceededExceptionReason::TAGS_PER_RESOURCE:
            return "TAGS_PER_RESOURCE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServiceQuotaExceededExceptionReasonMapper
    } // namespace Model
  } // namespace PinpointSMSVoiceV2
} // namespace Aws
