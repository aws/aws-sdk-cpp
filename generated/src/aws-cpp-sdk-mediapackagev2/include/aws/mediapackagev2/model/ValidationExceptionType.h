/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace mediapackagev2
{
namespace Model
{
  enum class ValidationExceptionType
  {
    NOT_SET,
    CONTAINER_TYPE_IMMUTABLE,
    INVALID_PAGINATION_TOKEN,
    INVALID_PAGINATION_MAX_RESULTS,
    INVALID_POLICY,
    INVALID_ROLE_ARN,
    MANIFEST_NAME_COLLISION,
    ENCRYPTION_METHOD_CONTAINER_TYPE_MISMATCH,
    CENC_IV_INCOMPATIBLE,
    ENCRYPTION_CONTRACT_WITHOUT_AUDIO_RENDITION_INCOMPATIBLE,
    ENCRYPTION_CONTRACT_UNENCRYPTED,
    ENCRYPTION_CONTRACT_SHARED,
    NUM_MANIFESTS_LOW,
    NUM_MANIFESTS_HIGH,
    DRM_SYSTEMS_ENCRYPTION_METHOD_INCOMPATIBLE,
    ROLE_ARN_NOT_ASSUMABLE,
    ROLE_ARN_LENGTH_OUT_OF_RANGE,
    ROLE_ARN_INVALID_FORMAT,
    URL_INVALID,
    URL_SCHEME,
    URL_USER_INFO,
    URL_PORT,
    URL_UNKNOWN_HOST,
    URL_LOCAL_ADDRESS,
    URL_LOOPBACK_ADDRESS,
    URL_LINK_LOCAL_ADDRESS,
    URL_MULTICAST_ADDRESS,
    MEMBER_INVALID,
    MEMBER_MISSING,
    MEMBER_MIN_VALUE,
    MEMBER_MAX_VALUE,
    MEMBER_MIN_LENGTH,
    MEMBER_MAX_LENGTH,
    MEMBER_INVALID_ENUM_VALUE,
    MEMBER_DOES_NOT_MATCH_PATTERN,
    INVALID_MANIFEST_FILTER,
    INVALID_TIME_DELAY_SECONDS,
    END_TIME_EARLIER_THAN_START_TIME
  };

namespace ValidationExceptionTypeMapper
{
AWS_MEDIAPACKAGEV2_API ValidationExceptionType GetValidationExceptionTypeForName(const Aws::String& name);

AWS_MEDIAPACKAGEV2_API Aws::String GetNameForValidationExceptionType(ValidationExceptionType value);
} // namespace ValidationExceptionTypeMapper
} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
