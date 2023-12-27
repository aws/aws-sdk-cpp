/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/model/SsmTargetAccount.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSMIncidents
  {
    namespace Model
    {
      namespace SsmTargetAccountMapper
      {

        static const int RESPONSE_PLAN_OWNER_ACCOUNT_HASH = HashingUtils::HashString("RESPONSE_PLAN_OWNER_ACCOUNT");
        static const int IMPACTED_ACCOUNT_HASH = HashingUtils::HashString("IMPACTED_ACCOUNT");


        SsmTargetAccount GetSsmTargetAccountForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RESPONSE_PLAN_OWNER_ACCOUNT_HASH)
          {
            return SsmTargetAccount::RESPONSE_PLAN_OWNER_ACCOUNT;
          }
          else if (hashCode == IMPACTED_ACCOUNT_HASH)
          {
            return SsmTargetAccount::IMPACTED_ACCOUNT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SsmTargetAccount>(hashCode);
          }

          return SsmTargetAccount::NOT_SET;
        }

        Aws::String GetNameForSsmTargetAccount(SsmTargetAccount enumValue)
        {
          switch(enumValue)
          {
          case SsmTargetAccount::NOT_SET:
            return {};
          case SsmTargetAccount::RESPONSE_PLAN_OWNER_ACCOUNT:
            return "RESPONSE_PLAN_OWNER_ACCOUNT";
          case SsmTargetAccount::IMPACTED_ACCOUNT:
            return "IMPACTED_ACCOUNT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SsmTargetAccountMapper
    } // namespace Model
  } // namespace SSMIncidents
} // namespace Aws
