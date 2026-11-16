/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchmemory/OpenSearchMemory_EXPORTS.h>

namespace Aws {
namespace OpenSearchMemory {
namespace Model {
enum class BatchGetEventErrorCode { NOT_SET, RESOURCE_NOT_FOUND, THROTTLING, ACCESS_DENIED, INTERNAL_SERVER };

namespace BatchGetEventErrorCodeMapper {
AWS_OPENSEARCHMEMORY_API BatchGetEventErrorCode GetBatchGetEventErrorCodeForName(const Aws::String& name);

AWS_OPENSEARCHMEMORY_API Aws::String GetNameForBatchGetEventErrorCode(BatchGetEventErrorCode value);
}  // namespace BatchGetEventErrorCodeMapper
}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
