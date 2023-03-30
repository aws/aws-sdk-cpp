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
  enum class ServiceNetworkServiceAssociationStatus
  {
    NOT_SET,
    CREATE_IN_PROGRESS,
    ACTIVE,
    DELETE_IN_PROGRESS,
    CREATE_FAILED,
    DELETE_FAILED
  };

namespace ServiceNetworkServiceAssociationStatusMapper
{
AWS_VPCLATTICE_API ServiceNetworkServiceAssociationStatus GetServiceNetworkServiceAssociationStatusForName(const Aws::String& name);

AWS_VPCLATTICE_API Aws::String GetNameForServiceNetworkServiceAssociationStatus(ServiceNetworkServiceAssociationStatus value);
} // namespace ServiceNetworkServiceAssociationStatusMapper
} // namespace Model
} // namespace VPCLattice
} // namespace Aws
