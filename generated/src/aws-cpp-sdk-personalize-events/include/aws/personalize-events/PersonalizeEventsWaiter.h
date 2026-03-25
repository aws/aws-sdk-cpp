/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/personalize-events/PersonalizeEventsClient.h>

#include <algorithm>

namespace Aws {
namespace PersonalizeEvents {

template <typename DerivedClient = PersonalizeEventsClient>
class PersonalizeEventsWaiter {
 public:
};
}  // namespace PersonalizeEvents
}  // namespace Aws
