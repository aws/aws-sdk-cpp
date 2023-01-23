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
  enum class ProvisioningStatus
  {
    NOT_SET,
    LATEST_PERMISSION_SET_PROVISIONED,
    LATEST_PERMISSION_SET_NOT_PROVISIONED
  };

namespace ProvisioningStatusMapper
{
AWS_SSOADMIN_API ProvisioningStatus GetProvisioningStatusForName(const Aws::String& name);

AWS_SSOADMIN_API Aws::String GetNameForProvisioningStatus(ProvisioningStatus value);
} // namespace ProvisioningStatusMapper
} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
