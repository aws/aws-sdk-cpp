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
enum class CloudProvider { NOT_SET, AWS, Azure, GCP };

namespace CloudProviderMapper {
AWS_SSM_API CloudProvider GetCloudProviderForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForCloudProvider(CloudProvider value);
}  // namespace CloudProviderMapper
}  // namespace Model
}  // namespace SSM
}  // namespace Aws
