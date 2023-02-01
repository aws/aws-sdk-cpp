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
  enum class BatchResourceRequirementType
  {
    NOT_SET,
    GPU,
    MEMORY,
    VCPU
  };

namespace BatchResourceRequirementTypeMapper
{
AWS_PIPES_API BatchResourceRequirementType GetBatchResourceRequirementTypeForName(const Aws::String& name);

AWS_PIPES_API Aws::String GetNameForBatchResourceRequirementType(BatchResourceRequirementType value);
} // namespace BatchResourceRequirementTypeMapper
} // namespace Model
} // namespace Pipes
} // namespace Aws
