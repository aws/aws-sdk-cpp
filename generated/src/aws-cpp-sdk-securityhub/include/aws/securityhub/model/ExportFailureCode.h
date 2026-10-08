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
enum class ExportFailureCode { NOT_SET, ACCESS_DENIED, RESOURCE_NOT_FOUND, INTERNAL_ERROR };

namespace ExportFailureCodeMapper {
AWS_SECURITYHUB_API ExportFailureCode GetExportFailureCodeForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForExportFailureCode(ExportFailureCode value);
}  // namespace ExportFailureCodeMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
