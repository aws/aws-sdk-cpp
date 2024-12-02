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
  enum class ProtocolType
  {
    NOT_SET,
    TCP
  };

namespace ProtocolTypeMapper
{
AWS_VPCLATTICE_API ProtocolType GetProtocolTypeForName(const Aws::String& name);

AWS_VPCLATTICE_API Aws::String GetNameForProtocolType(ProtocolType value);
} // namespace ProtocolTypeMapper
} // namespace Model
} // namespace VPCLattice
} // namespace Aws
