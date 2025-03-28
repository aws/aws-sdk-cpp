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
  enum class Relation
  {
    NOT_SET,
    EqualTo,
    GreaterThanOrEqualTo
  };

namespace RelationMapper
{
AWS_SAGEMAKER_API Relation GetRelationForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForRelation(Relation value);
} // namespace RelationMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
