/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/InputLossActionForHlsOut.h>
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
      namespace InputLossActionForHlsOutMapper
      {

        static const int EMIT_OUTPUT_HASH = HashingUtils::HashString("EMIT_OUTPUT");
        static const int PAUSE_OUTPUT_HASH = HashingUtils::HashString("PAUSE_OUTPUT");


        InputLossActionForHlsOut GetInputLossActionForHlsOutForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EMIT_OUTPUT_HASH)
          {
            return InputLossActionForHlsOut::EMIT_OUTPUT;
          }
          else if (hashCode == PAUSE_OUTPUT_HASH)
          {
            return InputLossActionForHlsOut::PAUSE_OUTPUT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InputLossActionForHlsOut>(hashCode);
          }

          return InputLossActionForHlsOut::NOT_SET;
        }

        Aws::String GetNameForInputLossActionForHlsOut(InputLossActionForHlsOut enumValue)
        {
          switch(enumValue)
          {
          case InputLossActionForHlsOut::EMIT_OUTPUT:
            return "EMIT_OUTPUT";
          case InputLossActionForHlsOut::PAUSE_OUTPUT:
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

      } // namespace InputLossActionForHlsOutMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
