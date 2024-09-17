/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/AccountLinkStatusEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpaces
  {
    namespace Model
    {
      namespace AccountLinkStatusEnumMapper
      {

        static const int LINKED_HASH = HashingUtils::HashString("LINKED");
        static const int LINKING_FAILED_HASH = HashingUtils::HashString("LINKING_FAILED");
        static const int LINK_NOT_FOUND_HASH = HashingUtils::HashString("LINK_NOT_FOUND");
        static const int PENDING_ACCEPTANCE_BY_TARGET_ACCOUNT_HASH = HashingUtils::HashString("PENDING_ACCEPTANCE_BY_TARGET_ACCOUNT");
        static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");


        AccountLinkStatusEnum GetAccountLinkStatusEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LINKED_HASH)
          {
            return AccountLinkStatusEnum::LINKED;
          }
          else if (hashCode == LINKING_FAILED_HASH)
          {
            return AccountLinkStatusEnum::LINKING_FAILED;
          }
          else if (hashCode == LINK_NOT_FOUND_HASH)
          {
            return AccountLinkStatusEnum::LINK_NOT_FOUND;
          }
          else if (hashCode == PENDING_ACCEPTANCE_BY_TARGET_ACCOUNT_HASH)
          {
            return AccountLinkStatusEnum::PENDING_ACCEPTANCE_BY_TARGET_ACCOUNT;
          }
          else if (hashCode == REJECTED_HASH)
          {
            return AccountLinkStatusEnum::REJECTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccountLinkStatusEnum>(hashCode);
          }

          return AccountLinkStatusEnum::NOT_SET;
        }

        Aws::String GetNameForAccountLinkStatusEnum(AccountLinkStatusEnum enumValue)
        {
          switch(enumValue)
          {
          case AccountLinkStatusEnum::NOT_SET:
            return {};
          case AccountLinkStatusEnum::LINKED:
            return "LINKED";
          case AccountLinkStatusEnum::LINKING_FAILED:
            return "LINKING_FAILED";
          case AccountLinkStatusEnum::LINK_NOT_FOUND:
            return "LINK_NOT_FOUND";
          case AccountLinkStatusEnum::PENDING_ACCEPTANCE_BY_TARGET_ACCOUNT:
            return "PENDING_ACCEPTANCE_BY_TARGET_ACCOUNT";
          case AccountLinkStatusEnum::REJECTED:
            return "REJECTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AccountLinkStatusEnumMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
