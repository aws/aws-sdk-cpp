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
enum class RevenueModel { NOT_SET, Contract, Pay_as_you_go, Subscription };

namespace RevenueModelMapper {
AWS_PARTNERCENTRALSELLING_API RevenueModel GetRevenueModelForName(const Aws::String& name);

AWS_PARTNERCENTRALSELLING_API Aws::String GetNameForRevenueModel(RevenueModel value);
}  // namespace RevenueModelMapper
}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
