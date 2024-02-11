/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{
  enum class ParameterValueType
  {
    NOT_SET,
    DEFAULT,
    CUSTOM
  };

namespace ParameterValueTypeMapper
{
AWS_SECURITYHUB_API ParameterValueType GetParameterValueTypeForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForParameterValueType(ParameterValueType value);
} // namespace ParameterValueTypeMapper
} // namespace Model
} // namespace SecurityHub
} // namespace Aws
