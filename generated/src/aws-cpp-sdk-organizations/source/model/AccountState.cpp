/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/organizations/model/AccountState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Organizations
  {
    namespace Model
    {
      namespace AccountStateMapper
      {

        static const int PENDING_ACTIVATION_HASH = HashingUtils::HashString("PENDING_ACTIVATION");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int SUSPENDED_HASH = HashingUtils::HashString("SUSPENDED");
        static const int PENDING_CLOSURE_HASH = HashingUtils::HashString("PENDING_CLOSURE");
        static const int CLOSED_HASH = HashingUtils::HashString("CLOSED");


        AccountState GetAccountStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_ACTIVATION_HASH)
          {
            return AccountState::PENDING_ACTIVATION;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return AccountState::ACTIVE;
          }
          else if (hashCode == SUSPENDED_HASH)
          {
            return AccountState::SUSPENDED;
          }
          else if (hashCode == PENDING_CLOSURE_HASH)
          {
            return AccountState::PENDING_CLOSURE;
          }
          else if (hashCode == CLOSED_HASH)
          {
            return AccountState::CLOSED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccountState>(hashCode);
          }

          return AccountState::NOT_SET;
        }

        Aws::String GetNameForAccountState(AccountState enumValue)
        {
          switch(enumValue)
          {
          case AccountState::NOT_SET:
            return {};
          case AccountState::PENDING_ACTIVATION:
            return "PENDING_ACTIVATION";
          case AccountState::ACTIVE:
            return "ACTIVE";
          case AccountState::SUSPENDED:
            return "SUSPENDED";
          case AccountState::PENDING_CLOSURE:
            return "PENDING_CLOSURE";
          case AccountState::CLOSED:
            return "CLOSED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AccountStateMapper
    } // namespace Model
  } // namespace Organizations
} // namespace Aws
