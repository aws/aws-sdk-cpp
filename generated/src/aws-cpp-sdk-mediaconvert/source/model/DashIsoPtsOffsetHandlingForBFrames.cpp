/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/DashIsoPtsOffsetHandlingForBFrames.h>
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
      namespace DashIsoPtsOffsetHandlingForBFramesMapper
      {

        static const int ZERO_BASED_HASH = HashingUtils::HashString("ZERO_BASED");
        static const int MATCH_INITIAL_PTS_HASH = HashingUtils::HashString("MATCH_INITIAL_PTS");


        DashIsoPtsOffsetHandlingForBFrames GetDashIsoPtsOffsetHandlingForBFramesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ZERO_BASED_HASH)
          {
            return DashIsoPtsOffsetHandlingForBFrames::ZERO_BASED;
          }
          else if (hashCode == MATCH_INITIAL_PTS_HASH)
          {
            return DashIsoPtsOffsetHandlingForBFrames::MATCH_INITIAL_PTS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DashIsoPtsOffsetHandlingForBFrames>(hashCode);
          }

          return DashIsoPtsOffsetHandlingForBFrames::NOT_SET;
        }

        Aws::String GetNameForDashIsoPtsOffsetHandlingForBFrames(DashIsoPtsOffsetHandlingForBFrames enumValue)
        {
          switch(enumValue)
          {
          case DashIsoPtsOffsetHandlingForBFrames::NOT_SET:
            return {};
          case DashIsoPtsOffsetHandlingForBFrames::ZERO_BASED:
            return "ZERO_BASED";
          case DashIsoPtsOffsetHandlingForBFrames::MATCH_INITIAL_PTS:
            return "MATCH_INITIAL_PTS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DashIsoPtsOffsetHandlingForBFramesMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
