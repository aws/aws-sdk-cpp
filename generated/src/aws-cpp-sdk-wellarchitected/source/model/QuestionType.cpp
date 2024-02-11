/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/QuestionType.h>
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
      namespace QuestionTypeMapper
      {

        static const int PRIORITIZED_HASH = HashingUtils::HashString("PRIORITIZED");
        static const int NON_PRIORITIZED_HASH = HashingUtils::HashString("NON_PRIORITIZED");


        QuestionType GetQuestionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PRIORITIZED_HASH)
          {
            return QuestionType::PRIORITIZED;
          }
          else if (hashCode == NON_PRIORITIZED_HASH)
          {
            return QuestionType::NON_PRIORITIZED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QuestionType>(hashCode);
          }

          return QuestionType::NOT_SET;
        }

        Aws::String GetNameForQuestionType(QuestionType enumValue)
        {
          switch(enumValue)
          {
          case QuestionType::NOT_SET:
            return {};
          case QuestionType::PRIORITIZED:
            return "PRIORITIZED";
          case QuestionType::NON_PRIORITIZED:
            return "NON_PRIORITIZED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace QuestionTypeMapper
    } // namespace Model
  } // namespace WellArchitected
} // namespace Aws
