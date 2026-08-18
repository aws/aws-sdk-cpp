/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {
enum class TagPropagationFailureReason { NOT_SET, RoleNotAssumable, RoleLacksPermissions };

namespace TagPropagationFailureReasonMapper {
AWS_OBSERVABILITYADMIN_API TagPropagationFailureReason GetTagPropagationFailureReasonForName(const Aws::String& name);

AWS_OBSERVABILITYADMIN_API Aws::String GetNameForTagPropagationFailureReason(TagPropagationFailureReason value);
}  // namespace TagPropagationFailureReasonMapper
}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
