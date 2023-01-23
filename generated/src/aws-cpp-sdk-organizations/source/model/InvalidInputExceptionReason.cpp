/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/organizations/model/InvalidInputExceptionReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Organizations
  {
    namespace Model
    {
      namespace InvalidInputExceptionReasonMapper
      {

        static const int INVALID_PARTY_TYPE_TARGET_HASH = HashingUtils::HashString("INVALID_PARTY_TYPE_TARGET");
        static const int INVALID_SYNTAX_ORGANIZATION_ARN_HASH = HashingUtils::HashString("INVALID_SYNTAX_ORGANIZATION_ARN");
        static const int INVALID_SYNTAX_POLICY_ID_HASH = HashingUtils::HashString("INVALID_SYNTAX_POLICY_ID");
        static const int INVALID_ENUM_HASH = HashingUtils::HashString("INVALID_ENUM");
        static const int INVALID_ENUM_POLICY_TYPE_HASH = HashingUtils::HashString("INVALID_ENUM_POLICY_TYPE");
        static const int INVALID_LIST_MEMBER_HASH = HashingUtils::HashString("INVALID_LIST_MEMBER");
        static const int MAX_LENGTH_EXCEEDED_HASH = HashingUtils::HashString("MAX_LENGTH_EXCEEDED");
        static const int MAX_VALUE_EXCEEDED_HASH = HashingUtils::HashString("MAX_VALUE_EXCEEDED");
        static const int MIN_LENGTH_EXCEEDED_HASH = HashingUtils::HashString("MIN_LENGTH_EXCEEDED");
        static const int MIN_VALUE_EXCEEDED_HASH = HashingUtils::HashString("MIN_VALUE_EXCEEDED");
        static const int IMMUTABLE_POLICY_HASH = HashingUtils::HashString("IMMUTABLE_POLICY");
        static const int INVALID_PATTERN_HASH = HashingUtils::HashString("INVALID_PATTERN");
        static const int INVALID_PATTERN_TARGET_ID_HASH = HashingUtils::HashString("INVALID_PATTERN_TARGET_ID");
        static const int INPUT_REQUIRED_HASH = HashingUtils::HashString("INPUT_REQUIRED");
        static const int INVALID_NEXT_TOKEN_HASH = HashingUtils::HashString("INVALID_NEXT_TOKEN");
        static const int MAX_LIMIT_EXCEEDED_FILTER_HASH = HashingUtils::HashString("MAX_LIMIT_EXCEEDED_FILTER");
        static const int MOVING_ACCOUNT_BETWEEN_DIFFERENT_ROOTS_HASH = HashingUtils::HashString("MOVING_ACCOUNT_BETWEEN_DIFFERENT_ROOTS");
        static const int INVALID_FULL_NAME_TARGET_HASH = HashingUtils::HashString("INVALID_FULL_NAME_TARGET");
        static const int UNRECOGNIZED_SERVICE_PRINCIPAL_HASH = HashingUtils::HashString("UNRECOGNIZED_SERVICE_PRINCIPAL");
        static const int INVALID_ROLE_NAME_HASH = HashingUtils::HashString("INVALID_ROLE_NAME");
        static const int INVALID_SYSTEM_TAGS_PARAMETER_HASH = HashingUtils::HashString("INVALID_SYSTEM_TAGS_PARAMETER");
        static const int DUPLICATE_TAG_KEY_HASH = HashingUtils::HashString("DUPLICATE_TAG_KEY");
        static const int TARGET_NOT_SUPPORTED_HASH = HashingUtils::HashString("TARGET_NOT_SUPPORTED");
        static const int INVALID_EMAIL_ADDRESS_TARGET_HASH = HashingUtils::HashString("INVALID_EMAIL_ADDRESS_TARGET");
        static const int INVALID_RESOURCE_POLICY_JSON_HASH = HashingUtils::HashString("INVALID_RESOURCE_POLICY_JSON");
        static const int UNSUPPORTED_ACTION_IN_RESOURCE_POLICY_HASH = HashingUtils::HashString("UNSUPPORTED_ACTION_IN_RESOURCE_POLICY");
        static const int UNSUPPORTED_POLICY_TYPE_IN_RESOURCE_POLICY_HASH = HashingUtils::HashString("UNSUPPORTED_POLICY_TYPE_IN_RESOURCE_POLICY");
        static const int UNSUPPORTED_RESOURCE_IN_RESOURCE_POLICY_HASH = HashingUtils::HashString("UNSUPPORTED_RESOURCE_IN_RESOURCE_POLICY");


        InvalidInputExceptionReason GetInvalidInputExceptionReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INVALID_PARTY_TYPE_TARGET_HASH)
          {
            return InvalidInputExceptionReason::INVALID_PARTY_TYPE_TARGET;
          }
          else if (hashCode == INVALID_SYNTAX_ORGANIZATION_ARN_HASH)
          {
            return InvalidInputExceptionReason::INVALID_SYNTAX_ORGANIZATION_ARN;
          }
          else if (hashCode == INVALID_SYNTAX_POLICY_ID_HASH)
          {
            return InvalidInputExceptionReason::INVALID_SYNTAX_POLICY_ID;
          }
          else if (hashCode == INVALID_ENUM_HASH)
          {
            return InvalidInputExceptionReason::INVALID_ENUM;
          }
          else if (hashCode == INVALID_ENUM_POLICY_TYPE_HASH)
          {
            return InvalidInputExceptionReason::INVALID_ENUM_POLICY_TYPE;
          }
          else if (hashCode == INVALID_LIST_MEMBER_HASH)
          {
            return InvalidInputExceptionReason::INVALID_LIST_MEMBER;
          }
          else if (hashCode == MAX_LENGTH_EXCEEDED_HASH)
          {
            return InvalidInputExceptionReason::MAX_LENGTH_EXCEEDED;
          }
          else if (hashCode == MAX_VALUE_EXCEEDED_HASH)
          {
            return InvalidInputExceptionReason::MAX_VALUE_EXCEEDED;
          }
          else if (hashCode == MIN_LENGTH_EXCEEDED_HASH)
          {
            return InvalidInputExceptionReason::MIN_LENGTH_EXCEEDED;
          }
          else if (hashCode == MIN_VALUE_EXCEEDED_HASH)
          {
            return InvalidInputExceptionReason::MIN_VALUE_EXCEEDED;
          }
          else if (hashCode == IMMUTABLE_POLICY_HASH)
          {
            return InvalidInputExceptionReason::IMMUTABLE_POLICY;
          }
          else if (hashCode == INVALID_PATTERN_HASH)
          {
            return InvalidInputExceptionReason::INVALID_PATTERN;
          }
          else if (hashCode == INVALID_PATTERN_TARGET_ID_HASH)
          {
            return InvalidInputExceptionReason::INVALID_PATTERN_TARGET_ID;
          }
          else if (hashCode == INPUT_REQUIRED_HASH)
          {
            return InvalidInputExceptionReason::INPUT_REQUIRED;
          }
          else if (hashCode == INVALID_NEXT_TOKEN_HASH)
          {
            return InvalidInputExceptionReason::INVALID_NEXT_TOKEN;
          }
          else if (hashCode == MAX_LIMIT_EXCEEDED_FILTER_HASH)
          {
            return InvalidInputExceptionReason::MAX_LIMIT_EXCEEDED_FILTER;
          }
          else if (hashCode == MOVING_ACCOUNT_BETWEEN_DIFFERENT_ROOTS_HASH)
          {
            return InvalidInputExceptionReason::MOVING_ACCOUNT_BETWEEN_DIFFERENT_ROOTS;
          }
          else if (hashCode == INVALID_FULL_NAME_TARGET_HASH)
          {
            return InvalidInputExceptionReason::INVALID_FULL_NAME_TARGET;
          }
          else if (hashCode == UNRECOGNIZED_SERVICE_PRINCIPAL_HASH)
          {
            return InvalidInputExceptionReason::UNRECOGNIZED_SERVICE_PRINCIPAL;
          }
          else if (hashCode == INVALID_ROLE_NAME_HASH)
          {
            return InvalidInputExceptionReason::INVALID_ROLE_NAME;
          }
          else if (hashCode == INVALID_SYSTEM_TAGS_PARAMETER_HASH)
          {
            return InvalidInputExceptionReason::INVALID_SYSTEM_TAGS_PARAMETER;
          }
          else if (hashCode == DUPLICATE_TAG_KEY_HASH)
          {
            return InvalidInputExceptionReason::DUPLICATE_TAG_KEY;
          }
          else if (hashCode == TARGET_NOT_SUPPORTED_HASH)
          {
            return InvalidInputExceptionReason::TARGET_NOT_SUPPORTED;
          }
          else if (hashCode == INVALID_EMAIL_ADDRESS_TARGET_HASH)
          {
            return InvalidInputExceptionReason::INVALID_EMAIL_ADDRESS_TARGET;
          }
          else if (hashCode == INVALID_RESOURCE_POLICY_JSON_HASH)
          {
            return InvalidInputExceptionReason::INVALID_RESOURCE_POLICY_JSON;
          }
          else if (hashCode == UNSUPPORTED_ACTION_IN_RESOURCE_POLICY_HASH)
          {
            return InvalidInputExceptionReason::UNSUPPORTED_ACTION_IN_RESOURCE_POLICY;
          }
          else if (hashCode == UNSUPPORTED_POLICY_TYPE_IN_RESOURCE_POLICY_HASH)
          {
            return InvalidInputExceptionReason::UNSUPPORTED_POLICY_TYPE_IN_RESOURCE_POLICY;
          }
          else if (hashCode == UNSUPPORTED_RESOURCE_IN_RESOURCE_POLICY_HASH)
          {
            return InvalidInputExceptionReason::UNSUPPORTED_RESOURCE_IN_RESOURCE_POLICY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InvalidInputExceptionReason>(hashCode);
          }

          return InvalidInputExceptionReason::NOT_SET;
        }

        Aws::String GetNameForInvalidInputExceptionReason(InvalidInputExceptionReason enumValue)
        {
          switch(enumValue)
          {
          case InvalidInputExceptionReason::INVALID_PARTY_TYPE_TARGET:
            return "INVALID_PARTY_TYPE_TARGET";
          case InvalidInputExceptionReason::INVALID_SYNTAX_ORGANIZATION_ARN:
            return "INVALID_SYNTAX_ORGANIZATION_ARN";
          case InvalidInputExceptionReason::INVALID_SYNTAX_POLICY_ID:
            return "INVALID_SYNTAX_POLICY_ID";
          case InvalidInputExceptionReason::INVALID_ENUM:
            return "INVALID_ENUM";
          case InvalidInputExceptionReason::INVALID_ENUM_POLICY_TYPE:
            return "INVALID_ENUM_POLICY_TYPE";
          case InvalidInputExceptionReason::INVALID_LIST_MEMBER:
            return "INVALID_LIST_MEMBER";
          case InvalidInputExceptionReason::MAX_LENGTH_EXCEEDED:
            return "MAX_LENGTH_EXCEEDED";
          case InvalidInputExceptionReason::MAX_VALUE_EXCEEDED:
            return "MAX_VALUE_EXCEEDED";
          case InvalidInputExceptionReason::MIN_LENGTH_EXCEEDED:
            return "MIN_LENGTH_EXCEEDED";
          case InvalidInputExceptionReason::MIN_VALUE_EXCEEDED:
            return "MIN_VALUE_EXCEEDED";
          case InvalidInputExceptionReason::IMMUTABLE_POLICY:
            return "IMMUTABLE_POLICY";
          case InvalidInputExceptionReason::INVALID_PATTERN:
            return "INVALID_PATTERN";
          case InvalidInputExceptionReason::INVALID_PATTERN_TARGET_ID:
            return "INVALID_PATTERN_TARGET_ID";
          case InvalidInputExceptionReason::INPUT_REQUIRED:
            return "INPUT_REQUIRED";
          case InvalidInputExceptionReason::INVALID_NEXT_TOKEN:
            return "INVALID_NEXT_TOKEN";
          case InvalidInputExceptionReason::MAX_LIMIT_EXCEEDED_FILTER:
            return "MAX_LIMIT_EXCEEDED_FILTER";
          case InvalidInputExceptionReason::MOVING_ACCOUNT_BETWEEN_DIFFERENT_ROOTS:
            return "MOVING_ACCOUNT_BETWEEN_DIFFERENT_ROOTS";
          case InvalidInputExceptionReason::INVALID_FULL_NAME_TARGET:
            return "INVALID_FULL_NAME_TARGET";
          case InvalidInputExceptionReason::UNRECOGNIZED_SERVICE_PRINCIPAL:
            return "UNRECOGNIZED_SERVICE_PRINCIPAL";
          case InvalidInputExceptionReason::INVALID_ROLE_NAME:
            return "INVALID_ROLE_NAME";
          case InvalidInputExceptionReason::INVALID_SYSTEM_TAGS_PARAMETER:
            return "INVALID_SYSTEM_TAGS_PARAMETER";
          case InvalidInputExceptionReason::DUPLICATE_TAG_KEY:
            return "DUPLICATE_TAG_KEY";
          case InvalidInputExceptionReason::TARGET_NOT_SUPPORTED:
            return "TARGET_NOT_SUPPORTED";
          case InvalidInputExceptionReason::INVALID_EMAIL_ADDRESS_TARGET:
            return "INVALID_EMAIL_ADDRESS_TARGET";
          case InvalidInputExceptionReason::INVALID_RESOURCE_POLICY_JSON:
            return "INVALID_RESOURCE_POLICY_JSON";
          case InvalidInputExceptionReason::UNSUPPORTED_ACTION_IN_RESOURCE_POLICY:
            return "UNSUPPORTED_ACTION_IN_RESOURCE_POLICY";
          case InvalidInputExceptionReason::UNSUPPORTED_POLICY_TYPE_IN_RESOURCE_POLICY:
            return "UNSUPPORTED_POLICY_TYPE_IN_RESOURCE_POLICY";
          case InvalidInputExceptionReason::UNSUPPORTED_RESOURCE_IN_RESOURCE_POLICY:
            return "UNSUPPORTED_RESOURCE_IN_RESOURCE_POLICY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InvalidInputExceptionReasonMapper
    } // namespace Model
  } // namespace Organizations
} // namespace Aws
