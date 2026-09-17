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
enum class PayerResponsibilityScope { NOT_SET, ResourceGatewayCharges };

namespace PayerResponsibilityScopeMapper {
AWS_VPCLATTICE_API PayerResponsibilityScope GetPayerResponsibilityScopeForName(const Aws::String& name);

AWS_VPCLATTICE_API Aws::String GetNameForPayerResponsibilityScope(PayerResponsibilityScope value);
}  // namespace PayerResponsibilityScopeMapper
}  // namespace Model
}  // namespace VPCLattice
}  // namespace Aws
