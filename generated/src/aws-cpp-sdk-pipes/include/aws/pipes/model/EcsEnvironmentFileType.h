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
  enum class EcsEnvironmentFileType
  {
    NOT_SET,
    s3
  };

namespace EcsEnvironmentFileTypeMapper
{
AWS_PIPES_API EcsEnvironmentFileType GetEcsEnvironmentFileTypeForName(const Aws::String& name);

AWS_PIPES_API Aws::String GetNameForEcsEnvironmentFileType(EcsEnvironmentFileType value);
} // namespace EcsEnvironmentFileTypeMapper
} // namespace Model
} // namespace Pipes
} // namespace Aws
