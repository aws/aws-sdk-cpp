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
  enum class InstancePatchStateOperatorType
  {
    NOT_SET,
    Equal,
    NotEqual,
    LessThan,
    GreaterThan
  };

namespace InstancePatchStateOperatorTypeMapper
{
AWS_SSM_API InstancePatchStateOperatorType GetInstancePatchStateOperatorTypeForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForInstancePatchStateOperatorType(InstancePatchStateOperatorType value);
} // namespace InstancePatchStateOperatorTypeMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
