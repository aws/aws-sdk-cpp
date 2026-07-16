/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/SSM_EXPORTS.h>

namespace Aws {
namespace SSM {
namespace Model {
enum class CloudConnectorFilterKey { NOT_SET, SubscriptionId, TenantId };

namespace CloudConnectorFilterKeyMapper {
AWS_SSM_API CloudConnectorFilterKey GetCloudConnectorFilterKeyForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForCloudConnectorFilterKey(CloudConnectorFilterKey value);
}  // namespace CloudConnectorFilterKeyMapper
}  // namespace Model
}  // namespace SSM
}  // namespace Aws
