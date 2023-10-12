/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snow-device-management/model/UnlockState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SnowDeviceManagement
  {
    namespace Model
    {
      namespace UnlockStateMapper
      {

        static constexpr uint32_t UNLOCKED_HASH = ConstExprHashingUtils::HashString("UNLOCKED");
        static constexpr uint32_t LOCKED_HASH = ConstExprHashingUtils::HashString("LOCKED");
        static constexpr uint32_t UNLOCKING_HASH = ConstExprHashingUtils::HashString("UNLOCKING");


        UnlockState GetUnlockStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UNLOCKED_HASH)
          {
            return UnlockState::UNLOCKED;
          }
          else if (hashCode == LOCKED_HASH)
          {
            return UnlockState::LOCKED;
          }
          else if (hashCode == UNLOCKING_HASH)
          {
            return UnlockState::UNLOCKING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UnlockState>(hashCode);
          }

          return UnlockState::NOT_SET;
        }

        Aws::String GetNameForUnlockState(UnlockState enumValue)
        {
          switch(enumValue)
          {
          case UnlockState::NOT_SET:
            return {};
          case UnlockState::UNLOCKED:
            return "UNLOCKED";
          case UnlockState::LOCKED:
            return "LOCKED";
          case UnlockState::UNLOCKING:
            return "UNLOCKING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UnlockStateMapper
    } // namespace Model
  } // namespace SnowDeviceManagement
} // namespace Aws
