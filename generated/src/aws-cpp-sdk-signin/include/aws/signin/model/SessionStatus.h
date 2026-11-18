/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/signin/Signin_EXPORTS.h>

namespace Aws {
namespace Signin {
namespace Model {
enum class SessionStatus { NOT_SET, ACTIVE, REVOKED };

namespace SessionStatusMapper {
AWS_SIGNIN_API SessionStatus GetSessionStatusForName(const Aws::String& name);

AWS_SIGNIN_API Aws::String GetNameForSessionStatus(SessionStatus value);
}  // namespace SessionStatusMapper
}  // namespace Model
}  // namespace Signin
}  // namespace Aws
