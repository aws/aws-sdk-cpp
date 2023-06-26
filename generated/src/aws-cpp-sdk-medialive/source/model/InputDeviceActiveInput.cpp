/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/InputDeviceActiveInput.h>
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
      namespace InputDeviceActiveInputMapper
      {

        static const int HDMI_HASH = HashingUtils::HashString("HDMI");
        static const int SDI_HASH = HashingUtils::HashString("SDI");


        InputDeviceActiveInput GetInputDeviceActiveInputForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HDMI_HASH)
          {
            return InputDeviceActiveInput::HDMI;
          }
          else if (hashCode == SDI_HASH)
          {
            return InputDeviceActiveInput::SDI;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InputDeviceActiveInput>(hashCode);
          }

          return InputDeviceActiveInput::NOT_SET;
        }

        Aws::String GetNameForInputDeviceActiveInput(InputDeviceActiveInput enumValue)
        {
          switch(enumValue)
          {
          case InputDeviceActiveInput::HDMI:
            return "HDMI";
          case InputDeviceActiveInput::SDI:
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

      } // namespace InputDeviceActiveInputMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
