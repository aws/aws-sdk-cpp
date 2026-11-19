/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>

namespace Aws {
namespace PartnerCentralMarketing {
namespace Model {
enum class CompanySize { NOT_SET, STARTUP, SMALL_BUSINESS, MID_MARKET, ENTERPRISE, GLOBAL_ENTERPRISE };

namespace CompanySizeMapper {
AWS_PARTNERCENTRALMARKETING_API CompanySize GetCompanySizeForName(const Aws::String& name);

AWS_PARTNERCENTRALMARKETING_API Aws::String GetNameForCompanySize(CompanySize value);
}  // namespace CompanySizeMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
