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
  enum class ServiceStatus
  {
    NOT_SET,
    ACTIVE,
    CREATE_IN_PROGRESS,
    DELETE_IN_PROGRESS,
    CREATE_FAILED,
    DELETE_FAILED
  };

namespace ServiceStatusMapper
{
AWS_VPCLATTICE_API ServiceStatus GetServiceStatusForName(const Aws::String& name);

AWS_VPCLATTICE_API Aws::String GetNameForServiceStatus(ServiceStatus value);
} // namespace ServiceStatusMapper
} // namespace Model
} // namespace VPCLattice
} // namespace Aws
