/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/sso-admin/SSOAdminClient.h>

#include <algorithm>

namespace Aws {
namespace SSOAdmin {

template <typename DerivedClient = SSOAdminClient>
class SSOAdminWaiter {
 public:
};
}  // namespace SSOAdmin
}  // namespace Aws
