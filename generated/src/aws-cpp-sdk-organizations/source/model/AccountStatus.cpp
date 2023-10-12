/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/organizations/model/AccountStatus.h>
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
      namespace AccountStatusMapper
      {

        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t SUSPENDED_HASH = ConstExprHashingUtils::HashString("SUSPENDED");
        static constexpr uint32_t PENDING_CLOSURE_HASH = ConstExprHashingUtils::HashString("PENDING_CLOSURE");


        AccountStatus GetAccountStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return AccountStatus::ACTIVE;
          }
          else if (hashCode == SUSPENDED_HASH)
          {
            return AccountStatus::SUSPENDED;
          }
          else if (hashCode == PENDING_CLOSURE_HASH)
          {
            return AccountStatus::PENDING_CLOSURE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccountStatus>(hashCode);
          }

          return AccountStatus::NOT_SET;
        }

        Aws::String GetNameForAccountStatus(AccountStatus enumValue)
        {
          switch(enumValue)
          {
          case AccountStatus::NOT_SET:
            return {};
          case AccountStatus::ACTIVE:
            return "ACTIVE";
          case AccountStatus::SUSPENDED:
            return "SUSPENDED";
          case AccountStatus::PENDING_CLOSURE:
            return "PENDING_CLOSURE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AccountStatusMapper
    } // namespace Model
  } // namespace Organizations
} // namespace Aws
