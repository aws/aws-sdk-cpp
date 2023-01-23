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
  enum class ParameterTier
  {
    NOT_SET,
    Standard,
    Advanced,
    Intelligent_Tiering
  };

namespace ParameterTierMapper
{
AWS_SSM_API ParameterTier GetParameterTierForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForParameterTier(ParameterTier value);
} // namespace ParameterTierMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
