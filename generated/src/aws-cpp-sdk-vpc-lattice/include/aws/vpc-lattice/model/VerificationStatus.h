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
enum class VerificationStatus { NOT_SET, VERIFIED, PENDING, VERIFICATION_TIMED_OUT };

namespace VerificationStatusMapper {
AWS_VPCLATTICE_API VerificationStatus GetVerificationStatusForName(const Aws::String& name);

AWS_VPCLATTICE_API Aws::String GetNameForVerificationStatus(VerificationStatus value);
}  // namespace VerificationStatusMapper
}  // namespace Model
}  // namespace VPCLattice
}  // namespace Aws
