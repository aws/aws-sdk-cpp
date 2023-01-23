/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mturk-requester/model/ReviewableHITStatus.h>
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
      namespace ReviewableHITStatusMapper
      {

        static const int Reviewable_HASH = HashingUtils::HashString("Reviewable");
        static const int Reviewing_HASH = HashingUtils::HashString("Reviewing");


        ReviewableHITStatus GetReviewableHITStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Reviewable_HASH)
          {
            return ReviewableHITStatus::Reviewable;
          }
          else if (hashCode == Reviewing_HASH)
          {
            return ReviewableHITStatus::Reviewing;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReviewableHITStatus>(hashCode);
          }

          return ReviewableHITStatus::NOT_SET;
        }

        Aws::String GetNameForReviewableHITStatus(ReviewableHITStatus enumValue)
        {
          switch(enumValue)
          {
          case ReviewableHITStatus::Reviewable:
            return "Reviewable";
          case ReviewableHITStatus::Reviewing:
            return "Reviewing";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReviewableHITStatusMapper
    } // namespace Model
  } // namespace MTurk
} // namespace Aws
