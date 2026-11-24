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
enum class ManagedServicesAttestationTypeSortName { NOT_SET, UpdatedAt };

namespace ManagedServicesAttestationTypeSortNameMapper {
AWS_PARTNERCENTRALCHANNEL_API ManagedServicesAttestationTypeSortName
GetManagedServicesAttestationTypeSortNameForName(const Aws::String& name);

AWS_PARTNERCENTRALCHANNEL_API Aws::String GetNameForManagedServicesAttestationTypeSortName(ManagedServicesAttestationTypeSortName value);
}  // namespace ManagedServicesAttestationTypeSortNameMapper
}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
