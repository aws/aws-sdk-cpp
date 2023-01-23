/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSM
{
namespace Model
{
  enum class AutomationType
  {
    NOT_SET,
    CrossAccount,
    Local
  };

namespace AutomationTypeMapper
{
AWS_SSM_API AutomationType GetAutomationTypeForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForAutomationType(AutomationType value);
} // namespace AutomationTypeMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
