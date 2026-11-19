/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {
enum class EnrichmentStatus { NOT_SET, PENDING, ENRICHED, NO_MATCH_FOUND, ACTION_REQUIRED };

namespace EnrichmentStatusMapper {
AWS_PARTNERCENTRALSELLING_API EnrichmentStatus GetEnrichmentStatusForName(const Aws::String& name);

AWS_PARTNERCENTRALSELLING_API Aws::String GetNameForEnrichmentStatus(EnrichmentStatus value);
}  // namespace EnrichmentStatusMapper
}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
