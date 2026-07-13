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
enum class SecurityControlsProvider { NOT_SET, AWS, Azure };

namespace SecurityControlsProviderMapper {
AWS_SECURITYHUB_API SecurityControlsProvider GetSecurityControlsProviderForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForSecurityControlsProvider(SecurityControlsProvider value);
}  // namespace SecurityControlsProviderMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
