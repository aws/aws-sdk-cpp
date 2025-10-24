/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rbin/RecycleBin_EXPORTS.h>

namespace Aws {
namespace RecycleBin {
namespace Model {
enum class ServiceQuotaExceededExceptionReason { NOT_SET, SERVICE_QUOTA_EXCEEDED };

namespace ServiceQuotaExceededExceptionReasonMapper {
AWS_RECYCLEBIN_API ServiceQuotaExceededExceptionReason GetServiceQuotaExceededExceptionReasonForName(const Aws::String& name);

AWS_RECYCLEBIN_API Aws::String GetNameForServiceQuotaExceededExceptionReason(ServiceQuotaExceededExceptionReason value);
}  // namespace ServiceQuotaExceededExceptionReasonMapper
}  // namespace Model
}  // namespace RecycleBin
}  // namespace Aws
