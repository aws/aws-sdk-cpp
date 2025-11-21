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
enum class ResourcesTrendsStringField { NOT_SET, account_id, region, resource_type, resource_category };

namespace ResourcesTrendsStringFieldMapper {
AWS_SECURITYHUB_API ResourcesTrendsStringField GetResourcesTrendsStringFieldForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForResourcesTrendsStringField(ResourcesTrendsStringField value);
}  // namespace ResourcesTrendsStringFieldMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
