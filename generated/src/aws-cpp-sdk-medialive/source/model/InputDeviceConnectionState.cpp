/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/InputDeviceConnectionState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace InputDeviceConnectionStateMapper
      {

        static constexpr uint32_t DISCONNECTED_HASH = ConstExprHashingUtils::HashString("DISCONNECTED");
        static constexpr uint32_t CONNECTED_HASH = ConstExprHashingUtils::HashString("CONNECTED");


        InputDeviceConnectionState GetInputDeviceConnectionStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISCONNECTED_HASH)
          {
            return InputDeviceConnectionState::DISCONNECTED;
          }
          else if (hashCode == CONNECTED_HASH)
          {
            return InputDeviceConnectionState::CONNECTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InputDeviceConnectionState>(hashCode);
          }

          return InputDeviceConnectionState::NOT_SET;
        }

        Aws::String GetNameForInputDeviceConnectionState(InputDeviceConnectionState enumValue)
        {
          switch(enumValue)
          {
          case InputDeviceConnectionState::NOT_SET:
            return {};
          case InputDeviceConnectionState::DISCONNECTED:
            return "DISCONNECTED";
          case InputDeviceConnectionState::CONNECTED:
            return "CONNECTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InputDeviceConnectionStateMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
