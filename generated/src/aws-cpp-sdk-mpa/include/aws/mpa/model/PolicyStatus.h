/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mpa/MPA_EXPORTS.h>

namespace Aws {
namespace MPA {
namespace Model {
enum class PolicyStatus { NOT_SET, ATTACHABLE, DEPRECATED };

namespace PolicyStatusMapper {
AWS_MPA_API PolicyStatus GetPolicyStatusForName(const Aws::String& name);

AWS_MPA_API Aws::String GetNameForPolicyStatus(PolicyStatus value);
}  // namespace PolicyStatusMapper
}  // namespace Model
}  // namespace MPA
}  // namespace Aws
