/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/ReviewStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace ReviewStatusMapper
      {

        static const int APPROVED_HASH = HashingUtils::HashString("APPROVED");
        static const int NOT_REVIEWED_HASH = HashingUtils::HashString("NOT_REVIEWED");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");


        ReviewStatus GetReviewStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == APPROVED_HASH)
          {
            return ReviewStatus::APPROVED;
          }
          else if (hashCode == NOT_REVIEWED_HASH)
          {
            return ReviewStatus::NOT_REVIEWED;
          }
          else if (hashCode == PENDING_HASH)
          {
            return ReviewStatus::PENDING;
          }
          else if (hashCode == REJECTED_HASH)
          {
            return ReviewStatus::REJECTED;
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
          case ReviewStatus::APPROVED:
            return "APPROVED";
          case ReviewStatus::NOT_REVIEWED:
            return "NOT_REVIEWED";
          case ReviewStatus::PENDING:
            return "PENDING";
          case ReviewStatus::REJECTED:
            return "REJECTED";
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
  } // namespace SSM
} // namespace Aws
