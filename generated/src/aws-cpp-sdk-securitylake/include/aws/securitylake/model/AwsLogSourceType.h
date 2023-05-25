/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SecurityLake
{
namespace Model
{
  enum class AwsLogSourceType
  {
    NOT_SET,
    ROUTE53,
    VPC_FLOW,
    CLOUD_TRAIL,
    SH_FINDINGS
  };

namespace AwsLogSourceTypeMapper
{
AWS_SECURITYLAKE_API AwsLogSourceType GetAwsLogSourceTypeForName(const Aws::String& name);

AWS_SECURITYLAKE_API Aws::String GetNameForAwsLogSourceType(AwsLogSourceType value);
} // namespace AwsLogSourceTypeMapper
} // namespace Model
} // namespace SecurityLake
} // namespace Aws
