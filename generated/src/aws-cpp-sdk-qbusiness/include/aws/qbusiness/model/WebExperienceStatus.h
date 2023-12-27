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
  enum class WebExperienceStatus
  {
    NOT_SET,
    CREATING,
    ACTIVE,
    DELETING,
    FAILED,
    PENDING_AUTH_CONFIG
  };

namespace WebExperienceStatusMapper
{
AWS_QBUSINESS_API WebExperienceStatus GetWebExperienceStatusForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForWebExperienceStatus(WebExperienceStatus value);
} // namespace WebExperienceStatusMapper
} // namespace Model
} // namespace QBusiness
} // namespace Aws
