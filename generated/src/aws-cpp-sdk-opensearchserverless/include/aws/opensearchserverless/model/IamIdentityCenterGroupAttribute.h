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
  enum class IamIdentityCenterGroupAttribute
  {
    NOT_SET,
    GroupId,
    GroupName
  };

namespace IamIdentityCenterGroupAttributeMapper
{
AWS_OPENSEARCHSERVERLESS_API IamIdentityCenterGroupAttribute GetIamIdentityCenterGroupAttributeForName(const Aws::String& name);

AWS_OPENSEARCHSERVERLESS_API Aws::String GetNameForIamIdentityCenterGroupAttribute(IamIdentityCenterGroupAttribute value);
} // namespace IamIdentityCenterGroupAttributeMapper
} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
