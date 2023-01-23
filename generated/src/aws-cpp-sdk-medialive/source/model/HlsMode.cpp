/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/HlsMode.h>
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
      namespace HlsModeMapper
      {

        static const int LIVE_HASH = HashingUtils::HashString("LIVE");
        static const int VOD_HASH = HashingUtils::HashString("VOD");


        HlsMode GetHlsModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LIVE_HASH)
          {
            return HlsMode::LIVE;
          }
          else if (hashCode == VOD_HASH)
          {
            return HlsMode::VOD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HlsMode>(hashCode);
          }

          return HlsMode::NOT_SET;
        }

        Aws::String GetNameForHlsMode(HlsMode enumValue)
        {
          switch(enumValue)
          {
          case HlsMode::LIVE:
            return "LIVE";
          case HlsMode::VOD:
            return "VOD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HlsModeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
