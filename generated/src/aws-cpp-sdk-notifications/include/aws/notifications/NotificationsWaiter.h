/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/notifications/NotificationsClient.h>

#include <algorithm>

namespace Aws {
namespace Notifications {

template <typename DerivedClient = NotificationsClient>
class NotificationsWaiter {
 public:
};
}  // namespace Notifications
}  // namespace Aws
