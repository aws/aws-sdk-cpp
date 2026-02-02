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
enum class MfaSyncStatus { NOT_SET, IN_SYNC, OUT_OF_SYNC };

namespace MfaSyncStatusMapper {
AWS_MPA_API MfaSyncStatus GetMfaSyncStatusForName(const Aws::String& name);

AWS_MPA_API Aws::String GetNameForMfaSyncStatus(MfaSyncStatus value);
}  // namespace MfaSyncStatusMapper
}  // namespace Model
}  // namespace MPA
}  // namespace Aws
