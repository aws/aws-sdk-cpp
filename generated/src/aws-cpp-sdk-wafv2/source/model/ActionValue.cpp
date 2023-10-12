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

        static constexpr uint32_t ALLOW_HASH = ConstExprHashingUtils::HashString("ALLOW");
        static constexpr uint32_t BLOCK_HASH = ConstExprHashingUtils::HashString("BLOCK");
        static constexpr uint32_t COUNT_HASH = ConstExprHashingUtils::HashString("COUNT");
        static constexpr uint32_t CAPTCHA_HASH = ConstExprHashingUtils::HashString("CAPTCHA");
        static constexpr uint32_t CHALLENGE_HASH = ConstExprHashingUtils::HashString("CHALLENGE");
        static constexpr uint32_t EXCLUDED_AS_COUNT_HASH = ConstExprHashingUtils::HashString("EXCLUDED_AS_COUNT");


        ActionValue GetActionValueForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case ActionValue::NOT_SET:
            return {};
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
