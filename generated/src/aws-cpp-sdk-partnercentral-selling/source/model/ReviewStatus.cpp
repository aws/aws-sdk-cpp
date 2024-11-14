/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/ReviewStatus.h>
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
      namespace ReviewStatusMapper
      {

        static const int Pending_Submission_HASH = HashingUtils::HashString("Pending Submission");
        static const int Submitted_HASH = HashingUtils::HashString("Submitted");
        static const int In_review_HASH = HashingUtils::HashString("In review");
        static const int Approved_HASH = HashingUtils::HashString("Approved");
        static const int Rejected_HASH = HashingUtils::HashString("Rejected");
        static const int Action_Required_HASH = HashingUtils::HashString("Action Required");


        ReviewStatus GetReviewStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Pending_Submission_HASH)
          {
            return ReviewStatus::Pending_Submission;
          }
          else if (hashCode == Submitted_HASH)
          {
            return ReviewStatus::Submitted;
          }
          else if (hashCode == In_review_HASH)
          {
            return ReviewStatus::In_review;
          }
          else if (hashCode == Approved_HASH)
          {
            return ReviewStatus::Approved;
          }
          else if (hashCode == Rejected_HASH)
          {
            return ReviewStatus::Rejected;
          }
          else if (hashCode == Action_Required_HASH)
          {
            return ReviewStatus::Action_Required;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReviewStatus>(hashCode);
          }

          return ReviewStatus::NOT_SET;
        }

        Aws::String GetNameForReviewStatus(ReviewStatus enumValue)
        {
          switch(enumValue)
          {
          case ReviewStatus::NOT_SET:
            return {};
          case ReviewStatus::Pending_Submission:
            return "Pending Submission";
          case ReviewStatus::Submitted:
            return "Submitted";
          case ReviewStatus::In_review:
            return "In review";
          case ReviewStatus::Approved:
            return "Approved";
          case ReviewStatus::Rejected:
            return "Rejected";
          case ReviewStatus::Action_Required:
            return "Action Required";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReviewStatusMapper
    } // namespace Model
  } // namespace PartnerCentralSelling
} // namespace Aws
