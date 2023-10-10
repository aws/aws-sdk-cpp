/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/HlsSegmentLengthControl.h>
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
      namespace HlsSegmentLengthControlMapper
      {

        static const int EXACT_HASH = HashingUtils::HashString("EXACT");
        static const int GOP_MULTIPLE_HASH = HashingUtils::HashString("GOP_MULTIPLE");


        HlsSegmentLengthControl GetHlsSegmentLengthControlForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EXACT_HASH)
          {
            return HlsSegmentLengthControl::EXACT;
          }
          else if (hashCode == GOP_MULTIPLE_HASH)
          {
            return HlsSegmentLengthControl::GOP_MULTIPLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HlsSegmentLengthControl>(hashCode);
          }

          return HlsSegmentLengthControl::NOT_SET;
        }

        Aws::String GetNameForHlsSegmentLengthControl(HlsSegmentLengthControl enumValue)
        {
          switch(enumValue)
          {
          case HlsSegmentLengthControl::NOT_SET:
            return {};
          case HlsSegmentLengthControl::EXACT:
            return "EXACT";
          case HlsSegmentLengthControl::GOP_MULTIPLE:
            return "GOP_MULTIPLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HlsSegmentLengthControlMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
