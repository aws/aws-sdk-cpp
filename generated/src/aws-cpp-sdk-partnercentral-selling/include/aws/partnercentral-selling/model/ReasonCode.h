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
  enum class ReasonCode
  {
    NOT_SET,
    InvitationAccessDenied,
    InvitationValidationFailed,
    EngagementAccessDenied,
    OpportunityAccessDenied,
    ResourceSnapshotJobAccessDenied,
    ResourceSnapshotJobValidationFailed,
    ResourceSnapshotJobConflict,
    EngagementValidationFailed,
    EngagementConflict,
    OpportunitySubmissionFailed,
    EngagementInvitationConflict,
    InternalError,
    OpportunityValidationFailed,
    OpportunityConflict,
    ResourceSnapshotAccessDenied,
    ResourceSnapshotValidationFailed,
    ResourceSnapshotConflict,
    ServiceQuotaExceeded,
    RequestThrottled
  };

namespace ReasonCodeMapper
{
AWS_PARTNERCENTRALSELLING_API ReasonCode GetReasonCodeForName(const Aws::String& name);

AWS_PARTNERCENTRALSELLING_API Aws::String GetNameForReasonCode(ReasonCode value);
} // namespace ReasonCodeMapper
} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
