/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pcs/PCS_EXPORTS.h>

namespace Aws {
namespace PCS {
namespace Model {
enum class DeepHealthCheckOnStartProfile { NOT_SET, NONE, QUICK, MEDIUM, LONG };

namespace DeepHealthCheckOnStartProfileMapper {
AWS_PCS_API DeepHealthCheckOnStartProfile GetDeepHealthCheckOnStartProfileForName(const Aws::String& name);

AWS_PCS_API Aws::String GetNameForDeepHealthCheckOnStartProfile(DeepHealthCheckOnStartProfile value);
}  // namespace DeepHealthCheckOnStartProfileMapper
}  // namespace Model
}  // namespace PCS
}  // namespace Aws
