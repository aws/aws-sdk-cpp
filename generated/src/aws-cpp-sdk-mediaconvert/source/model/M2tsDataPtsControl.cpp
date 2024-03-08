/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/M2tsDataPtsControl.h>
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
      namespace M2tsDataPtsControlMapper
      {

        static const int AUTO_HASH = HashingUtils::HashString("AUTO");
        static const int ALIGN_TO_VIDEO_HASH = HashingUtils::HashString("ALIGN_TO_VIDEO");


        M2tsDataPtsControl GetM2tsDataPtsControlForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTO_HASH)
          {
            return M2tsDataPtsControl::AUTO;
          }
          else if (hashCode == ALIGN_TO_VIDEO_HASH)
          {
            return M2tsDataPtsControl::ALIGN_TO_VIDEO;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<M2tsDataPtsControl>(hashCode);
          }

          return M2tsDataPtsControl::NOT_SET;
        }

        Aws::String GetNameForM2tsDataPtsControl(M2tsDataPtsControl enumValue)
        {
          switch(enumValue)
          {
          case M2tsDataPtsControl::NOT_SET:
            return {};
          case M2tsDataPtsControl::AUTO:
            return "AUTO";
          case M2tsDataPtsControl::ALIGN_TO_VIDEO:
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

      } // namespace M2tsDataPtsControlMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
