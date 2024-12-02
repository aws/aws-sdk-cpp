/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/security-ir/SecurityIR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SecurityIR
{
namespace Model
{
  enum class CustomerType
  {
    NOT_SET,
    Standalone,
    Organization
  };

namespace CustomerTypeMapper
{
AWS_SECURITYIR_API CustomerType GetCustomerTypeForName(const Aws::String& name);

AWS_SECURITYIR_API Aws::String GetNameForCustomerType(CustomerType value);
} // namespace CustomerTypeMapper
} // namespace Model
} // namespace SecurityIR
} // namespace Aws
