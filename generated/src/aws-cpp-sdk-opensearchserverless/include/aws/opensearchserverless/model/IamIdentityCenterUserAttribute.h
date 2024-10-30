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
  enum class IamIdentityCenterUserAttribute
  {
    NOT_SET,
    UserId,
    UserName,
    Email
  };

namespace IamIdentityCenterUserAttributeMapper
{
AWS_OPENSEARCHSERVERLESS_API IamIdentityCenterUserAttribute GetIamIdentityCenterUserAttributeForName(const Aws::String& name);

AWS_OPENSEARCHSERVERLESS_API Aws::String GetNameForIamIdentityCenterUserAttribute(IamIdentityCenterUserAttribute value);
} // namespace IamIdentityCenterUserAttributeMapper
} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
