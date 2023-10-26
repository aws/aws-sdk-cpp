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
  enum class LifecyclePolicyType
  {
    NOT_SET,
    retention
  };

namespace LifecyclePolicyTypeMapper
{
AWS_OPENSEARCHSERVERLESS_API LifecyclePolicyType GetLifecyclePolicyTypeForName(const Aws::String& name);

AWS_OPENSEARCHSERVERLESS_API Aws::String GetNameForLifecyclePolicyType(LifecyclePolicyType value);
} // namespace LifecyclePolicyTypeMapper
} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
