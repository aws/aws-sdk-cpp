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
  enum class InputMode
  {
    NOT_SET,
    Pipe,
    File
  };

namespace InputModeMapper
{
AWS_SAGEMAKER_API InputMode GetInputModeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForInputMode(InputMode value);
} // namespace InputModeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
