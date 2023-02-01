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
  enum class ComplianceStatus
  {
    NOT_SET,
    COMPLIANT,
    NON_COMPLIANT
  };

namespace ComplianceStatusMapper
{
AWS_SSM_API ComplianceStatus GetComplianceStatusForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForComplianceStatus(ComplianceStatus value);
} // namespace ComplianceStatusMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
