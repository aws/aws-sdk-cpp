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
enum class ScheduledBy { NOT_SET, CUSTOMER, SYSTEM };

namespace ScheduledByMapper {
AWS_OPENSEARCHSERVICE_API ScheduledBy GetScheduledByForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForScheduledBy(ScheduledBy value);
}  // namespace ScheduledByMapper
}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
