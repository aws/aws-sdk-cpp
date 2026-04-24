/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/Core_EXPORTS.h>

#include <random>

namespace Aws {
namespace Utils {

AWS_CORE_LOCAL std::mt19937::result_type GetRandomValue();

}  // namespace Utils
}  // namespace Aws
