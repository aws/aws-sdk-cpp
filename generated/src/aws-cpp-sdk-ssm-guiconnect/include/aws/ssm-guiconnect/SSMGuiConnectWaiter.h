/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/ssm-guiconnect/SSMGuiConnectClient.h>

#include <algorithm>

namespace Aws {
namespace SSMGuiConnect {

template <typename DerivedClient = SSMGuiConnectClient>
class SSMGuiConnectWaiter {
 public:
};
}  // namespace SSMGuiConnect
}  // namespace Aws
