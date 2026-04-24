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
enum class ConnectionTypeStatus { NOT_SET, ACTIVE, CANCELED };

namespace ConnectionTypeStatusMapper {
AWS_PARTNERCENTRALACCOUNT_API ConnectionTypeStatus GetConnectionTypeStatusForName(const Aws::String& name);

AWS_PARTNERCENTRALACCOUNT_API Aws::String GetNameForConnectionTypeStatus(ConnectionTypeStatus value);
}  // namespace ConnectionTypeStatusMapper
}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
