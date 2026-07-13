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
enum class CspmConnectorProviderName { NOT_SET, AZURE };

namespace CspmConnectorProviderNameMapper {
AWS_SECURITYHUB_API CspmConnectorProviderName GetCspmConnectorProviderNameForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForCspmConnectorProviderName(CspmConnectorProviderName value);
}  // namespace CspmConnectorProviderNameMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
