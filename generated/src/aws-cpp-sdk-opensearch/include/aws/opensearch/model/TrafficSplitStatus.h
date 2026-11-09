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
enum class TrafficSplitStatus { NOT_SET, InProgress, Completed, Failed };

namespace TrafficSplitStatusMapper {
AWS_OPENSEARCHSERVICE_API TrafficSplitStatus GetTrafficSplitStatusForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForTrafficSplitStatus(TrafficSplitStatus value);
}  // namespace TrafficSplitStatusMapper
}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
