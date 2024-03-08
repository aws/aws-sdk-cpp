/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/ScanMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConnect
  {
    namespace Model
    {
      namespace ScanModeMapper
      {

        static const int progressive_HASH = HashingUtils::HashString("progressive");
        static const int interlace_HASH = HashingUtils::HashString("interlace");
        static const int progressive_segmented_frame_HASH = HashingUtils::HashString("progressive-segmented-frame");


        ScanMode GetScanModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == progressive_HASH)
          {
            return ScanMode::progressive;
          }
          else if (hashCode == interlace_HASH)
          {
            return ScanMode::interlace;
          }
          else if (hashCode == progressive_segmented_frame_HASH)
          {
            return ScanMode::progressive_segmented_frame;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScanMode>(hashCode);
          }

          return ScanMode::NOT_SET;
        }

        Aws::String GetNameForScanMode(ScanMode enumValue)
        {
          switch(enumValue)
          {
          case ScanMode::NOT_SET:
            return {};
          case ScanMode::progressive:
            return "progressive";
          case ScanMode::interlace:
            return "interlace";
          case ScanMode::progressive_segmented_frame:
            return "progressive-segmented-frame";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScanModeMapper
    } // namespace Model
  } // namespace MediaConnect
} // namespace Aws
