/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SsmSap
{
namespace Model
{
  enum class ApplicationDiscoveryStatus
  {
    NOT_SET,
    SUCCESS,
    REGISTRATION_FAILED,
    REFRESH_FAILED,
    REGISTERING,
    DELETING
  };

namespace ApplicationDiscoveryStatusMapper
{
AWS_SSMSAP_API ApplicationDiscoveryStatus GetApplicationDiscoveryStatusForName(const Aws::String& name);

AWS_SSMSAP_API Aws::String GetNameForApplicationDiscoveryStatus(ApplicationDiscoveryStatus value);
} // namespace ApplicationDiscoveryStatusMapper
} // namespace Model
} // namespace SsmSap
} // namespace Aws
