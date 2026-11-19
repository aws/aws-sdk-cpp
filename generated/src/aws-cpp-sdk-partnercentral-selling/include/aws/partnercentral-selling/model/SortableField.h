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
enum class SortableField { NOT_SET, COMPANY_NAME, CREATED_DATE, LAST_MODIFIED_DATE, MARKETPLACE_ENGAGEMENT_SCORE, SOLUTION_SCORE };

namespace SortableFieldMapper {
AWS_PARTNERCENTRALSELLING_API SortableField GetSortableFieldForName(const Aws::String& name);

AWS_PARTNERCENTRALSELLING_API Aws::String GetNameForSortableField(SortableField value);
}  // namespace SortableFieldMapper
}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
