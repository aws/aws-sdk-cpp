/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ObservabilityAdmin
{
namespace Model
{
  enum class CentralizationFailureReason
  {
    NOT_SET,
    TRUSTED_ACCESS_NOT_ENABLED,
    DESTINATION_ACCOUNT_NOT_IN_ORGANIZATION,
    INTERNAL_SERVER_ERROR
  };

namespace CentralizationFailureReasonMapper
{
AWS_OBSERVABILITYADMIN_API CentralizationFailureReason GetCentralizationFailureReasonForName(const Aws::String& name);

AWS_OBSERVABILITYADMIN_API Aws::String GetNameForCentralizationFailureReason(CentralizationFailureReason value);
} // namespace CentralizationFailureReasonMapper
} // namespace Model
} // namespace ObservabilityAdmin
} // namespace Aws
