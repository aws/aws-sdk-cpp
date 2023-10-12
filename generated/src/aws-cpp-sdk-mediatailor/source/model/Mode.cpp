/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/Mode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaTailor
  {
    namespace Model
    {
      namespace ModeMapper
      {

        static constexpr uint32_t OFF_HASH = ConstExprHashingUtils::HashString("OFF");
        static constexpr uint32_t BEHIND_LIVE_EDGE_HASH = ConstExprHashingUtils::HashString("BEHIND_LIVE_EDGE");
        static constexpr uint32_t AFTER_LIVE_EDGE_HASH = ConstExprHashingUtils::HashString("AFTER_LIVE_EDGE");


        Mode GetModeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OFF_HASH)
          {
            return Mode::OFF;
          }
          else if (hashCode == BEHIND_LIVE_EDGE_HASH)
          {
            return Mode::BEHIND_LIVE_EDGE;
          }
          else if (hashCode == AFTER_LIVE_EDGE_HASH)
          {
            return Mode::AFTER_LIVE_EDGE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Mode>(hashCode);
          }

          return Mode::NOT_SET;
        }

        Aws::String GetNameForMode(Mode enumValue)
        {
          switch(enumValue)
          {
          case Mode::NOT_SET:
            return {};
          case Mode::OFF:
            return "OFF";
          case Mode::BEHIND_LIVE_EDGE:
            return "BEHIND_LIVE_EDGE";
          case Mode::AFTER_LIVE_EDGE:
            return "AFTER_LIVE_EDGE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ModeMapper
    } // namespace Model
  } // namespace MediaTailor
} // namespace Aws
