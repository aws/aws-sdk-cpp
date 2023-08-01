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
  enum class FlatInvocations
  {
    NOT_SET,
    Continue,
    Stop
  };

namespace FlatInvocationsMapper
{
AWS_SAGEMAKER_API FlatInvocations GetFlatInvocationsForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForFlatInvocations(FlatInvocations value);
} // namespace FlatInvocationsMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
