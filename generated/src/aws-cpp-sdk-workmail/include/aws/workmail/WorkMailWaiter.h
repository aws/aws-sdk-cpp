/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/workmail/WorkMailClient.h>

#include <algorithm>

namespace Aws {
namespace WorkMail {

template <typename DerivedClient = WorkMailClient>
class WorkMailWaiter {
 public:
};
}  // namespace WorkMail
}  // namespace Aws
