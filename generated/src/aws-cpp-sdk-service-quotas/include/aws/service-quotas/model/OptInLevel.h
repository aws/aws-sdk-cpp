/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>

namespace Aws {
namespace ServiceQuotas {
namespace Model {
enum class OptInLevel { NOT_SET, ACCOUNT };

namespace OptInLevelMapper {
AWS_SERVICEQUOTAS_API OptInLevel GetOptInLevelForName(const Aws::String& name);

AWS_SERVICEQUOTAS_API Aws::String GetNameForOptInLevel(OptInLevel value);
}  // namespace OptInLevelMapper
}  // namespace Model
}  // namespace ServiceQuotas
}  // namespace Aws
