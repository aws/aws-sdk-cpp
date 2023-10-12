/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/InputDeviceConfiguredInput.h>
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
      namespace InputDeviceConfiguredInputMapper
      {

        static constexpr uint32_t AUTO_HASH = ConstExprHashingUtils::HashString("AUTO");
        static constexpr uint32_t HDMI_HASH = ConstExprHashingUtils::HashString("HDMI");
        static constexpr uint32_t SDI_HASH = ConstExprHashingUtils::HashString("SDI");


        InputDeviceConfiguredInput GetInputDeviceConfiguredInputForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTO_HASH)
          {
            return InputDeviceConfiguredInput::AUTO;
          }
          else if (hashCode == HDMI_HASH)
          {
            return InputDeviceConfiguredInput::HDMI;
          }
          else if (hashCode == SDI_HASH)
          {
            return InputDeviceConfiguredInput::SDI;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InputDeviceConfiguredInput>(hashCode);
          }

          return InputDeviceConfiguredInput::NOT_SET;
        }

        Aws::String GetNameForInputDeviceConfiguredInput(InputDeviceConfiguredInput enumValue)
        {
          switch(enumValue)
          {
          case InputDeviceConfiguredInput::NOT_SET:
            return {};
          case InputDeviceConfiguredInput::AUTO:
            return "AUTO";
          case InputDeviceConfiguredInput::HDMI:
            return "HDMI";
          case InputDeviceConfiguredInput::SDI:
            return "SDI";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InputDeviceConfiguredInputMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
