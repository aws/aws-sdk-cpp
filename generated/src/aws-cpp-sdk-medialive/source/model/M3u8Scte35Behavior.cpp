/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/M3u8Scte35Behavior.h>
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
      namespace M3u8Scte35BehaviorMapper
      {

        static const int NO_PASSTHROUGH_HASH = HashingUtils::HashString("NO_PASSTHROUGH");
        static const int PASSTHROUGH_HASH = HashingUtils::HashString("PASSTHROUGH");


        M3u8Scte35Behavior GetM3u8Scte35BehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NO_PASSTHROUGH_HASH)
          {
            return M3u8Scte35Behavior::NO_PASSTHROUGH;
          }
          else if (hashCode == PASSTHROUGH_HASH)
          {
            return M3u8Scte35Behavior::PASSTHROUGH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<M3u8Scte35Behavior>(hashCode);
          }

          return M3u8Scte35Behavior::NOT_SET;
        }

        Aws::String GetNameForM3u8Scte35Behavior(M3u8Scte35Behavior enumValue)
        {
          switch(enumValue)
          {
          case M3u8Scte35Behavior::NO_PASSTHROUGH:
            return "NO_PASSTHROUGH";
          case M3u8Scte35Behavior::PASSTHROUGH:
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

      } // namespace M3u8Scte35BehaviorMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
