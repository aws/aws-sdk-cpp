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

        static const int OUT_OF_SCOPE_HASH = HashingUtils::HashString("OUT_OF_SCOPE");
        static const int BUSINESS_PRIORITIES_HASH = HashingUtils::HashString("BUSINESS_PRIORITIES");
        static const int ARCHITECTURE_CONSTRAINTS_HASH = HashingUtils::HashString("ARCHITECTURE_CONSTRAINTS");
        static const int OTHER_HASH = HashingUtils::HashString("OTHER");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        AnswerReason GetAnswerReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
