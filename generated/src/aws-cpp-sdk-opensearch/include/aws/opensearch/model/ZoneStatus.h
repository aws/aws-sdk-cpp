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
enum class ZoneStatus { NOT_SET, Active, StandBy, NotAvailable };

namespace ZoneStatusMapper {
AWS_OPENSEARCHSERVICE_API ZoneStatus GetZoneStatusForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForZoneStatus(ZoneStatus value);
}  // namespace ZoneStatusMapper
}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
