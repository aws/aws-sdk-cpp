/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>

namespace Aws {
namespace WellArchitected {
namespace Model {
enum class RemediationType { NOT_SET, AUTO_REMEDIATION, CONSOLE, CLI, SDK, IAC, MCP };

namespace RemediationTypeMapper {
AWS_WELLARCHITECTED_API RemediationType GetRemediationTypeForName(const Aws::String& name);

AWS_WELLARCHITECTED_API Aws::String GetNameForRemediationType(RemediationType value);
}  // namespace RemediationTypeMapper
}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
