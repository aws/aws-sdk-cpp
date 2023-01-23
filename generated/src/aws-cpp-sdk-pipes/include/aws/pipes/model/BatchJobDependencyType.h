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
  enum class BatchJobDependencyType
  {
    NOT_SET,
    N_TO_N,
    SEQUENTIAL
  };

namespace BatchJobDependencyTypeMapper
{
AWS_PIPES_API BatchJobDependencyType GetBatchJobDependencyTypeForName(const Aws::String& name);

AWS_PIPES_API Aws::String GetNameForBatchJobDependencyType(BatchJobDependencyType value);
} // namespace BatchJobDependencyTypeMapper
} // namespace Model
} // namespace Pipes
} // namespace Aws
