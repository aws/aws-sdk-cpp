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
enum class TenancyModel { NOT_SET, MULTI_TENANT, SINGLE_TENANT };

namespace TenancyModelMapper {
AWS_PARTNERCENTRALREVENUEMEASUREMENT_API TenancyModel GetTenancyModelForName(const Aws::String& name);

AWS_PARTNERCENTRALREVENUEMEASUREMENT_API Aws::String GetNameForTenancyModel(TenancyModel value);
}  // namespace TenancyModelMapper
}  // namespace Model
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
