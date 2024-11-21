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
  enum class NodeTypeName
  {
    NOT_SET,
    Instance
  };

namespace NodeTypeNameMapper
{
AWS_SSM_API NodeTypeName GetNodeTypeNameForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForNodeTypeName(NodeTypeName value);
} // namespace NodeTypeNameMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
