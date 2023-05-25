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
  enum class TargetGroupProtocolVersion
  {
    NOT_SET,
    HTTP1,
    HTTP2,
    GRPC
  };

namespace TargetGroupProtocolVersionMapper
{
AWS_VPCLATTICE_API TargetGroupProtocolVersion GetTargetGroupProtocolVersionForName(const Aws::String& name);

AWS_VPCLATTICE_API Aws::String GetNameForTargetGroupProtocolVersion(TargetGroupProtocolVersion value);
} // namespace TargetGroupProtocolVersionMapper
} // namespace Model
} // namespace VPCLattice
} // namespace Aws
