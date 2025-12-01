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
enum class ProfileTaskStatus { NOT_SET, IN_PROGRESS, CANCELED, SUCCEEDED, FAILED };

namespace ProfileTaskStatusMapper {
AWS_PARTNERCENTRALACCOUNT_API ProfileTaskStatus GetProfileTaskStatusForName(const Aws::String& name);

AWS_PARTNERCENTRALACCOUNT_API Aws::String GetNameForProfileTaskStatus(ProfileTaskStatus value);
}  // namespace ProfileTaskStatusMapper
}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
