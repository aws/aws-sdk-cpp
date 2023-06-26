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
  enum class AccessType
  {
    NOT_SET,
    LAKEFORMATION,
    S3
  };

namespace AccessTypeMapper
{
AWS_SECURITYLAKE_API AccessType GetAccessTypeForName(const Aws::String& name);

AWS_SECURITYLAKE_API Aws::String GetNameForAccessType(AccessType value);
} // namespace AccessTypeMapper
} // namespace Model
} // namespace SecurityLake
} // namespace Aws
