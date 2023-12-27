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
  enum class CollectionType
  {
    NOT_SET,
    List,
    Set,
    Vector
  };

namespace CollectionTypeMapper
{
AWS_SAGEMAKER_API CollectionType GetCollectionTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForCollectionType(CollectionType value);
} // namespace CollectionTypeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
