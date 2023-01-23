/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Pipes
{
namespace Model
{
  enum class EcsResourceRequirementType
  {
    NOT_SET,
    GPU,
    InferenceAccelerator
  };

namespace EcsResourceRequirementTypeMapper
{
AWS_PIPES_API EcsResourceRequirementType GetEcsResourceRequirementTypeForName(const Aws::String& name);

AWS_PIPES_API Aws::String GetNameForEcsResourceRequirementType(EcsResourceRequirementType value);
} // namespace EcsResourceRequirementTypeMapper
} // namespace Model
} // namespace Pipes
} // namespace Aws
