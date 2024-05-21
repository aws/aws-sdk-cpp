/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/RuleBooleanOperator.h>
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
      namespace RuleBooleanOperatorMapper
      {

        static const int IS_TRUE_HASH = HashingUtils::HashString("IS_TRUE");
        static const int IS_FALSE_HASH = HashingUtils::HashString("IS_FALSE");


        RuleBooleanOperator GetRuleBooleanOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IS_TRUE_HASH)
          {
            return RuleBooleanOperator::IS_TRUE;
          }
          else if (hashCode == IS_FALSE_HASH)
          {
            return RuleBooleanOperator::IS_FALSE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RuleBooleanOperator>(hashCode);
          }

          return RuleBooleanOperator::NOT_SET;
        }

        Aws::String GetNameForRuleBooleanOperator(RuleBooleanOperator enumValue)
        {
          switch(enumValue)
          {
          case RuleBooleanOperator::NOT_SET:
            return {};
          case RuleBooleanOperator::IS_TRUE:
            return "IS_TRUE";
          case RuleBooleanOperator::IS_FALSE:
            return "IS_FALSE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RuleBooleanOperatorMapper
    } // namespace Model
  } // namespace MailManager
} // namespace Aws
