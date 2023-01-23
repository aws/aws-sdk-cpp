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
  enum class AssociationComplianceSeverity
  {
    NOT_SET,
    CRITICAL,
    HIGH,
    MEDIUM,
    LOW,
    UNSPECIFIED
  };

namespace AssociationComplianceSeverityMapper
{
AWS_SSM_API AssociationComplianceSeverity GetAssociationComplianceSeverityForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForAssociationComplianceSeverity(AssociationComplianceSeverity value);
} // namespace AssociationComplianceSeverityMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
