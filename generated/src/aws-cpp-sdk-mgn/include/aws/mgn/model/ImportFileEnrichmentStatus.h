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
enum class ImportFileEnrichmentStatus { NOT_SET, PENDING, STARTED, FAILED, SUCCEEDED, SUCCEEDED_WITH_WARNINGS };

namespace ImportFileEnrichmentStatusMapper {
AWS_MGN_API ImportFileEnrichmentStatus GetImportFileEnrichmentStatusForName(const Aws::String& name);

AWS_MGN_API Aws::String GetNameForImportFileEnrichmentStatus(ImportFileEnrichmentStatus value);
}  // namespace ImportFileEnrichmentStatusMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
