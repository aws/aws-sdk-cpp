/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mturk-requester/model/ReviewActionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MTurk
  {
    namespace Model
    {
      namespace ReviewActionStatusMapper
      {

        static const int Intended_HASH = HashingUtils::HashString("Intended");
        static const int Succeeded_HASH = HashingUtils::HashString("Succeeded");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Cancelled_HASH = HashingUtils::HashString("Cancelled");


        ReviewActionStatus GetReviewActionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Intended_HASH)
          {
            return ReviewActionStatus::Intended;
          }
          else if (hashCode == Succeeded_HASH)
          {
            return ReviewActionStatus::Succeeded;
          }
          else if (hashCode == Failed_HASH)
          {
            return ReviewActionStatus::Failed;
          }
          else if (hashCode == Cancelled_HASH)
          {
            return ReviewActionStatus::Cancelled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReviewActionStatus>(hashCode);
          }

          return ReviewActionStatus::NOT_SET;
        }

        Aws::String GetNameForReviewActionStatus(ReviewActionStatus enumValue)
        {
          switch(enumValue)
          {
          case ReviewActionStatus::Intended:
            return "Intended";
          case ReviewActionStatus::Succeeded:
            return "Succeeded";
          case ReviewActionStatus::Failed:
            return "Failed";
          case ReviewActionStatus::Cancelled:
            return "Cancelled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReviewActionStatusMapper
    } // namespace Model
  } // namespace MTurk
} // namespace Aws
