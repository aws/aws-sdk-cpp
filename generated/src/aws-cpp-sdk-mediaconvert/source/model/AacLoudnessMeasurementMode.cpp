/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/AacLoudnessMeasurementMode.h>
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
      namespace AacLoudnessMeasurementModeMapper
      {

        static const int PROGRAM_HASH = HashingUtils::HashString("PROGRAM");
        static const int ANCHOR_HASH = HashingUtils::HashString("ANCHOR");


        AacLoudnessMeasurementMode GetAacLoudnessMeasurementModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PROGRAM_HASH)
          {
            return AacLoudnessMeasurementMode::PROGRAM;
          }
          else if (hashCode == ANCHOR_HASH)
          {
            return AacLoudnessMeasurementMode::ANCHOR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AacLoudnessMeasurementMode>(hashCode);
          }

          return AacLoudnessMeasurementMode::NOT_SET;
        }

        Aws::String GetNameForAacLoudnessMeasurementMode(AacLoudnessMeasurementMode enumValue)
        {
          switch(enumValue)
          {
          case AacLoudnessMeasurementMode::NOT_SET:
            return {};
          case AacLoudnessMeasurementMode::PROGRAM:
            return "PROGRAM";
          case AacLoudnessMeasurementMode::ANCHOR:
            return "ANCHOR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AacLoudnessMeasurementModeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
