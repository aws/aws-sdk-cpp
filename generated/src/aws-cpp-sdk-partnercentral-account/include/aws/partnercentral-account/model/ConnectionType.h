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
enum class ConnectionType { NOT_SET, OPPORTUNITY_COLLABORATION, SUBSIDIARY };

namespace ConnectionTypeMapper {
AWS_PARTNERCENTRALACCOUNT_API ConnectionType GetConnectionTypeForName(const Aws::String& name);

AWS_PARTNERCENTRALACCOUNT_API Aws::String GetNameForConnectionType(ConnectionType value);
}  // namespace ConnectionTypeMapper
}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
