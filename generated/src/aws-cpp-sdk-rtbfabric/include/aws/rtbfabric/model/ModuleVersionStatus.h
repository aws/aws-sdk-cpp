/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>

namespace Aws {
namespace RTBFabric {
namespace Model {
enum class ModuleVersionStatus { NOT_SET, CREATING, CREATE_FAILED, ACTIVE, DEPRECATED };

namespace ModuleVersionStatusMapper {
AWS_RTBFABRIC_API ModuleVersionStatus GetModuleVersionStatusForName(const Aws::String& name);

AWS_RTBFABRIC_API Aws::String GetNameForModuleVersionStatus(ModuleVersionStatus value);
}  // namespace ModuleVersionStatusMapper
}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
