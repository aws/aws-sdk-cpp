/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>

namespace Aws {
namespace VPCLattice {
namespace Model {
enum class TargetGroupType { NOT_SET, IP, LAMBDA, INSTANCE, ALB };

namespace TargetGroupTypeMapper {
AWS_VPCLATTICE_API TargetGroupType GetTargetGroupTypeForName(const Aws::String& name);

AWS_VPCLATTICE_API Aws::String GetNameForTargetGroupType(TargetGroupType value);
}  // namespace TargetGroupTypeMapper
}  // namespace Model
}  // namespace VPCLattice
}  // namespace Aws
