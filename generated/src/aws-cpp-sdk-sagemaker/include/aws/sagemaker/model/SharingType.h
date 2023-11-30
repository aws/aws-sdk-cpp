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
  enum class SharingType
  {
    NOT_SET,
    Private,
    Shared
  };

namespace SharingTypeMapper
{
AWS_SAGEMAKER_API SharingType GetSharingTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForSharingType(SharingType value);
} // namespace SharingTypeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
