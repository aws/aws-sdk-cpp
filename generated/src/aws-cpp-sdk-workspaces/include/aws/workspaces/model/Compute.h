/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/WorkSpaces_EXPORTS.h>

namespace Aws {
namespace WorkSpaces {
namespace Model {
enum class Compute {
  NOT_SET,
  VALUE,
  STANDARD,
  PERFORMANCE,
  POWER,
  GRAPHICS,
  POWERPRO,
  GENERALPURPOSE_4XLARGE,
  GENERALPURPOSE_8XLARGE,
  GRAPHICSPRO,
  GRAPHICS_G4DN,
  GRAPHICSPRO_G4DN,
  GRAPHICS_G6_XLARGE,
  GRAPHICS_G6_2XLARGE,
  GRAPHICS_G6_4XLARGE,
  GRAPHICS_G6_8XLARGE,
  GRAPHICS_G6_16XLARGE,
  GRAPHICS_GR6_4XLARGE,
  GRAPHICS_GR6_8XLARGE,
  GRAPHICS_G6F_LARGE,
  GRAPHICS_G6F_XLARGE,
  GRAPHICS_G6F_2XLARGE,
  GRAPHICS_G6F_4XLARGE,
  GRAPHICS_GR6F_4XLARGE
};

namespace ComputeMapper {
AWS_WORKSPACES_API Compute GetComputeForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForCompute(Compute value);
}  // namespace ComputeMapper
}  // namespace Model
}  // namespace WorkSpaces
}  // namespace Aws
