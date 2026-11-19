/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurement_EXPORTS.h>

namespace Aws {
namespace PartnerCentralRevenueMeasurement {
namespace Model {
enum class RevenueShareProductAccountType { NOT_SET, DEPLOYMENT, ORGANIZATION };

namespace RevenueShareProductAccountTypeMapper {
AWS_PARTNERCENTRALREVENUEMEASUREMENT_API RevenueShareProductAccountType GetRevenueShareProductAccountTypeForName(const Aws::String& name);

AWS_PARTNERCENTRALREVENUEMEASUREMENT_API Aws::String GetNameForRevenueShareProductAccountType(RevenueShareProductAccountType value);
}  // namespace RevenueShareProductAccountTypeMapper
}  // namespace Model
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
