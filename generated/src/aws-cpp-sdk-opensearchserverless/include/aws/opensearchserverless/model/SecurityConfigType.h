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
  enum class SecurityConfigType
  {
    NOT_SET,
    saml
  };

namespace SecurityConfigTypeMapper
{
AWS_OPENSEARCHSERVERLESS_API SecurityConfigType GetSecurityConfigTypeForName(const Aws::String& name);

AWS_OPENSEARCHSERVERLESS_API Aws::String GetNameForSecurityConfigType(SecurityConfigType value);
} // namespace SecurityConfigTypeMapper
} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
