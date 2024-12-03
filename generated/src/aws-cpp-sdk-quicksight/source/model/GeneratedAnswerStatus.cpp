/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GeneratedAnswerStatus.h>
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
      namespace GeneratedAnswerStatusMapper
      {

        static const int ANSWER_GENERATED_HASH = HashingUtils::HashString("ANSWER_GENERATED");
        static const int ANSWER_RETRIEVED_HASH = HashingUtils::HashString("ANSWER_RETRIEVED");
        static const int ANSWER_DOWNGRADE_HASH = HashingUtils::HashString("ANSWER_DOWNGRADE");


        GeneratedAnswerStatus GetGeneratedAnswerStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ANSWER_GENERATED_HASH)
          {
            return GeneratedAnswerStatus::ANSWER_GENERATED;
          }
          else if (hashCode == ANSWER_RETRIEVED_HASH)
          {
            return GeneratedAnswerStatus::ANSWER_RETRIEVED;
          }
          else if (hashCode == ANSWER_DOWNGRADE_HASH)
          {
            return GeneratedAnswerStatus::ANSWER_DOWNGRADE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GeneratedAnswerStatus>(hashCode);
          }

          return GeneratedAnswerStatus::NOT_SET;
        }

        Aws::String GetNameForGeneratedAnswerStatus(GeneratedAnswerStatus enumValue)
        {
          switch(enumValue)
          {
          case GeneratedAnswerStatus::NOT_SET:
            return {};
          case GeneratedAnswerStatus::ANSWER_GENERATED:
            return "ANSWER_GENERATED";
          case GeneratedAnswerStatus::ANSWER_RETRIEVED:
            return "ANSWER_RETRIEVED";
          case GeneratedAnswerStatus::ANSWER_DOWNGRADE:
            return "ANSWER_DOWNGRADE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GeneratedAnswerStatusMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
