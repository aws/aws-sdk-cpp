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
  enum class ImpactType
  {
    NOT_SET,
    Mutating,
    NonMutating,
    Undetermined
  };

namespace ImpactTypeMapper
{
AWS_SSM_API ImpactType GetImpactTypeForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForImpactType(ImpactType value);
} // namespace ImpactTypeMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
