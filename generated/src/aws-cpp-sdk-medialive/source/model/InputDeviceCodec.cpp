/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/InputDeviceCodec.h>
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
      namespace InputDeviceCodecMapper
      {

        static const int HEVC_HASH = HashingUtils::HashString("HEVC");
        static const int AVC_HASH = HashingUtils::HashString("AVC");


        InputDeviceCodec GetInputDeviceCodecForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HEVC_HASH)
          {
            return InputDeviceCodec::HEVC;
          }
          else if (hashCode == AVC_HASH)
          {
            return InputDeviceCodec::AVC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InputDeviceCodec>(hashCode);
          }

          return InputDeviceCodec::NOT_SET;
        }

        Aws::String GetNameForInputDeviceCodec(InputDeviceCodec enumValue)
        {
          switch(enumValue)
          {
          case InputDeviceCodec::NOT_SET:
            return {};
          case InputDeviceCodec::HEVC:
            return "HEVC";
          case InputDeviceCodec::AVC:
            return "AVC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InputDeviceCodecMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
