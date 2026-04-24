/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>

namespace Aws {
namespace SecurityAgent {
namespace Model {
enum class Provider { NOT_SET, GITHUB };

namespace ProviderMapper {
AWS_SECURITYAGENT_API Provider GetProviderForName(const Aws::String& name);

AWS_SECURITYAGENT_API Aws::String GetNameForProvider(Provider value);
}  // namespace ProviderMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
