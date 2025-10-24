/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>

namespace Aws {
namespace OpenSearchServerless {
namespace Model {
enum class SecurityConfigType { NOT_SET, saml, iamidentitycenter, iamfederation };

namespace SecurityConfigTypeMapper {
AWS_OPENSEARCHSERVERLESS_API SecurityConfigType GetSecurityConfigTypeForName(const Aws::String& name);

AWS_OPENSEARCHSERVERLESS_API Aws::String GetNameForSecurityConfigType(SecurityConfigType value);
}  // namespace SecurityConfigTypeMapper
}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws
