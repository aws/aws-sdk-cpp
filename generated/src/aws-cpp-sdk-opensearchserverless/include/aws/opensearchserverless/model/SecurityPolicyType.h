/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace OpenSearchServerless
{
namespace Model
{
  enum class SecurityPolicyType
  {
    NOT_SET,
    encryption,
    network
  };

namespace SecurityPolicyTypeMapper
{
AWS_OPENSEARCHSERVERLESS_API SecurityPolicyType GetSecurityPolicyTypeForName(const Aws::String& name);

AWS_OPENSEARCHSERVERLESS_API Aws::String GetNameForSecurityPolicyType(SecurityPolicyType value);
} // namespace SecurityPolicyTypeMapper
} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
