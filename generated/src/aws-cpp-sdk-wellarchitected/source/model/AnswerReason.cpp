/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/AnswerReason.h>
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
      namespace AnswerReasonMapper
      {

        static constexpr uint32_t OUT_OF_SCOPE_HASH = ConstExprHashingUtils::HashString("OUT_OF_SCOPE");
        static constexpr uint32_t BUSINESS_PRIORITIES_HASH = ConstExprHashingUtils::HashString("BUSINESS_PRIORITIES");
        static constexpr uint32_t ARCHITECTURE_CONSTRAINTS_HASH = ConstExprHashingUtils::HashString("ARCHITECTURE_CONSTRAINTS");
        static constexpr uint32_t OTHER_HASH = ConstExprHashingUtils::HashString("OTHER");
        static constexpr uint32_t NONE_HASH = ConstExprHashingUtils::HashString("NONE");


        AnswerReason GetAnswerReasonForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OUT_OF_SCOPE_HASH)
          {
            return AnswerReason::OUT_OF_SCOPE;
          }
          else if (hashCode == BUSINESS_PRIORITIES_HASH)
          {
            return AnswerReason::BUSINESS_PRIORITIES;
          }
          else if (hashCode == ARCHITECTURE_CONSTRAINTS_HASH)
          {
            return AnswerReason::ARCHITECTURE_CONSTRAINTS;
          }
          else if (hashCode == OTHER_HASH)
          {
            return AnswerReason::OTHER;
          }
          else if (hashCode == NONE_HASH)
          {
            return AnswerReason::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AnswerReason>(hashCode);
          }

          return AnswerReason::NOT_SET;
        }

        Aws::String GetNameForAnswerReason(AnswerReason enumValue)
        {
          switch(enumValue)
          {
          case AnswerReason::NOT_SET:
            return {};
          case AnswerReason::OUT_OF_SCOPE:
            return "OUT_OF_SCOPE";
          case AnswerReason::BUSINESS_PRIORITIES:
            return "BUSINESS_PRIORITIES";
          case AnswerReason::ARCHITECTURE_CONSTRAINTS:
            return "ARCHITECTURE_CONSTRAINTS";
          case AnswerReason::OTHER:
            return "OTHER";
          case AnswerReason::NONE:
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

      } // namespace AnswerReasonMapper
    } // namespace Model
  } // namespace WellArchitected
} // namespace Aws
