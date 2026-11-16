/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkflowmonitor/NetworkFlowMonitor_EXPORTS.h>

namespace Aws {
namespace NetworkFlowMonitor {
namespace Model {
enum class OrgMembershipStatus { NOT_SET, IN_ORG, NOT_IN_ORG, UNKNOWN };

namespace OrgMembershipStatusMapper {
AWS_NETWORKFLOWMONITOR_API OrgMembershipStatus GetOrgMembershipStatusForName(const Aws::String& name);

AWS_NETWORKFLOWMONITOR_API Aws::String GetNameForOrgMembershipStatus(OrgMembershipStatus value);
}  // namespace OrgMembershipStatusMapper
}  // namespace Model
}  // namespace NetworkFlowMonitor
}  // namespace Aws
