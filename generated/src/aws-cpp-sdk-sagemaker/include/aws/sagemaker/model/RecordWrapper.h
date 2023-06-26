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
  enum class RecordWrapper
  {
    NOT_SET,
    None,
    RecordIO
  };

namespace RecordWrapperMapper
{
AWS_SAGEMAKER_API RecordWrapper GetRecordWrapperForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForRecordWrapper(RecordWrapper value);
} // namespace RecordWrapperMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
