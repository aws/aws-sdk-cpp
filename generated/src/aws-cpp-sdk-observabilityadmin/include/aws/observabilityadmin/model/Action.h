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
enum class Action { NOT_SET, ALLOW, BLOCK, COUNT, CAPTCHA, CHALLENGE, EXCLUDED_AS_COUNT };

namespace ActionMapper {
AWS_OBSERVABILITYADMIN_API Action GetActionForName(const Aws::String& name);

AWS_OBSERVABILITYADMIN_API Aws::String GetNameForAction(Action value);
}  // namespace ActionMapper
}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
