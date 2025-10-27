/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/organizations/Organizations_EXPORTS.h>

namespace Aws {
namespace Organizations {
namespace Model {
enum class IAMUserAccessToBilling { NOT_SET, ALLOW, DENY };

namespace IAMUserAccessToBillingMapper {
AWS_ORGANIZATIONS_API IAMUserAccessToBilling GetIAMUserAccessToBillingForName(const Aws::String& name);

AWS_ORGANIZATIONS_API Aws::String GetNameForIAMUserAccessToBilling(IAMUserAccessToBilling value);
}  // namespace IAMUserAccessToBillingMapper
}  // namespace Model
}  // namespace Organizations
}  // namespace Aws
