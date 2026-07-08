/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>

namespace Aws {
namespace SecurityHub {
namespace Model {
enum class HealthIssueCode {
  NOT_SET,
  AUTHENTICATION_FAILURE,
  STREAM_AUTHORIZATION_FAILURE,
  DISCOVERY_FAILURE,
  STREAM_LIMIT_EXCEEDED,
  STREAM_DISCONNECTED,
  RECORDING_FAILURE,
  NO_HEALTH_DATA
};

namespace HealthIssueCodeMapper {
AWS_SECURITYHUB_API HealthIssueCode GetHealthIssueCodeForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForHealthIssueCode(HealthIssueCode value);
}  // namespace HealthIssueCodeMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
