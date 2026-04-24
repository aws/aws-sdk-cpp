/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mpa/MPA_EXPORTS.h>

namespace Aws {
namespace MPA {
namespace Model {
enum class MfaType { NOT_SET, EMAIL_OTP };

namespace MfaTypeMapper {
AWS_MPA_API MfaType GetMfaTypeForName(const Aws::String& name);

AWS_MPA_API Aws::String GetNameForMfaType(MfaType value);
}  // namespace MfaTypeMapper
}  // namespace Model
}  // namespace MPA
}  // namespace Aws
