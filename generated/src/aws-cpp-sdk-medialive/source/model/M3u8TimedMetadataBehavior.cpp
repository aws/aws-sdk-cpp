/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/M3u8TimedMetadataBehavior.h>
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
      namespace M3u8TimedMetadataBehaviorMapper
      {

        static const int NO_PASSTHROUGH_HASH = HashingUtils::HashString("NO_PASSTHROUGH");
        static const int PASSTHROUGH_HASH = HashingUtils::HashString("PASSTHROUGH");


        M3u8TimedMetadataBehavior GetM3u8TimedMetadataBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NO_PASSTHROUGH_HASH)
          {
            return M3u8TimedMetadataBehavior::NO_PASSTHROUGH;
          }
          else if (hashCode == PASSTHROUGH_HASH)
          {
            return M3u8TimedMetadataBehavior::PASSTHROUGH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<M3u8TimedMetadataBehavior>(hashCode);
          }

          return M3u8TimedMetadataBehavior::NOT_SET;
        }

        Aws::String GetNameForM3u8TimedMetadataBehavior(M3u8TimedMetadataBehavior enumValue)
        {
          switch(enumValue)
          {
          case M3u8TimedMetadataBehavior::NO_PASSTHROUGH:
            return "NO_PASSTHROUGH";
          case M3u8TimedMetadataBehavior::PASSTHROUGH:
            return "PASSTHROUGH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace M3u8TimedMetadataBehaviorMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
