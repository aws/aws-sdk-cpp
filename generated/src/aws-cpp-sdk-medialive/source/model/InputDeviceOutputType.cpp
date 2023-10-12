/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/InputDeviceOutputType.h>
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
      namespace InputDeviceOutputTypeMapper
      {

        static constexpr uint32_t NONE_HASH = ConstExprHashingUtils::HashString("NONE");
        static constexpr uint32_t MEDIALIVE_INPUT_HASH = ConstExprHashingUtils::HashString("MEDIALIVE_INPUT");
        static constexpr uint32_t MEDIACONNECT_FLOW_HASH = ConstExprHashingUtils::HashString("MEDIACONNECT_FLOW");


        InputDeviceOutputType GetInputDeviceOutputTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return InputDeviceOutputType::NONE;
          }
          else if (hashCode == MEDIALIVE_INPUT_HASH)
          {
            return InputDeviceOutputType::MEDIALIVE_INPUT;
          }
          else if (hashCode == MEDIACONNECT_FLOW_HASH)
          {
            return InputDeviceOutputType::MEDIACONNECT_FLOW;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InputDeviceOutputType>(hashCode);
          }

          return InputDeviceOutputType::NOT_SET;
        }

        Aws::String GetNameForInputDeviceOutputType(InputDeviceOutputType enumValue)
        {
          switch(enumValue)
          {
          case InputDeviceOutputType::NOT_SET:
            return {};
          case InputDeviceOutputType::NONE:
            return "NONE";
          case InputDeviceOutputType::MEDIALIVE_INPUT:
            return "MEDIALIVE_INPUT";
          case InputDeviceOutputType::MEDIACONNECT_FLOW:
            return "MEDIACONNECT_FLOW";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InputDeviceOutputTypeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
