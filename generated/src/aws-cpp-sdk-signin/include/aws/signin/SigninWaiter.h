/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/signin/SigninClient.h>

#include <algorithm>

namespace Aws {
namespace Signin {

template <typename DerivedClient = SigninClient>
class SigninWaiter {
 public:
};
}  // namespace Signin
}  // namespace Aws
