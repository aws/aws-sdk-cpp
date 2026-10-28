/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/OpenSearchService_EXPORTS.h>

namespace Aws {
namespace OpenSearchService {
namespace Model {
enum class DiffStatus { NOT_SET, compared, error };

namespace DiffStatusMapper {
AWS_OPENSEARCHSERVICE_API DiffStatus GetDiffStatusForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForDiffStatus(DiffStatus value);
}  // namespace DiffStatusMapper
}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
