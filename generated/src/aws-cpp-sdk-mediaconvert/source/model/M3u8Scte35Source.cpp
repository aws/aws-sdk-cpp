/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/M3u8Scte35Source.h>
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
      namespace M3u8Scte35SourceMapper
      {

        static const int PASSTHROUGH_HASH = HashingUtils::HashString("PASSTHROUGH");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        M3u8Scte35Source GetM3u8Scte35SourceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PASSTHROUGH_HASH)
          {
            return M3u8Scte35Source::PASSTHROUGH;
          }
          else if (hashCode == NONE_HASH)
          {
            return M3u8Scte35Source::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<M3u8Scte35Source>(hashCode);
          }

          return M3u8Scte35Source::NOT_SET;
        }

        Aws::String GetNameForM3u8Scte35Source(M3u8Scte35Source enumValue)
        {
          switch(enumValue)
          {
          case M3u8Scte35Source::PASSTHROUGH:
            return "PASSTHROUGH";
          case M3u8Scte35Source::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace M3u8Scte35SourceMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
