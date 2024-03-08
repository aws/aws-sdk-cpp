/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Vc3ScanTypeConversionMode.h>
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
      namespace Vc3ScanTypeConversionModeMapper
      {

        static const int INTERLACED_HASH = HashingUtils::HashString("INTERLACED");
        static const int INTERLACED_OPTIMIZE_HASH = HashingUtils::HashString("INTERLACED_OPTIMIZE");


        Vc3ScanTypeConversionMode GetVc3ScanTypeConversionModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INTERLACED_HASH)
          {
            return Vc3ScanTypeConversionMode::INTERLACED;
          }
          else if (hashCode == INTERLACED_OPTIMIZE_HASH)
          {
            return Vc3ScanTypeConversionMode::INTERLACED_OPTIMIZE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Vc3ScanTypeConversionMode>(hashCode);
          }

          return Vc3ScanTypeConversionMode::NOT_SET;
        }

        Aws::String GetNameForVc3ScanTypeConversionMode(Vc3ScanTypeConversionMode enumValue)
        {
          switch(enumValue)
          {
          case Vc3ScanTypeConversionMode::NOT_SET:
            return {};
          case Vc3ScanTypeConversionMode::INTERLACED:
            return "INTERLACED";
          case Vc3ScanTypeConversionMode::INTERLACED_OPTIMIZE:
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

      } // namespace Vc3ScanTypeConversionModeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
