/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-ad/PcaConnectorAd_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PcaConnectorAd
{
namespace Model
{
  enum class ValidationExceptionReason
  {
    NOT_SET,
    FIELD_VALIDATION_FAILED,
    INVALID_PERMISSION,
    INVALID_STATE,
    MISMATCHED_CONNECTOR,
    MISMATCHED_VPC,
    NO_CLIENT_TOKEN,
    UNKNOWN_OPERATION,
    OTHER
  };

namespace ValidationExceptionReasonMapper
{
AWS_PCACONNECTORAD_API ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name);

AWS_PCACONNECTORAD_API Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason value);
} // namespace ValidationExceptionReasonMapper
} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
