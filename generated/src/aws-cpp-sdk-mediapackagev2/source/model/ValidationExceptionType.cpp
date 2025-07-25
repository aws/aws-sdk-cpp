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
        static const int ENCRYPTION_CONTRACT_WITH_ISM_CONTAINER_INCOMPATIBLE_HASH = HashingUtils::HashString("ENCRYPTION_CONTRACT_WITH_ISM_CONTAINER_INCOMPATIBLE");
        static const int ENCRYPTION_CONTRACT_UNENCRYPTED_HASH = HashingUtils::HashString("ENCRYPTION_CONTRACT_UNENCRYPTED");
        static const int ENCRYPTION_CONTRACT_SHARED_HASH = HashingUtils::HashString("ENCRYPTION_CONTRACT_SHARED");
        static const int NUM_MANIFESTS_LOW_HASH = HashingUtils::HashString("NUM_MANIFESTS_LOW");
        static const int NUM_MANIFESTS_HIGH_HASH = HashingUtils::HashString("NUM_MANIFESTS_HIGH");
        static const int MANIFEST_DRM_SYSTEMS_INCOMPATIBLE_HASH = HashingUtils::HashString("MANIFEST_DRM_SYSTEMS_INCOMPATIBLE");
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
        static const int TS_CONTAINER_TYPE_WITH_DASH_MANIFEST_HASH = HashingUtils::HashString("TS_CONTAINER_TYPE_WITH_DASH_MANIFEST");
        static const int DIRECT_MODE_WITH_TIMING_SOURCE_HASH = HashingUtils::HashString("DIRECT_MODE_WITH_TIMING_SOURCE");
        static const int NONE_MODE_WITH_TIMING_SOURCE_HASH = HashingUtils::HashString("NONE_MODE_WITH_TIMING_SOURCE");
        static const int TIMING_SOURCE_MISSING_HASH = HashingUtils::HashString("TIMING_SOURCE_MISSING");
        static const int UPDATE_PERIOD_SMALLER_THAN_SEGMENT_DURATION_HASH = HashingUtils::HashString("UPDATE_PERIOD_SMALLER_THAN_SEGMENT_DURATION");
        static const int PERIOD_TRIGGERS_NONE_SPECIFIED_WITH_ADDITIONAL_VALUES_HASH = HashingUtils::HashString("PERIOD_TRIGGERS_NONE_SPECIFIED_WITH_ADDITIONAL_VALUES");
        static const int DRM_SIGNALING_MISMATCH_SEGMENT_ENCRYPTION_STATUS_HASH = HashingUtils::HashString("DRM_SIGNALING_MISMATCH_SEGMENT_ENCRYPTION_STATUS");
        static const int ONLY_CMAF_INPUT_TYPE_ALLOW_FORCE_ENDPOINT_ERROR_CONFIGURATION_HASH = HashingUtils::HashString("ONLY_CMAF_INPUT_TYPE_ALLOW_FORCE_ENDPOINT_ERROR_CONFIGURATION");
        static const int SOURCE_DISRUPTIONS_ENABLED_INCORRECTLY_HASH = HashingUtils::HashString("SOURCE_DISRUPTIONS_ENABLED_INCORRECTLY");
        static const int HARVESTED_MANIFEST_HAS_START_END_FILTER_CONFIGURATION_HASH = HashingUtils::HashString("HARVESTED_MANIFEST_HAS_START_END_FILTER_CONFIGURATION");
        static const int HARVESTED_MANIFEST_NOT_FOUND_ON_ENDPOINT_HASH = HashingUtils::HashString("HARVESTED_MANIFEST_NOT_FOUND_ON_ENDPOINT");
        static const int TOO_MANY_IN_PROGRESS_HARVEST_JOBS_HASH = HashingUtils::HashString("TOO_MANY_IN_PROGRESS_HARVEST_JOBS");
        static const int HARVEST_JOB_INELIGIBLE_FOR_CANCELLATION_HASH = HashingUtils::HashString("HARVEST_JOB_INELIGIBLE_FOR_CANCELLATION");
        static const int INVALID_HARVEST_JOB_DURATION_HASH = HashingUtils::HashString("INVALID_HARVEST_JOB_DURATION");
        static const int HARVEST_JOB_S3_DESTINATION_MISSING_OR_INCOMPLETE_HASH = HashingUtils::HashString("HARVEST_JOB_S3_DESTINATION_MISSING_OR_INCOMPLETE");
        static const int HARVEST_JOB_UNABLE_TO_WRITE_TO_S3_DESTINATION_HASH = HashingUtils::HashString("HARVEST_JOB_UNABLE_TO_WRITE_TO_S3_DESTINATION");
        static const int HARVEST_JOB_CUSTOMER_ENDPOINT_READ_ACCESS_DENIED_HASH = HashingUtils::HashString("HARVEST_JOB_CUSTOMER_ENDPOINT_READ_ACCESS_DENIED");
        static const int CLIP_START_TIME_WITH_START_OR_END_HASH = HashingUtils::HashString("CLIP_START_TIME_WITH_START_OR_END");
        static const int START_TAG_TIME_OFFSET_INVALID_HASH = HashingUtils::HashString("START_TAG_TIME_OFFSET_INVALID");
        static const int INCOMPATIBLE_DASH_PROFILE_DVB_DASH_CONFIGURATION_HASH = HashingUtils::HashString("INCOMPATIBLE_DASH_PROFILE_DVB_DASH_CONFIGURATION");
        static const int DASH_DVB_ATTRIBUTES_WITHOUT_DVB_DASH_PROFILE_HASH = HashingUtils::HashString("DASH_DVB_ATTRIBUTES_WITHOUT_DVB_DASH_PROFILE");
        static const int INCOMPATIBLE_DASH_COMPACTNESS_CONFIGURATION_HASH = HashingUtils::HashString("INCOMPATIBLE_DASH_COMPACTNESS_CONFIGURATION");
        static const int INCOMPATIBLE_XML_ENCODING_HASH = HashingUtils::HashString("INCOMPATIBLE_XML_ENCODING");
        static const int CMAF_EXCLUDE_SEGMENT_DRM_METADATA_INCOMPATIBLE_CONTAINER_TYPE_HASH = HashingUtils::HashString("CMAF_EXCLUDE_SEGMENT_DRM_METADATA_INCOMPATIBLE_CONTAINER_TYPE");
        static const int ONLY_CMAF_INPUT_TYPE_ALLOW_MQCS_INPUT_SWITCHING_HASH = HashingUtils::HashString("ONLY_CMAF_INPUT_TYPE_ALLOW_MQCS_INPUT_SWITCHING");
        static const int ONLY_CMAF_INPUT_TYPE_ALLOW_MQCS_OUTPUT_CONFIGURATION_HASH = HashingUtils::HashString("ONLY_CMAF_INPUT_TYPE_ALLOW_MQCS_OUTPUT_CONFIGURATION");
        static const int ONLY_CMAF_INPUT_TYPE_ALLOW_PREFERRED_INPUT_CONFIGURATION_HASH = HashingUtils::HashString("ONLY_CMAF_INPUT_TYPE_ALLOW_PREFERRED_INPUT_CONFIGURATION");
        static const int TS_CONTAINER_TYPE_WITH_MSS_MANIFEST_HASH = HashingUtils::HashString("TS_CONTAINER_TYPE_WITH_MSS_MANIFEST");
        static const int CMAF_CONTAINER_TYPE_WITH_MSS_MANIFEST_HASH = HashingUtils::HashString("CMAF_CONTAINER_TYPE_WITH_MSS_MANIFEST");
        static const int ISM_CONTAINER_TYPE_WITH_HLS_MANIFEST_HASH = HashingUtils::HashString("ISM_CONTAINER_TYPE_WITH_HLS_MANIFEST");
        static const int ISM_CONTAINER_TYPE_WITH_LL_HLS_MANIFEST_HASH = HashingUtils::HashString("ISM_CONTAINER_TYPE_WITH_LL_HLS_MANIFEST");
        static const int ISM_CONTAINER_TYPE_WITH_DASH_MANIFEST_HASH = HashingUtils::HashString("ISM_CONTAINER_TYPE_WITH_DASH_MANIFEST");
        static const int ISM_CONTAINER_TYPE_WITH_SCTE_HASH = HashingUtils::HashString("ISM_CONTAINER_TYPE_WITH_SCTE");
        static const int ISM_CONTAINER_WITH_KEY_ROTATION_HASH = HashingUtils::HashString("ISM_CONTAINER_WITH_KEY_ROTATION");
        static const int BATCH_GET_SECRET_VALUE_DENIED_HASH = HashingUtils::HashString("BATCH_GET_SECRET_VALUE_DENIED");
        static const int GET_SECRET_VALUE_DENIED_HASH = HashingUtils::HashString("GET_SECRET_VALUE_DENIED");
        static const int DESCRIBE_SECRET_DENIED_HASH = HashingUtils::HashString("DESCRIBE_SECRET_DENIED");
        static const int INVALID_SECRET_FORMAT_HASH = HashingUtils::HashString("INVALID_SECRET_FORMAT");
        static const int SECRET_IS_NOT_ONE_KEY_VALUE_PAIR_HASH = HashingUtils::HashString("SECRET_IS_NOT_ONE_KEY_VALUE_PAIR");
        static const int INVALID_SECRET_KEY_HASH = HashingUtils::HashString("INVALID_SECRET_KEY");
        static const int INVALID_SECRET_VALUE_HASH = HashingUtils::HashString("INVALID_SECRET_VALUE");
        static const int SECRET_ARN_RESOURCE_NOT_FOUND_HASH = HashingUtils::HashString("SECRET_ARN_RESOURCE_NOT_FOUND");
        static const int DECRYPT_SECRET_FAILED_HASH = HashingUtils::HashString("DECRYPT_SECRET_FAILED");
        static const int TOO_MANY_SECRETS_HASH = HashingUtils::HashString("TOO_MANY_SECRETS");
        static const int DUPLICATED_SECRET_HASH = HashingUtils::HashString("DUPLICATED_SECRET");
        static const int MALFORMED_SECRET_ARN_HASH = HashingUtils::HashString("MALFORMED_SECRET_ARN");
        static const int SECRET_FROM_DIFFERENT_ACCOUNT_HASH = HashingUtils::HashString("SECRET_FROM_DIFFERENT_ACCOUNT");
        static const int SECRET_FROM_DIFFERENT_REGION_HASH = HashingUtils::HashString("SECRET_FROM_DIFFERENT_REGION");
        static const int INVALID_SECRET_HASH = HashingUtils::HashString("INVALID_SECRET");


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
          else if (hashCode == ENCRYPTION_CONTRACT_WITH_ISM_CONTAINER_INCOMPATIBLE_HASH)
          {
            return ValidationExceptionType::ENCRYPTION_CONTRACT_WITH_ISM_CONTAINER_INCOMPATIBLE;
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
          else if (hashCode == MANIFEST_DRM_SYSTEMS_INCOMPATIBLE_HASH)
          {
            return ValidationExceptionType::MANIFEST_DRM_SYSTEMS_INCOMPATIBLE;
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
          else if (hashCode == TS_CONTAINER_TYPE_WITH_DASH_MANIFEST_HASH)
          {
            return ValidationExceptionType::TS_CONTAINER_TYPE_WITH_DASH_MANIFEST;
          }
          else if (hashCode == DIRECT_MODE_WITH_TIMING_SOURCE_HASH)
          {
            return ValidationExceptionType::DIRECT_MODE_WITH_TIMING_SOURCE;
          }
          else if (hashCode == NONE_MODE_WITH_TIMING_SOURCE_HASH)
          {
            return ValidationExceptionType::NONE_MODE_WITH_TIMING_SOURCE;
          }
          else if (hashCode == TIMING_SOURCE_MISSING_HASH)
          {
            return ValidationExceptionType::TIMING_SOURCE_MISSING;
          }
          else if (hashCode == UPDATE_PERIOD_SMALLER_THAN_SEGMENT_DURATION_HASH)
          {
            return ValidationExceptionType::UPDATE_PERIOD_SMALLER_THAN_SEGMENT_DURATION;
          }
          else if (hashCode == PERIOD_TRIGGERS_NONE_SPECIFIED_WITH_ADDITIONAL_VALUES_HASH)
          {
            return ValidationExceptionType::PERIOD_TRIGGERS_NONE_SPECIFIED_WITH_ADDITIONAL_VALUES;
          }
          else if (hashCode == DRM_SIGNALING_MISMATCH_SEGMENT_ENCRYPTION_STATUS_HASH)
          {
            return ValidationExceptionType::DRM_SIGNALING_MISMATCH_SEGMENT_ENCRYPTION_STATUS;
          }
          else if (hashCode == ONLY_CMAF_INPUT_TYPE_ALLOW_FORCE_ENDPOINT_ERROR_CONFIGURATION_HASH)
          {
            return ValidationExceptionType::ONLY_CMAF_INPUT_TYPE_ALLOW_FORCE_ENDPOINT_ERROR_CONFIGURATION;
          }
          else if (hashCode == SOURCE_DISRUPTIONS_ENABLED_INCORRECTLY_HASH)
          {
            return ValidationExceptionType::SOURCE_DISRUPTIONS_ENABLED_INCORRECTLY;
          }
          else if (hashCode == HARVESTED_MANIFEST_HAS_START_END_FILTER_CONFIGURATION_HASH)
          {
            return ValidationExceptionType::HARVESTED_MANIFEST_HAS_START_END_FILTER_CONFIGURATION;
          }
          else if (hashCode == HARVESTED_MANIFEST_NOT_FOUND_ON_ENDPOINT_HASH)
          {
            return ValidationExceptionType::HARVESTED_MANIFEST_NOT_FOUND_ON_ENDPOINT;
          }
          else if (hashCode == TOO_MANY_IN_PROGRESS_HARVEST_JOBS_HASH)
          {
            return ValidationExceptionType::TOO_MANY_IN_PROGRESS_HARVEST_JOBS;
          }
          else if (hashCode == HARVEST_JOB_INELIGIBLE_FOR_CANCELLATION_HASH)
          {
            return ValidationExceptionType::HARVEST_JOB_INELIGIBLE_FOR_CANCELLATION;
          }
          else if (hashCode == INVALID_HARVEST_JOB_DURATION_HASH)
          {
            return ValidationExceptionType::INVALID_HARVEST_JOB_DURATION;
          }
          else if (hashCode == HARVEST_JOB_S3_DESTINATION_MISSING_OR_INCOMPLETE_HASH)
          {
            return ValidationExceptionType::HARVEST_JOB_S3_DESTINATION_MISSING_OR_INCOMPLETE;
          }
          else if (hashCode == HARVEST_JOB_UNABLE_TO_WRITE_TO_S3_DESTINATION_HASH)
          {
            return ValidationExceptionType::HARVEST_JOB_UNABLE_TO_WRITE_TO_S3_DESTINATION;
          }
          else if (hashCode == HARVEST_JOB_CUSTOMER_ENDPOINT_READ_ACCESS_DENIED_HASH)
          {
            return ValidationExceptionType::HARVEST_JOB_CUSTOMER_ENDPOINT_READ_ACCESS_DENIED;
          }
          else if (hashCode == CLIP_START_TIME_WITH_START_OR_END_HASH)
          {
            return ValidationExceptionType::CLIP_START_TIME_WITH_START_OR_END;
          }
          else if (hashCode == START_TAG_TIME_OFFSET_INVALID_HASH)
          {
            return ValidationExceptionType::START_TAG_TIME_OFFSET_INVALID;
          }
          else if (hashCode == INCOMPATIBLE_DASH_PROFILE_DVB_DASH_CONFIGURATION_HASH)
          {
            return ValidationExceptionType::INCOMPATIBLE_DASH_PROFILE_DVB_DASH_CONFIGURATION;
          }
          else if (hashCode == DASH_DVB_ATTRIBUTES_WITHOUT_DVB_DASH_PROFILE_HASH)
          {
            return ValidationExceptionType::DASH_DVB_ATTRIBUTES_WITHOUT_DVB_DASH_PROFILE;
          }
          else if (hashCode == INCOMPATIBLE_DASH_COMPACTNESS_CONFIGURATION_HASH)
          {
            return ValidationExceptionType::INCOMPATIBLE_DASH_COMPACTNESS_CONFIGURATION;
          }
          else if (hashCode == INCOMPATIBLE_XML_ENCODING_HASH)
          {
            return ValidationExceptionType::INCOMPATIBLE_XML_ENCODING;
          }
          else if (hashCode == CMAF_EXCLUDE_SEGMENT_DRM_METADATA_INCOMPATIBLE_CONTAINER_TYPE_HASH)
          {
            return ValidationExceptionType::CMAF_EXCLUDE_SEGMENT_DRM_METADATA_INCOMPATIBLE_CONTAINER_TYPE;
          }
          else if (hashCode == ONLY_CMAF_INPUT_TYPE_ALLOW_MQCS_INPUT_SWITCHING_HASH)
          {
            return ValidationExceptionType::ONLY_CMAF_INPUT_TYPE_ALLOW_MQCS_INPUT_SWITCHING;
          }
          else if (hashCode == ONLY_CMAF_INPUT_TYPE_ALLOW_MQCS_OUTPUT_CONFIGURATION_HASH)
          {
            return ValidationExceptionType::ONLY_CMAF_INPUT_TYPE_ALLOW_MQCS_OUTPUT_CONFIGURATION;
          }
          else if (hashCode == ONLY_CMAF_INPUT_TYPE_ALLOW_PREFERRED_INPUT_CONFIGURATION_HASH)
          {
            return ValidationExceptionType::ONLY_CMAF_INPUT_TYPE_ALLOW_PREFERRED_INPUT_CONFIGURATION;
          }
          else if (hashCode == TS_CONTAINER_TYPE_WITH_MSS_MANIFEST_HASH)
          {
            return ValidationExceptionType::TS_CONTAINER_TYPE_WITH_MSS_MANIFEST;
          }
          else if (hashCode == CMAF_CONTAINER_TYPE_WITH_MSS_MANIFEST_HASH)
          {
            return ValidationExceptionType::CMAF_CONTAINER_TYPE_WITH_MSS_MANIFEST;
          }
          else if (hashCode == ISM_CONTAINER_TYPE_WITH_HLS_MANIFEST_HASH)
          {
            return ValidationExceptionType::ISM_CONTAINER_TYPE_WITH_HLS_MANIFEST;
          }
          else if (hashCode == ISM_CONTAINER_TYPE_WITH_LL_HLS_MANIFEST_HASH)
          {
            return ValidationExceptionType::ISM_CONTAINER_TYPE_WITH_LL_HLS_MANIFEST;
          }
          else if (hashCode == ISM_CONTAINER_TYPE_WITH_DASH_MANIFEST_HASH)
          {
            return ValidationExceptionType::ISM_CONTAINER_TYPE_WITH_DASH_MANIFEST;
          }
          else if (hashCode == ISM_CONTAINER_TYPE_WITH_SCTE_HASH)
          {
            return ValidationExceptionType::ISM_CONTAINER_TYPE_WITH_SCTE;
          }
          else if (hashCode == ISM_CONTAINER_WITH_KEY_ROTATION_HASH)
          {
            return ValidationExceptionType::ISM_CONTAINER_WITH_KEY_ROTATION;
          }
          else if (hashCode == BATCH_GET_SECRET_VALUE_DENIED_HASH)
          {
            return ValidationExceptionType::BATCH_GET_SECRET_VALUE_DENIED;
          }
          else if (hashCode == GET_SECRET_VALUE_DENIED_HASH)
          {
            return ValidationExceptionType::GET_SECRET_VALUE_DENIED;
          }
          else if (hashCode == DESCRIBE_SECRET_DENIED_HASH)
          {
            return ValidationExceptionType::DESCRIBE_SECRET_DENIED;
          }
          else if (hashCode == INVALID_SECRET_FORMAT_HASH)
          {
            return ValidationExceptionType::INVALID_SECRET_FORMAT;
          }
          else if (hashCode == SECRET_IS_NOT_ONE_KEY_VALUE_PAIR_HASH)
          {
            return ValidationExceptionType::SECRET_IS_NOT_ONE_KEY_VALUE_PAIR;
          }
          else if (hashCode == INVALID_SECRET_KEY_HASH)
          {
            return ValidationExceptionType::INVALID_SECRET_KEY;
          }
          else if (hashCode == INVALID_SECRET_VALUE_HASH)
          {
            return ValidationExceptionType::INVALID_SECRET_VALUE;
          }
          else if (hashCode == SECRET_ARN_RESOURCE_NOT_FOUND_HASH)
          {
            return ValidationExceptionType::SECRET_ARN_RESOURCE_NOT_FOUND;
          }
          else if (hashCode == DECRYPT_SECRET_FAILED_HASH)
          {
            return ValidationExceptionType::DECRYPT_SECRET_FAILED;
          }
          else if (hashCode == TOO_MANY_SECRETS_HASH)
          {
            return ValidationExceptionType::TOO_MANY_SECRETS;
          }
          else if (hashCode == DUPLICATED_SECRET_HASH)
          {
            return ValidationExceptionType::DUPLICATED_SECRET;
          }
          else if (hashCode == MALFORMED_SECRET_ARN_HASH)
          {
            return ValidationExceptionType::MALFORMED_SECRET_ARN;
          }
          else if (hashCode == SECRET_FROM_DIFFERENT_ACCOUNT_HASH)
          {
            return ValidationExceptionType::SECRET_FROM_DIFFERENT_ACCOUNT;
          }
          else if (hashCode == SECRET_FROM_DIFFERENT_REGION_HASH)
          {
            return ValidationExceptionType::SECRET_FROM_DIFFERENT_REGION;
          }
          else if (hashCode == INVALID_SECRET_HASH)
          {
            return ValidationExceptionType::INVALID_SECRET;
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
          case ValidationExceptionType::ENCRYPTION_CONTRACT_WITH_ISM_CONTAINER_INCOMPATIBLE:
            return "ENCRYPTION_CONTRACT_WITH_ISM_CONTAINER_INCOMPATIBLE";
          case ValidationExceptionType::ENCRYPTION_CONTRACT_UNENCRYPTED:
            return "ENCRYPTION_CONTRACT_UNENCRYPTED";
          case ValidationExceptionType::ENCRYPTION_CONTRACT_SHARED:
            return "ENCRYPTION_CONTRACT_SHARED";
          case ValidationExceptionType::NUM_MANIFESTS_LOW:
            return "NUM_MANIFESTS_LOW";
          case ValidationExceptionType::NUM_MANIFESTS_HIGH:
            return "NUM_MANIFESTS_HIGH";
          case ValidationExceptionType::MANIFEST_DRM_SYSTEMS_INCOMPATIBLE:
            return "MANIFEST_DRM_SYSTEMS_INCOMPATIBLE";
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
          case ValidationExceptionType::TS_CONTAINER_TYPE_WITH_DASH_MANIFEST:
            return "TS_CONTAINER_TYPE_WITH_DASH_MANIFEST";
          case ValidationExceptionType::DIRECT_MODE_WITH_TIMING_SOURCE:
            return "DIRECT_MODE_WITH_TIMING_SOURCE";
          case ValidationExceptionType::NONE_MODE_WITH_TIMING_SOURCE:
            return "NONE_MODE_WITH_TIMING_SOURCE";
          case ValidationExceptionType::TIMING_SOURCE_MISSING:
            return "TIMING_SOURCE_MISSING";
          case ValidationExceptionType::UPDATE_PERIOD_SMALLER_THAN_SEGMENT_DURATION:
            return "UPDATE_PERIOD_SMALLER_THAN_SEGMENT_DURATION";
          case ValidationExceptionType::PERIOD_TRIGGERS_NONE_SPECIFIED_WITH_ADDITIONAL_VALUES:
            return "PERIOD_TRIGGERS_NONE_SPECIFIED_WITH_ADDITIONAL_VALUES";
          case ValidationExceptionType::DRM_SIGNALING_MISMATCH_SEGMENT_ENCRYPTION_STATUS:
            return "DRM_SIGNALING_MISMATCH_SEGMENT_ENCRYPTION_STATUS";
          case ValidationExceptionType::ONLY_CMAF_INPUT_TYPE_ALLOW_FORCE_ENDPOINT_ERROR_CONFIGURATION:
            return "ONLY_CMAF_INPUT_TYPE_ALLOW_FORCE_ENDPOINT_ERROR_CONFIGURATION";
          case ValidationExceptionType::SOURCE_DISRUPTIONS_ENABLED_INCORRECTLY:
            return "SOURCE_DISRUPTIONS_ENABLED_INCORRECTLY";
          case ValidationExceptionType::HARVESTED_MANIFEST_HAS_START_END_FILTER_CONFIGURATION:
            return "HARVESTED_MANIFEST_HAS_START_END_FILTER_CONFIGURATION";
          case ValidationExceptionType::HARVESTED_MANIFEST_NOT_FOUND_ON_ENDPOINT:
            return "HARVESTED_MANIFEST_NOT_FOUND_ON_ENDPOINT";
          case ValidationExceptionType::TOO_MANY_IN_PROGRESS_HARVEST_JOBS:
            return "TOO_MANY_IN_PROGRESS_HARVEST_JOBS";
          case ValidationExceptionType::HARVEST_JOB_INELIGIBLE_FOR_CANCELLATION:
            return "HARVEST_JOB_INELIGIBLE_FOR_CANCELLATION";
          case ValidationExceptionType::INVALID_HARVEST_JOB_DURATION:
            return "INVALID_HARVEST_JOB_DURATION";
          case ValidationExceptionType::HARVEST_JOB_S3_DESTINATION_MISSING_OR_INCOMPLETE:
            return "HARVEST_JOB_S3_DESTINATION_MISSING_OR_INCOMPLETE";
          case ValidationExceptionType::HARVEST_JOB_UNABLE_TO_WRITE_TO_S3_DESTINATION:
            return "HARVEST_JOB_UNABLE_TO_WRITE_TO_S3_DESTINATION";
          case ValidationExceptionType::HARVEST_JOB_CUSTOMER_ENDPOINT_READ_ACCESS_DENIED:
            return "HARVEST_JOB_CUSTOMER_ENDPOINT_READ_ACCESS_DENIED";
          case ValidationExceptionType::CLIP_START_TIME_WITH_START_OR_END:
            return "CLIP_START_TIME_WITH_START_OR_END";
          case ValidationExceptionType::START_TAG_TIME_OFFSET_INVALID:
            return "START_TAG_TIME_OFFSET_INVALID";
          case ValidationExceptionType::INCOMPATIBLE_DASH_PROFILE_DVB_DASH_CONFIGURATION:
            return "INCOMPATIBLE_DASH_PROFILE_DVB_DASH_CONFIGURATION";
          case ValidationExceptionType::DASH_DVB_ATTRIBUTES_WITHOUT_DVB_DASH_PROFILE:
            return "DASH_DVB_ATTRIBUTES_WITHOUT_DVB_DASH_PROFILE";
          case ValidationExceptionType::INCOMPATIBLE_DASH_COMPACTNESS_CONFIGURATION:
            return "INCOMPATIBLE_DASH_COMPACTNESS_CONFIGURATION";
          case ValidationExceptionType::INCOMPATIBLE_XML_ENCODING:
            return "INCOMPATIBLE_XML_ENCODING";
          case ValidationExceptionType::CMAF_EXCLUDE_SEGMENT_DRM_METADATA_INCOMPATIBLE_CONTAINER_TYPE:
            return "CMAF_EXCLUDE_SEGMENT_DRM_METADATA_INCOMPATIBLE_CONTAINER_TYPE";
          case ValidationExceptionType::ONLY_CMAF_INPUT_TYPE_ALLOW_MQCS_INPUT_SWITCHING:
            return "ONLY_CMAF_INPUT_TYPE_ALLOW_MQCS_INPUT_SWITCHING";
          case ValidationExceptionType::ONLY_CMAF_INPUT_TYPE_ALLOW_MQCS_OUTPUT_CONFIGURATION:
            return "ONLY_CMAF_INPUT_TYPE_ALLOW_MQCS_OUTPUT_CONFIGURATION";
          case ValidationExceptionType::ONLY_CMAF_INPUT_TYPE_ALLOW_PREFERRED_INPUT_CONFIGURATION:
            return "ONLY_CMAF_INPUT_TYPE_ALLOW_PREFERRED_INPUT_CONFIGURATION";
          case ValidationExceptionType::TS_CONTAINER_TYPE_WITH_MSS_MANIFEST:
            return "TS_CONTAINER_TYPE_WITH_MSS_MANIFEST";
          case ValidationExceptionType::CMAF_CONTAINER_TYPE_WITH_MSS_MANIFEST:
            return "CMAF_CONTAINER_TYPE_WITH_MSS_MANIFEST";
          case ValidationExceptionType::ISM_CONTAINER_TYPE_WITH_HLS_MANIFEST:
            return "ISM_CONTAINER_TYPE_WITH_HLS_MANIFEST";
          case ValidationExceptionType::ISM_CONTAINER_TYPE_WITH_LL_HLS_MANIFEST:
            return "ISM_CONTAINER_TYPE_WITH_LL_HLS_MANIFEST";
          case ValidationExceptionType::ISM_CONTAINER_TYPE_WITH_DASH_MANIFEST:
            return "ISM_CONTAINER_TYPE_WITH_DASH_MANIFEST";
          case ValidationExceptionType::ISM_CONTAINER_TYPE_WITH_SCTE:
            return "ISM_CONTAINER_TYPE_WITH_SCTE";
          case ValidationExceptionType::ISM_CONTAINER_WITH_KEY_ROTATION:
            return "ISM_CONTAINER_WITH_KEY_ROTATION";
          case ValidationExceptionType::BATCH_GET_SECRET_VALUE_DENIED:
            return "BATCH_GET_SECRET_VALUE_DENIED";
          case ValidationExceptionType::GET_SECRET_VALUE_DENIED:
            return "GET_SECRET_VALUE_DENIED";
          case ValidationExceptionType::DESCRIBE_SECRET_DENIED:
            return "DESCRIBE_SECRET_DENIED";
          case ValidationExceptionType::INVALID_SECRET_FORMAT:
            return "INVALID_SECRET_FORMAT";
          case ValidationExceptionType::SECRET_IS_NOT_ONE_KEY_VALUE_PAIR:
            return "SECRET_IS_NOT_ONE_KEY_VALUE_PAIR";
          case ValidationExceptionType::INVALID_SECRET_KEY:
            return "INVALID_SECRET_KEY";
          case ValidationExceptionType::INVALID_SECRET_VALUE:
            return "INVALID_SECRET_VALUE";
          case ValidationExceptionType::SECRET_ARN_RESOURCE_NOT_FOUND:
            return "SECRET_ARN_RESOURCE_NOT_FOUND";
          case ValidationExceptionType::DECRYPT_SECRET_FAILED:
            return "DECRYPT_SECRET_FAILED";
          case ValidationExceptionType::TOO_MANY_SECRETS:
            return "TOO_MANY_SECRETS";
          case ValidationExceptionType::DUPLICATED_SECRET:
            return "DUPLICATED_SECRET";
          case ValidationExceptionType::MALFORMED_SECRET_ARN:
            return "MALFORMED_SECRET_ARN";
          case ValidationExceptionType::SECRET_FROM_DIFFERENT_ACCOUNT:
            return "SECRET_FROM_DIFFERENT_ACCOUNT";
          case ValidationExceptionType::SECRET_FROM_DIFFERENT_REGION:
            return "SECRET_FROM_DIFFERENT_REGION";
          case ValidationExceptionType::INVALID_SECRET:
            return "INVALID_SECRET";
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
