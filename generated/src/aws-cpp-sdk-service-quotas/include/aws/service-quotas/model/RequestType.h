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
enum class RequestType { NOT_SET, AutomaticManagement };

namespace RequestTypeMapper {
AWS_SERVICEQUOTAS_API RequestType GetRequestTypeForName(const Aws::String& name);

AWS_SERVICEQUOTAS_API Aws::String GetNameForRequestType(RequestType value);
}  // namespace RequestTypeMapper
}  // namespace Model
}  // namespace ServiceQuotas
}  // namespace Aws
