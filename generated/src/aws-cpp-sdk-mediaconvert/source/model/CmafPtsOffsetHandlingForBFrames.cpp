/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/CmafPtsOffsetHandlingForBFrames.h>
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
      namespace CmafPtsOffsetHandlingForBFramesMapper
      {

        static const int ZERO_BASED_HASH = HashingUtils::HashString("ZERO_BASED");
        static const int MATCH_INITIAL_PTS_HASH = HashingUtils::HashString("MATCH_INITIAL_PTS");


        CmafPtsOffsetHandlingForBFrames GetCmafPtsOffsetHandlingForBFramesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ZERO_BASED_HASH)
          {
            return CmafPtsOffsetHandlingForBFrames::ZERO_BASED;
          }
          else if (hashCode == MATCH_INITIAL_PTS_HASH)
          {
            return CmafPtsOffsetHandlingForBFrames::MATCH_INITIAL_PTS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CmafPtsOffsetHandlingForBFrames>(hashCode);
          }

          return CmafPtsOffsetHandlingForBFrames::NOT_SET;
        }

        Aws::String GetNameForCmafPtsOffsetHandlingForBFrames(CmafPtsOffsetHandlingForBFrames enumValue)
        {
          switch(enumValue)
          {
          case CmafPtsOffsetHandlingForBFrames::NOT_SET:
            return {};
          case CmafPtsOffsetHandlingForBFrames::ZERO_BASED:
            return "ZERO_BASED";
          case CmafPtsOffsetHandlingForBFrames::MATCH_INITIAL_PTS:
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

      } // namespace CmafPtsOffsetHandlingForBFramesMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
