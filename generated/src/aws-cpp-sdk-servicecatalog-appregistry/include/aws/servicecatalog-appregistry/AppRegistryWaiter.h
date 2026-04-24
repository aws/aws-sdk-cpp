/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/servicecatalog-appregistry/AppRegistryClient.h>

#include <algorithm>

namespace Aws {
namespace AppRegistry {

template <typename DerivedClient = AppRegistryClient>
class AppRegistryWaiter {
 public:
};
}  // namespace AppRegistry
}  // namespace Aws
