/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/Odb_EXPORTS.h>

namespace Aws {
namespace odb {
namespace Model {
enum class DataSafeStatus { NOT_SET, REGISTERING, REGISTERED, DEREGISTERING, NOT_REGISTERED, FAILED };

namespace DataSafeStatusMapper {
AWS_ODB_API DataSafeStatus GetDataSafeStatusForName(const Aws::String& name);

AWS_ODB_API Aws::String GetNameForDataSafeStatus(DataSafeStatus value);
}  // namespace DataSafeStatusMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
