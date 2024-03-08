/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSOAdmin
{
namespace Model
{
  enum class ApplicationVisibility
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace ApplicationVisibilityMapper
{
AWS_SSOADMIN_API ApplicationVisibility GetApplicationVisibilityForName(const Aws::String& name);

AWS_SSOADMIN_API Aws::String GetNameForApplicationVisibility(ApplicationVisibility value);
} // namespace ApplicationVisibilityMapper
} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
