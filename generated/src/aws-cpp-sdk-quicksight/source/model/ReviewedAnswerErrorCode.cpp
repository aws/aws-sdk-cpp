/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ReviewedAnswerErrorCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace ReviewedAnswerErrorCodeMapper
      {

        static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("INTERNAL_ERROR");
        static const int MISSING_ANSWER_HASH = HashingUtils::HashString("MISSING_ANSWER");
        static const int DATASET_DOES_NOT_EXIST_HASH = HashingUtils::HashString("DATASET_DOES_NOT_EXIST");
        static const int INVALID_DATASET_ARN_HASH = HashingUtils::HashString("INVALID_DATASET_ARN");
        static const int DUPLICATED_ANSWER_HASH = HashingUtils::HashString("DUPLICATED_ANSWER");
        static const int INVALID_DATA_HASH = HashingUtils::HashString("INVALID_DATA");
        static const int MISSING_REQUIRED_FIELDS_HASH = HashingUtils::HashString("MISSING_REQUIRED_FIELDS");


        ReviewedAnswerErrorCode GetReviewedAnswerErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INTERNAL_ERROR_HASH)
          {
            return ReviewedAnswerErrorCode::INTERNAL_ERROR;
          }
          else if (hashCode == MISSING_ANSWER_HASH)
          {
            return ReviewedAnswerErrorCode::MISSING_ANSWER;
          }
          else if (hashCode == DATASET_DOES_NOT_EXIST_HASH)
          {
            return ReviewedAnswerErrorCode::DATASET_DOES_NOT_EXIST;
          }
          else if (hashCode == INVALID_DATASET_ARN_HASH)
          {
            return ReviewedAnswerErrorCode::INVALID_DATASET_ARN;
          }
          else if (hashCode == DUPLICATED_ANSWER_HASH)
          {
            return ReviewedAnswerErrorCode::DUPLICATED_ANSWER;
          }
          else if (hashCode == INVALID_DATA_HASH)
          {
            return ReviewedAnswerErrorCode::INVALID_DATA;
          }
          else if (hashCode == MISSING_REQUIRED_FIELDS_HASH)
          {
            return ReviewedAnswerErrorCode::MISSING_REQUIRED_FIELDS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReviewedAnswerErrorCode>(hashCode);
          }

          return ReviewedAnswerErrorCode::NOT_SET;
        }

        Aws::String GetNameForReviewedAnswerErrorCode(ReviewedAnswerErrorCode enumValue)
        {
          switch(enumValue)
          {
          case ReviewedAnswerErrorCode::NOT_SET:
            return {};
          case ReviewedAnswerErrorCode::INTERNAL_ERROR:
            return "INTERNAL_ERROR";
          case ReviewedAnswerErrorCode::MISSING_ANSWER:
            return "MISSING_ANSWER";
          case ReviewedAnswerErrorCode::DATASET_DOES_NOT_EXIST:
            return "DATASET_DOES_NOT_EXIST";
          case ReviewedAnswerErrorCode::INVALID_DATASET_ARN:
            return "INVALID_DATASET_ARN";
          case ReviewedAnswerErrorCode::DUPLICATED_ANSWER:
            return "DUPLICATED_ANSWER";
          case ReviewedAnswerErrorCode::INVALID_DATA:
            return "INVALID_DATA";
          case ReviewedAnswerErrorCode::MISSING_REQUIRED_FIELDS:
            return "MISSING_REQUIRED_FIELDS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReviewedAnswerErrorCodeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
