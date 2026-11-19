/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>

namespace Aws {
namespace RTBFabric {
namespace Model {
enum class UpdateStatus { NOT_SET, IN_PROGRESS, SUCCESSFUL, FAILED };

namespace UpdateStatusMapper {
AWS_RTBFABRIC_API UpdateStatus GetUpdateStatusForName(const Aws::String& name);

AWS_RTBFABRIC_API Aws::String GetNameForUpdateStatus(UpdateStatus value);
}  // namespace UpdateStatusMapper
}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
