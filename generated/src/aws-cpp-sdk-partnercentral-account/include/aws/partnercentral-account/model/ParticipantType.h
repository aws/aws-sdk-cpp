/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-account/PartnerCentralAccount_EXPORTS.h>

namespace Aws {
namespace PartnerCentralAccount {
namespace Model {
enum class ParticipantType { NOT_SET, SENDER, RECEIVER };

namespace ParticipantTypeMapper {
AWS_PARTNERCENTRALACCOUNT_API ParticipantType GetParticipantTypeForName(const Aws::String& name);

AWS_PARTNERCENTRALACCOUNT_API Aws::String GetNameForParticipantType(ParticipantType value);
}  // namespace ParticipantTypeMapper
}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
