/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/CmafIngestSegmentLengthUnits.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace CmafIngestSegmentLengthUnitsMapper
      {

        static const int MILLISECONDS_HASH = HashingUtils::HashString("MILLISECONDS");
        static const int SECONDS_HASH = HashingUtils::HashString("SECONDS");


        CmafIngestSegmentLengthUnits GetCmafIngestSegmentLengthUnitsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MILLISECONDS_HASH)
          {
            return CmafIngestSegmentLengthUnits::MILLISECONDS;
          }
          else if (hashCode == SECONDS_HASH)
          {
            return CmafIngestSegmentLengthUnits::SECONDS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CmafIngestSegmentLengthUnits>(hashCode);
          }

          return CmafIngestSegmentLengthUnits::NOT_SET;
        }

        Aws::String GetNameForCmafIngestSegmentLengthUnits(CmafIngestSegmentLengthUnits enumValue)
        {
          switch(enumValue)
          {
          case CmafIngestSegmentLengthUnits::NOT_SET:
            return {};
          case CmafIngestSegmentLengthUnits::MILLISECONDS:
            return "MILLISECONDS";
          case CmafIngestSegmentLengthUnits::SECONDS:
            return "SECONDS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CmafIngestSegmentLengthUnitsMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
