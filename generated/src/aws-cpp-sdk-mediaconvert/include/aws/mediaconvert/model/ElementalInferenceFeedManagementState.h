/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>

namespace Aws {
namespace MediaConvert {
namespace Model {
enum class ElementalInferenceFeedManagementState { NOT_SET, CREATED, ASSOCIATED, PENDING_DELETION, DELETED };

namespace ElementalInferenceFeedManagementStateMapper {
AWS_MEDIACONVERT_API ElementalInferenceFeedManagementState GetElementalInferenceFeedManagementStateForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForElementalInferenceFeedManagementState(ElementalInferenceFeedManagementState value);
}  // namespace ElementalInferenceFeedManagementStateMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
