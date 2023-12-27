/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/AuditPolicyState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RDS
  {
    namespace Model
    {
      namespace AuditPolicyStateMapper
      {

        static const int locked_HASH = HashingUtils::HashString("locked");
        static const int unlocked_HASH = HashingUtils::HashString("unlocked");


        AuditPolicyState GetAuditPolicyStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == locked_HASH)
          {
            return AuditPolicyState::locked;
          }
          else if (hashCode == unlocked_HASH)
          {
            return AuditPolicyState::unlocked;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AuditPolicyState>(hashCode);
          }

          return AuditPolicyState::NOT_SET;
        }

        Aws::String GetNameForAuditPolicyState(AuditPolicyState enumValue)
        {
          switch(enumValue)
          {
          case AuditPolicyState::NOT_SET:
            return {};
          case AuditPolicyState::locked:
            return "locked";
          case AuditPolicyState::unlocked:
            return "unlocked";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AuditPolicyStateMapper
    } // namespace Model
  } // namespace RDS
} // namespace Aws
