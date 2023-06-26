/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{
  enum class StatusReasonCode
  {
    NOT_SET,
    NO_AVAILABLE_CONFIGURATION_RECORDER,
    INTERNAL_ERROR
  };

namespace StatusReasonCodeMapper
{
AWS_SECURITYHUB_API StatusReasonCode GetStatusReasonCodeForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForStatusReasonCode(StatusReasonCode value);
} // namespace StatusReasonCodeMapper
} // namespace Model
} // namespace SecurityHub
} // namespace Aws
