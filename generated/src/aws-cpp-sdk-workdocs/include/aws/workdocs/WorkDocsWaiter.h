/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/workdocs/WorkDocsClient.h>

#include <algorithm>

namespace Aws {
namespace WorkDocs {

template <typename DerivedClient = WorkDocsClient>
class WorkDocsWaiter {
 public:
};
}  // namespace WorkDocs
}  // namespace Aws
