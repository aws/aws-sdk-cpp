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
enum class ExternalIdType { NOT_SET, database_ocid, compartment_ocid, tenant_ocid };

namespace ExternalIdTypeMapper {
AWS_ODB_API ExternalIdType GetExternalIdTypeForName(const Aws::String& name);

AWS_ODB_API Aws::String GetNameForExternalIdType(ExternalIdType value);
}  // namespace ExternalIdTypeMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
