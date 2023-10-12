/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/IFrameOnlyPlaylistType.h>
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
      namespace IFrameOnlyPlaylistTypeMapper
      {

        static constexpr uint32_t DISABLED_HASH = ConstExprHashingUtils::HashString("DISABLED");
        static constexpr uint32_t STANDARD_HASH = ConstExprHashingUtils::HashString("STANDARD");


        IFrameOnlyPlaylistType GetIFrameOnlyPlaylistTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return IFrameOnlyPlaylistType::DISABLED;
          }
          else if (hashCode == STANDARD_HASH)
          {
            return IFrameOnlyPlaylistType::STANDARD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IFrameOnlyPlaylistType>(hashCode);
          }

          return IFrameOnlyPlaylistType::NOT_SET;
        }

        Aws::String GetNameForIFrameOnlyPlaylistType(IFrameOnlyPlaylistType enumValue)
        {
          switch(enumValue)
          {
          case IFrameOnlyPlaylistType::NOT_SET:
            return {};
          case IFrameOnlyPlaylistType::DISABLED:
            return "DISABLED";
          case IFrameOnlyPlaylistType::STANDARD:
            return "STANDARD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IFrameOnlyPlaylistTypeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
