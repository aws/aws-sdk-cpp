/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/HlsSegmentControl.h>
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
      namespace HlsSegmentControlMapper
      {

        static const int SINGLE_FILE_HASH = HashingUtils::HashString("SINGLE_FILE");
        static const int SEGMENTED_FILES_HASH = HashingUtils::HashString("SEGMENTED_FILES");


        HlsSegmentControl GetHlsSegmentControlForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SINGLE_FILE_HASH)
          {
            return HlsSegmentControl::SINGLE_FILE;
          }
          else if (hashCode == SEGMENTED_FILES_HASH)
          {
            return HlsSegmentControl::SEGMENTED_FILES;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HlsSegmentControl>(hashCode);
          }

          return HlsSegmentControl::NOT_SET;
        }

        Aws::String GetNameForHlsSegmentControl(HlsSegmentControl enumValue)
        {
          switch(enumValue)
          {
          case HlsSegmentControl::SINGLE_FILE:
            return "SINGLE_FILE";
          case HlsSegmentControl::SEGMENTED_FILES:
            return "SEGMENTED_FILES";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HlsSegmentControlMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
