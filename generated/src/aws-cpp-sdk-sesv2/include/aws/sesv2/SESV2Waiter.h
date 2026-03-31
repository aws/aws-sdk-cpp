/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/sesv2/SESV2Client.h>

#include <algorithm>

namespace Aws {
namespace SESV2 {

template <typename DerivedClient = SESV2Client>
class SESV2Waiter {
 public:
};
}  // namespace SESV2
}  // namespace Aws
