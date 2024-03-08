/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/UncompressedScanTypeConversionMode.h>
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
      namespace UncompressedScanTypeConversionModeMapper
      {

        static const int INTERLACED_HASH = HashingUtils::HashString("INTERLACED");
        static const int INTERLACED_OPTIMIZE_HASH = HashingUtils::HashString("INTERLACED_OPTIMIZE");


        UncompressedScanTypeConversionMode GetUncompressedScanTypeConversionModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INTERLACED_HASH)
          {
            return UncompressedScanTypeConversionMode::INTERLACED;
          }
          else if (hashCode == INTERLACED_OPTIMIZE_HASH)
          {
            return UncompressedScanTypeConversionMode::INTERLACED_OPTIMIZE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UncompressedScanTypeConversionMode>(hashCode);
          }

          return UncompressedScanTypeConversionMode::NOT_SET;
        }

        Aws::String GetNameForUncompressedScanTypeConversionMode(UncompressedScanTypeConversionMode enumValue)
        {
          switch(enumValue)
          {
          case UncompressedScanTypeConversionMode::NOT_SET:
            return {};
          case UncompressedScanTypeConversionMode::INTERLACED:
            return "INTERLACED";
          case UncompressedScanTypeConversionMode::INTERLACED_OPTIMIZE:
            return "INTERLACED_OPTIMIZE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UncompressedScanTypeConversionModeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
