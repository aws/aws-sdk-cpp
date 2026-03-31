/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/pca-connector-ad/PcaConnectorAdClient.h>

#include <algorithm>

namespace Aws {
namespace PcaConnectorAd {

template <typename DerivedClient = PcaConnectorAdClient>
class PcaConnectorAdWaiter {
 public:
};
}  // namespace PcaConnectorAd
}  // namespace Aws
