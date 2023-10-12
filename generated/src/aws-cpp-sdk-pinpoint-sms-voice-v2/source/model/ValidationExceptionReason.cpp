/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/ValidationExceptionReason.h>
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
      namespace ValidationExceptionReasonMapper
      {

        static constexpr uint32_t UNKNOWN_OPERATION_HASH = ConstExprHashingUtils::HashString("UNKNOWN_OPERATION");
        static constexpr uint32_t CANNOT_PARSE_HASH = ConstExprHashingUtils::HashString("CANNOT_PARSE");
        static constexpr uint32_t FIELD_VALIDATION_FAILED_HASH = ConstExprHashingUtils::HashString("FIELD_VALIDATION_FAILED");
        static constexpr uint32_t OTHER_HASH = ConstExprHashingUtils::HashString("OTHER");
        static constexpr uint32_t INVALID_PARAMETER_HASH = ConstExprHashingUtils::HashString("INVALID_PARAMETER");
        static constexpr uint32_t INVALID_ARN_HASH = ConstExprHashingUtils::HashString("INVALID_ARN");
        static constexpr uint32_t INVALID_IDENTITY_FOR_DESTINATION_COUNTRY_HASH = ConstExprHashingUtils::HashString("INVALID_IDENTITY_FOR_DESTINATION_COUNTRY");
        static constexpr uint32_t DESTINATION_COUNTRY_BLOCKED_HASH = ConstExprHashingUtils::HashString("DESTINATION_COUNTRY_BLOCKED");
        static constexpr uint32_t CANNOT_ADD_OPTED_OUT_NUMBER_HASH = ConstExprHashingUtils::HashString("CANNOT_ADD_OPTED_OUT_NUMBER");
        static constexpr uint32_t COUNTRY_CODE_MISMATCH_HASH = ConstExprHashingUtils::HashString("COUNTRY_CODE_MISMATCH");
        static constexpr uint32_t INVALID_FILTER_VALUES_HASH = ConstExprHashingUtils::HashString("INVALID_FILTER_VALUES");
        static constexpr uint32_t INVALID_NEXT_TOKEN_HASH = ConstExprHashingUtils::HashString("INVALID_NEXT_TOKEN");
        static constexpr uint32_t MISSING_PARAMETER_HASH = ConstExprHashingUtils::HashString("MISSING_PARAMETER");
        static constexpr uint32_t PARAMETERS_CANNOT_BE_USED_TOGETHER_HASH = ConstExprHashingUtils::HashString("PARAMETERS_CANNOT_BE_USED_TOGETHER");
        static constexpr uint32_t PHONE_NUMBER_CANNOT_BE_OPTED_IN_HASH = ConstExprHashingUtils::HashString("PHONE_NUMBER_CANNOT_BE_OPTED_IN");
        static constexpr uint32_t PHONE_NUMBER_CANNOT_BE_RELEASED_HASH = ConstExprHashingUtils::HashString("PHONE_NUMBER_CANNOT_BE_RELEASED");
        static constexpr uint32_t PRICE_OVER_THRESHOLD_HASH = ConstExprHashingUtils::HashString("PRICE_OVER_THRESHOLD");
        static constexpr uint32_t REQUESTED_SPEND_LIMIT_HIGHER_THAN_SERVICE_LIMIT_HASH = ConstExprHashingUtils::HashString("REQUESTED_SPEND_LIMIT_HIGHER_THAN_SERVICE_LIMIT");
        static constexpr uint32_t SENDER_ID_NOT_REGISTERED_HASH = ConstExprHashingUtils::HashString("SENDER_ID_NOT_REGISTERED");
        static constexpr uint32_t SENDER_ID_NOT_SUPPORTED_HASH = ConstExprHashingUtils::HashString("SENDER_ID_NOT_SUPPORTED");
        static constexpr uint32_t TWO_WAY_NOT_ENABLED_HASH = ConstExprHashingUtils::HashString("TWO_WAY_NOT_ENABLED");
        static constexpr uint32_t TWO_WAY_NOT_SUPPORTED_IN_COUNTRY_HASH = ConstExprHashingUtils::HashString("TWO_WAY_NOT_SUPPORTED_IN_COUNTRY");
        static constexpr uint32_t TWO_WAY_NOT_SUPPORTED_IN_REGION_HASH = ConstExprHashingUtils::HashString("TWO_WAY_NOT_SUPPORTED_IN_REGION");
        static constexpr uint32_t TWO_WAY_TOPIC_NOT_PRESENT_HASH = ConstExprHashingUtils::HashString("TWO_WAY_TOPIC_NOT_PRESENT");


        ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UNKNOWN_OPERATION_HASH)
          {
            return ValidationExceptionReason::UNKNOWN_OPERATION;
          }
          else if (hashCode == CANNOT_PARSE_HASH)
          {
            return ValidationExceptionReason::CANNOT_PARSE;
          }
          else if (hashCode == FIELD_VALIDATION_FAILED_HASH)
          {
            return ValidationExceptionReason::FIELD_VALIDATION_FAILED;
          }
          else if (hashCode == OTHER_HASH)
          {
            return ValidationExceptionReason::OTHER;
          }
          else if (hashCode == INVALID_PARAMETER_HASH)
          {
            return ValidationExceptionReason::INVALID_PARAMETER;
          }
          else if (hashCode == INVALID_ARN_HASH)
          {
            return ValidationExceptionReason::INVALID_ARN;
          }
          else if (hashCode == INVALID_IDENTITY_FOR_DESTINATION_COUNTRY_HASH)
          {
            return ValidationExceptionReason::INVALID_IDENTITY_FOR_DESTINATION_COUNTRY;
          }
          else if (hashCode == DESTINATION_COUNTRY_BLOCKED_HASH)
          {
            return ValidationExceptionReason::DESTINATION_COUNTRY_BLOCKED;
          }
          else if (hashCode == CANNOT_ADD_OPTED_OUT_NUMBER_HASH)
          {
            return ValidationExceptionReason::CANNOT_ADD_OPTED_OUT_NUMBER;
          }
          else if (hashCode == COUNTRY_CODE_MISMATCH_HASH)
          {
            return ValidationExceptionReason::COUNTRY_CODE_MISMATCH;
          }
          else if (hashCode == INVALID_FILTER_VALUES_HASH)
          {
            return ValidationExceptionReason::INVALID_FILTER_VALUES;
          }
          else if (hashCode == INVALID_NEXT_TOKEN_HASH)
          {
            return ValidationExceptionReason::INVALID_NEXT_TOKEN;
          }
          else if (hashCode == MISSING_PARAMETER_HASH)
          {
            return ValidationExceptionReason::MISSING_PARAMETER;
          }
          else if (hashCode == PARAMETERS_CANNOT_BE_USED_TOGETHER_HASH)
          {
            return ValidationExceptionReason::PARAMETERS_CANNOT_BE_USED_TOGETHER;
          }
          else if (hashCode == PHONE_NUMBER_CANNOT_BE_OPTED_IN_HASH)
          {
            return ValidationExceptionReason::PHONE_NUMBER_CANNOT_BE_OPTED_IN;
          }
          else if (hashCode == PHONE_NUMBER_CANNOT_BE_RELEASED_HASH)
          {
            return ValidationExceptionReason::PHONE_NUMBER_CANNOT_BE_RELEASED;
          }
          else if (hashCode == PRICE_OVER_THRESHOLD_HASH)
          {
            return ValidationExceptionReason::PRICE_OVER_THRESHOLD;
          }
          else if (hashCode == REQUESTED_SPEND_LIMIT_HIGHER_THAN_SERVICE_LIMIT_HASH)
          {
            return ValidationExceptionReason::REQUESTED_SPEND_LIMIT_HIGHER_THAN_SERVICE_LIMIT;
          }
          else if (hashCode == SENDER_ID_NOT_REGISTERED_HASH)
          {
            return ValidationExceptionReason::SENDER_ID_NOT_REGISTERED;
          }
          else if (hashCode == SENDER_ID_NOT_SUPPORTED_HASH)
          {
            return ValidationExceptionReason::SENDER_ID_NOT_SUPPORTED;
          }
          else if (hashCode == TWO_WAY_NOT_ENABLED_HASH)
          {
            return ValidationExceptionReason::TWO_WAY_NOT_ENABLED;
          }
          else if (hashCode == TWO_WAY_NOT_SUPPORTED_IN_COUNTRY_HASH)
          {
            return ValidationExceptionReason::TWO_WAY_NOT_SUPPORTED_IN_COUNTRY;
          }
          else if (hashCode == TWO_WAY_NOT_SUPPORTED_IN_REGION_HASH)
          {
            return ValidationExceptionReason::TWO_WAY_NOT_SUPPORTED_IN_REGION;
          }
          else if (hashCode == TWO_WAY_TOPIC_NOT_PRESENT_HASH)
          {
            return ValidationExceptionReason::TWO_WAY_TOPIC_NOT_PRESENT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ValidationExceptionReason>(hashCode);
          }

          return ValidationExceptionReason::NOT_SET;
        }

        Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason enumValue)
        {
          switch(enumValue)
          {
          case ValidationExceptionReason::NOT_SET:
            return {};
          case ValidationExceptionReason::UNKNOWN_OPERATION:
            return "UNKNOWN_OPERATION";
          case ValidationExceptionReason::CANNOT_PARSE:
            return "CANNOT_PARSE";
          case ValidationExceptionReason::FIELD_VALIDATION_FAILED:
            return "FIELD_VALIDATION_FAILED";
          case ValidationExceptionReason::OTHER:
            return "OTHER";
          case ValidationExceptionReason::INVALID_PARAMETER:
            return "INVALID_PARAMETER";
          case ValidationExceptionReason::INVALID_ARN:
            return "INVALID_ARN";
          case ValidationExceptionReason::INVALID_IDENTITY_FOR_DESTINATION_COUNTRY:
            return "INVALID_IDENTITY_FOR_DESTINATION_COUNTRY";
          case ValidationExceptionReason::DESTINATION_COUNTRY_BLOCKED:
            return "DESTINATION_COUNTRY_BLOCKED";
          case ValidationExceptionReason::CANNOT_ADD_OPTED_OUT_NUMBER:
            return "CANNOT_ADD_OPTED_OUT_NUMBER";
          case ValidationExceptionReason::COUNTRY_CODE_MISMATCH:
            return "COUNTRY_CODE_MISMATCH";
          case ValidationExceptionReason::INVALID_FILTER_VALUES:
            return "INVALID_FILTER_VALUES";
          case ValidationExceptionReason::INVALID_NEXT_TOKEN:
            return "INVALID_NEXT_TOKEN";
          case ValidationExceptionReason::MISSING_PARAMETER:
            return "MISSING_PARAMETER";
          case ValidationExceptionReason::PARAMETERS_CANNOT_BE_USED_TOGETHER:
            return "PARAMETERS_CANNOT_BE_USED_TOGETHER";
          case ValidationExceptionReason::PHONE_NUMBER_CANNOT_BE_OPTED_IN:
            return "PHONE_NUMBER_CANNOT_BE_OPTED_IN";
          case ValidationExceptionReason::PHONE_NUMBER_CANNOT_BE_RELEASED:
            return "PHONE_NUMBER_CANNOT_BE_RELEASED";
          case ValidationExceptionReason::PRICE_OVER_THRESHOLD:
            return "PRICE_OVER_THRESHOLD";
          case ValidationExceptionReason::REQUESTED_SPEND_LIMIT_HIGHER_THAN_SERVICE_LIMIT:
            return "REQUESTED_SPEND_LIMIT_HIGHER_THAN_SERVICE_LIMIT";
          case ValidationExceptionReason::SENDER_ID_NOT_REGISTERED:
            return "SENDER_ID_NOT_REGISTERED";
          case ValidationExceptionReason::SENDER_ID_NOT_SUPPORTED:
            return "SENDER_ID_NOT_SUPPORTED";
          case ValidationExceptionReason::TWO_WAY_NOT_ENABLED:
            return "TWO_WAY_NOT_ENABLED";
          case ValidationExceptionReason::TWO_WAY_NOT_SUPPORTED_IN_COUNTRY:
            return "TWO_WAY_NOT_SUPPORTED_IN_COUNTRY";
          case ValidationExceptionReason::TWO_WAY_NOT_SUPPORTED_IN_REGION:
            return "TWO_WAY_NOT_SUPPORTED_IN_REGION";
          case ValidationExceptionReason::TWO_WAY_TOPIC_NOT_PRESENT:
            return "TWO_WAY_TOPIC_NOT_PRESENT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ValidationExceptionReasonMapper
    } // namespace Model
  } // namespace PinpointSMSVoiceV2
} // namespace Aws
