/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-sap/SsmSap_EXPORTS.h>

namespace Aws {
namespace SsmSap {
namespace Model {
enum class DatabaseStatus { NOT_SET, RUNNING, STARTING, STOPPED, WARNING, UNKNOWN, ERROR_, STOPPING };

namespace DatabaseStatusMapper {
AWS_SSMSAP_API DatabaseStatus GetDatabaseStatusForName(const Aws::String& name);

AWS_SSMSAP_API Aws::String GetNameForDatabaseStatus(DatabaseStatus value);
}  // namespace DatabaseStatusMapper
}  // namespace Model
}  // namespace SsmSap
}  // namespace Aws
