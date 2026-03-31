/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/verifiedpermissions/VerifiedPermissionsClient.h>

#include <algorithm>

namespace Aws {
namespace VerifiedPermissions {

template <typename DerivedClient = VerifiedPermissionsClient>
class VerifiedPermissionsWaiter {
 public:
};
}  // namespace VerifiedPermissions
}  // namespace Aws
