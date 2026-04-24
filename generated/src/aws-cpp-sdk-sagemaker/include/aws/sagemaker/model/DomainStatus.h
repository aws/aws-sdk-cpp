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
enum class DomainStatus { NOT_SET, Deleting, Failed, InService, Pending, Updating, Update_Failed, Delete_Failed };

namespace DomainStatusMapper {
AWS_SAGEMAKER_API DomainStatus GetDomainStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForDomainStatus(DomainStatus value);
}  // namespace DomainStatusMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
