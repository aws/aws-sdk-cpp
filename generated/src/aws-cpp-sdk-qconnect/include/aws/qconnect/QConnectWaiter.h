/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/qconnect/QConnectClient.h>

#include <algorithm>

namespace Aws {
namespace QConnect {

template <typename DerivedClient = QConnectClient>
class QConnectWaiter {
 public:
};
}  // namespace QConnect
}  // namespace Aws
