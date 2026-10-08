/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>

namespace Aws {
namespace SecurityHub {
namespace Model {
enum class ExportStatus { NOT_SET, RUNNING, SUCCEEDED, FAILED, CANCELLED };

namespace ExportStatusMapper {
AWS_SECURITYHUB_API ExportStatus GetExportStatusForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForExportStatus(ExportStatus value);
}  // namespace ExportStatusMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
