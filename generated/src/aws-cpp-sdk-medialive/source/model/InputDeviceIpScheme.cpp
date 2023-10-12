/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/InputDeviceIpScheme.h>
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
      namespace InputDeviceIpSchemeMapper
      {

        static constexpr uint32_t STATIC__HASH = ConstExprHashingUtils::HashString("STATIC");
        static constexpr uint32_t DHCP_HASH = ConstExprHashingUtils::HashString("DHCP");


        InputDeviceIpScheme GetInputDeviceIpSchemeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STATIC__HASH)
          {
            return InputDeviceIpScheme::STATIC_;
          }
          else if (hashCode == DHCP_HASH)
          {
            return InputDeviceIpScheme::DHCP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InputDeviceIpScheme>(hashCode);
          }

          return InputDeviceIpScheme::NOT_SET;
        }

        Aws::String GetNameForInputDeviceIpScheme(InputDeviceIpScheme enumValue)
        {
          switch(enumValue)
          {
          case InputDeviceIpScheme::NOT_SET:
            return {};
          case InputDeviceIpScheme::STATIC_:
            return "STATIC";
          case InputDeviceIpScheme::DHCP:
            return "DHCP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InputDeviceIpSchemeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
