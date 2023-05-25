/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ServiceQuotas
{
namespace Model
{
  enum class RequestStatus
  {
    NOT_SET,
    PENDING,
    CASE_OPENED,
    APPROVED,
    DENIED,
    CASE_CLOSED
  };

namespace RequestStatusMapper
{
AWS_SERVICEQUOTAS_API RequestStatus GetRequestStatusForName(const Aws::String& name);

AWS_SERVICEQUOTAS_API Aws::String GetNameForRequestStatus(RequestStatus value);
} // namespace RequestStatusMapper
} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws
