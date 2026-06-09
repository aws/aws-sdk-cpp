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
enum class NetServicesArchitecture { NOT_SET, DEDICATED, SHARED };

namespace NetServicesArchitectureMapper {
AWS_ODB_API NetServicesArchitecture GetNetServicesArchitectureForName(const Aws::String& name);

AWS_ODB_API Aws::String GetNameForNetServicesArchitecture(NetServicesArchitecture value);
}  // namespace NetServicesArchitectureMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
