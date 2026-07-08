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
enum class StandardsProvider { NOT_SET, AWS, Azure };

namespace StandardsProviderMapper {
AWS_SECURITYHUB_API StandardsProvider GetStandardsProviderForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForStandardsProvider(StandardsProvider value);
}  // namespace StandardsProviderMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
