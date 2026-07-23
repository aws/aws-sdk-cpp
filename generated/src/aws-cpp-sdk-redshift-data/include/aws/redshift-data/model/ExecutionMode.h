/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift-data/RedshiftDataAPIService_EXPORTS.h>

namespace Aws {
namespace RedshiftDataAPIService {
namespace Model {
enum class ExecutionMode { NOT_SET, TRANSACTION, AUTO_COMMIT };

namespace ExecutionModeMapper {
AWS_REDSHIFTDATAAPISERVICE_API ExecutionMode GetExecutionModeForName(const Aws::String& name);

AWS_REDSHIFTDATAAPISERVICE_API Aws::String GetNameForExecutionMode(ExecutionMode value);
}  // namespace ExecutionModeMapper
}  // namespace Model
}  // namespace RedshiftDataAPIService
}  // namespace Aws
