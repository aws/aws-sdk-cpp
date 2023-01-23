/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSM
{
namespace Model
{
  enum class PatchComplianceLevel
  {
    NOT_SET,
    CRITICAL,
    HIGH,
    MEDIUM,
    LOW,
    INFORMATIONAL,
    UNSPECIFIED
  };

namespace PatchComplianceLevelMapper
{
AWS_SSM_API PatchComplianceLevel GetPatchComplianceLevelForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForPatchComplianceLevel(PatchComplianceLevel value);
} // namespace PatchComplianceLevelMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
