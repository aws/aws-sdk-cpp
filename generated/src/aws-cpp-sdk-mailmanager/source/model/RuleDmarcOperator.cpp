/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/RuleDmarcOperator.h>
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
      namespace RuleDmarcOperatorMapper
      {

        static const int EQUALS_HASH = HashingUtils::HashString("EQUALS");
        static const int NOT_EQUALS_HASH = HashingUtils::HashString("NOT_EQUALS");


        RuleDmarcOperator GetRuleDmarcOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EQUALS_HASH)
          {
            return RuleDmarcOperator::EQUALS;
          }
          else if (hashCode == NOT_EQUALS_HASH)
          {
            return RuleDmarcOperator::NOT_EQUALS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RuleDmarcOperator>(hashCode);
          }

          return RuleDmarcOperator::NOT_SET;
        }

        Aws::String GetNameForRuleDmarcOperator(RuleDmarcOperator enumValue)
        {
          switch(enumValue)
          {
          case RuleDmarcOperator::NOT_SET:
            return {};
          case RuleDmarcOperator::EQUALS:
            return "EQUALS";
          case RuleDmarcOperator::NOT_EQUALS:
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

      } // namespace RuleDmarcOperatorMapper
    } // namespace Model
  } // namespace MailManager
} // namespace Aws
