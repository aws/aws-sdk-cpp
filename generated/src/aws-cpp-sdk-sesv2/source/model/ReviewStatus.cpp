/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/ReviewStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SESV2
  {
    namespace Model
    {
      namespace ReviewStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int GRANTED_HASH = HashingUtils::HashString("GRANTED");
        static const int DENIED_HASH = HashingUtils::HashString("DENIED");


        ReviewStatus GetReviewStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return ReviewStatus::PENDING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ReviewStatus::FAILED;
          }
          else if (hashCode == GRANTED_HASH)
          {
            return ReviewStatus::GRANTED;
          }
          else if (hashCode == DENIED_HASH)
          {
            return ReviewStatus::DENIED;
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
          case ReviewStatus::PENDING:
            return "PENDING";
          case ReviewStatus::FAILED:
            return "FAILED";
          case ReviewStatus::GRANTED:
            return "GRANTED";
          case ReviewStatus::DENIED:
            return "DENIED";
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
  } // namespace SESV2
} // namespace Aws
