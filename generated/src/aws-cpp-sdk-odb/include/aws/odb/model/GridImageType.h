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
enum class GridImageType { NOT_SET, RELEASE_UPDATE, CUSTOM_IMAGE };

namespace GridImageTypeMapper {
AWS_ODB_API GridImageType GetGridImageTypeForName(const Aws::String& name);

AWS_ODB_API Aws::String GetNameForGridImageType(GridImageType value);
}  // namespace GridImageTypeMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
