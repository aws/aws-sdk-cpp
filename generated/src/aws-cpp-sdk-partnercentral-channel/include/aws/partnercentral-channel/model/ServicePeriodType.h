/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-channel/PartnerCentralChannel_EXPORTS.h>

namespace Aws {
namespace PartnerCentralChannel {
namespace Model {
enum class ServicePeriodType { NOT_SET, MINIMUM_NOTICE_PERIOD, FIXED_COMMITMENT_PERIOD };

namespace ServicePeriodTypeMapper {
AWS_PARTNERCENTRALCHANNEL_API ServicePeriodType GetServicePeriodTypeForName(const Aws::String& name);

AWS_PARTNERCENTRALCHANNEL_API Aws::String GetNameForServicePeriodType(ServicePeriodType value);
}  // namespace ServicePeriodTypeMapper
}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
