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
enum class HardwareType { NOT_SET, COMPUTE, CELL };

namespace HardwareTypeMapper {
AWS_ODB_API HardwareType GetHardwareTypeForName(const Aws::String& name);

AWS_ODB_API Aws::String GetNameForHardwareType(HardwareType value);
}  // namespace HardwareTypeMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
