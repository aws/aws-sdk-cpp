/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/serverlessrepo/ServerlessApplicationRepositoryClient.h>

#include <algorithm>

namespace Aws {
namespace ServerlessApplicationRepository {

template <typename DerivedClient = ServerlessApplicationRepositoryClient>
class ServerlessApplicationRepositoryWaiter {
 public:
};
}  // namespace ServerlessApplicationRepository
}  // namespace Aws
