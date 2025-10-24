/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/monitoring/CloudWatch_EXPORTS.h>

namespace Aws {
namespace CloudWatch {
namespace Model {
enum class ActionsSuppressedBy { NOT_SET, WaitPeriod, ExtensionPeriod, Alarm };

namespace ActionsSuppressedByMapper {
AWS_CLOUDWATCH_API ActionsSuppressedBy GetActionsSuppressedByForName(const Aws::String& name);

AWS_CLOUDWATCH_API Aws::String GetNameForActionsSuppressedBy(ActionsSuppressedBy value);
}  // namespace ActionsSuppressedByMapper
}  // namespace Model
}  // namespace CloudWatch
}  // namespace Aws
