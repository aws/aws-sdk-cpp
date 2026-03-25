/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/ssm-contacts/SSMContactsClient.h>

#include <algorithm>

namespace Aws {
namespace SSMContacts {

template <typename DerivedClient = SSMContactsClient>
class SSMContactsWaiter {
 public:
};
}  // namespace SSMContacts
}  // namespace Aws
