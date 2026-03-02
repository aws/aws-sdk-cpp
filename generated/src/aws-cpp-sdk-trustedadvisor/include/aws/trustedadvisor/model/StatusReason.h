/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/trustedadvisor/TrustedAdvisor_EXPORTS.h>

namespace Aws {
namespace TrustedAdvisor {
namespace Model {
enum class StatusReason { NOT_SET, no_data_ok };

namespace StatusReasonMapper {
AWS_TRUSTEDADVISOR_API StatusReason GetStatusReasonForName(const Aws::String& name);

AWS_TRUSTEDADVISOR_API Aws::String GetNameForStatusReason(StatusReason value);
}  // namespace StatusReasonMapper
}  // namespace Model
}  // namespace TrustedAdvisor
}  // namespace Aws
