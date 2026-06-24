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
enum class CloneType { NOT_SET, FULL, METADATA, PARTIAL };

namespace CloneTypeMapper {
AWS_ODB_API CloneType GetCloneTypeForName(const Aws::String& name);

AWS_ODB_API Aws::String GetNameForCloneType(CloneType value);
}  // namespace CloneTypeMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
