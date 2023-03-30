/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace VPCLattice
{
namespace Model
{
  enum class TargetStatus
  {
    NOT_SET,
    DRAINING,
    UNAVAILABLE,
    HEALTHY,
    UNHEALTHY,
    INITIAL,
    UNUSED
  };

namespace TargetStatusMapper
{
AWS_VPCLATTICE_API TargetStatus GetTargetStatusForName(const Aws::String& name);

AWS_VPCLATTICE_API Aws::String GetNameForTargetStatus(TargetStatus value);
} // namespace TargetStatusMapper
} // namespace Model
} // namespace VPCLattice
} // namespace Aws
