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
  enum class AuthPolicyState
  {
    NOT_SET,
    Active,
    Inactive
  };

namespace AuthPolicyStateMapper
{
AWS_VPCLATTICE_API AuthPolicyState GetAuthPolicyStateForName(const Aws::String& name);

AWS_VPCLATTICE_API Aws::String GetNameForAuthPolicyState(AuthPolicyState value);
} // namespace AuthPolicyStateMapper
} // namespace Model
} // namespace VPCLattice
} // namespace Aws
