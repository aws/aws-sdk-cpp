/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/translate/TranslateClient.h>

#include <algorithm>

namespace Aws {
namespace Translate {

template <typename DerivedClient = TranslateClient>
class TranslateWaiter {
 public:
};
}  // namespace Translate
}  // namespace Aws
