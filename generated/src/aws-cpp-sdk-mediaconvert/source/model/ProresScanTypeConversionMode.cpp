/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/ProresScanTypeConversionMode.h>
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
      namespace ProresScanTypeConversionModeMapper
      {

        static constexpr uint32_t INTERLACED_HASH = ConstExprHashingUtils::HashString("INTERLACED");
        static constexpr uint32_t INTERLACED_OPTIMIZE_HASH = ConstExprHashingUtils::HashString("INTERLACED_OPTIMIZE");


        ProresScanTypeConversionMode GetProresScanTypeConversionModeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INTERLACED_HASH)
          {
            return ProresScanTypeConversionMode::INTERLACED;
          }
          else if (hashCode == INTERLACED_OPTIMIZE_HASH)
          {
            return ProresScanTypeConversionMode::INTERLACED_OPTIMIZE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProresScanTypeConversionMode>(hashCode);
          }

          return ProresScanTypeConversionMode::NOT_SET;
        }

        Aws::String GetNameForProresScanTypeConversionMode(ProresScanTypeConversionMode enumValue)
        {
          switch(enumValue)
          {
          case ProresScanTypeConversionMode::NOT_SET:
            return {};
          case ProresScanTypeConversionMode::INTERLACED:
            return "INTERLACED";
          case ProresScanTypeConversionMode::INTERLACED_OPTIMIZE:
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

      } // namespace ProresScanTypeConversionModeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
