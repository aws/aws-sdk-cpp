/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/Mgn_EXPORTS.h>

namespace Aws {
namespace mgn {
namespace Model {
enum class ImportStatus { NOT_SET, PENDING, STARTED, FAILED, SUCCEEDED };

namespace ImportStatusMapper {
AWS_MGN_API ImportStatus GetImportStatusForName(const Aws::String& name);

AWS_MGN_API Aws::String GetNameForImportStatus(ImportStatus value);
}  // namespace ImportStatusMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
