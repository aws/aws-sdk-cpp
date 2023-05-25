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
  enum class ParameterType
  {
    NOT_SET,
    String,
    StringList,
    SecureString
  };

namespace ParameterTypeMapper
{
AWS_SSM_API ParameterType GetParameterTypeForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForParameterType(ParameterType value);
} // namespace ParameterTypeMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
