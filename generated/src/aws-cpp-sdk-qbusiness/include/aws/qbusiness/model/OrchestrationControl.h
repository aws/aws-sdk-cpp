/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QBusiness
{
namespace Model
{
  enum class OrchestrationControl
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace OrchestrationControlMapper
{
AWS_QBUSINESS_API OrchestrationControl GetOrchestrationControlForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForOrchestrationControl(OrchestrationControl value);
} // namespace OrchestrationControlMapper
} // namespace Model
} // namespace QBusiness
} // namespace Aws
