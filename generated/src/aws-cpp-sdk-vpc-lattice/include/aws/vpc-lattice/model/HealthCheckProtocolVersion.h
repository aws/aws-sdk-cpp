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
  enum class HealthCheckProtocolVersion
  {
    NOT_SET,
    HTTP1,
    HTTP2
  };

namespace HealthCheckProtocolVersionMapper
{
AWS_VPCLATTICE_API HealthCheckProtocolVersion GetHealthCheckProtocolVersionForName(const Aws::String& name);

AWS_VPCLATTICE_API Aws::String GetNameForHealthCheckProtocolVersion(HealthCheckProtocolVersion value);
} // namespace HealthCheckProtocolVersionMapper
} // namespace Model
} // namespace VPCLattice
} // namespace Aws
