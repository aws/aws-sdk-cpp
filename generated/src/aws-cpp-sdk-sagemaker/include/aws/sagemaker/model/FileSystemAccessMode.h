/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SageMaker
{
namespace Model
{
  enum class FileSystemAccessMode
  {
    NOT_SET,
    rw,
    ro
  };

namespace FileSystemAccessModeMapper
{
AWS_SAGEMAKER_API FileSystemAccessMode GetFileSystemAccessModeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForFileSystemAccessMode(FileSystemAccessMode value);
} // namespace FileSystemAccessModeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
