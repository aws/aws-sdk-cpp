/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/QuestionPriority.h>
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
      namespace QuestionPriorityMapper
      {

        static const int PRIORITIZED_HASH = HashingUtils::HashString("PRIORITIZED");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        QuestionPriority GetQuestionPriorityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PRIORITIZED_HASH)
          {
            return QuestionPriority::PRIORITIZED;
          }
          else if (hashCode == NONE_HASH)
          {
            return QuestionPriority::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QuestionPriority>(hashCode);
          }

          return QuestionPriority::NOT_SET;
        }

        Aws::String GetNameForQuestionPriority(QuestionPriority enumValue)
        {
          switch(enumValue)
          {
          case QuestionPriority::NOT_SET:
            return {};
          case QuestionPriority::PRIORITIZED:
            return "PRIORITIZED";
          case QuestionPriority::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace QuestionPriorityMapper
    } // namespace Model
  } // namespace WellArchitected
} // namespace Aws
