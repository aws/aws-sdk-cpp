/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/Omics_EXPORTS.h>

namespace Aws {
namespace Omics {
namespace Model {
enum class BatchStatus { NOT_SET, PENDING, SUBMITTING, INPROGRESS, STOPPING, CANCELLED, FAILED, PROCESSED, RUNS_DELETING, RUNS_DELETED };

namespace BatchStatusMapper {
AWS_OMICS_API BatchStatus GetBatchStatusForName(const Aws::String& name);

AWS_OMICS_API Aws::String GetNameForBatchStatus(BatchStatus value);
}  // namespace BatchStatusMapper
}  // namespace Model
}  // namespace Omics
}  // namespace Aws
