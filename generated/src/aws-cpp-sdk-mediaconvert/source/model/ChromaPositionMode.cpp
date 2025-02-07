/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/ChromaPositionMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace ChromaPositionModeMapper
      {

        static const int AUTO_HASH = HashingUtils::HashString("AUTO");
        static const int FORCE_CENTER_HASH = HashingUtils::HashString("FORCE_CENTER");
        static const int FORCE_TOP_LEFT_HASH = HashingUtils::HashString("FORCE_TOP_LEFT");


        ChromaPositionMode GetChromaPositionModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTO_HASH)
          {
            return ChromaPositionMode::AUTO;
          }
          else if (hashCode == FORCE_CENTER_HASH)
          {
            return ChromaPositionMode::FORCE_CENTER;
          }
          else if (hashCode == FORCE_TOP_LEFT_HASH)
          {
            return ChromaPositionMode::FORCE_TOP_LEFT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChromaPositionMode>(hashCode);
          }

          return ChromaPositionMode::NOT_SET;
        }

        Aws::String GetNameForChromaPositionMode(ChromaPositionMode enumValue)
        {
          switch(enumValue)
          {
          case ChromaPositionMode::NOT_SET:
            return {};
          case ChromaPositionMode::AUTO:
            return "AUTO";
          case ChromaPositionMode::FORCE_CENTER:
            return "FORCE_CENTER";
          case ChromaPositionMode::FORCE_TOP_LEFT:
            return "FORCE_TOP_LEFT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChromaPositionModeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
