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
  enum class ServiceNetworkLogType
  {
    NOT_SET,
    SERVICE,
    RESOURCE
  };

namespace ServiceNetworkLogTypeMapper
{
AWS_VPCLATTICE_API ServiceNetworkLogType GetServiceNetworkLogTypeForName(const Aws::String& name);

AWS_VPCLATTICE_API Aws::String GetNameForServiceNetworkLogType(ServiceNetworkLogType value);
} // namespace ServiceNetworkLogTypeMapper
} // namespace Model
} // namespace VPCLattice
} // namespace Aws
