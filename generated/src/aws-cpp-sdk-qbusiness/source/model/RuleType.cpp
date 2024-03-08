/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/RuleType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QBusiness
  {
    namespace Model
    {
      namespace RuleTypeMapper
      {

        static const int CONTENT_BLOCKER_RULE_HASH = HashingUtils::HashString("CONTENT_BLOCKER_RULE");
        static const int CONTENT_RETRIEVAL_RULE_HASH = HashingUtils::HashString("CONTENT_RETRIEVAL_RULE");


        RuleType GetRuleTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CONTENT_BLOCKER_RULE_HASH)
          {
            return RuleType::CONTENT_BLOCKER_RULE;
          }
          else if (hashCode == CONTENT_RETRIEVAL_RULE_HASH)
          {
            return RuleType::CONTENT_RETRIEVAL_RULE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RuleType>(hashCode);
          }

          return RuleType::NOT_SET;
        }

        Aws::String GetNameForRuleType(RuleType enumValue)
        {
          switch(enumValue)
          {
          case RuleType::NOT_SET:
            return {};
          case RuleType::CONTENT_BLOCKER_RULE:
            return "CONTENT_BLOCKER_RULE";
          case RuleType::CONTENT_RETRIEVAL_RULE:
            return "CONTENT_RETRIEVAL_RULE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RuleTypeMapper
    } // namespace Model
  } // namespace QBusiness
} // namespace Aws
