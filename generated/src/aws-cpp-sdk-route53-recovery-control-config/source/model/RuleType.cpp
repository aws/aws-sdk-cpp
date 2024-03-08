/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-control-config/model/RuleType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Route53RecoveryControlConfig
  {
    namespace Model
    {
      namespace RuleTypeMapper
      {

        static const int ATLEAST_HASH = HashingUtils::HashString("ATLEAST");
        static const int AND_HASH = HashingUtils::HashString("AND");
        static const int OR_HASH = HashingUtils::HashString("OR");


        RuleType GetRuleTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ATLEAST_HASH)
          {
            return RuleType::ATLEAST;
          }
          else if (hashCode == AND_HASH)
          {
            return RuleType::AND;
          }
          else if (hashCode == OR_HASH)
          {
            return RuleType::OR;
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
          case RuleType::ATLEAST:
            return "ATLEAST";
          case RuleType::AND:
            return "AND";
          case RuleType::OR:
            return "OR";
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
  } // namespace Route53RecoveryControlConfig
} // namespace Aws
