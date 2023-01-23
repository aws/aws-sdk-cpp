/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkDocs
{
namespace Model
{
  enum class SubscriptionProtocolType
  {
    NOT_SET,
    HTTPS,
    SQS
  };

namespace SubscriptionProtocolTypeMapper
{
AWS_WORKDOCS_API SubscriptionProtocolType GetSubscriptionProtocolTypeForName(const Aws::String& name);

AWS_WORKDOCS_API Aws::String GetNameForSubscriptionProtocolType(SubscriptionProtocolType value);
} // namespace SubscriptionProtocolTypeMapper
} // namespace Model
} // namespace WorkDocs
} // namespace Aws
