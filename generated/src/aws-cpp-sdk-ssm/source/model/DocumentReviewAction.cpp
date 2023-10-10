/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/DocumentReviewAction.h>
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
      namespace DocumentReviewActionMapper
      {

        static const int SendForReview_HASH = HashingUtils::HashString("SendForReview");
        static const int UpdateReview_HASH = HashingUtils::HashString("UpdateReview");
        static const int Approve_HASH = HashingUtils::HashString("Approve");
        static const int Reject_HASH = HashingUtils::HashString("Reject");


        DocumentReviewAction GetDocumentReviewActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SendForReview_HASH)
          {
            return DocumentReviewAction::SendForReview;
          }
          else if (hashCode == UpdateReview_HASH)
          {
            return DocumentReviewAction::UpdateReview;
          }
          else if (hashCode == Approve_HASH)
          {
            return DocumentReviewAction::Approve;
          }
          else if (hashCode == Reject_HASH)
          {
            return DocumentReviewAction::Reject;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DocumentReviewAction>(hashCode);
          }

          return DocumentReviewAction::NOT_SET;
        }

        Aws::String GetNameForDocumentReviewAction(DocumentReviewAction enumValue)
        {
          switch(enumValue)
          {
          case DocumentReviewAction::NOT_SET:
            return {};
          case DocumentReviewAction::SendForReview:
            return "SendForReview";
          case DocumentReviewAction::UpdateReview:
            return "UpdateReview";
          case DocumentReviewAction::Approve:
            return "Approve";
          case DocumentReviewAction::Reject:
            return "Reject";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DocumentReviewActionMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
