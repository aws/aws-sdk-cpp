/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/workspaces-web/WorkSpacesWebClient.h>

#include <algorithm>

namespace Aws {
namespace WorkSpacesWeb {

template <typename DerivedClient = WorkSpacesWebClient>
class WorkSpacesWebWaiter {
 public:
};
}  // namespace WorkSpacesWeb
}  // namespace Aws
