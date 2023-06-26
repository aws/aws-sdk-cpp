/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rbin/model/LockState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RecycleBin
  {
    namespace Model
    {
      namespace LockStateMapper
      {

        static const int locked_HASH = HashingUtils::HashString("locked");
        static const int pending_unlock_HASH = HashingUtils::HashString("pending_unlock");
        static const int unlocked_HASH = HashingUtils::HashString("unlocked");


        LockState GetLockStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == locked_HASH)
          {
            return LockState::locked;
          }
          else if (hashCode == pending_unlock_HASH)
          {
            return LockState::pending_unlock;
          }
          else if (hashCode == unlocked_HASH)
          {
            return LockState::unlocked;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LockState>(hashCode);
          }

          return LockState::NOT_SET;
        }

        Aws::String GetNameForLockState(LockState enumValue)
        {
          switch(enumValue)
          {
          case LockState::locked:
            return "locked";
          case LockState::pending_unlock:
            return "pending_unlock";
          case LockState::unlocked:
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

      } // namespace LockStateMapper
    } // namespace Model
  } // namespace RecycleBin
} // namespace Aws
