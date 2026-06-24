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
enum class DatabaseEdition { NOT_SET, STANDARD_EDITION, ENTERPRISE_EDITION };

namespace DatabaseEditionMapper {
AWS_ODB_API DatabaseEdition GetDatabaseEditionForName(const Aws::String& name);

AWS_ODB_API Aws::String GetNameForDatabaseEdition(DatabaseEdition value);
}  // namespace DatabaseEditionMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
