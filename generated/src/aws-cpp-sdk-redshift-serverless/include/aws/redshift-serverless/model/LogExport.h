/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>

namespace Aws {
namespace RedshiftServerless {
namespace Model {
enum class LogExport { NOT_SET, useractivitylog, userlog, connectionlog };

namespace LogExportMapper {
AWS_REDSHIFTSERVERLESS_API LogExport GetLogExportForName(const Aws::String& name);

AWS_REDSHIFTSERVERLESS_API Aws::String GetNameForLogExport(LogExport value);
}  // namespace LogExportMapper
}  // namespace Model
}  // namespace RedshiftServerless
}  // namespace Aws
