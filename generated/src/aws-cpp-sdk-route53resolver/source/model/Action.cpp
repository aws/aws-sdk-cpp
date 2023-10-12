/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/Action.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Route53Resolver
  {
    namespace Model
    {
      namespace ActionMapper
      {

        static constexpr uint32_t ALLOW_HASH = ConstExprHashingUtils::HashString("ALLOW");
        static constexpr uint32_t BLOCK_HASH = ConstExprHashingUtils::HashString("BLOCK");
        static constexpr uint32_t ALERT_HASH = ConstExprHashingUtils::HashString("ALERT");


        Action GetActionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALLOW_HASH)
          {
            return Action::ALLOW;
          }
          else if (hashCode == BLOCK_HASH)
          {
            return Action::BLOCK;
          }
          else if (hashCode == ALERT_HASH)
          {
            return Action::ALERT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Action>(hashCode);
          }

          return Action::NOT_SET;
        }

        Aws::String GetNameForAction(Action enumValue)
        {
          switch(enumValue)
          {
          case Action::NOT_SET:
            return {};
          case Action::ALLOW:
            return "ALLOW";
          case Action::BLOCK:
            return "BLOCK";
          case Action::ALERT:
            return "ALERT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ActionMapper
    } // namespace Model
  } // namespace Route53Resolver
} // namespace Aws
