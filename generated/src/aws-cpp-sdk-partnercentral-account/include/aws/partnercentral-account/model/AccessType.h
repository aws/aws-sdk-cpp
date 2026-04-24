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
enum class AccessType { NOT_SET, ALLOW_ALL, DENY_ALL, ALLOW_BY_DEFAULT_DENY_SOME };

namespace AccessTypeMapper {
AWS_PARTNERCENTRALACCOUNT_API AccessType GetAccessTypeForName(const Aws::String& name);

AWS_PARTNERCENTRALACCOUNT_API Aws::String GetNameForAccessType(AccessType value);
}  // namespace AccessTypeMapper
}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
