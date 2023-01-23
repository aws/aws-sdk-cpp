/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{
  enum class ComplianceStatus
  {
    NOT_SET,
    PolicyBreached,
    PolicyMet
  };

namespace ComplianceStatusMapper
{
AWS_RESILIENCEHUB_API ComplianceStatus GetComplianceStatusForName(const Aws::String& name);

AWS_RESILIENCEHUB_API Aws::String GetNameForComplianceStatus(ComplianceStatus value);
} // namespace ComplianceStatusMapper
} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
