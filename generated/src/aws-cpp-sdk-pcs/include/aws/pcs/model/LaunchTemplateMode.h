/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pcs/PCS_EXPORTS.h>

namespace Aws {
namespace PCS {
namespace Model {
enum class LaunchTemplateMode { NOT_SET, CUSTOM, MANAGED };

namespace LaunchTemplateModeMapper {
AWS_PCS_API LaunchTemplateMode GetLaunchTemplateModeForName(const Aws::String& name);

AWS_PCS_API Aws::String GetNameForLaunchTemplateMode(LaunchTemplateMode value);
}  // namespace LaunchTemplateModeMapper
}  // namespace Model
}  // namespace PCS
}  // namespace Aws
