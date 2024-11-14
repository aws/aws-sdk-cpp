/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PartnerCentralSelling
{
namespace Model
{
  enum class InvitationStatus
  {
    NOT_SET,
    ACCEPTED,
    PENDING,
    REJECTED,
    EXPIRED
  };

namespace InvitationStatusMapper
{
AWS_PARTNERCENTRALSELLING_API InvitationStatus GetInvitationStatusForName(const Aws::String& name);

AWS_PARTNERCENTRALSELLING_API Aws::String GetNameForInvitationStatus(InvitationStatus value);
} // namespace InvitationStatusMapper
} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
