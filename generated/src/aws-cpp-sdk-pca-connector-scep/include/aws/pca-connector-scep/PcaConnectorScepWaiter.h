/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/pca-connector-scep/PcaConnectorScepClient.h>

#include <algorithm>

namespace Aws {
namespace PcaConnectorScep {

template <typename DerivedClient = PcaConnectorScepClient>
class PcaConnectorScepWaiter {
 public:
};
}  // namespace PcaConnectorScep
}  // namespace Aws
