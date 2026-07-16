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
enum class CloudProviderName { NOT_SET, Azure, AWS };

namespace CloudProviderNameMapper {
AWS_SECURITYHUB_API CloudProviderName GetCloudProviderNameForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForCloudProviderName(CloudProviderName value);
}  // namespace CloudProviderNameMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
