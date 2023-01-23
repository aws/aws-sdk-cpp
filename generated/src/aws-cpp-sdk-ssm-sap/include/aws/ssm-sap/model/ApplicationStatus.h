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
  enum class ApplicationStatus
  {
    NOT_SET,
    ACTIVATED,
    STARTING,
    STOPPED,
    STOPPING,
    FAILED,
    REGISTERING,
    DELETING,
    UNKNOWN
  };

namespace ApplicationStatusMapper
{
AWS_SSMSAP_API ApplicationStatus GetApplicationStatusForName(const Aws::String& name);

AWS_SSMSAP_API Aws::String GetNameForApplicationStatus(ApplicationStatus value);
} // namespace ApplicationStatusMapper
} // namespace Model
} // namespace SsmSap
} // namespace Aws
