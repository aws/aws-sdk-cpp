/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/threading/UnboundedExecutor.h>

namespace Aws {
namespace Utils {
namespace Threading {
class UnboundedExecutor;

/**
 * The executor that runs each task on a thread of its own was called DefaultExecutor until it stopped being the
 * default. The old name still compiles, with a deprecation warning.
 */
using DefaultExecutor [[deprecated("Use UnboundedExecutor")]] = UnboundedExecutor;
}  // namespace Threading
}  // namespace Utils
}  // namespace Aws
