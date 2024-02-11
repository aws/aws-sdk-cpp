/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/ThumbnailState.h>
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
      namespace ThumbnailStateMapper
      {

        static const int AUTO_HASH = HashingUtils::HashString("AUTO");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        ThumbnailState GetThumbnailStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTO_HASH)
          {
            return ThumbnailState::AUTO;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return ThumbnailState::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ThumbnailState>(hashCode);
          }

          return ThumbnailState::NOT_SET;
        }

        Aws::String GetNameForThumbnailState(ThumbnailState enumValue)
        {
          switch(enumValue)
          {
          case ThumbnailState::NOT_SET:
            return {};
          case ThumbnailState::AUTO:
            return "AUTO";
          case ThumbnailState::DISABLED:
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

      } // namespace ThumbnailStateMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
