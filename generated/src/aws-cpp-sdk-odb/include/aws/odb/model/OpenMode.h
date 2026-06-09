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
enum class OpenMode { NOT_SET, READ_ONLY, READ_WRITE };

namespace OpenModeMapper {
AWS_ODB_API OpenMode GetOpenModeForName(const Aws::String& name);

AWS_ODB_API Aws::String GetNameForOpenMode(OpenMode value);
}  // namespace OpenModeMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
