/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/AccessEffect.h>
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
      namespace AccessEffectMapper
      {

        static const int ALLOW_HASH = HashingUtils::HashString("ALLOW");
        static const int DENY_HASH = HashingUtils::HashString("DENY");


        AccessEffect GetAccessEffectForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALLOW_HASH)
          {
            return AccessEffect::ALLOW;
          }
          else if (hashCode == DENY_HASH)
          {
            return AccessEffect::DENY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccessEffect>(hashCode);
          }

          return AccessEffect::NOT_SET;
        }

        Aws::String GetNameForAccessEffect(AccessEffect enumValue)
        {
          switch(enumValue)
          {
          case AccessEffect::ALLOW:
            return "ALLOW";
          case AccessEffect::DENY:
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

      } // namespace AccessEffectMapper
    } // namespace Model
  } // namespace WorkMail
} // namespace Aws
