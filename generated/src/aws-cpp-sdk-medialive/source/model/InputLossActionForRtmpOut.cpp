/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/InputLossActionForRtmpOut.h>
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
      namespace InputLossActionForRtmpOutMapper
      {

        static const int EMIT_OUTPUT_HASH = HashingUtils::HashString("EMIT_OUTPUT");
        static const int PAUSE_OUTPUT_HASH = HashingUtils::HashString("PAUSE_OUTPUT");


        InputLossActionForRtmpOut GetInputLossActionForRtmpOutForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EMIT_OUTPUT_HASH)
          {
            return InputLossActionForRtmpOut::EMIT_OUTPUT;
          }
          else if (hashCode == PAUSE_OUTPUT_HASH)
          {
            return InputLossActionForRtmpOut::PAUSE_OUTPUT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InputLossActionForRtmpOut>(hashCode);
          }

          return InputLossActionForRtmpOut::NOT_SET;
        }

        Aws::String GetNameForInputLossActionForRtmpOut(InputLossActionForRtmpOut enumValue)
        {
          switch(enumValue)
          {
          case InputLossActionForRtmpOut::EMIT_OUTPUT:
            return "EMIT_OUTPUT";
          case InputLossActionForRtmpOut::PAUSE_OUTPUT:
            return "PAUSE_OUTPUT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InputLossActionForRtmpOutMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
