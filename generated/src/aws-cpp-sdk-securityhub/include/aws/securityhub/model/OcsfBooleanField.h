/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{
  enum class OcsfBooleanField
  {
    NOT_SET,
    compliance_assessments_meets_criteria,
    vulnerabilities_is_exploit_available,
    vulnerabilities_is_fix_available
  };

namespace OcsfBooleanFieldMapper
{
AWS_SECURITYHUB_API OcsfBooleanField GetOcsfBooleanFieldForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForOcsfBooleanField(OcsfBooleanField value);
} // namespace OcsfBooleanFieldMapper
} // namespace Model
} // namespace SecurityHub
} // namespace Aws
