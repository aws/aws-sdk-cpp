/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-account/PartnerCentralAccount_EXPORTS.h>

namespace Aws {
namespace PartnerCentralAccount {
namespace Model {
enum class ProfileVisibility { NOT_SET, PRIVATE_, PUBLIC_ };

namespace ProfileVisibilityMapper {
AWS_PARTNERCENTRALACCOUNT_API ProfileVisibility GetProfileVisibilityForName(const Aws::String& name);

AWS_PARTNERCENTRALACCOUNT_API Aws::String GetNameForProfileVisibility(ProfileVisibility value);
}  // namespace ProfileVisibilityMapper
}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
