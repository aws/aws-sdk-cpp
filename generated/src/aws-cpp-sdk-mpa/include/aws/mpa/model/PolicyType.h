/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mpa/MPA_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MPA
{
namespace Model
{
  enum class PolicyType
  {
    NOT_SET,
    AWS_MANAGED,
    AWS_RAM
  };

namespace PolicyTypeMapper
{
AWS_MPA_API PolicyType GetPolicyTypeForName(const Aws::String& name);

AWS_MPA_API Aws::String GetNameForPolicyType(PolicyType value);
} // namespace PolicyTypeMapper
} // namespace Model
} // namespace MPA
} // namespace Aws
