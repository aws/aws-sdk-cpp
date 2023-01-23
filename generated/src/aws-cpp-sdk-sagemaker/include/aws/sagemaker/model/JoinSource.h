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
  enum class JoinSource
  {
    NOT_SET,
    Input,
    None
  };

namespace JoinSourceMapper
{
AWS_SAGEMAKER_API JoinSource GetJoinSourceForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForJoinSource(JoinSource value);
} // namespace JoinSourceMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
