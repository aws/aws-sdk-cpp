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
enum class CspmConnectorStatus { NOT_SET, CONNECTED, DEGRADED, FAILED_TO_CONNECT, UNKNOWN };

namespace CspmConnectorStatusMapper {
AWS_SECURITYHUB_API CspmConnectorStatus GetCspmConnectorStatusForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForCspmConnectorStatus(CspmConnectorStatus value);
}  // namespace CspmConnectorStatusMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
