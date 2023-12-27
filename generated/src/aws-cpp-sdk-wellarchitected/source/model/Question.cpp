/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/Question.h>
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
      namespace QuestionMapper
      {

        static const int UNANSWERED_HASH = HashingUtils::HashString("UNANSWERED");
        static const int ANSWERED_HASH = HashingUtils::HashString("ANSWERED");


        Question GetQuestionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UNANSWERED_HASH)
          {
            return Question::UNANSWERED;
          }
          else if (hashCode == ANSWERED_HASH)
          {
            return Question::ANSWERED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Question>(hashCode);
          }

          return Question::NOT_SET;
        }

        Aws::String GetNameForQuestion(Question enumValue)
        {
          switch(enumValue)
          {
          case Question::NOT_SET:
            return {};
          case Question::UNANSWERED:
            return "UNANSWERED";
          case Question::ANSWERED:
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

      } // namespace QuestionMapper
    } // namespace Model
  } // namespace WellArchitected
} // namespace Aws
