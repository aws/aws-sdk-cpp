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
  enum class TargetGroupStatus
  {
    NOT_SET,
    CREATE_IN_PROGRESS,
    ACTIVE,
    DELETE_IN_PROGRESS,
    CREATE_FAILED,
    DELETE_FAILED
  };

namespace TargetGroupStatusMapper
{
AWS_VPCLATTICE_API TargetGroupStatus GetTargetGroupStatusForName(const Aws::String& name);

AWS_VPCLATTICE_API Aws::String GetNameForTargetGroupStatus(TargetGroupStatus value);
} // namespace TargetGroupStatusMapper
} // namespace Model
} // namespace VPCLattice
} // namespace Aws
