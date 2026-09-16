/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
enum class PolicyDisassociationReason { NOT_SET, REPLACED_BY_UPDATE, SHARING_REVOKED, POLICY_DELETED };

namespace PolicyDisassociationReasonMapper {
AWS_RESILIENCEHUBV2_API PolicyDisassociationReason GetPolicyDisassociationReasonForName(const Aws::String& name);

AWS_RESILIENCEHUBV2_API Aws::String GetNameForPolicyDisassociationReason(PolicyDisassociationReason value);
}  // namespace PolicyDisassociationReasonMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
