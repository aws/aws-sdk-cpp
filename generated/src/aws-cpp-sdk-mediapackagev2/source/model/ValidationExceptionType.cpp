/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/ValidationExceptionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace mediapackagev2
  {
    namespace Model
    {
      namespace ValidationExceptionTypeMapper
      {

        static const int CONTAINER_TYPE_IMMUTABLE_HASH = HashingUtils::HashString("CONTAINER_TYPE_IMMUTABLE");
        static const int INVALID_PAGINATION_TOKEN_HASH = HashingUtils::HashString("INVALID_PAGINATION_TOKEN");
        static const int INVALID_PAGINATION_MAX_RESULTS_HASH = HashingUtils::HashString("INVALID_PAGINATION_MAX_RESULTS");
        static const int INVALID_POLICY_HASH = HashingUtils::HashString("INVALID_POLICY");
        static const int INVALID_ROLE_ARN_HASH = HashingUtils::HashString("INVALID_ROLE_ARN");
        static const int MANIFEST_NAME_COLLISION_HASH = HashingUtils::HashString("MANIFEST_NAME_COLLISION");
        static const int ENCRYPTION_METHOD_CONTAINER_TYPE_MISMATCH_HASH = HashingUtils::HashString("ENCRYPTION_METHOD_CONTAINER_TYPE_MISMATCH");
        static const int CENC_IV_INCOMPATIBLE_HASH = HashingUtils::HashString("CENC_IV_INCOMPATIBLE");
        static const int ENCRYPTION_CONTRACT_WITHOUT_AUDIO_RENDITION_INCOMPATIBLE_HASH = HashingUtils::HashString("ENCRYPTION_CONTRACT_WITHOUT_AUDIO_RENDITION_INCOMPATIBLE");
        static const int ENCRYPTION_CONTRACT_UNENCRYPTED_HASH = HashingUtils::HashString("ENCRYPTION_CONTRACT_UNENCRYPTED");
        static const int ENCRYPTION_CONTRACT_SHARED_HASH = HashingUtils::HashString("ENCRYPTION_CONTRACT_SHARED");
        static const int NUM_MANIFESTS_LOW_HASH = HashingUtils::HashString("NUM_MANIFESTS_LOW");
        static const int NUM_MANIFESTS_HIGH_HASH = HashingUtils::HashString("NUM_MANIFESTS_HIGH");
        static const int DRM_SYSTEMS_ENCRYPTION_METHOD_INCOMPATIBLE_HASH = HashingUtils::HashString("DRM_SYSTEMS_ENCRYPTION_METHOD_INCOMPATIBLE");
        static const int ROLE_ARN_NOT_ASSUMABLE_HASH = HashingUtils::HashString("ROLE_ARN_NOT_ASSUMABLE");
        static const int ROLE_ARN_LENGTH_OUT_OF_RANGE_HASH = HashingUtils::HashString("ROLE_ARN_LENGTH_OUT_OF_RANGE");
        static const int ROLE_ARN_INVALID_FORMAT_HASH = HashingUtils::HashString("ROLE_ARN_INVALID_FORMAT");
        static const int URL_INVALID_HASH = HashingUtils::HashString("URL_INVALID");
        static const int URL_SCHEME_HASH = HashingUtils::HashString("URL_SCHEME");
        static const int URL_USER_INFO_HASH = HashingUtils::HashString("URL_USER_INFO");
        static const int URL_PORT_HASH = HashingUtils::HashString("URL_PORT");
        static const int URL_UNKNOWN_HOST_HASH = HashingUtils::HashString("URL_UNKNOWN_HOST");
        static const int URL_LOCAL_ADDRESS_HASH = HashingUtils::HashString("URL_LOCAL_ADDRESS");
        static const int URL_LOOPBACK_ADDRESS_HASH = HashingUtils::HashString("URL_LOOPBACK_ADDRESS");
        static const int URL_LINK_LOCAL_ADDRESS_HASH = HashingUtils::HashString("URL_LINK_LOCAL_ADDRESS");
        static const int URL_MULTICAST_ADDRESS_HASH = HashingUtils::HashString("URL_MULTICAST_ADDRESS");
        static const int MEMBER_INVALID_HASH = HashingUtils::HashString("MEMBER_INVALID");
        static const int MEMBER_MISSING_HASH = HashingUtils::HashString("MEMBER_MISSING");
        static const int MEMBER_MIN_VALUE_HASH = HashingUtils::HashString("MEMBER_MIN_VALUE");
        static const int MEMBER_MAX_VALUE_HASH = HashingUtils::HashString("MEMBER_MAX_VALUE");
        static const int MEMBER_MIN_LENGTH_HASH = HashingUtils::HashString("MEMBER_MIN_LENGTH");
        static const int MEMBER_MAX_LENGTH_HASH = HashingUtils::HashString("MEMBER_MAX_LENGTH");
        static const int MEMBER_INVALID_ENUM_VALUE_HASH = HashingUtils::HashString("MEMBER_INVALID_ENUM_VALUE");
        static const int MEMBER_DOES_NOT_MATCH_PATTERN_HASH = HashingUtils::HashString("MEMBER_DOES_NOT_MATCH_PATTERN");
        static const int INVALID_MANIFEST_FILTER_HASH = HashingUtils::HashString("INVALID_MANIFEST_FILTER");
        static const int INVALID_TIME_DELAY_SECONDS_HASH = HashingUtils::HashString("INVALID_TIME_DELAY_SECONDS");
        static const int END_TIME_EARLIER_THAN_START_TIME_HASH = HashingUtils::HashString("END_TIME_EARLIER_THAN_START_TIME");


        ValidationExceptionType GetValidationExceptionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CONTAINER_TYPE_IMMUTABLE_HASH)
          {
            return ValidationExceptionType::CONTAINER_TYPE_IMMUTABLE;
          }
          else if (hashCode == INVALID_PAGINATION_TOKEN_HASH)
          {
            return ValidationExceptionType::INVALID_PAGINATION_TOKEN;
          }
          else if (hashCode == INVALID_PAGINATION_MAX_RESULTS_HASH)
          {
            return ValidationExceptionType::INVALID_PAGINATION_MAX_RESULTS;
          }
          else if (hashCode == INVALID_POLICY_HASH)
          {
            return ValidationExceptionType::INVALID_POLICY;
          }
          else if (hashCode == INVALID_ROLE_ARN_HASH)
          {
            return ValidationExceptionType::INVALID_ROLE_ARN;
          }
          else if (hashCode == MANIFEST_NAME_COLLISION_HASH)
          {
            return ValidationExceptionType::MANIFEST_NAME_COLLISION;
          }
          else if (hashCode == ENCRYPTION_METHOD_CONTAINER_TYPE_MISMATCH_HASH)
          {
            return ValidationExceptionType::ENCRYPTION_METHOD_CONTAINER_TYPE_MISMATCH;
          }
          else if (hashCode == CENC_IV_INCOMPATIBLE_HASH)
          {
            return ValidationExceptionType::CENC_IV_INCOMPATIBLE;
          }
          else if (hashCode == ENCRYPTION_CONTRACT_WITHOUT_AUDIO_RENDITION_INCOMPATIBLE_HASH)
          {
            return ValidationExceptionType::ENCRYPTION_CONTRACT_WITHOUT_AUDIO_RENDITION_INCOMPATIBLE;
          }
          else if (hashCode == ENCRYPTION_CONTRACT_UNENCRYPTED_HASH)
          {
            return ValidationExceptionType::ENCRYPTION_CONTRACT_UNENCRYPTED;
          }
          else if (hashCode == ENCRYPTION_CONTRACT_SHARED_HASH)
          {
            return ValidationExceptionType::ENCRYPTION_CONTRACT_SHARED;
          }
          else if (hashCode == NUM_MANIFESTS_LOW_HASH)
          {
            return ValidationExceptionType::NUM_MANIFESTS_LOW;
          }
          else if (hashCode == NUM_MANIFESTS_HIGH_HASH)
          {
            return ValidationExceptionType::NUM_MANIFESTS_HIGH;
          }
          else if (hashCode == DRM_SYSTEMS_ENCRYPTION_METHOD_INCOMPATIBLE_HASH)
          {
            return ValidationExceptionType::DRM_SYSTEMS_ENCRYPTION_METHOD_INCOMPATIBLE;
          }
          else if (hashCode == ROLE_ARN_NOT_ASSUMABLE_HASH)
          {
            return ValidationExceptionType::ROLE_ARN_NOT_ASSUMABLE;
          }
          else if (hashCode == ROLE_ARN_LENGTH_OUT_OF_RANGE_HASH)
          {
            return ValidationExceptionType::ROLE_ARN_LENGTH_OUT_OF_RANGE;
          }
          else if (hashCode == ROLE_ARN_INVALID_FORMAT_HASH)
          {
            return ValidationExceptionType::ROLE_ARN_INVALID_FORMAT;
          }
          else if (hashCode == URL_INVALID_HASH)
          {
            return ValidationExceptionType::URL_INVALID;
          }
          else if (hashCode == URL_SCHEME_HASH)
          {
            return ValidationExceptionType::URL_SCHEME;
          }
          else if (hashCode == URL_USER_INFO_HASH)
          {
            return ValidationExceptionType::URL_USER_INFO;
          }
          else if (hashCode == URL_PORT_HASH)
          {
            return ValidationExceptionType::URL_PORT;
          }
          else if (hashCode == URL_UNKNOWN_HOST_HASH)
          {
            return ValidationExceptionType::URL_UNKNOWN_HOST;
          }
          else if (hashCode == URL_LOCAL_ADDRESS_HASH)
          {
            return ValidationExceptionType::URL_LOCAL_ADDRESS;
          }
          else if (hashCode == URL_LOOPBACK_ADDRESS_HASH)
          {
            return ValidationExceptionType::URL_LOOPBACK_ADDRESS;
          }
          else if (hashCode == URL_LINK_LOCAL_ADDRESS_HASH)
          {
            return ValidationExceptionType::URL_LINK_LOCAL_ADDRESS;
          }
          else if (hashCode == URL_MULTICAST_ADDRESS_HASH)
          {
            return ValidationExceptionType::URL_MULTICAST_ADDRESS;
          }
          else if (hashCode == MEMBER_INVALID_HASH)
          {
            return ValidationExceptionType::MEMBER_INVALID;
          }
          else if (hashCode == MEMBER_MISSING_HASH)
          {
            return ValidationExceptionType::MEMBER_MISSING;
          }
          else if (hashCode == MEMBER_MIN_VALUE_HASH)
          {
            return ValidationExceptionType::MEMBER_MIN_VALUE;
          }
          else if (hashCode == MEMBER_MAX_VALUE_HASH)
          {
            return ValidationExceptionType::MEMBER_MAX_VALUE;
          }
          else if (hashCode == MEMBER_MIN_LENGTH_HASH)
          {
            return ValidationExceptionType::MEMBER_MIN_LENGTH;
          }
          else if (hashCode == MEMBER_MAX_LENGTH_HASH)
          {
            return ValidationExceptionType::MEMBER_MAX_LENGTH;
          }
          else if (hashCode == MEMBER_INVALID_ENUM_VALUE_HASH)
          {
            return ValidationExceptionType::MEMBER_INVALID_ENUM_VALUE;
          }
          else if (hashCode == MEMBER_DOES_NOT_MATCH_PATTERN_HASH)
          {
            return ValidationExceptionType::MEMBER_DOES_NOT_MATCH_PATTERN;
          }
          else if (hashCode == INVALID_MANIFEST_FILTER_HASH)
          {
            return ValidationExceptionType::INVALID_MANIFEST_FILTER;
          }
          else if (hashCode == INVALID_TIME_DELAY_SECONDS_HASH)
          {
            return ValidationExceptionType::INVALID_TIME_DELAY_SECONDS;
          }
          else if (hashCode == END_TIME_EARLIER_THAN_START_TIME_HASH)
          {
            return ValidationExceptionType::END_TIME_EARLIER_THAN_START_TIME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ValidationExceptionType>(hashCode);
          }

          return ValidationExceptionType::NOT_SET;
        }

        Aws::String GetNameForValidationExceptionType(ValidationExceptionType enumValue)
        {
          switch(enumValue)
          {
          case ValidationExceptionType::NOT_SET:
            return {};
          case ValidationExceptionType::CONTAINER_TYPE_IMMUTABLE:
            return "CONTAINER_TYPE_IMMUTABLE";
          case ValidationExceptionType::INVALID_PAGINATION_TOKEN:
            return "INVALID_PAGINATION_TOKEN";
          case ValidationExceptionType::INVALID_PAGINATION_MAX_RESULTS:
            return "INVALID_PAGINATION_MAX_RESULTS";
          case ValidationExceptionType::INVALID_POLICY:
            return "INVALID_POLICY";
          case ValidationExceptionType::INVALID_ROLE_ARN:
            return "INVALID_ROLE_ARN";
          case ValidationExceptionType::MANIFEST_NAME_COLLISION:
            return "MANIFEST_NAME_COLLISION";
          case ValidationExceptionType::ENCRYPTION_METHOD_CONTAINER_TYPE_MISMATCH:
            return "ENCRYPTION_METHOD_CONTAINER_TYPE_MISMATCH";
          case ValidationExceptionType::CENC_IV_INCOMPATIBLE:
            return "CENC_IV_INCOMPATIBLE";
          case ValidationExceptionType::ENCRYPTION_CONTRACT_WITHOUT_AUDIO_RENDITION_INCOMPATIBLE:
            return "ENCRYPTION_CONTRACT_WITHOUT_AUDIO_RENDITION_INCOMPATIBLE";
          case ValidationExceptionType::ENCRYPTION_CONTRACT_UNENCRYPTED:
            return "ENCRYPTION_CONTRACT_UNENCRYPTED";
          case ValidationExceptionType::ENCRYPTION_CONTRACT_SHARED:
            return "ENCRYPTION_CONTRACT_SHARED";
          case ValidationExceptionType::NUM_MANIFESTS_LOW:
            return "NUM_MANIFESTS_LOW";
          case ValidationExceptionType::NUM_MANIFESTS_HIGH:
            return "NUM_MANIFESTS_HIGH";
          case ValidationExceptionType::DRM_SYSTEMS_ENCRYPTION_METHOD_INCOMPATIBLE:
            return "DRM_SYSTEMS_ENCRYPTION_METHOD_INCOMPATIBLE";
          case ValidationExceptionType::ROLE_ARN_NOT_ASSUMABLE:
            return "ROLE_ARN_NOT_ASSUMABLE";
          case ValidationExceptionType::ROLE_ARN_LENGTH_OUT_OF_RANGE:
            return "ROLE_ARN_LENGTH_OUT_OF_RANGE";
          case ValidationExceptionType::ROLE_ARN_INVALID_FORMAT:
            return "ROLE_ARN_INVALID_FORMAT";
          case ValidationExceptionType::URL_INVALID:
            return "URL_INVALID";
          case ValidationExceptionType::URL_SCHEME:
            return "URL_SCHEME";
          case ValidationExceptionType::URL_USER_INFO:
            return "URL_USER_INFO";
          case ValidationExceptionType::URL_PORT:
            return "URL_PORT";
          case ValidationExceptionType::URL_UNKNOWN_HOST:
            return "URL_UNKNOWN_HOST";
          case ValidationExceptionType::URL_LOCAL_ADDRESS:
            return "URL_LOCAL_ADDRESS";
          case ValidationExceptionType::URL_LOOPBACK_ADDRESS:
            return "URL_LOOPBACK_ADDRESS";
          case ValidationExceptionType::URL_LINK_LOCAL_ADDRESS:
            return "URL_LINK_LOCAL_ADDRESS";
          case ValidationExceptionType::URL_MULTICAST_ADDRESS:
            return "URL_MULTICAST_ADDRESS";
          case ValidationExceptionType::MEMBER_INVALID:
            return "MEMBER_INVALID";
          case ValidationExceptionType::MEMBER_MISSING:
            return "MEMBER_MISSING";
          case ValidationExceptionType::MEMBER_MIN_VALUE:
            return "MEMBER_MIN_VALUE";
          case ValidationExceptionType::MEMBER_MAX_VALUE:
            return "MEMBER_MAX_VALUE";
          case ValidationExceptionType::MEMBER_MIN_LENGTH:
            return "MEMBER_MIN_LENGTH";
          case ValidationExceptionType::MEMBER_MAX_LENGTH:
            return "MEMBER_MAX_LENGTH";
          case ValidationExceptionType::MEMBER_INVALID_ENUM_VALUE:
            return "MEMBER_INVALID_ENUM_VALUE";
          case ValidationExceptionType::MEMBER_DOES_NOT_MATCH_PATTERN:
            return "MEMBER_DOES_NOT_MATCH_PATTERN";
          case ValidationExceptionType::INVALID_MANIFEST_FILTER:
            return "INVALID_MANIFEST_FILTER";
          case ValidationExceptionType::INVALID_TIME_DELAY_SECONDS:
            return "INVALID_TIME_DELAY_SECONDS";
          case ValidationExceptionType::END_TIME_EARLIER_THAN_START_TIME:
            return "END_TIME_EARLIER_THAN_START_TIME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ValidationExceptionTypeMapper
    } // namespace Model
  } // namespace mediapackagev2
} // namespace Aws
