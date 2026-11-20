/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-channel/PartnerCentralChannel_EXPORTS.h>

namespace Aws {
namespace PartnerCentralChannel {
namespace Model {
enum class AccountScope { NOT_SET, ENTIRE_ORGANIZATION, SPECIFIC_MEMBER_ACCOUNTS };

namespace AccountScopeMapper {
AWS_PARTNERCENTRALCHANNEL_API AccountScope GetAccountScopeForName(const Aws::String& name);

AWS_PARTNERCENTRALCHANNEL_API Aws::String GetNameForAccountScope(AccountScope value);
}  // namespace AccountScopeMapper
}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
