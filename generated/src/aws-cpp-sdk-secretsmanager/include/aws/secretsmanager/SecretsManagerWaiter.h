/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/secretsmanager/SecretsManagerClient.h>

#include <algorithm>

namespace Aws {
namespace SecretsManager {

template <typename DerivedClient = SecretsManagerClient>
class SecretsManagerWaiter {
 public:
};
}  // namespace SecretsManager
}  // namespace Aws
