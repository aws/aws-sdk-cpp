/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/signer-data/SignerDataClient.h>

#include <algorithm>

namespace Aws {
namespace SignerData {

template <typename DerivedClient = SignerDataClient>
class SignerDataWaiter {
 public:
};
}  // namespace SignerData
}  // namespace Aws
