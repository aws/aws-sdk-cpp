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
enum class OptInType { NOT_SET, NotifyOnly, NotifyAndAdjust };

namespace OptInTypeMapper {
AWS_SERVICEQUOTAS_API OptInType GetOptInTypeForName(const Aws::String& name);

AWS_SERVICEQUOTAS_API Aws::String GetNameForOptInType(OptInType value);
}  // namespace OptInTypeMapper
}  // namespace Model
}  // namespace ServiceQuotas
}  // namespace Aws
