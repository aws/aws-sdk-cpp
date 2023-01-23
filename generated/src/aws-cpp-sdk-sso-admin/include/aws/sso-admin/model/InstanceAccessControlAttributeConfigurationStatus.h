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
  enum class InstanceAccessControlAttributeConfigurationStatus
  {
    NOT_SET,
    ENABLED,
    CREATION_IN_PROGRESS,
    CREATION_FAILED
  };

namespace InstanceAccessControlAttributeConfigurationStatusMapper
{
AWS_SSOADMIN_API InstanceAccessControlAttributeConfigurationStatus GetInstanceAccessControlAttributeConfigurationStatusForName(const Aws::String& name);

AWS_SSOADMIN_API Aws::String GetNameForInstanceAccessControlAttributeConfigurationStatus(InstanceAccessControlAttributeConfigurationStatus value);
} // namespace InstanceAccessControlAttributeConfigurationStatusMapper
} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
