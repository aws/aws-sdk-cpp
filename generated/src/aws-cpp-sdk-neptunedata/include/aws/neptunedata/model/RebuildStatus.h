/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/neptunedata/Neptunedata_EXPORTS.h>

namespace Aws {
namespace neptunedata {
namespace Model {
enum class RebuildStatus { NOT_SET, PREPARING, REBUILDING, COMPLETED, FAILED, CANCELLED, CANCELLING };

namespace RebuildStatusMapper {
AWS_NEPTUNEDATA_API RebuildStatus GetRebuildStatusForName(const Aws::String& name);

AWS_NEPTUNEDATA_API Aws::String GetNameForRebuildStatus(RebuildStatus value);
}  // namespace RebuildStatusMapper
}  // namespace Model
}  // namespace neptunedata
}  // namespace Aws
