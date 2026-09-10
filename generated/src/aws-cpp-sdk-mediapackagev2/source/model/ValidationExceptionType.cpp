/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediapackagev2/model/ValidationExceptionType.h>

using namespace Aws::Utils;

namespace Aws {
namespace mediapackagev2 {
namespace Model {
namespace ValidationExceptionTypeMapper {

static const int CONTAINER_TYPE_IMMUTABLE_HASH = HashingUtils::HashString("CONTAINER_TYPE_IMMUTABLE");
static const int INVALID_PAGINATION_TOKEN_HASH = HashingUtils::HashString("INVALID_PAGINATION_TOKEN");
static const int INVALID_PAGINATION_MAX_RESULTS_HASH = HashingUtils::HashString("INVALID_PAGINATION_MAX_RESULTS");
static const int INVALID_POLICY_HASH = HashingUtils::HashString("INVALID_POLICY");
static const int INVALID_ROLE_ARN_HASH = HashingUtils::HashString("INVALID_ROLE_ARN");
static const int MANIFEST_NAME_COLLISION_HASH = HashingUtils::HashString("MANIFEST_NAME_COLLISION");
static const int ENCRYPTION_METHOD_CONTAINER_TYPE_MISMATCH_HASH = HashingUtils::HashString("ENCRYPTION_METHOD_CONTAINER_TYPE_MISMATCH");
static const int CENC_IV_INCOMPATIBLE_HASH = HashingUtils::HashString("CENC_IV_INCOMPATIBLE");
static const int ENCRYPTION_CONTRACT_WITHOUT_AUDIO_RENDITION_INCOMPATIBLE_HASH =
    HashingUtils::HashString("ENCRYPTION_CONTRACT_WITHOUT_AUDIO_RENDITION_INCOMPATIBLE");
static const int ENCRYPTION_CONTRACT_WITH_ISM_CONTAINER_INCOMPATIBLE_HASH =
    HashingUtils::HashString("ENCRYPTION_CONTRACT_WITH_ISM_CONTAINER_INCOMPATIBLE");
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
static const int INVALID_DRM_SETTINGS_HASH = HashingUtils::HashString("INVALID_DRM_SETTINGS");
static const int INVALID_TIME_DELAY_SECONDS_HASH = HashingUtils::HashString("INVALID_TIME_DELAY_SECONDS");
static const int END_TIME_EARLIER_THAN_START_TIME_HASH = HashingUtils::HashString("END_TIME_EARLIER_THAN_START_TIME");
static const int TS_CONTAINER_TYPE_WITH_DASH_MANIFEST_HASH = HashingUtils::HashString("TS_CONTAINER_TYPE_WITH_DASH_MANIFEST");
static const int DIRECT_MODE_WITH_TIMING_SOURCE_HASH = HashingUtils::HashString("DIRECT_MODE_WITH_TIMING_SOURCE");
static const int NONE_MODE_WITH_TIMING_SOURCE_HASH = HashingUtils::HashString("NONE_MODE_WITH_TIMING_SOURCE");
static const int TIMING_SOURCE_MISSING_HASH = HashingUtils::HashString("TIMING_SOURCE_MISSING");
static const int UPDATE_PERIOD_SMALLER_THAN_SEGMENT_DURATION_HASH = HashingUtils::HashString("UPDATE_PERIOD_SMALLER_THAN_SEGMENT_DURATION");
static const int PERIOD_TRIGGERS_NONE_SPECIFIED_WITH_ADDITIONAL_VALUES_HASH =
    HashingUtils::HashString("PERIOD_TRIGGERS_NONE_SPECIFIED_WITH_ADDITIONAL_VALUES");
static const int DRM_SIGNALING_MISMATCH_SEGMENT_ENCRYPTION_STATUS_HASH =
    HashingUtils::HashString("DRM_SIGNALING_MISMATCH_SEGMENT_ENCRYPTION_STATUS");
static const int ONLY_CMAF_INPUT_TYPE_ALLOW_FORCE_ENDPOINT_ERROR_CONFIGURATION_HASH =
    HashingUtils::HashString("ONLY_CMAF_INPUT_TYPE_ALLOW_FORCE_ENDPOINT_ERROR_CONFIGURATION");
static const int SOURCE_DISRUPTIONS_ENABLED_INCORRECTLY_HASH = HashingUtils::HashString("SOURCE_DISRUPTIONS_ENABLED_INCORRECTLY");
static const int HARVESTED_MANIFEST_HAS_START_END_FILTER_CONFIGURATION_HASH =
    HashingUtils::HashString("HARVESTED_MANIFEST_HAS_START_END_FILTER_CONFIGURATION");
static const int HARVESTED_MANIFEST_NOT_FOUND_ON_ENDPOINT_HASH = HashingUtils::HashString("HARVESTED_MANIFEST_NOT_FOUND_ON_ENDPOINT");
static const int TOO_MANY_IN_PROGRESS_HARVEST_JOBS_HASH = HashingUtils::HashString("TOO_MANY_IN_PROGRESS_HARVEST_JOBS");
static const int HARVEST_JOB_INELIGIBLE_FOR_CANCELLATION_HASH = HashingUtils::HashString("HARVEST_JOB_INELIGIBLE_FOR_CANCELLATION");
static const int INVALID_HARVEST_JOB_DURATION_HASH = HashingUtils::HashString("INVALID_HARVEST_JOB_DURATION");
static const int HARVEST_JOB_S3_DESTINATION_MISSING_OR_INCOMPLETE_HASH =
    HashingUtils::HashString("HARVEST_JOB_S3_DESTINATION_MISSING_OR_INCOMPLETE");
static const int HARVEST_JOB_UNABLE_TO_WRITE_TO_S3_DESTINATION_HASH =
    HashingUtils::HashString("HARVEST_JOB_UNABLE_TO_WRITE_TO_S3_DESTINATION");
static const int HARVEST_JOB_CUSTOMER_ENDPOINT_READ_ACCESS_DENIED_HASH =
    HashingUtils::HashString("HARVEST_JOB_CUSTOMER_ENDPOINT_READ_ACCESS_DENIED");
static const int CLIP_START_TIME_WITH_START_OR_END_HASH = HashingUtils::HashString("CLIP_START_TIME_WITH_START_OR_END");
static const int START_TAG_TIME_OFFSET_INVALID_HASH = HashingUtils::HashString("START_TAG_TIME_OFFSET_INVALID");
static const int INCOMPATIBLE_DASH_PROFILE_DVB_DASH_CONFIGURATION_HASH =
    HashingUtils::HashString("INCOMPATIBLE_DASH_PROFILE_DVB_DASH_CONFIGURATION");
static const int DASH_DVB_ATTRIBUTES_WITHOUT_DVB_DASH_PROFILE_HASH =
    HashingUtils::HashString("DASH_DVB_ATTRIBUTES_WITHOUT_DVB_DASH_PROFILE");
static const int INCOMPATIBLE_DASH_COMPACTNESS_CONFIGURATION_HASH = HashingUtils::HashString("INCOMPATIBLE_DASH_COMPACTNESS_CONFIGURATION");
static const int INCOMPATIBLE_XML_ENCODING_HASH = HashingUtils::HashString("INCOMPATIBLE_XML_ENCODING");
static const int CMAF_EXCLUDE_SEGMENT_DRM_METADATA_INCOMPATIBLE_CONTAINER_TYPE_HASH =
    HashingUtils::HashString("CMAF_EXCLUDE_SEGMENT_DRM_METADATA_INCOMPATIBLE_CONTAINER_TYPE");
static const int ONLY_CMAF_INPUT_TYPE_ALLOW_MQCS_INPUT_SWITCHING_HASH =
    HashingUtils::HashString("ONLY_CMAF_INPUT_TYPE_ALLOW_MQCS_INPUT_SWITCHING");
static const int ONLY_CMAF_INPUT_TYPE_ALLOW_MQCS_OUTPUT_CONFIGURATION_HASH =
    HashingUtils::HashString("ONLY_CMAF_INPUT_TYPE_ALLOW_MQCS_OUTPUT_CONFIGURATION");
static const int ONLY_CMAF_INPUT_TYPE_ALLOW_PREFERRED_INPUT_CONFIGURATION_HASH =
    HashingUtils::HashString("ONLY_CMAF_INPUT_TYPE_ALLOW_PREFERRED_INPUT_CONFIGURATION");
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
static const int RESOURCE_NOT_IN_SAME_REGION_HASH = HashingUtils::HashString("RESOURCE_NOT_IN_SAME_REGION");
static const int CERTIFICATE_RESOURCE_NOT_FOUND_HASH = HashingUtils::HashString("CERTIFICATE_RESOURCE_NOT_FOUND");
static const int CERTIFICATE_ACCESS_DENIED_HASH = HashingUtils::HashString("CERTIFICATE_ACCESS_DENIED");
static const int DESCRIBE_CERTIFICATE_FAILED_HASH = HashingUtils::HashString("DESCRIBE_CERTIFICATE_FAILED");
static const int INVALID_CERTIFICATE_STATUS_HASH = HashingUtils::HashString("INVALID_CERTIFICATE_STATUS");
static const int INVALID_CERTIFICATE_KEY_ALGORITHM_HASH = HashingUtils::HashString("INVALID_CERTIFICATE_KEY_ALGORITHM");
static const int INVALID_CERTIFICATE_SIGNATURE_ALGORITHM_HASH = HashingUtils::HashString("INVALID_CERTIFICATE_SIGNATURE_ALGORITHM");
static const int MISSING_CERTIFICATE_DOMAIN_NAME_HASH = HashingUtils::HashString("MISSING_CERTIFICATE_DOMAIN_NAME");
static const int INVALID_ARN_HASH = HashingUtils::HashString("INVALID_ARN");
static const int SCTE_IN_MANIFESTS_INVALID_CONFIGURATION_HASH = HashingUtils::HashString("SCTE_IN_MANIFESTS_INVALID_CONFIGURATION");
static const int CUSTOM_AD_TYPES_INVALID_CONFIGURATION_HASH = HashingUtils::HashString("CUSTOM_AD_TYPES_INVALID_CONFIGURATION");
static const int ONLY_CMAF_INPUT_TYPE_ALLOW_OUTPUT_LOCKING_MODE_HASH =
    HashingUtils::HashString("ONLY_CMAF_INPUT_TYPE_ALLOW_OUTPUT_LOCKING_MODE");
static const int ONLY_NON_EPOCH_LOCKED_ALLOW_OUTPUT_TIMESTAMP_MODE_HASH =
    HashingUtils::HashString("ONLY_NON_EPOCH_LOCKED_ALLOW_OUTPUT_TIMESTAMP_MODE");
static const int OUTPUT_TIMESTAMP_MODE_IMMUTABLE_HASH = HashingUtils::HashString("OUTPUT_TIMESTAMP_MODE_IMMUTABLE");
static const int NON_EPOCH_LOCKED_WITH_FORCE_ENDPOINT_ERROR_CONFIGURATION_HASH =
    HashingUtils::HashString("NON_EPOCH_LOCKED_WITH_FORCE_ENDPOINT_ERROR_CONFIGURATION");
static const int ONLY_HLS_INPUT_TYPE_ALLOW_STREAM_NAME_OUTPUT_MODE_HASH =
    HashingUtils::HashString("ONLY_HLS_INPUT_TYPE_ALLOW_STREAM_NAME_OUTPUT_MODE");
static const int STREAM_NAME_OUTPUT_MODE_IMMUTABLE_HASH = HashingUtils::HashString("STREAM_NAME_OUTPUT_MODE_IMMUTABLE");
static const int MULTIVIEW_CONFIGURATION_REQUIRED_HASH = HashingUtils::HashString("MULTIVIEW_CONFIGURATION_REQUIRED");
static const int MULTIVIEW_CONFIGURATION_NOT_ALLOWED_HASH = HashingUtils::HashString("MULTIVIEW_CONFIGURATION_NOT_ALLOWED");
static const int MULTIVIEW_SOURCE_NOT_FOUND_HASH = HashingUtils::HashString("MULTIVIEW_SOURCE_NOT_FOUND");
static const int MULTIVIEW_SOURCE_INVALID_INPUT_TYPE_HASH = HashingUtils::HashString("MULTIVIEW_SOURCE_INVALID_INPUT_TYPE");
static const int MULTIVIEW_CHANNEL_POLICY_NOT_ALLOWED_HASH = HashingUtils::HashString("MULTIVIEW_CHANNEL_POLICY_NOT_ALLOWED");
static const int MULTIVIEW_INPUT_TYPE_WITH_LL_HLS_MANIFEST_HASH = HashingUtils::HashString("MULTIVIEW_INPUT_TYPE_WITH_LL_HLS_MANIFEST");
static const int MULTIVIEW_INPUT_TYPE_WITH_MSS_MANIFEST_HASH = HashingUtils::HashString("MULTIVIEW_INPUT_TYPE_WITH_MSS_MANIFEST");
static const int MULTIVIEW_INPUT_TYPE_WITH_ISM_CONTAINER_HASH = HashingUtils::HashString("MULTIVIEW_INPUT_TYPE_WITH_ISM_CONTAINER");
static const int MULTIVIEW_INPUT_TYPE_WITH_FILTER_CONFIGURATION_HASH =
    HashingUtils::HashString("MULTIVIEW_INPUT_TYPE_WITH_FILTER_CONFIGURATION");
static const int MULTIVIEW_INPUT_TYPE_WITH_START_TAG_HASH = HashingUtils::HashString("MULTIVIEW_INPUT_TYPE_WITH_START_TAG");
static const int MULTIVIEW_INPUT_TYPE_WITH_HARVEST_JOB_HASH = HashingUtils::HashString("MULTIVIEW_INPUT_TYPE_WITH_HARVEST_JOB");
static const int MULTIVIEW_RESET_NOT_ALLOWED_HASH = HashingUtils::HashString("MULTIVIEW_RESET_NOT_ALLOWED");
static const int MULTIVIEW_DUPLICATE_SOURCE_HASH = HashingUtils::HashString("MULTIVIEW_DUPLICATE_SOURCE");
static const int MULTIVIEW_DUPLICATE_LAYOUT_HASH = HashingUtils::HashString("MULTIVIEW_DUPLICATE_LAYOUT");
static const int MULTIVIEW_INPUT_SWITCH_NOT_ALLOWED_HASH = HashingUtils::HashString("MULTIVIEW_INPUT_SWITCH_NOT_ALLOWED");
static const int MULTIVIEW_OUTPUT_HEADER_NOT_ALLOWED_HASH = HashingUtils::HashString("MULTIVIEW_OUTPUT_HEADER_NOT_ALLOWED");
static const int MULTIVIEW_STARTOVER_WINDOW_NOT_ALLOWED_HASH = HashingUtils::HashString("MULTIVIEW_STARTOVER_WINDOW_NOT_ALLOWED");
static const int MULTIVIEW_INVALID_TIME_DELAY_SECONDS_HASH = HashingUtils::HashString("MULTIVIEW_INVALID_TIME_DELAY_SECONDS");
static const int MULTIVIEW_MANIFEST_WINDOW_TOO_LONG_HASH = HashingUtils::HashString("MULTIVIEW_MANIFEST_WINDOW_TOO_LONG");
static const int MULTIVIEW_INPUT_TYPE_WITH_IFRAME_ONLY_STREAMS_HASH =
    HashingUtils::HashString("MULTIVIEW_INPUT_TYPE_WITH_IFRAME_ONLY_STREAMS");
static const int MULTIVIEW_INPUT_TYPE_WITH_NON_EPOCH_LOCKED_HASH = HashingUtils::HashString("MULTIVIEW_INPUT_TYPE_WITH_NON_EPOCH_LOCKED");
static const int MULTIVIEW_INPUT_TYPE_WITH_SEGMENT_DURATION_HASH = HashingUtils::HashString("MULTIVIEW_INPUT_TYPE_WITH_SEGMENT_DURATION");
static const int MULTIVIEW_SOURCE_NON_EPOCH_LOCKED_HASH = HashingUtils::HashString("MULTIVIEW_SOURCE_NON_EPOCH_LOCKED");
static const int MULTIVIEW_SCTE_REQUIRES_AVAILS_PERIOD_TRIGGER_HASH =
    HashingUtils::HashString("MULTIVIEW_SCTE_REQUIRES_AVAILS_PERIOD_TRIGGER");

/*
The if-else chains in this file are converted into a jump table by the compiler,
which allows constant time lookup. The chain has been broken into helper functions
because MSVC has a maximum of 122 chained if-else blocks.
*/
static bool GetEnumForNameHelper0(int hashCode, ValidationExceptionType& enumValue) {
  if (hashCode == CONTAINER_TYPE_IMMUTABLE_HASH) {
    enumValue = ValidationExceptionType::CONTAINER_TYPE_IMMUTABLE;
    return true;
  } else if (hashCode == INVALID_PAGINATION_TOKEN_HASH) {
    enumValue = ValidationExceptionType::INVALID_PAGINATION_TOKEN;
    return true;
  } else if (hashCode == INVALID_PAGINATION_MAX_RESULTS_HASH) {
    enumValue = ValidationExceptionType::INVALID_PAGINATION_MAX_RESULTS;
    return true;
  } else if (hashCode == INVALID_POLICY_HASH) {
    enumValue = ValidationExceptionType::INVALID_POLICY;
    return true;
  } else if (hashCode == INVALID_ROLE_ARN_HASH) {
    enumValue = ValidationExceptionType::INVALID_ROLE_ARN;
    return true;
  } else if (hashCode == MANIFEST_NAME_COLLISION_HASH) {
    enumValue = ValidationExceptionType::MANIFEST_NAME_COLLISION;
    return true;
  } else if (hashCode == ENCRYPTION_METHOD_CONTAINER_TYPE_MISMATCH_HASH) {
    enumValue = ValidationExceptionType::ENCRYPTION_METHOD_CONTAINER_TYPE_MISMATCH;
    return true;
  } else if (hashCode == CENC_IV_INCOMPATIBLE_HASH) {
    enumValue = ValidationExceptionType::CENC_IV_INCOMPATIBLE;
    return true;
  } else if (hashCode == ENCRYPTION_CONTRACT_WITHOUT_AUDIO_RENDITION_INCOMPATIBLE_HASH) {
    enumValue = ValidationExceptionType::ENCRYPTION_CONTRACT_WITHOUT_AUDIO_RENDITION_INCOMPATIBLE;
    return true;
  } else if (hashCode == ENCRYPTION_CONTRACT_WITH_ISM_CONTAINER_INCOMPATIBLE_HASH) {
    enumValue = ValidationExceptionType::ENCRYPTION_CONTRACT_WITH_ISM_CONTAINER_INCOMPATIBLE;
    return true;
  } else if (hashCode == ENCRYPTION_CONTRACT_UNENCRYPTED_HASH) {
    enumValue = ValidationExceptionType::ENCRYPTION_CONTRACT_UNENCRYPTED;
    return true;
  } else if (hashCode == ENCRYPTION_CONTRACT_SHARED_HASH) {
    enumValue = ValidationExceptionType::ENCRYPTION_CONTRACT_SHARED;
    return true;
  } else if (hashCode == NUM_MANIFESTS_LOW_HASH) {
    enumValue = ValidationExceptionType::NUM_MANIFESTS_LOW;
    return true;
  } else if (hashCode == NUM_MANIFESTS_HIGH_HASH) {
    enumValue = ValidationExceptionType::NUM_MANIFESTS_HIGH;
    return true;
  } else if (hashCode == MANIFEST_DRM_SYSTEMS_INCOMPATIBLE_HASH) {
    enumValue = ValidationExceptionType::MANIFEST_DRM_SYSTEMS_INCOMPATIBLE;
    return true;
  } else if (hashCode == DRM_SYSTEMS_ENCRYPTION_METHOD_INCOMPATIBLE_HASH) {
    enumValue = ValidationExceptionType::DRM_SYSTEMS_ENCRYPTION_METHOD_INCOMPATIBLE;
    return true;
  } else if (hashCode == ROLE_ARN_NOT_ASSUMABLE_HASH) {
    enumValue = ValidationExceptionType::ROLE_ARN_NOT_ASSUMABLE;
    return true;
  } else if (hashCode == ROLE_ARN_LENGTH_OUT_OF_RANGE_HASH) {
    enumValue = ValidationExceptionType::ROLE_ARN_LENGTH_OUT_OF_RANGE;
    return true;
  } else if (hashCode == ROLE_ARN_INVALID_FORMAT_HASH) {
    enumValue = ValidationExceptionType::ROLE_ARN_INVALID_FORMAT;
    return true;
  } else if (hashCode == URL_INVALID_HASH) {
    enumValue = ValidationExceptionType::URL_INVALID;
    return true;
  } else if (hashCode == URL_SCHEME_HASH) {
    enumValue = ValidationExceptionType::URL_SCHEME;
    return true;
  } else if (hashCode == URL_USER_INFO_HASH) {
    enumValue = ValidationExceptionType::URL_USER_INFO;
    return true;
  } else if (hashCode == URL_PORT_HASH) {
    enumValue = ValidationExceptionType::URL_PORT;
    return true;
  } else if (hashCode == URL_UNKNOWN_HOST_HASH) {
    enumValue = ValidationExceptionType::URL_UNKNOWN_HOST;
    return true;
  } else if (hashCode == URL_LOCAL_ADDRESS_HASH) {
    enumValue = ValidationExceptionType::URL_LOCAL_ADDRESS;
    return true;
  } else if (hashCode == URL_LOOPBACK_ADDRESS_HASH) {
    enumValue = ValidationExceptionType::URL_LOOPBACK_ADDRESS;
    return true;
  } else if (hashCode == URL_LINK_LOCAL_ADDRESS_HASH) {
    enumValue = ValidationExceptionType::URL_LINK_LOCAL_ADDRESS;
    return true;
  } else if (hashCode == URL_MULTICAST_ADDRESS_HASH) {
    enumValue = ValidationExceptionType::URL_MULTICAST_ADDRESS;
    return true;
  } else if (hashCode == MEMBER_INVALID_HASH) {
    enumValue = ValidationExceptionType::MEMBER_INVALID;
    return true;
  } else if (hashCode == MEMBER_MISSING_HASH) {
    enumValue = ValidationExceptionType::MEMBER_MISSING;
    return true;
  } else if (hashCode == MEMBER_MIN_VALUE_HASH) {
    enumValue = ValidationExceptionType::MEMBER_MIN_VALUE;
    return true;
  } else if (hashCode == MEMBER_MAX_VALUE_HASH) {
    enumValue = ValidationExceptionType::MEMBER_MAX_VALUE;
    return true;
  } else if (hashCode == MEMBER_MIN_LENGTH_HASH) {
    enumValue = ValidationExceptionType::MEMBER_MIN_LENGTH;
    return true;
  } else if (hashCode == MEMBER_MAX_LENGTH_HASH) {
    enumValue = ValidationExceptionType::MEMBER_MAX_LENGTH;
    return true;
  } else if (hashCode == MEMBER_INVALID_ENUM_VALUE_HASH) {
    enumValue = ValidationExceptionType::MEMBER_INVALID_ENUM_VALUE;
    return true;
  } else if (hashCode == MEMBER_DOES_NOT_MATCH_PATTERN_HASH) {
    enumValue = ValidationExceptionType::MEMBER_DOES_NOT_MATCH_PATTERN;
    return true;
  } else if (hashCode == INVALID_MANIFEST_FILTER_HASH) {
    enumValue = ValidationExceptionType::INVALID_MANIFEST_FILTER;
    return true;
  } else if (hashCode == INVALID_DRM_SETTINGS_HASH) {
    enumValue = ValidationExceptionType::INVALID_DRM_SETTINGS;
    return true;
  } else if (hashCode == INVALID_TIME_DELAY_SECONDS_HASH) {
    enumValue = ValidationExceptionType::INVALID_TIME_DELAY_SECONDS;
    return true;
  } else if (hashCode == END_TIME_EARLIER_THAN_START_TIME_HASH) {
    enumValue = ValidationExceptionType::END_TIME_EARLIER_THAN_START_TIME;
    return true;
  } else if (hashCode == TS_CONTAINER_TYPE_WITH_DASH_MANIFEST_HASH) {
    enumValue = ValidationExceptionType::TS_CONTAINER_TYPE_WITH_DASH_MANIFEST;
    return true;
  } else if (hashCode == DIRECT_MODE_WITH_TIMING_SOURCE_HASH) {
    enumValue = ValidationExceptionType::DIRECT_MODE_WITH_TIMING_SOURCE;
    return true;
  } else if (hashCode == NONE_MODE_WITH_TIMING_SOURCE_HASH) {
    enumValue = ValidationExceptionType::NONE_MODE_WITH_TIMING_SOURCE;
    return true;
  } else if (hashCode == TIMING_SOURCE_MISSING_HASH) {
    enumValue = ValidationExceptionType::TIMING_SOURCE_MISSING;
    return true;
  } else if (hashCode == UPDATE_PERIOD_SMALLER_THAN_SEGMENT_DURATION_HASH) {
    enumValue = ValidationExceptionType::UPDATE_PERIOD_SMALLER_THAN_SEGMENT_DURATION;
    return true;
  } else if (hashCode == PERIOD_TRIGGERS_NONE_SPECIFIED_WITH_ADDITIONAL_VALUES_HASH) {
    enumValue = ValidationExceptionType::PERIOD_TRIGGERS_NONE_SPECIFIED_WITH_ADDITIONAL_VALUES;
    return true;
  } else if (hashCode == DRM_SIGNALING_MISMATCH_SEGMENT_ENCRYPTION_STATUS_HASH) {
    enumValue = ValidationExceptionType::DRM_SIGNALING_MISMATCH_SEGMENT_ENCRYPTION_STATUS;
    return true;
  } else if (hashCode == ONLY_CMAF_INPUT_TYPE_ALLOW_FORCE_ENDPOINT_ERROR_CONFIGURATION_HASH) {
    enumValue = ValidationExceptionType::ONLY_CMAF_INPUT_TYPE_ALLOW_FORCE_ENDPOINT_ERROR_CONFIGURATION;
    return true;
  } else if (hashCode == SOURCE_DISRUPTIONS_ENABLED_INCORRECTLY_HASH) {
    enumValue = ValidationExceptionType::SOURCE_DISRUPTIONS_ENABLED_INCORRECTLY;
    return true;
  } else if (hashCode == HARVESTED_MANIFEST_HAS_START_END_FILTER_CONFIGURATION_HASH) {
    enumValue = ValidationExceptionType::HARVESTED_MANIFEST_HAS_START_END_FILTER_CONFIGURATION;
    return true;
  } else if (hashCode == HARVESTED_MANIFEST_NOT_FOUND_ON_ENDPOINT_HASH) {
    enumValue = ValidationExceptionType::HARVESTED_MANIFEST_NOT_FOUND_ON_ENDPOINT;
    return true;
  } else if (hashCode == TOO_MANY_IN_PROGRESS_HARVEST_JOBS_HASH) {
    enumValue = ValidationExceptionType::TOO_MANY_IN_PROGRESS_HARVEST_JOBS;
    return true;
  } else if (hashCode == HARVEST_JOB_INELIGIBLE_FOR_CANCELLATION_HASH) {
    enumValue = ValidationExceptionType::HARVEST_JOB_INELIGIBLE_FOR_CANCELLATION;
    return true;
  } else if (hashCode == INVALID_HARVEST_JOB_DURATION_HASH) {
    enumValue = ValidationExceptionType::INVALID_HARVEST_JOB_DURATION;
    return true;
  } else if (hashCode == HARVEST_JOB_S3_DESTINATION_MISSING_OR_INCOMPLETE_HASH) {
    enumValue = ValidationExceptionType::HARVEST_JOB_S3_DESTINATION_MISSING_OR_INCOMPLETE;
    return true;
  } else if (hashCode == HARVEST_JOB_UNABLE_TO_WRITE_TO_S3_DESTINATION_HASH) {
    enumValue = ValidationExceptionType::HARVEST_JOB_UNABLE_TO_WRITE_TO_S3_DESTINATION;
    return true;
  } else if (hashCode == HARVEST_JOB_CUSTOMER_ENDPOINT_READ_ACCESS_DENIED_HASH) {
    enumValue = ValidationExceptionType::HARVEST_JOB_CUSTOMER_ENDPOINT_READ_ACCESS_DENIED;
    return true;
  } else if (hashCode == CLIP_START_TIME_WITH_START_OR_END_HASH) {
    enumValue = ValidationExceptionType::CLIP_START_TIME_WITH_START_OR_END;
    return true;
  } else if (hashCode == START_TAG_TIME_OFFSET_INVALID_HASH) {
    enumValue = ValidationExceptionType::START_TAG_TIME_OFFSET_INVALID;
    return true;
  } else if (hashCode == INCOMPATIBLE_DASH_PROFILE_DVB_DASH_CONFIGURATION_HASH) {
    enumValue = ValidationExceptionType::INCOMPATIBLE_DASH_PROFILE_DVB_DASH_CONFIGURATION;
    return true;
  } else if (hashCode == DASH_DVB_ATTRIBUTES_WITHOUT_DVB_DASH_PROFILE_HASH) {
    enumValue = ValidationExceptionType::DASH_DVB_ATTRIBUTES_WITHOUT_DVB_DASH_PROFILE;
    return true;
  } else if (hashCode == INCOMPATIBLE_DASH_COMPACTNESS_CONFIGURATION_HASH) {
    enumValue = ValidationExceptionType::INCOMPATIBLE_DASH_COMPACTNESS_CONFIGURATION;
    return true;
  } else if (hashCode == INCOMPATIBLE_XML_ENCODING_HASH) {
    enumValue = ValidationExceptionType::INCOMPATIBLE_XML_ENCODING;
    return true;
  } else if (hashCode == CMAF_EXCLUDE_SEGMENT_DRM_METADATA_INCOMPATIBLE_CONTAINER_TYPE_HASH) {
    enumValue = ValidationExceptionType::CMAF_EXCLUDE_SEGMENT_DRM_METADATA_INCOMPATIBLE_CONTAINER_TYPE;
    return true;
  } else if (hashCode == ONLY_CMAF_INPUT_TYPE_ALLOW_MQCS_INPUT_SWITCHING_HASH) {
    enumValue = ValidationExceptionType::ONLY_CMAF_INPUT_TYPE_ALLOW_MQCS_INPUT_SWITCHING;
    return true;
  } else if (hashCode == ONLY_CMAF_INPUT_TYPE_ALLOW_MQCS_OUTPUT_CONFIGURATION_HASH) {
    enumValue = ValidationExceptionType::ONLY_CMAF_INPUT_TYPE_ALLOW_MQCS_OUTPUT_CONFIGURATION;
    return true;
  } else if (hashCode == ONLY_CMAF_INPUT_TYPE_ALLOW_PREFERRED_INPUT_CONFIGURATION_HASH) {
    enumValue = ValidationExceptionType::ONLY_CMAF_INPUT_TYPE_ALLOW_PREFERRED_INPUT_CONFIGURATION;
    return true;
  } else if (hashCode == TS_CONTAINER_TYPE_WITH_MSS_MANIFEST_HASH) {
    enumValue = ValidationExceptionType::TS_CONTAINER_TYPE_WITH_MSS_MANIFEST;
    return true;
  } else if (hashCode == CMAF_CONTAINER_TYPE_WITH_MSS_MANIFEST_HASH) {
    enumValue = ValidationExceptionType::CMAF_CONTAINER_TYPE_WITH_MSS_MANIFEST;
    return true;
  } else if (hashCode == ISM_CONTAINER_TYPE_WITH_HLS_MANIFEST_HASH) {
    enumValue = ValidationExceptionType::ISM_CONTAINER_TYPE_WITH_HLS_MANIFEST;
    return true;
  } else if (hashCode == ISM_CONTAINER_TYPE_WITH_LL_HLS_MANIFEST_HASH) {
    enumValue = ValidationExceptionType::ISM_CONTAINER_TYPE_WITH_LL_HLS_MANIFEST;
    return true;
  } else if (hashCode == ISM_CONTAINER_TYPE_WITH_DASH_MANIFEST_HASH) {
    enumValue = ValidationExceptionType::ISM_CONTAINER_TYPE_WITH_DASH_MANIFEST;
    return true;
  } else if (hashCode == ISM_CONTAINER_TYPE_WITH_SCTE_HASH) {
    enumValue = ValidationExceptionType::ISM_CONTAINER_TYPE_WITH_SCTE;
    return true;
  } else if (hashCode == ISM_CONTAINER_WITH_KEY_ROTATION_HASH) {
    enumValue = ValidationExceptionType::ISM_CONTAINER_WITH_KEY_ROTATION;
    return true;
  } else if (hashCode == BATCH_GET_SECRET_VALUE_DENIED_HASH) {
    enumValue = ValidationExceptionType::BATCH_GET_SECRET_VALUE_DENIED;
    return true;
  } else if (hashCode == GET_SECRET_VALUE_DENIED_HASH) {
    enumValue = ValidationExceptionType::GET_SECRET_VALUE_DENIED;
    return true;
  } else if (hashCode == DESCRIBE_SECRET_DENIED_HASH) {
    enumValue = ValidationExceptionType::DESCRIBE_SECRET_DENIED;
    return true;
  } else if (hashCode == INVALID_SECRET_FORMAT_HASH) {
    enumValue = ValidationExceptionType::INVALID_SECRET_FORMAT;
    return true;
  } else if (hashCode == SECRET_IS_NOT_ONE_KEY_VALUE_PAIR_HASH) {
    enumValue = ValidationExceptionType::SECRET_IS_NOT_ONE_KEY_VALUE_PAIR;
    return true;
  } else if (hashCode == INVALID_SECRET_KEY_HASH) {
    enumValue = ValidationExceptionType::INVALID_SECRET_KEY;
    return true;
  } else if (hashCode == INVALID_SECRET_VALUE_HASH) {
    enumValue = ValidationExceptionType::INVALID_SECRET_VALUE;
    return true;
  } else if (hashCode == SECRET_ARN_RESOURCE_NOT_FOUND_HASH) {
    enumValue = ValidationExceptionType::SECRET_ARN_RESOURCE_NOT_FOUND;
    return true;
  } else if (hashCode == DECRYPT_SECRET_FAILED_HASH) {
    enumValue = ValidationExceptionType::DECRYPT_SECRET_FAILED;
    return true;
  } else if (hashCode == TOO_MANY_SECRETS_HASH) {
    enumValue = ValidationExceptionType::TOO_MANY_SECRETS;
    return true;
  } else if (hashCode == DUPLICATED_SECRET_HASH) {
    enumValue = ValidationExceptionType::DUPLICATED_SECRET;
    return true;
  } else if (hashCode == MALFORMED_SECRET_ARN_HASH) {
    enumValue = ValidationExceptionType::MALFORMED_SECRET_ARN;
    return true;
  } else if (hashCode == SECRET_FROM_DIFFERENT_ACCOUNT_HASH) {
    enumValue = ValidationExceptionType::SECRET_FROM_DIFFERENT_ACCOUNT;
    return true;
  } else if (hashCode == SECRET_FROM_DIFFERENT_REGION_HASH) {
    enumValue = ValidationExceptionType::SECRET_FROM_DIFFERENT_REGION;
    return true;
  } else if (hashCode == INVALID_SECRET_HASH) {
    enumValue = ValidationExceptionType::INVALID_SECRET;
    return true;
  } else if (hashCode == RESOURCE_NOT_IN_SAME_REGION_HASH) {
    enumValue = ValidationExceptionType::RESOURCE_NOT_IN_SAME_REGION;
    return true;
  } else if (hashCode == CERTIFICATE_RESOURCE_NOT_FOUND_HASH) {
    enumValue = ValidationExceptionType::CERTIFICATE_RESOURCE_NOT_FOUND;
    return true;
  } else if (hashCode == CERTIFICATE_ACCESS_DENIED_HASH) {
    enumValue = ValidationExceptionType::CERTIFICATE_ACCESS_DENIED;
    return true;
  } else if (hashCode == DESCRIBE_CERTIFICATE_FAILED_HASH) {
    enumValue = ValidationExceptionType::DESCRIBE_CERTIFICATE_FAILED;
    return true;
  } else if (hashCode == INVALID_CERTIFICATE_STATUS_HASH) {
    enumValue = ValidationExceptionType::INVALID_CERTIFICATE_STATUS;
    return true;
  } else if (hashCode == INVALID_CERTIFICATE_KEY_ALGORITHM_HASH) {
    enumValue = ValidationExceptionType::INVALID_CERTIFICATE_KEY_ALGORITHM;
    return true;
  } else if (hashCode == INVALID_CERTIFICATE_SIGNATURE_ALGORITHM_HASH) {
    enumValue = ValidationExceptionType::INVALID_CERTIFICATE_SIGNATURE_ALGORITHM;
    return true;
  } else if (hashCode == MISSING_CERTIFICATE_DOMAIN_NAME_HASH) {
    enumValue = ValidationExceptionType::MISSING_CERTIFICATE_DOMAIN_NAME;
    return true;
  } else if (hashCode == INVALID_ARN_HASH) {
    enumValue = ValidationExceptionType::INVALID_ARN;
    return true;
  } else if (hashCode == SCTE_IN_MANIFESTS_INVALID_CONFIGURATION_HASH) {
    enumValue = ValidationExceptionType::SCTE_IN_MANIFESTS_INVALID_CONFIGURATION;
    return true;
  } else if (hashCode == CUSTOM_AD_TYPES_INVALID_CONFIGURATION_HASH) {
    enumValue = ValidationExceptionType::CUSTOM_AD_TYPES_INVALID_CONFIGURATION;
    return true;
  } else if (hashCode == ONLY_CMAF_INPUT_TYPE_ALLOW_OUTPUT_LOCKING_MODE_HASH) {
    enumValue = ValidationExceptionType::ONLY_CMAF_INPUT_TYPE_ALLOW_OUTPUT_LOCKING_MODE;
    return true;
  } else if (hashCode == ONLY_NON_EPOCH_LOCKED_ALLOW_OUTPUT_TIMESTAMP_MODE_HASH) {
    enumValue = ValidationExceptionType::ONLY_NON_EPOCH_LOCKED_ALLOW_OUTPUT_TIMESTAMP_MODE;
    return true;
  } else if (hashCode == OUTPUT_TIMESTAMP_MODE_IMMUTABLE_HASH) {
    enumValue = ValidationExceptionType::OUTPUT_TIMESTAMP_MODE_IMMUTABLE;
    return true;
  } else if (hashCode == NON_EPOCH_LOCKED_WITH_FORCE_ENDPOINT_ERROR_CONFIGURATION_HASH) {
    enumValue = ValidationExceptionType::NON_EPOCH_LOCKED_WITH_FORCE_ENDPOINT_ERROR_CONFIGURATION;
    return true;
  } else if (hashCode == ONLY_HLS_INPUT_TYPE_ALLOW_STREAM_NAME_OUTPUT_MODE_HASH) {
    enumValue = ValidationExceptionType::ONLY_HLS_INPUT_TYPE_ALLOW_STREAM_NAME_OUTPUT_MODE;
    return true;
  } else if (hashCode == STREAM_NAME_OUTPUT_MODE_IMMUTABLE_HASH) {
    enumValue = ValidationExceptionType::STREAM_NAME_OUTPUT_MODE_IMMUTABLE;
    return true;
  } else if (hashCode == MULTIVIEW_CONFIGURATION_REQUIRED_HASH) {
    enumValue = ValidationExceptionType::MULTIVIEW_CONFIGURATION_REQUIRED;
    return true;
  } else if (hashCode == MULTIVIEW_CONFIGURATION_NOT_ALLOWED_HASH) {
    enumValue = ValidationExceptionType::MULTIVIEW_CONFIGURATION_NOT_ALLOWED;
    return true;
  } else if (hashCode == MULTIVIEW_SOURCE_NOT_FOUND_HASH) {
    enumValue = ValidationExceptionType::MULTIVIEW_SOURCE_NOT_FOUND;
    return true;
  } else if (hashCode == MULTIVIEW_SOURCE_INVALID_INPUT_TYPE_HASH) {
    enumValue = ValidationExceptionType::MULTIVIEW_SOURCE_INVALID_INPUT_TYPE;
    return true;
  } else if (hashCode == MULTIVIEW_CHANNEL_POLICY_NOT_ALLOWED_HASH) {
    enumValue = ValidationExceptionType::MULTIVIEW_CHANNEL_POLICY_NOT_ALLOWED;
    return true;
  } else if (hashCode == MULTIVIEW_INPUT_TYPE_WITH_LL_HLS_MANIFEST_HASH) {
    enumValue = ValidationExceptionType::MULTIVIEW_INPUT_TYPE_WITH_LL_HLS_MANIFEST;
    return true;
  } else if (hashCode == MULTIVIEW_INPUT_TYPE_WITH_MSS_MANIFEST_HASH) {
    enumValue = ValidationExceptionType::MULTIVIEW_INPUT_TYPE_WITH_MSS_MANIFEST;
    return true;
  } else if (hashCode == MULTIVIEW_INPUT_TYPE_WITH_ISM_CONTAINER_HASH) {
    enumValue = ValidationExceptionType::MULTIVIEW_INPUT_TYPE_WITH_ISM_CONTAINER;
    return true;
  } else if (hashCode == MULTIVIEW_INPUT_TYPE_WITH_FILTER_CONFIGURATION_HASH) {
    enumValue = ValidationExceptionType::MULTIVIEW_INPUT_TYPE_WITH_FILTER_CONFIGURATION;
    return true;
  } else if (hashCode == MULTIVIEW_INPUT_TYPE_WITH_START_TAG_HASH) {
    enumValue = ValidationExceptionType::MULTIVIEW_INPUT_TYPE_WITH_START_TAG;
    return true;
  } else if (hashCode == MULTIVIEW_INPUT_TYPE_WITH_HARVEST_JOB_HASH) {
    enumValue = ValidationExceptionType::MULTIVIEW_INPUT_TYPE_WITH_HARVEST_JOB;
    return true;
  } else if (hashCode == MULTIVIEW_RESET_NOT_ALLOWED_HASH) {
    enumValue = ValidationExceptionType::MULTIVIEW_RESET_NOT_ALLOWED;
    return true;
  } else if (hashCode == MULTIVIEW_DUPLICATE_SOURCE_HASH) {
    enumValue = ValidationExceptionType::MULTIVIEW_DUPLICATE_SOURCE;
    return true;
  } else if (hashCode == MULTIVIEW_DUPLICATE_LAYOUT_HASH) {
    enumValue = ValidationExceptionType::MULTIVIEW_DUPLICATE_LAYOUT;
    return true;
  } else if (hashCode == MULTIVIEW_INPUT_SWITCH_NOT_ALLOWED_HASH) {
    enumValue = ValidationExceptionType::MULTIVIEW_INPUT_SWITCH_NOT_ALLOWED;
    return true;
  } else if (hashCode == MULTIVIEW_OUTPUT_HEADER_NOT_ALLOWED_HASH) {
    enumValue = ValidationExceptionType::MULTIVIEW_OUTPUT_HEADER_NOT_ALLOWED;
    return true;
  }
  return false;
}
static bool GetEnumForNameHelper1(int hashCode, ValidationExceptionType& enumValue) {
  if (hashCode == MULTIVIEW_STARTOVER_WINDOW_NOT_ALLOWED_HASH) {
    enumValue = ValidationExceptionType::MULTIVIEW_STARTOVER_WINDOW_NOT_ALLOWED;
    return true;
  } else if (hashCode == MULTIVIEW_INVALID_TIME_DELAY_SECONDS_HASH) {
    enumValue = ValidationExceptionType::MULTIVIEW_INVALID_TIME_DELAY_SECONDS;
    return true;
  } else if (hashCode == MULTIVIEW_MANIFEST_WINDOW_TOO_LONG_HASH) {
    enumValue = ValidationExceptionType::MULTIVIEW_MANIFEST_WINDOW_TOO_LONG;
    return true;
  } else if (hashCode == MULTIVIEW_INPUT_TYPE_WITH_IFRAME_ONLY_STREAMS_HASH) {
    enumValue = ValidationExceptionType::MULTIVIEW_INPUT_TYPE_WITH_IFRAME_ONLY_STREAMS;
    return true;
  } else if (hashCode == MULTIVIEW_INPUT_TYPE_WITH_NON_EPOCH_LOCKED_HASH) {
    enumValue = ValidationExceptionType::MULTIVIEW_INPUT_TYPE_WITH_NON_EPOCH_LOCKED;
    return true;
  } else if (hashCode == MULTIVIEW_INPUT_TYPE_WITH_SEGMENT_DURATION_HASH) {
    enumValue = ValidationExceptionType::MULTIVIEW_INPUT_TYPE_WITH_SEGMENT_DURATION;
    return true;
  } else if (hashCode == MULTIVIEW_SOURCE_NON_EPOCH_LOCKED_HASH) {
    enumValue = ValidationExceptionType::MULTIVIEW_SOURCE_NON_EPOCH_LOCKED;
    return true;
  } else if (hashCode == MULTIVIEW_SCTE_REQUIRES_AVAILS_PERIOD_TRIGGER_HASH) {
    enumValue = ValidationExceptionType::MULTIVIEW_SCTE_REQUIRES_AVAILS_PERIOD_TRIGGER;
    return true;
  }
  return false;
}

static bool GetNameForEnumHelper0(ValidationExceptionType enumValue, Aws::String& value) {
  switch (enumValue) {
    case ValidationExceptionType::CONTAINER_TYPE_IMMUTABLE:
      value = "CONTAINER_TYPE_IMMUTABLE";
      return true;
    case ValidationExceptionType::INVALID_PAGINATION_TOKEN:
      value = "INVALID_PAGINATION_TOKEN";
      return true;
    case ValidationExceptionType::INVALID_PAGINATION_MAX_RESULTS:
      value = "INVALID_PAGINATION_MAX_RESULTS";
      return true;
    case ValidationExceptionType::INVALID_POLICY:
      value = "INVALID_POLICY";
      return true;
    case ValidationExceptionType::INVALID_ROLE_ARN:
      value = "INVALID_ROLE_ARN";
      return true;
    case ValidationExceptionType::MANIFEST_NAME_COLLISION:
      value = "MANIFEST_NAME_COLLISION";
      return true;
    case ValidationExceptionType::ENCRYPTION_METHOD_CONTAINER_TYPE_MISMATCH:
      value = "ENCRYPTION_METHOD_CONTAINER_TYPE_MISMATCH";
      return true;
    case ValidationExceptionType::CENC_IV_INCOMPATIBLE:
      value = "CENC_IV_INCOMPATIBLE";
      return true;
    case ValidationExceptionType::ENCRYPTION_CONTRACT_WITHOUT_AUDIO_RENDITION_INCOMPATIBLE:
      value = "ENCRYPTION_CONTRACT_WITHOUT_AUDIO_RENDITION_INCOMPATIBLE";
      return true;
    case ValidationExceptionType::ENCRYPTION_CONTRACT_WITH_ISM_CONTAINER_INCOMPATIBLE:
      value = "ENCRYPTION_CONTRACT_WITH_ISM_CONTAINER_INCOMPATIBLE";
      return true;
    case ValidationExceptionType::ENCRYPTION_CONTRACT_UNENCRYPTED:
      value = "ENCRYPTION_CONTRACT_UNENCRYPTED";
      return true;
    case ValidationExceptionType::ENCRYPTION_CONTRACT_SHARED:
      value = "ENCRYPTION_CONTRACT_SHARED";
      return true;
    case ValidationExceptionType::NUM_MANIFESTS_LOW:
      value = "NUM_MANIFESTS_LOW";
      return true;
    case ValidationExceptionType::NUM_MANIFESTS_HIGH:
      value = "NUM_MANIFESTS_HIGH";
      return true;
    case ValidationExceptionType::MANIFEST_DRM_SYSTEMS_INCOMPATIBLE:
      value = "MANIFEST_DRM_SYSTEMS_INCOMPATIBLE";
      return true;
    case ValidationExceptionType::DRM_SYSTEMS_ENCRYPTION_METHOD_INCOMPATIBLE:
      value = "DRM_SYSTEMS_ENCRYPTION_METHOD_INCOMPATIBLE";
      return true;
    case ValidationExceptionType::ROLE_ARN_NOT_ASSUMABLE:
      value = "ROLE_ARN_NOT_ASSUMABLE";
      return true;
    case ValidationExceptionType::ROLE_ARN_LENGTH_OUT_OF_RANGE:
      value = "ROLE_ARN_LENGTH_OUT_OF_RANGE";
      return true;
    case ValidationExceptionType::ROLE_ARN_INVALID_FORMAT:
      value = "ROLE_ARN_INVALID_FORMAT";
      return true;
    case ValidationExceptionType::URL_INVALID:
      value = "URL_INVALID";
      return true;
    case ValidationExceptionType::URL_SCHEME:
      value = "URL_SCHEME";
      return true;
    case ValidationExceptionType::URL_USER_INFO:
      value = "URL_USER_INFO";
      return true;
    case ValidationExceptionType::URL_PORT:
      value = "URL_PORT";
      return true;
    case ValidationExceptionType::URL_UNKNOWN_HOST:
      value = "URL_UNKNOWN_HOST";
      return true;
    case ValidationExceptionType::URL_LOCAL_ADDRESS:
      value = "URL_LOCAL_ADDRESS";
      return true;
    case ValidationExceptionType::URL_LOOPBACK_ADDRESS:
      value = "URL_LOOPBACK_ADDRESS";
      return true;
    case ValidationExceptionType::URL_LINK_LOCAL_ADDRESS:
      value = "URL_LINK_LOCAL_ADDRESS";
      return true;
    case ValidationExceptionType::URL_MULTICAST_ADDRESS:
      value = "URL_MULTICAST_ADDRESS";
      return true;
    case ValidationExceptionType::MEMBER_INVALID:
      value = "MEMBER_INVALID";
      return true;
    case ValidationExceptionType::MEMBER_MISSING:
      value = "MEMBER_MISSING";
      return true;
    case ValidationExceptionType::MEMBER_MIN_VALUE:
      value = "MEMBER_MIN_VALUE";
      return true;
    case ValidationExceptionType::MEMBER_MAX_VALUE:
      value = "MEMBER_MAX_VALUE";
      return true;
    case ValidationExceptionType::MEMBER_MIN_LENGTH:
      value = "MEMBER_MIN_LENGTH";
      return true;
    case ValidationExceptionType::MEMBER_MAX_LENGTH:
      value = "MEMBER_MAX_LENGTH";
      return true;
    case ValidationExceptionType::MEMBER_INVALID_ENUM_VALUE:
      value = "MEMBER_INVALID_ENUM_VALUE";
      return true;
    case ValidationExceptionType::MEMBER_DOES_NOT_MATCH_PATTERN:
      value = "MEMBER_DOES_NOT_MATCH_PATTERN";
      return true;
    case ValidationExceptionType::INVALID_MANIFEST_FILTER:
      value = "INVALID_MANIFEST_FILTER";
      return true;
    case ValidationExceptionType::INVALID_DRM_SETTINGS:
      value = "INVALID_DRM_SETTINGS";
      return true;
    case ValidationExceptionType::INVALID_TIME_DELAY_SECONDS:
      value = "INVALID_TIME_DELAY_SECONDS";
      return true;
    case ValidationExceptionType::END_TIME_EARLIER_THAN_START_TIME:
      value = "END_TIME_EARLIER_THAN_START_TIME";
      return true;
    case ValidationExceptionType::TS_CONTAINER_TYPE_WITH_DASH_MANIFEST:
      value = "TS_CONTAINER_TYPE_WITH_DASH_MANIFEST";
      return true;
    case ValidationExceptionType::DIRECT_MODE_WITH_TIMING_SOURCE:
      value = "DIRECT_MODE_WITH_TIMING_SOURCE";
      return true;
    case ValidationExceptionType::NONE_MODE_WITH_TIMING_SOURCE:
      value = "NONE_MODE_WITH_TIMING_SOURCE";
      return true;
    case ValidationExceptionType::TIMING_SOURCE_MISSING:
      value = "TIMING_SOURCE_MISSING";
      return true;
    case ValidationExceptionType::UPDATE_PERIOD_SMALLER_THAN_SEGMENT_DURATION:
      value = "UPDATE_PERIOD_SMALLER_THAN_SEGMENT_DURATION";
      return true;
    case ValidationExceptionType::PERIOD_TRIGGERS_NONE_SPECIFIED_WITH_ADDITIONAL_VALUES:
      value = "PERIOD_TRIGGERS_NONE_SPECIFIED_WITH_ADDITIONAL_VALUES";
      return true;
    case ValidationExceptionType::DRM_SIGNALING_MISMATCH_SEGMENT_ENCRYPTION_STATUS:
      value = "DRM_SIGNALING_MISMATCH_SEGMENT_ENCRYPTION_STATUS";
      return true;
    case ValidationExceptionType::ONLY_CMAF_INPUT_TYPE_ALLOW_FORCE_ENDPOINT_ERROR_CONFIGURATION:
      value = "ONLY_CMAF_INPUT_TYPE_ALLOW_FORCE_ENDPOINT_ERROR_CONFIGURATION";
      return true;
    case ValidationExceptionType::SOURCE_DISRUPTIONS_ENABLED_INCORRECTLY:
      value = "SOURCE_DISRUPTIONS_ENABLED_INCORRECTLY";
      return true;
    case ValidationExceptionType::HARVESTED_MANIFEST_HAS_START_END_FILTER_CONFIGURATION:
      value = "HARVESTED_MANIFEST_HAS_START_END_FILTER_CONFIGURATION";
      return true;
    case ValidationExceptionType::HARVESTED_MANIFEST_NOT_FOUND_ON_ENDPOINT:
      value = "HARVESTED_MANIFEST_NOT_FOUND_ON_ENDPOINT";
      return true;
    case ValidationExceptionType::TOO_MANY_IN_PROGRESS_HARVEST_JOBS:
      value = "TOO_MANY_IN_PROGRESS_HARVEST_JOBS";
      return true;
    case ValidationExceptionType::HARVEST_JOB_INELIGIBLE_FOR_CANCELLATION:
      value = "HARVEST_JOB_INELIGIBLE_FOR_CANCELLATION";
      return true;
    case ValidationExceptionType::INVALID_HARVEST_JOB_DURATION:
      value = "INVALID_HARVEST_JOB_DURATION";
      return true;
    case ValidationExceptionType::HARVEST_JOB_S3_DESTINATION_MISSING_OR_INCOMPLETE:
      value = "HARVEST_JOB_S3_DESTINATION_MISSING_OR_INCOMPLETE";
      return true;
    case ValidationExceptionType::HARVEST_JOB_UNABLE_TO_WRITE_TO_S3_DESTINATION:
      value = "HARVEST_JOB_UNABLE_TO_WRITE_TO_S3_DESTINATION";
      return true;
    case ValidationExceptionType::HARVEST_JOB_CUSTOMER_ENDPOINT_READ_ACCESS_DENIED:
      value = "HARVEST_JOB_CUSTOMER_ENDPOINT_READ_ACCESS_DENIED";
      return true;
    case ValidationExceptionType::CLIP_START_TIME_WITH_START_OR_END:
      value = "CLIP_START_TIME_WITH_START_OR_END";
      return true;
    case ValidationExceptionType::START_TAG_TIME_OFFSET_INVALID:
      value = "START_TAG_TIME_OFFSET_INVALID";
      return true;
    case ValidationExceptionType::INCOMPATIBLE_DASH_PROFILE_DVB_DASH_CONFIGURATION:
      value = "INCOMPATIBLE_DASH_PROFILE_DVB_DASH_CONFIGURATION";
      return true;
    case ValidationExceptionType::DASH_DVB_ATTRIBUTES_WITHOUT_DVB_DASH_PROFILE:
      value = "DASH_DVB_ATTRIBUTES_WITHOUT_DVB_DASH_PROFILE";
      return true;
    case ValidationExceptionType::INCOMPATIBLE_DASH_COMPACTNESS_CONFIGURATION:
      value = "INCOMPATIBLE_DASH_COMPACTNESS_CONFIGURATION";
      return true;
    case ValidationExceptionType::INCOMPATIBLE_XML_ENCODING:
      value = "INCOMPATIBLE_XML_ENCODING";
      return true;
    case ValidationExceptionType::CMAF_EXCLUDE_SEGMENT_DRM_METADATA_INCOMPATIBLE_CONTAINER_TYPE:
      value = "CMAF_EXCLUDE_SEGMENT_DRM_METADATA_INCOMPATIBLE_CONTAINER_TYPE";
      return true;
    case ValidationExceptionType::ONLY_CMAF_INPUT_TYPE_ALLOW_MQCS_INPUT_SWITCHING:
      value = "ONLY_CMAF_INPUT_TYPE_ALLOW_MQCS_INPUT_SWITCHING";
      return true;
    case ValidationExceptionType::ONLY_CMAF_INPUT_TYPE_ALLOW_MQCS_OUTPUT_CONFIGURATION:
      value = "ONLY_CMAF_INPUT_TYPE_ALLOW_MQCS_OUTPUT_CONFIGURATION";
      return true;
    case ValidationExceptionType::ONLY_CMAF_INPUT_TYPE_ALLOW_PREFERRED_INPUT_CONFIGURATION:
      value = "ONLY_CMAF_INPUT_TYPE_ALLOW_PREFERRED_INPUT_CONFIGURATION";
      return true;
    case ValidationExceptionType::TS_CONTAINER_TYPE_WITH_MSS_MANIFEST:
      value = "TS_CONTAINER_TYPE_WITH_MSS_MANIFEST";
      return true;
    case ValidationExceptionType::CMAF_CONTAINER_TYPE_WITH_MSS_MANIFEST:
      value = "CMAF_CONTAINER_TYPE_WITH_MSS_MANIFEST";
      return true;
    case ValidationExceptionType::ISM_CONTAINER_TYPE_WITH_HLS_MANIFEST:
      value = "ISM_CONTAINER_TYPE_WITH_HLS_MANIFEST";
      return true;
    case ValidationExceptionType::ISM_CONTAINER_TYPE_WITH_LL_HLS_MANIFEST:
      value = "ISM_CONTAINER_TYPE_WITH_LL_HLS_MANIFEST";
      return true;
    case ValidationExceptionType::ISM_CONTAINER_TYPE_WITH_DASH_MANIFEST:
      value = "ISM_CONTAINER_TYPE_WITH_DASH_MANIFEST";
      return true;
    case ValidationExceptionType::ISM_CONTAINER_TYPE_WITH_SCTE:
      value = "ISM_CONTAINER_TYPE_WITH_SCTE";
      return true;
    case ValidationExceptionType::ISM_CONTAINER_WITH_KEY_ROTATION:
      value = "ISM_CONTAINER_WITH_KEY_ROTATION";
      return true;
    case ValidationExceptionType::BATCH_GET_SECRET_VALUE_DENIED:
      value = "BATCH_GET_SECRET_VALUE_DENIED";
      return true;
    case ValidationExceptionType::GET_SECRET_VALUE_DENIED:
      value = "GET_SECRET_VALUE_DENIED";
      return true;
    case ValidationExceptionType::DESCRIBE_SECRET_DENIED:
      value = "DESCRIBE_SECRET_DENIED";
      return true;
    case ValidationExceptionType::INVALID_SECRET_FORMAT:
      value = "INVALID_SECRET_FORMAT";
      return true;
    case ValidationExceptionType::SECRET_IS_NOT_ONE_KEY_VALUE_PAIR:
      value = "SECRET_IS_NOT_ONE_KEY_VALUE_PAIR";
      return true;
    case ValidationExceptionType::INVALID_SECRET_KEY:
      value = "INVALID_SECRET_KEY";
      return true;
    case ValidationExceptionType::INVALID_SECRET_VALUE:
      value = "INVALID_SECRET_VALUE";
      return true;
    case ValidationExceptionType::SECRET_ARN_RESOURCE_NOT_FOUND:
      value = "SECRET_ARN_RESOURCE_NOT_FOUND";
      return true;
    case ValidationExceptionType::DECRYPT_SECRET_FAILED:
      value = "DECRYPT_SECRET_FAILED";
      return true;
    case ValidationExceptionType::TOO_MANY_SECRETS:
      value = "TOO_MANY_SECRETS";
      return true;
    case ValidationExceptionType::DUPLICATED_SECRET:
      value = "DUPLICATED_SECRET";
      return true;
    case ValidationExceptionType::MALFORMED_SECRET_ARN:
      value = "MALFORMED_SECRET_ARN";
      return true;
    case ValidationExceptionType::SECRET_FROM_DIFFERENT_ACCOUNT:
      value = "SECRET_FROM_DIFFERENT_ACCOUNT";
      return true;
    case ValidationExceptionType::SECRET_FROM_DIFFERENT_REGION:
      value = "SECRET_FROM_DIFFERENT_REGION";
      return true;
    case ValidationExceptionType::INVALID_SECRET:
      value = "INVALID_SECRET";
      return true;
    case ValidationExceptionType::RESOURCE_NOT_IN_SAME_REGION:
      value = "RESOURCE_NOT_IN_SAME_REGION";
      return true;
    case ValidationExceptionType::CERTIFICATE_RESOURCE_NOT_FOUND:
      value = "CERTIFICATE_RESOURCE_NOT_FOUND";
      return true;
    case ValidationExceptionType::CERTIFICATE_ACCESS_DENIED:
      value = "CERTIFICATE_ACCESS_DENIED";
      return true;
    case ValidationExceptionType::DESCRIBE_CERTIFICATE_FAILED:
      value = "DESCRIBE_CERTIFICATE_FAILED";
      return true;
    case ValidationExceptionType::INVALID_CERTIFICATE_STATUS:
      value = "INVALID_CERTIFICATE_STATUS";
      return true;
    case ValidationExceptionType::INVALID_CERTIFICATE_KEY_ALGORITHM:
      value = "INVALID_CERTIFICATE_KEY_ALGORITHM";
      return true;
    case ValidationExceptionType::INVALID_CERTIFICATE_SIGNATURE_ALGORITHM:
      value = "INVALID_CERTIFICATE_SIGNATURE_ALGORITHM";
      return true;
    case ValidationExceptionType::MISSING_CERTIFICATE_DOMAIN_NAME:
      value = "MISSING_CERTIFICATE_DOMAIN_NAME";
      return true;
    case ValidationExceptionType::INVALID_ARN:
      value = "INVALID_ARN";
      return true;
    case ValidationExceptionType::SCTE_IN_MANIFESTS_INVALID_CONFIGURATION:
      value = "SCTE_IN_MANIFESTS_INVALID_CONFIGURATION";
      return true;
    case ValidationExceptionType::CUSTOM_AD_TYPES_INVALID_CONFIGURATION:
      value = "CUSTOM_AD_TYPES_INVALID_CONFIGURATION";
      return true;
    case ValidationExceptionType::ONLY_CMAF_INPUT_TYPE_ALLOW_OUTPUT_LOCKING_MODE:
      value = "ONLY_CMAF_INPUT_TYPE_ALLOW_OUTPUT_LOCKING_MODE";
      return true;
    case ValidationExceptionType::ONLY_NON_EPOCH_LOCKED_ALLOW_OUTPUT_TIMESTAMP_MODE:
      value = "ONLY_NON_EPOCH_LOCKED_ALLOW_OUTPUT_TIMESTAMP_MODE";
      return true;
    case ValidationExceptionType::OUTPUT_TIMESTAMP_MODE_IMMUTABLE:
      value = "OUTPUT_TIMESTAMP_MODE_IMMUTABLE";
      return true;
    case ValidationExceptionType::NON_EPOCH_LOCKED_WITH_FORCE_ENDPOINT_ERROR_CONFIGURATION:
      value = "NON_EPOCH_LOCKED_WITH_FORCE_ENDPOINT_ERROR_CONFIGURATION";
      return true;
    case ValidationExceptionType::ONLY_HLS_INPUT_TYPE_ALLOW_STREAM_NAME_OUTPUT_MODE:
      value = "ONLY_HLS_INPUT_TYPE_ALLOW_STREAM_NAME_OUTPUT_MODE";
      return true;
    case ValidationExceptionType::STREAM_NAME_OUTPUT_MODE_IMMUTABLE:
      value = "STREAM_NAME_OUTPUT_MODE_IMMUTABLE";
      return true;
    case ValidationExceptionType::MULTIVIEW_CONFIGURATION_REQUIRED:
      value = "MULTIVIEW_CONFIGURATION_REQUIRED";
      return true;
    case ValidationExceptionType::MULTIVIEW_CONFIGURATION_NOT_ALLOWED:
      value = "MULTIVIEW_CONFIGURATION_NOT_ALLOWED";
      return true;
    case ValidationExceptionType::MULTIVIEW_SOURCE_NOT_FOUND:
      value = "MULTIVIEW_SOURCE_NOT_FOUND";
      return true;
    case ValidationExceptionType::MULTIVIEW_SOURCE_INVALID_INPUT_TYPE:
      value = "MULTIVIEW_SOURCE_INVALID_INPUT_TYPE";
      return true;
    case ValidationExceptionType::MULTIVIEW_CHANNEL_POLICY_NOT_ALLOWED:
      value = "MULTIVIEW_CHANNEL_POLICY_NOT_ALLOWED";
      return true;
    case ValidationExceptionType::MULTIVIEW_INPUT_TYPE_WITH_LL_HLS_MANIFEST:
      value = "MULTIVIEW_INPUT_TYPE_WITH_LL_HLS_MANIFEST";
      return true;
    case ValidationExceptionType::MULTIVIEW_INPUT_TYPE_WITH_MSS_MANIFEST:
      value = "MULTIVIEW_INPUT_TYPE_WITH_MSS_MANIFEST";
      return true;
    case ValidationExceptionType::MULTIVIEW_INPUT_TYPE_WITH_ISM_CONTAINER:
      value = "MULTIVIEW_INPUT_TYPE_WITH_ISM_CONTAINER";
      return true;
    case ValidationExceptionType::MULTIVIEW_INPUT_TYPE_WITH_FILTER_CONFIGURATION:
      value = "MULTIVIEW_INPUT_TYPE_WITH_FILTER_CONFIGURATION";
      return true;
    case ValidationExceptionType::MULTIVIEW_INPUT_TYPE_WITH_START_TAG:
      value = "MULTIVIEW_INPUT_TYPE_WITH_START_TAG";
      return true;
    case ValidationExceptionType::MULTIVIEW_INPUT_TYPE_WITH_HARVEST_JOB:
      value = "MULTIVIEW_INPUT_TYPE_WITH_HARVEST_JOB";
      return true;
    case ValidationExceptionType::MULTIVIEW_RESET_NOT_ALLOWED:
      value = "MULTIVIEW_RESET_NOT_ALLOWED";
      return true;
    case ValidationExceptionType::MULTIVIEW_DUPLICATE_SOURCE:
      value = "MULTIVIEW_DUPLICATE_SOURCE";
      return true;
    case ValidationExceptionType::MULTIVIEW_DUPLICATE_LAYOUT:
      value = "MULTIVIEW_DUPLICATE_LAYOUT";
      return true;
    case ValidationExceptionType::MULTIVIEW_INPUT_SWITCH_NOT_ALLOWED:
      value = "MULTIVIEW_INPUT_SWITCH_NOT_ALLOWED";
      return true;
    case ValidationExceptionType::MULTIVIEW_OUTPUT_HEADER_NOT_ALLOWED:
      value = "MULTIVIEW_OUTPUT_HEADER_NOT_ALLOWED";
      return true;
    default:
      return false;
  }
}
static bool GetNameForEnumHelper1(ValidationExceptionType enumValue, Aws::String& value) {
  switch (enumValue) {
    case ValidationExceptionType::MULTIVIEW_STARTOVER_WINDOW_NOT_ALLOWED:
      value = "MULTIVIEW_STARTOVER_WINDOW_NOT_ALLOWED";
      return true;
    case ValidationExceptionType::MULTIVIEW_INVALID_TIME_DELAY_SECONDS:
      value = "MULTIVIEW_INVALID_TIME_DELAY_SECONDS";
      return true;
    case ValidationExceptionType::MULTIVIEW_MANIFEST_WINDOW_TOO_LONG:
      value = "MULTIVIEW_MANIFEST_WINDOW_TOO_LONG";
      return true;
    case ValidationExceptionType::MULTIVIEW_INPUT_TYPE_WITH_IFRAME_ONLY_STREAMS:
      value = "MULTIVIEW_INPUT_TYPE_WITH_IFRAME_ONLY_STREAMS";
      return true;
    case ValidationExceptionType::MULTIVIEW_INPUT_TYPE_WITH_NON_EPOCH_LOCKED:
      value = "MULTIVIEW_INPUT_TYPE_WITH_NON_EPOCH_LOCKED";
      return true;
    case ValidationExceptionType::MULTIVIEW_INPUT_TYPE_WITH_SEGMENT_DURATION:
      value = "MULTIVIEW_INPUT_TYPE_WITH_SEGMENT_DURATION";
      return true;
    case ValidationExceptionType::MULTIVIEW_SOURCE_NON_EPOCH_LOCKED:
      value = "MULTIVIEW_SOURCE_NON_EPOCH_LOCKED";
      return true;
    case ValidationExceptionType::MULTIVIEW_SCTE_REQUIRES_AVAILS_PERIOD_TRIGGER:
      value = "MULTIVIEW_SCTE_REQUIRES_AVAILS_PERIOD_TRIGGER";
      return true;
    default:
      return false;
  }
}

ValidationExceptionType GetValidationExceptionTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  ValidationExceptionType enumValue;
  if (GetEnumForNameHelper0(hashCode, enumValue)) {
    return enumValue;
  } else if (GetEnumForNameHelper1(hashCode, enumValue)) {
    return enumValue;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ValidationExceptionType>(hashCode);
  }

  return ValidationExceptionType::NOT_SET;
}

Aws::String GetNameForValidationExceptionType(ValidationExceptionType enumValue) {
  Aws::String value;
  if (GetNameForEnumHelper0(enumValue, value)) {
    return value;
  } else if (GetNameForEnumHelper1(enumValue, value)) {
    return value;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
  }

  return {};
}

}  // namespace ValidationExceptionTypeMapper
}  // namespace Model
}  // namespace mediapackagev2
}  // namespace Aws
