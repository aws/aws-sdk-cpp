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
  enum class InstancePropertyFilterOperator
  {
    NOT_SET,
    Equal,
    NotEqual,
    BeginWith,
    LessThan,
    GreaterThan
  };

namespace InstancePropertyFilterOperatorMapper
{
AWS_SSM_API InstancePropertyFilterOperator GetInstancePropertyFilterOperatorForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForInstancePropertyFilterOperator(InstancePropertyFilterOperator value);
} // namespace InstancePropertyFilterOperatorMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
