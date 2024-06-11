/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-scep/PcaConnectorScep_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PcaConnectorScep
{
namespace Model
{
  enum class ValidationExceptionReason
  {
    NOT_SET,
    CA_CERT_VALIDITY_TOO_SHORT,
    INVALID_CA_USAGE_MODE,
    INVALID_CONNECTOR_TYPE,
    INVALID_STATE,
    NO_CLIENT_TOKEN,
    UNKNOWN_OPERATION,
    OTHER
  };

namespace ValidationExceptionReasonMapper
{
AWS_PCACONNECTORSCEP_API ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name);

AWS_PCACONNECTORSCEP_API Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason value);
} // namespace ValidationExceptionReasonMapper
} // namespace Model
} // namespace PcaConnectorScep
} // namespace Aws
