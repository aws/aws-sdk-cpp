/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/notificationscontacts/NotificationsContactsClient.h>

#include <algorithm>

namespace Aws {
namespace NotificationsContacts {

template <typename DerivedClient = NotificationsContactsClient>
class NotificationsContactsWaiter {
 public:
};
}  // namespace NotificationsContacts
}  // namespace Aws
