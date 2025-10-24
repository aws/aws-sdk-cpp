﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>

namespace Aws {
namespace SageMaker {
namespace Model {
enum class IsTrackingServerActive { NOT_SET, Active, Inactive };

namespace IsTrackingServerActiveMapper {
AWS_SAGEMAKER_API IsTrackingServerActive GetIsTrackingServerActiveForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForIsTrackingServerActive(IsTrackingServerActive value);
}  // namespace IsTrackingServerActiveMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
