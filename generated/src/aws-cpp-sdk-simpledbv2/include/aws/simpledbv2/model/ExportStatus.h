/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/simpledbv2/SimpleDBv2_EXPORTS.h>

namespace Aws {
namespace SimpleDBv2 {
namespace Model {
enum class ExportStatus { NOT_SET, PENDING, IN_PROGRESS, SUCCEEDED, FAILED };

namespace ExportStatusMapper {
AWS_SIMPLEDBV2_API ExportStatus GetExportStatusForName(const Aws::String& name);

AWS_SIMPLEDBV2_API Aws::String GetNameForExportStatus(ExportStatus value);
}  // namespace ExportStatusMapper
}  // namespace Model
}  // namespace SimpleDBv2
}  // namespace Aws
