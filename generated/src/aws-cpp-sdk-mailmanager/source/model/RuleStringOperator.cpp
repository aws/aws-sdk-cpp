/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/RuleStringOperator.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MailManager
  {
    namespace Model
    {
      namespace RuleStringOperatorMapper
      {

        static const int EQUALS_HASH = HashingUtils::HashString("EQUALS");
        static const int NOT_EQUALS_HASH = HashingUtils::HashString("NOT_EQUALS");
        static const int STARTS_WITH_HASH = HashingUtils::HashString("STARTS_WITH");
        static const int ENDS_WITH_HASH = HashingUtils::HashString("ENDS_WITH");
        static const int CONTAINS_HASH = HashingUtils::HashString("CONTAINS");


        RuleStringOperator GetRuleStringOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EQUALS_HASH)
          {
            return RuleStringOperator::EQUALS;
          }
          else if (hashCode == NOT_EQUALS_HASH)
          {
            return RuleStringOperator::NOT_EQUALS;
          }
          else if (hashCode == STARTS_WITH_HASH)
          {
            return RuleStringOperator::STARTS_WITH;
          }
          else if (hashCode == ENDS_WITH_HASH)
          {
            return RuleStringOperator::ENDS_WITH;
          }
          else if (hashCode == CONTAINS_HASH)
          {
            return RuleStringOperator::CONTAINS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RuleStringOperator>(hashCode);
          }

          return RuleStringOperator::NOT_SET;
        }

        Aws::String GetNameForRuleStringOperator(RuleStringOperator enumValue)
        {
          switch(enumValue)
          {
          case RuleStringOperator::NOT_SET:
            return {};
          case RuleStringOperator::EQUALS:
            return "EQUALS";
          case RuleStringOperator::NOT_EQUALS:
            return "NOT_EQUALS";
          case RuleStringOperator::STARTS_WITH:
            return "STARTS_WITH";
          case RuleStringOperator::ENDS_WITH:
            return "ENDS_WITH";
          case RuleStringOperator::CONTAINS:
            return "CONTAINS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RuleStringOperatorMapper
    } // namespace Model
  } // namespace MailManager
} // namespace Aws
