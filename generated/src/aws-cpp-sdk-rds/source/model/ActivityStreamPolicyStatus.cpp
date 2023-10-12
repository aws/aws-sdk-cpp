/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/ActivityStreamPolicyStatus.h>
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
      namespace ActivityStreamPolicyStatusMapper
      {

        static constexpr uint32_t locked_HASH = ConstExprHashingUtils::HashString("locked");
        static constexpr uint32_t unlocked_HASH = ConstExprHashingUtils::HashString("unlocked");
        static constexpr uint32_t locking_policy_HASH = ConstExprHashingUtils::HashString("locking-policy");
        static constexpr uint32_t unlocking_policy_HASH = ConstExprHashingUtils::HashString("unlocking-policy");


        ActivityStreamPolicyStatus GetActivityStreamPolicyStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == locked_HASH)
          {
            return ActivityStreamPolicyStatus::locked;
          }
          else if (hashCode == unlocked_HASH)
          {
            return ActivityStreamPolicyStatus::unlocked;
          }
          else if (hashCode == locking_policy_HASH)
          {
            return ActivityStreamPolicyStatus::locking_policy;
          }
          else if (hashCode == unlocking_policy_HASH)
          {
            return ActivityStreamPolicyStatus::unlocking_policy;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ActivityStreamPolicyStatus>(hashCode);
          }

          return ActivityStreamPolicyStatus::NOT_SET;
        }

        Aws::String GetNameForActivityStreamPolicyStatus(ActivityStreamPolicyStatus enumValue)
        {
          switch(enumValue)
          {
          case ActivityStreamPolicyStatus::NOT_SET:
            return {};
          case ActivityStreamPolicyStatus::locked:
            return "locked";
          case ActivityStreamPolicyStatus::unlocked:
            return "unlocked";
          case ActivityStreamPolicyStatus::locking_policy:
            return "locking-policy";
          case ActivityStreamPolicyStatus::unlocking_policy:
            return "unlocking-policy";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ActivityStreamPolicyStatusMapper
    } // namespace Model
  } // namespace RDS
} // namespace Aws
