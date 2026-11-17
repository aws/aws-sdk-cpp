/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/Mgn_EXPORTS.h>

namespace Aws {
namespace mgn {
namespace Model {
enum class RemoteSourceActionJobStatus { NOT_SET, PENDING, RUNNING, COMPLETED, FAILED, STALLED };

namespace RemoteSourceActionJobStatusMapper {
AWS_MGN_API RemoteSourceActionJobStatus GetRemoteSourceActionJobStatusForName(const Aws::String& name);

AWS_MGN_API Aws::String GetNameForRemoteSourceActionJobStatus(RemoteSourceActionJobStatus value);
}  // namespace RemoteSourceActionJobStatusMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
