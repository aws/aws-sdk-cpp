﻿/**
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
  enum class OutputCompressionType
  {
    NOT_SET,
    GZIP,
    NONE
  };

namespace OutputCompressionTypeMapper
{
AWS_SAGEMAKER_API OutputCompressionType GetOutputCompressionTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForOutputCompressionType(OutputCompressionType value);
} // namespace OutputCompressionTypeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
