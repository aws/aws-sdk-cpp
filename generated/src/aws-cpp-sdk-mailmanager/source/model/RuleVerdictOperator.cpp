/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/RuleVerdictOperator.h>
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
      namespace RuleVerdictOperatorMapper
      {

        static const int EQUALS_HASH = HashingUtils::HashString("EQUALS");
        static const int NOT_EQUALS_HASH = HashingUtils::HashString("NOT_EQUALS");


        RuleVerdictOperator GetRuleVerdictOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EQUALS_HASH)
          {
            return RuleVerdictOperator::EQUALS;
          }
          else if (hashCode == NOT_EQUALS_HASH)
          {
            return RuleVerdictOperator::NOT_EQUALS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RuleVerdictOperator>(hashCode);
          }

          return RuleVerdictOperator::NOT_SET;
        }

        Aws::String GetNameForRuleVerdictOperator(RuleVerdictOperator enumValue)
        {
          switch(enumValue)
          {
          case RuleVerdictOperator::NOT_SET:
            return {};
          case RuleVerdictOperator::EQUALS:
            return "EQUALS";
          case RuleVerdictOperator::NOT_EQUALS:
            return "NOT_EQUALS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RuleVerdictOperatorMapper
    } // namespace Model
  } // namespace MailManager
} // namespace Aws
