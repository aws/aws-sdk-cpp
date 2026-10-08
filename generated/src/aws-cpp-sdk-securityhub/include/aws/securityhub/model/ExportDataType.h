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
enum class ExportDataType { NOT_SET, FINDINGS };

namespace ExportDataTypeMapper {
AWS_SECURITYHUB_API ExportDataType GetExportDataTypeForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForExportDataType(ExportDataType value);
}  // namespace ExportDataTypeMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
