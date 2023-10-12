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

        static constexpr uint32_t Intended_HASH = ConstExprHashingUtils::HashString("Intended");
        static constexpr uint32_t Succeeded_HASH = ConstExprHashingUtils::HashString("Succeeded");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");
        static constexpr uint32_t Cancelled_HASH = ConstExprHashingUtils::HashString("Cancelled");


        ReviewActionStatus GetReviewActionStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case ReviewActionStatus::NOT_SET:
            return {};
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
