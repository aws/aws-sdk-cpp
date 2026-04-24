/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>

namespace Aws {
namespace SageMaker {
namespace Model {
enum class AssociationEdgeType { NOT_SET, ContributedTo, AssociatedWith, DerivedFrom, Produced, SameAs };

namespace AssociationEdgeTypeMapper {
AWS_SAGEMAKER_API AssociationEdgeType GetAssociationEdgeTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForAssociationEdgeType(AssociationEdgeType value);
}  // namespace AssociationEdgeTypeMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
