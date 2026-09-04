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
enum class AdjustableAtLevelEnum { NOT_SET, ACCOUNT, PER_RESOURCE, ALL };

namespace AdjustableAtLevelEnumMapper {
AWS_SERVICEQUOTAS_API AdjustableAtLevelEnum GetAdjustableAtLevelEnumForName(const Aws::String& name);

AWS_SERVICEQUOTAS_API Aws::String GetNameForAdjustableAtLevelEnum(AdjustableAtLevelEnum value);
}  // namespace AdjustableAtLevelEnumMapper
}  // namespace Model
}  // namespace ServiceQuotas
}  // namespace Aws
