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
  enum class ComplianceQueryOperatorType
  {
    NOT_SET,
    EQUAL,
    NOT_EQUAL,
    BEGIN_WITH,
    LESS_THAN,
    GREATER_THAN
  };

namespace ComplianceQueryOperatorTypeMapper
{
AWS_SSM_API ComplianceQueryOperatorType GetComplianceQueryOperatorTypeForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForComplianceQueryOperatorType(ComplianceQueryOperatorType value);
} // namespace ComplianceQueryOperatorTypeMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
