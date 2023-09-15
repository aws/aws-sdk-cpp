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
  enum class LambdaEventStructureVersion
  {
    NOT_SET,
    V1,
    V2
  };

namespace LambdaEventStructureVersionMapper
{
AWS_VPCLATTICE_API LambdaEventStructureVersion GetLambdaEventStructureVersionForName(const Aws::String& name);

AWS_VPCLATTICE_API Aws::String GetNameForLambdaEventStructureVersion(LambdaEventStructureVersion value);
} // namespace LambdaEventStructureVersionMapper
} // namespace Model
} // namespace VPCLattice
} // namespace Aws
