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
  enum class StudioLifecycleConfigAppType
  {
    NOT_SET,
    JupyterServer,
    KernelGateway,
    CodeEditor,
    JupyterLab
  };

namespace StudioLifecycleConfigAppTypeMapper
{
AWS_SAGEMAKER_API StudioLifecycleConfigAppType GetStudioLifecycleConfigAppTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForStudioLifecycleConfigAppType(StudioLifecycleConfigAppType value);
} // namespace StudioLifecycleConfigAppTypeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
