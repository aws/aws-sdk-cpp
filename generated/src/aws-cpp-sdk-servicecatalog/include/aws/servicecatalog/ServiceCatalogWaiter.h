/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/servicecatalog/ServiceCatalogClient.h>

#include <algorithm>

namespace Aws {
namespace ServiceCatalog {

template <typename DerivedClient = ServiceCatalogClient>
class ServiceCatalogWaiter {
 public:
};
}  // namespace ServiceCatalog
}  // namespace Aws
