/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/ReasonCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PartnerCentralSelling
  {
    namespace Model
    {
      namespace ReasonCodeMapper
      {

        static const int InvitationAccessDenied_HASH = HashingUtils::HashString("InvitationAccessDenied");
        static const int InvitationValidationFailed_HASH = HashingUtils::HashString("InvitationValidationFailed");
        static const int EngagementAccessDenied_HASH = HashingUtils::HashString("EngagementAccessDenied");
        static const int OpportunityAccessDenied_HASH = HashingUtils::HashString("OpportunityAccessDenied");
        static const int ResourceSnapshotJobAccessDenied_HASH = HashingUtils::HashString("ResourceSnapshotJobAccessDenied");
        static const int ResourceSnapshotJobValidationFailed_HASH = HashingUtils::HashString("ResourceSnapshotJobValidationFailed");
        static const int ResourceSnapshotJobConflict_HASH = HashingUtils::HashString("ResourceSnapshotJobConflict");
        static const int EngagementValidationFailed_HASH = HashingUtils::HashString("EngagementValidationFailed");
        static const int EngagementConflict_HASH = HashingUtils::HashString("EngagementConflict");
        static const int OpportunitySubmissionFailed_HASH = HashingUtils::HashString("OpportunitySubmissionFailed");
        static const int EngagementInvitationConflict_HASH = HashingUtils::HashString("EngagementInvitationConflict");
        static const int InternalError_HASH = HashingUtils::HashString("InternalError");
        static const int OpportunityValidationFailed_HASH = HashingUtils::HashString("OpportunityValidationFailed");
        static const int OpportunityConflict_HASH = HashingUtils::HashString("OpportunityConflict");
        static const int ResourceSnapshotAccessDenied_HASH = HashingUtils::HashString("ResourceSnapshotAccessDenied");
        static const int ResourceSnapshotValidationFailed_HASH = HashingUtils::HashString("ResourceSnapshotValidationFailed");
        static const int ResourceSnapshotConflict_HASH = HashingUtils::HashString("ResourceSnapshotConflict");
        static const int ServiceQuotaExceeded_HASH = HashingUtils::HashString("ServiceQuotaExceeded");
        static const int RequestThrottled_HASH = HashingUtils::HashString("RequestThrottled");


        ReasonCode GetReasonCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InvitationAccessDenied_HASH)
          {
            return ReasonCode::InvitationAccessDenied;
          }
          else if (hashCode == InvitationValidationFailed_HASH)
          {
            return ReasonCode::InvitationValidationFailed;
          }
          else if (hashCode == EngagementAccessDenied_HASH)
          {
            return ReasonCode::EngagementAccessDenied;
          }
          else if (hashCode == OpportunityAccessDenied_HASH)
          {
            return ReasonCode::OpportunityAccessDenied;
          }
          else if (hashCode == ResourceSnapshotJobAccessDenied_HASH)
          {
            return ReasonCode::ResourceSnapshotJobAccessDenied;
          }
          else if (hashCode == ResourceSnapshotJobValidationFailed_HASH)
          {
            return ReasonCode::ResourceSnapshotJobValidationFailed;
          }
          else if (hashCode == ResourceSnapshotJobConflict_HASH)
          {
            return ReasonCode::ResourceSnapshotJobConflict;
          }
          else if (hashCode == EngagementValidationFailed_HASH)
          {
            return ReasonCode::EngagementValidationFailed;
          }
          else if (hashCode == EngagementConflict_HASH)
          {
            return ReasonCode::EngagementConflict;
          }
          else if (hashCode == OpportunitySubmissionFailed_HASH)
          {
            return ReasonCode::OpportunitySubmissionFailed;
          }
          else if (hashCode == EngagementInvitationConflict_HASH)
          {
            return ReasonCode::EngagementInvitationConflict;
          }
          else if (hashCode == InternalError_HASH)
          {
            return ReasonCode::InternalError;
          }
          else if (hashCode == OpportunityValidationFailed_HASH)
          {
            return ReasonCode::OpportunityValidationFailed;
          }
          else if (hashCode == OpportunityConflict_HASH)
          {
            return ReasonCode::OpportunityConflict;
          }
          else if (hashCode == ResourceSnapshotAccessDenied_HASH)
          {
            return ReasonCode::ResourceSnapshotAccessDenied;
          }
          else if (hashCode == ResourceSnapshotValidationFailed_HASH)
          {
            return ReasonCode::ResourceSnapshotValidationFailed;
          }
          else if (hashCode == ResourceSnapshotConflict_HASH)
          {
            return ReasonCode::ResourceSnapshotConflict;
          }
          else if (hashCode == ServiceQuotaExceeded_HASH)
          {
            return ReasonCode::ServiceQuotaExceeded;
          }
          else if (hashCode == RequestThrottled_HASH)
          {
            return ReasonCode::RequestThrottled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReasonCode>(hashCode);
          }

          return ReasonCode::NOT_SET;
        }

        Aws::String GetNameForReasonCode(ReasonCode enumValue)
        {
          switch(enumValue)
          {
          case ReasonCode::NOT_SET:
            return {};
          case ReasonCode::InvitationAccessDenied:
            return "InvitationAccessDenied";
          case ReasonCode::InvitationValidationFailed:
            return "InvitationValidationFailed";
          case ReasonCode::EngagementAccessDenied:
            return "EngagementAccessDenied";
          case ReasonCode::OpportunityAccessDenied:
            return "OpportunityAccessDenied";
          case ReasonCode::ResourceSnapshotJobAccessDenied:
            return "ResourceSnapshotJobAccessDenied";
          case ReasonCode::ResourceSnapshotJobValidationFailed:
            return "ResourceSnapshotJobValidationFailed";
          case ReasonCode::ResourceSnapshotJobConflict:
            return "ResourceSnapshotJobConflict";
          case ReasonCode::EngagementValidationFailed:
            return "EngagementValidationFailed";
          case ReasonCode::EngagementConflict:
            return "EngagementConflict";
          case ReasonCode::OpportunitySubmissionFailed:
            return "OpportunitySubmissionFailed";
          case ReasonCode::EngagementInvitationConflict:
            return "EngagementInvitationConflict";
          case ReasonCode::InternalError:
            return "InternalError";
          case ReasonCode::OpportunityValidationFailed:
            return "OpportunityValidationFailed";
          case ReasonCode::OpportunityConflict:
            return "OpportunityConflict";
          case ReasonCode::ResourceSnapshotAccessDenied:
            return "ResourceSnapshotAccessDenied";
          case ReasonCode::ResourceSnapshotValidationFailed:
            return "ResourceSnapshotValidationFailed";
          case ReasonCode::ResourceSnapshotConflict:
            return "ResourceSnapshotConflict";
          case ReasonCode::ServiceQuotaExceeded:
            return "ServiceQuotaExceeded";
          case ReasonCode::RequestThrottled:
            return "RequestThrottled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReasonCodeMapper
    } // namespace Model
  } // namespace PartnerCentralSelling
} // namespace Aws
