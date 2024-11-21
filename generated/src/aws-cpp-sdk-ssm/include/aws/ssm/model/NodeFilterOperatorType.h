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
  enum class NodeFilterOperatorType
  {
    NOT_SET,
    Equal,
    NotEqual,
    BeginWith
  };

namespace NodeFilterOperatorTypeMapper
{
AWS_SSM_API NodeFilterOperatorType GetNodeFilterOperatorTypeForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForNodeFilterOperatorType(NodeFilterOperatorType value);
} // namespace NodeFilterOperatorTypeMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
