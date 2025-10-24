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
enum class MultiRegionAccessPointStatus {
  NOT_SET,
  READY,
  INCONSISTENT_ACROSS_REGIONS,
  CREATING,
  PARTIALLY_CREATED,
  PARTIALLY_DELETED,
  DELETING
};

namespace MultiRegionAccessPointStatusMapper {
AWS_S3CONTROL_API MultiRegionAccessPointStatus GetMultiRegionAccessPointStatusForName(const Aws::String& name);

AWS_S3CONTROL_API Aws::String GetNameForMultiRegionAccessPointStatus(MultiRegionAccessPointStatus value);
}  // namespace MultiRegionAccessPointStatusMapper
}  // namespace Model
}  // namespace S3Control
}  // namespace Aws
