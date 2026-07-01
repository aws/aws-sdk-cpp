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
enum class SupportPermitStatus { NOT_SET, ACTIVE, INACTIVE, DELETING };

namespace SupportPermitStatusMapper {
AWS_SUPPORTAUTHZ_API SupportPermitStatus GetSupportPermitStatusForName(const Aws::String& name);

AWS_SUPPORTAUTHZ_API Aws::String GetNameForSupportPermitStatus(SupportPermitStatus value);
}  // namespace SupportPermitStatusMapper
}  // namespace Model
}  // namespace SupportAuthZ
}  // namespace Aws
