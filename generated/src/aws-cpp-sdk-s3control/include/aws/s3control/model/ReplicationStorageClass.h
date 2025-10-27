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
enum class ReplicationStorageClass {
  NOT_SET,
  STANDARD,
  REDUCED_REDUNDANCY,
  STANDARD_IA,
  ONEZONE_IA,
  INTELLIGENT_TIERING,
  GLACIER,
  DEEP_ARCHIVE,
  OUTPOSTS,
  GLACIER_IR
};

namespace ReplicationStorageClassMapper {
AWS_S3CONTROL_API ReplicationStorageClass GetReplicationStorageClassForName(const Aws::String& name);

AWS_S3CONTROL_API Aws::String GetNameForReplicationStorageClass(ReplicationStorageClass value);
}  // namespace ReplicationStorageClassMapper
}  // namespace Model
}  // namespace S3Control
}  // namespace Aws
