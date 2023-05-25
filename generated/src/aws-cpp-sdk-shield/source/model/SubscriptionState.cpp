/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/shield/model/SubscriptionState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Shield
  {
    namespace Model
    {
      namespace SubscriptionStateMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");


        SubscriptionState GetSubscriptionStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return SubscriptionState::ACTIVE;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return SubscriptionState::INACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SubscriptionState>(hashCode);
          }

          return SubscriptionState::NOT_SET;
        }

        Aws::String GetNameForSubscriptionState(SubscriptionState enumValue)
        {
          switch(enumValue)
          {
          case SubscriptionState::ACTIVE:
            return "ACTIVE";
          case SubscriptionState::INACTIVE:
            return "INACTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SubscriptionStateMapper
    } // namespace Model
  } // namespace Shield
} // namespace Aws
