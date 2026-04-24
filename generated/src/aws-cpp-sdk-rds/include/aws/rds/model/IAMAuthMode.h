/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/RDS_EXPORTS.h>

namespace Aws {
namespace RDS {
namespace Model {
enum class IAMAuthMode { NOT_SET, DISABLED, REQUIRED, ENABLED };

namespace IAMAuthModeMapper {
AWS_RDS_API IAMAuthMode GetIAMAuthModeForName(const Aws::String& name);

AWS_RDS_API Aws::String GetNameForIAMAuthMode(IAMAuthMode value);
}  // namespace IAMAuthModeMapper
}  // namespace Model
}  // namespace RDS
}  // namespace Aws
