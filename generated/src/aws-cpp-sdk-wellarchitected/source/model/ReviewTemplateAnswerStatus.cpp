/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/ReviewTemplateAnswerStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WellArchitected
  {
    namespace Model
    {
      namespace ReviewTemplateAnswerStatusMapper
      {

        static const int UNANSWERED_HASH = HashingUtils::HashString("UNANSWERED");
        static const int ANSWERED_HASH = HashingUtils::HashString("ANSWERED");


        ReviewTemplateAnswerStatus GetReviewTemplateAnswerStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UNANSWERED_HASH)
          {
            return ReviewTemplateAnswerStatus::UNANSWERED;
          }
          else if (hashCode == ANSWERED_HASH)
          {
            return ReviewTemplateAnswerStatus::ANSWERED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReviewTemplateAnswerStatus>(hashCode);
          }

          return ReviewTemplateAnswerStatus::NOT_SET;
        }

        Aws::String GetNameForReviewTemplateAnswerStatus(ReviewTemplateAnswerStatus enumValue)
        {
          switch(enumValue)
          {
          case ReviewTemplateAnswerStatus::NOT_SET:
            return {};
          case ReviewTemplateAnswerStatus::UNANSWERED:
            return "UNANSWERED";
          case ReviewTemplateAnswerStatus::ANSWERED:
            return "ANSWERED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReviewTemplateAnswerStatusMapper
    } // namespace Model
  } // namespace WellArchitected
} // namespace Aws
