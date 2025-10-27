/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/robomaker/RoboMaker_EXPORTS.h>

namespace Aws {
namespace RoboMaker {
namespace Model {
enum class Architecture { NOT_SET, X86_64, ARM64, ARMHF };

namespace ArchitectureMapper {
AWS_ROBOMAKER_API Architecture GetArchitectureForName(const Aws::String& name);

AWS_ROBOMAKER_API Aws::String GetNameForArchitecture(Architecture value);
}  // namespace ArchitectureMapper
}  // namespace Model
}  // namespace RoboMaker
}  // namespace Aws
