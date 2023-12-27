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

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int MEDIALIVE_INPUT_HASH = HashingUtils::HashString("MEDIALIVE_INPUT");
        static const int MEDIACONNECT_FLOW_HASH = HashingUtils::HashString("MEDIACONNECT_FLOW");


        InputDeviceOutputType GetInputDeviceOutputTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
