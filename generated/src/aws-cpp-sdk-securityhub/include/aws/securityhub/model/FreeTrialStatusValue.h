/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>

namespace Aws {
namespace SecurityHub {
namespace Model {
enum class FreeTrialStatusValue { NOT_SET, ACTIVE, INACTIVE };

namespace FreeTrialStatusValueMapper {
AWS_SECURITYHUB_API FreeTrialStatusValue GetFreeTrialStatusValueForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForFreeTrialStatusValue(FreeTrialStatusValue value);
}  // namespace FreeTrialStatusValueMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
