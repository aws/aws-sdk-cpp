﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/SSM_EXPORTS.h>

namespace Aws {
namespace SSM {
namespace Model {
enum class PatchComplianceStatus { NOT_SET, COMPLIANT, NON_COMPLIANT };

namespace PatchComplianceStatusMapper {
AWS_SSM_API PatchComplianceStatus GetPatchComplianceStatusForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForPatchComplianceStatus(PatchComplianceStatus value);
}  // namespace PatchComplianceStatusMapper
}  // namespace Model
}  // namespace SSM
}  // namespace Aws
