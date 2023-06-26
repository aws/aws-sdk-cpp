/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/AccessControlRuleEffect.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkMail
  {
    namespace Model
    {
      namespace AccessControlRuleEffectMapper
      {

        static const int ALLOW_HASH = HashingUtils::HashString("ALLOW");
        static const int DENY_HASH = HashingUtils::HashString("DENY");


        AccessControlRuleEffect GetAccessControlRuleEffectForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALLOW_HASH)
          {
            return AccessControlRuleEffect::ALLOW;
          }
          else if (hashCode == DENY_HASH)
          {
            return AccessControlRuleEffect::DENY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccessControlRuleEffect>(hashCode);
          }

          return AccessControlRuleEffect::NOT_SET;
        }

        Aws::String GetNameForAccessControlRuleEffect(AccessControlRuleEffect enumValue)
        {
          switch(enumValue)
          {
          case AccessControlRuleEffect::ALLOW:
            return "ALLOW";
          case AccessControlRuleEffect::DENY:
            return "DENY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AccessControlRuleEffectMapper
    } // namespace Model
  } // namespace WorkMail
} // namespace Aws
