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
  enum class AwsLogSourceName
  {
    NOT_SET,
    ROUTE53,
    VPC_FLOW,
    SH_FINDINGS,
    CLOUD_TRAIL_MGMT,
    LAMBDA_EXECUTION,
    S3_DATA,
    EKS_AUDIT,
    WAF
  };

namespace AwsLogSourceNameMapper
{
AWS_SECURITYLAKE_API AwsLogSourceName GetAwsLogSourceNameForName(const Aws::String& name);

AWS_SECURITYLAKE_API Aws::String GetNameForAwsLogSourceName(AwsLogSourceName value);
} // namespace AwsLogSourceNameMapper
} // namespace Model
} // namespace SecurityLake
} // namespace Aws
