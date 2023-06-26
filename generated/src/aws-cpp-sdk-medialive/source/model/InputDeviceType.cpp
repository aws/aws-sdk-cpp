/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/InputDeviceType.h>
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
      namespace InputDeviceTypeMapper
      {

        static const int HD_HASH = HashingUtils::HashString("HD");
        static const int UHD_HASH = HashingUtils::HashString("UHD");


        InputDeviceType GetInputDeviceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HD_HASH)
          {
            return InputDeviceType::HD;
          }
          else if (hashCode == UHD_HASH)
          {
            return InputDeviceType::UHD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InputDeviceType>(hashCode);
          }

          return InputDeviceType::NOT_SET;
        }

        Aws::String GetNameForInputDeviceType(InputDeviceType enumValue)
        {
          switch(enumValue)
          {
          case InputDeviceType::HD:
            return "HD";
          case InputDeviceType::UHD:
            return "UHD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InputDeviceTypeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
