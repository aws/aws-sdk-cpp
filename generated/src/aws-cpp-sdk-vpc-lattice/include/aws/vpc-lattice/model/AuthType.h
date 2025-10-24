/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>

namespace Aws {
namespace VPCLattice {
namespace Model {
enum class AuthType { NOT_SET, NONE, AWS_IAM };

namespace AuthTypeMapper {
AWS_VPCLATTICE_API AuthType GetAuthTypeForName(const Aws::String& name);

AWS_VPCLATTICE_API Aws::String GetNameForAuthType(AuthType value);
}  // namespace AuthTypeMapper
}  // namespace Model
}  // namespace VPCLattice
}  // namespace Aws
