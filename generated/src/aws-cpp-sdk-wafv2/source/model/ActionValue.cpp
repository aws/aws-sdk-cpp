/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/ActionValue.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WAFV2
  {
    namespace Model
    {
      namespace ActionValueMapper
      {

        static const int ALLOW_HASH = HashingUtils::HashString("ALLOW");
        static const int BLOCK_HASH = HashingUtils::HashString("BLOCK");
        static const int COUNT_HASH = HashingUtils::HashString("COUNT");
        static const int CAPTCHA_HASH = HashingUtils::HashString("CAPTCHA");
        static const int CHALLENGE_HASH = HashingUtils::HashString("CHALLENGE");
        static const int EXCLUDED_AS_COUNT_HASH = HashingUtils::HashString("EXCLUDED_AS_COUNT");


        ActionValue GetActionValueForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALLOW_HASH)
          {
            return ActionValue::ALLOW;
          }
          else if (hashCode == BLOCK_HASH)
          {
            return ActionValue::BLOCK;
          }
          else if (hashCode == COUNT_HASH)
          {
            return ActionValue::COUNT;
          }
          else if (hashCode == CAPTCHA_HASH)
          {
            return ActionValue::CAPTCHA;
          }
          else if (hashCode == CHALLENGE_HASH)
          {
            return ActionValue::CHALLENGE;
          }
          else if (hashCode == EXCLUDED_AS_COUNT_HASH)
          {
            return ActionValue::EXCLUDED_AS_COUNT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ActionValue>(hashCode);
          }

          return ActionValue::NOT_SET;
        }

        Aws::String GetNameForActionValue(ActionValue enumValue)
        {
          switch(enumValue)
          {
          case ActionValue::ALLOW:
            return "ALLOW";
          case ActionValue::BLOCK:
            return "BLOCK";
          case ActionValue::COUNT:
            return "COUNT";
          case ActionValue::CAPTCHA:
            return "CAPTCHA";
          case ActionValue::CHALLENGE:
            return "CHALLENGE";
          case ActionValue::EXCLUDED_AS_COUNT:
            return "EXCLUDED_AS_COUNT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ActionValueMapper
    } // namespace Model
  } // namespace WAFV2
} // namespace Aws
