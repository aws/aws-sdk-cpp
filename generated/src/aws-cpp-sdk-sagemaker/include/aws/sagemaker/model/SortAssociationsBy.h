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
  enum class SortAssociationsBy
  {
    NOT_SET,
    SourceArn,
    DestinationArn,
    SourceType,
    DestinationType,
    CreationTime
  };

namespace SortAssociationsByMapper
{
AWS_SAGEMAKER_API SortAssociationsBy GetSortAssociationsByForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForSortAssociationsBy(SortAssociationsBy value);
} // namespace SortAssociationsByMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
