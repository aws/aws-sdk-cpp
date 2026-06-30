/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/supportauthz/SupportAuthZ_EXPORTS.h>

namespace Aws {
namespace SupportAuthZ {
namespace Model {
enum class SupportPermitRequestStatus { NOT_SET, PENDING, ACCEPTED, REJECTED, CANCELLED };

namespace SupportPermitRequestStatusMapper {
AWS_SUPPORTAUTHZ_API SupportPermitRequestStatus GetSupportPermitRequestStatusForName(const Aws::String& name);

AWS_SUPPORTAUTHZ_API Aws::String GetNameForSupportPermitRequestStatus(SupportPermitRequestStatus value);
}  // namespace SupportPermitRequestStatusMapper
}  // namespace Model
}  // namespace SupportAuthZ
}  // namespace Aws
