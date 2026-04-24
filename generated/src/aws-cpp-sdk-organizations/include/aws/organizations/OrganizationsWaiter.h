/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/organizations/OrganizationsClient.h>

#include <algorithm>

namespace Aws {
namespace Organizations {

template <typename DerivedClient = OrganizationsClient>
class OrganizationsWaiter {
 public:
};
}  // namespace Organizations
}  // namespace Aws
