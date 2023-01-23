/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/CmafWriteSegmentTimelineInRepresentation.h>
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
      namespace CmafWriteSegmentTimelineInRepresentationMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        CmafWriteSegmentTimelineInRepresentation GetCmafWriteSegmentTimelineInRepresentationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return CmafWriteSegmentTimelineInRepresentation::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return CmafWriteSegmentTimelineInRepresentation::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CmafWriteSegmentTimelineInRepresentation>(hashCode);
          }

          return CmafWriteSegmentTimelineInRepresentation::NOT_SET;
        }

        Aws::String GetNameForCmafWriteSegmentTimelineInRepresentation(CmafWriteSegmentTimelineInRepresentation enumValue)
        {
          switch(enumValue)
          {
          case CmafWriteSegmentTimelineInRepresentation::ENABLED:
            return "ENABLED";
          case CmafWriteSegmentTimelineInRepresentation::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CmafWriteSegmentTimelineInRepresentationMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
