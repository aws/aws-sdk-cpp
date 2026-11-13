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
enum class Provider { NOT_SET, Azure, GCP };

namespace ProviderMapper {
AWS_SSM_API Provider GetProviderForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForProvider(Provider value);
}  // namespace ProviderMapper
}  // namespace Model
}  // namespace SSM
}  // namespace Aws
