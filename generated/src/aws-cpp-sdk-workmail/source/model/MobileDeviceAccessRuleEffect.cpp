/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/MobileDeviceAccessRuleEffect.h>
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
      namespace MobileDeviceAccessRuleEffectMapper
      {

        static const int ALLOW_HASH = HashingUtils::HashString("ALLOW");
        static const int DENY_HASH = HashingUtils::HashString("DENY");


        MobileDeviceAccessRuleEffect GetMobileDeviceAccessRuleEffectForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALLOW_HASH)
          {
            return MobileDeviceAccessRuleEffect::ALLOW;
          }
          else if (hashCode == DENY_HASH)
          {
            return MobileDeviceAccessRuleEffect::DENY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MobileDeviceAccessRuleEffect>(hashCode);
          }

          return MobileDeviceAccessRuleEffect::NOT_SET;
        }

        Aws::String GetNameForMobileDeviceAccessRuleEffect(MobileDeviceAccessRuleEffect enumValue)
        {
          switch(enumValue)
          {
          case MobileDeviceAccessRuleEffect::NOT_SET:
            return {};
          case MobileDeviceAccessRuleEffect::ALLOW:
            return "ALLOW";
          case MobileDeviceAccessRuleEffect::DENY:
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

      } // namespace MobileDeviceAccessRuleEffectMapper
    } // namespace Model
  } // namespace WorkMail
} // namespace Aws
