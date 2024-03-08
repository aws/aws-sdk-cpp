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
  enum class WebExperienceSamplePromptsControlMode
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace WebExperienceSamplePromptsControlModeMapper
{
AWS_QBUSINESS_API WebExperienceSamplePromptsControlMode GetWebExperienceSamplePromptsControlModeForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForWebExperienceSamplePromptsControlMode(WebExperienceSamplePromptsControlMode value);
} // namespace WebExperienceSamplePromptsControlModeMapper
} // namespace Model
} // namespace QBusiness
} // namespace Aws
