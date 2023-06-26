/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/DeinterlacerControl.h>
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
      namespace DeinterlacerControlMapper
      {

        static const int FORCE_ALL_FRAMES_HASH = HashingUtils::HashString("FORCE_ALL_FRAMES");
        static const int NORMAL_HASH = HashingUtils::HashString("NORMAL");


        DeinterlacerControl GetDeinterlacerControlForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FORCE_ALL_FRAMES_HASH)
          {
            return DeinterlacerControl::FORCE_ALL_FRAMES;
          }
          else if (hashCode == NORMAL_HASH)
          {
            return DeinterlacerControl::NORMAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeinterlacerControl>(hashCode);
          }

          return DeinterlacerControl::NOT_SET;
        }

        Aws::String GetNameForDeinterlacerControl(DeinterlacerControl enumValue)
        {
          switch(enumValue)
          {
          case DeinterlacerControl::FORCE_ALL_FRAMES:
            return "FORCE_ALL_FRAMES";
          case DeinterlacerControl::NORMAL:
            return "NORMAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeinterlacerControlMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
