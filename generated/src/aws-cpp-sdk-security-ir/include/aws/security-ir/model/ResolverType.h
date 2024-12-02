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
  enum class ResolverType
  {
    NOT_SET,
    AWS,
    Self
  };

namespace ResolverTypeMapper
{
AWS_SECURITYIR_API ResolverType GetResolverTypeForName(const Aws::String& name);

AWS_SECURITYIR_API Aws::String GetNameForResolverType(ResolverType value);
} // namespace ResolverTypeMapper
} // namespace Model
} // namespace SecurityIR
} // namespace Aws
