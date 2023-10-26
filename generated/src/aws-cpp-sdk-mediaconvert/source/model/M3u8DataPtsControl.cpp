/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/M3u8DataPtsControl.h>
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
      namespace M3u8DataPtsControlMapper
      {

        static const int AUTO_HASH = HashingUtils::HashString("AUTO");
        static const int ALIGN_TO_VIDEO_HASH = HashingUtils::HashString("ALIGN_TO_VIDEO");


        M3u8DataPtsControl GetM3u8DataPtsControlForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTO_HASH)
          {
            return M3u8DataPtsControl::AUTO;
          }
          else if (hashCode == ALIGN_TO_VIDEO_HASH)
          {
            return M3u8DataPtsControl::ALIGN_TO_VIDEO;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<M3u8DataPtsControl>(hashCode);
          }

          return M3u8DataPtsControl::NOT_SET;
        }

        Aws::String GetNameForM3u8DataPtsControl(M3u8DataPtsControl enumValue)
        {
          switch(enumValue)
          {
          case M3u8DataPtsControl::NOT_SET:
            return {};
          case M3u8DataPtsControl::AUTO:
            return "AUTO";
          case M3u8DataPtsControl::ALIGN_TO_VIDEO:
            return "ALIGN_TO_VIDEO";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace M3u8DataPtsControlMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
