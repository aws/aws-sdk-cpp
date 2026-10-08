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
enum class FindingsExportFormat { NOT_SET, CSV, OCSF_JSON };

namespace FindingsExportFormatMapper {
AWS_SECURITYHUB_API FindingsExportFormat GetFindingsExportFormatForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForFindingsExportFormat(FindingsExportFormat value);
}  // namespace FindingsExportFormatMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
