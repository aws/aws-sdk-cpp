/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/S3Control_EXPORTS.h>

namespace Aws {
namespace S3Control {
namespace Model {
enum class ReplicaModificationsStatus { NOT_SET, Enabled, Disabled };

namespace ReplicaModificationsStatusMapper {
AWS_S3CONTROL_API ReplicaModificationsStatus GetReplicaModificationsStatusForName(const Aws::String& name);

AWS_S3CONTROL_API Aws::String GetNameForReplicaModificationsStatus(ReplicaModificationsStatus value);
}  // namespace ReplicaModificationsStatusMapper
}  // namespace Model
}  // namespace S3Control
}  // namespace Aws
