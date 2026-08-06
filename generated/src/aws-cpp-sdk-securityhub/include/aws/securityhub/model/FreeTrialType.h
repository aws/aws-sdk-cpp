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
enum class FreeTrialType { NOT_SET, SECURITY_HUB_V2, SECURITY_HUB_V2_MULTI_CLOUD_AZURE };

namespace FreeTrialTypeMapper {
AWS_SECURITYHUB_API FreeTrialType GetFreeTrialTypeForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForFreeTrialType(FreeTrialType value);
}  // namespace FreeTrialTypeMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
