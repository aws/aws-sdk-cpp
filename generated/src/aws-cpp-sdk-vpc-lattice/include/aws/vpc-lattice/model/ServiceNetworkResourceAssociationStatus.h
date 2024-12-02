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
  enum class ServiceNetworkResourceAssociationStatus
  {
    NOT_SET,
    CREATE_IN_PROGRESS,
    ACTIVE,
    PARTIAL,
    DELETE_IN_PROGRESS,
    CREATE_FAILED,
    DELETE_FAILED
  };

namespace ServiceNetworkResourceAssociationStatusMapper
{
AWS_VPCLATTICE_API ServiceNetworkResourceAssociationStatus GetServiceNetworkResourceAssociationStatusForName(const Aws::String& name);

AWS_VPCLATTICE_API Aws::String GetNameForServiceNetworkResourceAssociationStatus(ServiceNetworkResourceAssociationStatus value);
} // namespace ServiceNetworkResourceAssociationStatusMapper
} // namespace Model
} // namespace VPCLattice
} // namespace Aws
