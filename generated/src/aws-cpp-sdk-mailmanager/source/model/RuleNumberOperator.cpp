/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/RuleNumberOperator.h>
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
      namespace RuleNumberOperatorMapper
      {

        static const int EQUALS_HASH = HashingUtils::HashString("EQUALS");
        static const int NOT_EQUALS_HASH = HashingUtils::HashString("NOT_EQUALS");
        static const int LESS_THAN_HASH = HashingUtils::HashString("LESS_THAN");
        static const int GREATER_THAN_HASH = HashingUtils::HashString("GREATER_THAN");
        static const int LESS_THAN_OR_EQUAL_HASH = HashingUtils::HashString("LESS_THAN_OR_EQUAL");
        static const int GREATER_THAN_OR_EQUAL_HASH = HashingUtils::HashString("GREATER_THAN_OR_EQUAL");


        RuleNumberOperator GetRuleNumberOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EQUALS_HASH)
          {
            return RuleNumberOperator::EQUALS;
          }
          else if (hashCode == NOT_EQUALS_HASH)
          {
            return RuleNumberOperator::NOT_EQUALS;
          }
          else if (hashCode == LESS_THAN_HASH)
          {
            return RuleNumberOperator::LESS_THAN;
          }
          else if (hashCode == GREATER_THAN_HASH)
          {
            return RuleNumberOperator::GREATER_THAN;
          }
          else if (hashCode == LESS_THAN_OR_EQUAL_HASH)
          {
            return RuleNumberOperator::LESS_THAN_OR_EQUAL;
          }
          else if (hashCode == GREATER_THAN_OR_EQUAL_HASH)
          {
            return RuleNumberOperator::GREATER_THAN_OR_EQUAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RuleNumberOperator>(hashCode);
          }

          return RuleNumberOperator::NOT_SET;
        }

        Aws::String GetNameForRuleNumberOperator(RuleNumberOperator enumValue)
        {
          switch(enumValue)
          {
          case RuleNumberOperator::NOT_SET:
            return {};
          case RuleNumberOperator::EQUALS:
            return "EQUALS";
          case RuleNumberOperator::NOT_EQUALS:
            return "NOT_EQUALS";
          case RuleNumberOperator::LESS_THAN:
            return "LESS_THAN";
          case RuleNumberOperator::GREATER_THAN:
            return "GREATER_THAN";
          case RuleNumberOperator::LESS_THAN_OR_EQUAL:
            return "LESS_THAN_OR_EQUAL";
          case RuleNumberOperator::GREATER_THAN_OR_EQUAL:
            return "GREATER_THAN_OR_EQUAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RuleNumberOperatorMapper
    } // namespace Model
  } // namespace MailManager
} // namespace Aws
