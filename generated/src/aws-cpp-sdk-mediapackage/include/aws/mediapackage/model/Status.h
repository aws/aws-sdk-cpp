/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackage/MediaPackage_EXPORTS.h>

namespace Aws {
namespace MediaPackage {
namespace Model {
enum class Status { NOT_SET, IN_PROGRESS, SUCCEEDED, FAILED };

namespace StatusMapper {
AWS_MEDIAPACKAGE_API Status GetStatusForName(const Aws::String& name);

AWS_MEDIAPACKAGE_API Aws::String GetNameForStatus(Status value);
}  // namespace StatusMapper
}  // namespace Model
}  // namespace MediaPackage
}  // namespace Aws
