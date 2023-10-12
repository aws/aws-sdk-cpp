/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/ThumbnailType.h>
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
      namespace ThumbnailTypeMapper
      {

        static constexpr uint32_t UNSPECIFIED_HASH = ConstExprHashingUtils::HashString("UNSPECIFIED");
        static constexpr uint32_t CURRENT_ACTIVE_HASH = ConstExprHashingUtils::HashString("CURRENT_ACTIVE");


        ThumbnailType GetThumbnailTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UNSPECIFIED_HASH)
          {
            return ThumbnailType::UNSPECIFIED;
          }
          else if (hashCode == CURRENT_ACTIVE_HASH)
          {
            return ThumbnailType::CURRENT_ACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ThumbnailType>(hashCode);
          }

          return ThumbnailType::NOT_SET;
        }

        Aws::String GetNameForThumbnailType(ThumbnailType enumValue)
        {
          switch(enumValue)
          {
          case ThumbnailType::NOT_SET:
            return {};
          case ThumbnailType::UNSPECIFIED:
            return "UNSPECIFIED";
          case ThumbnailType::CURRENT_ACTIVE:
            return "CURRENT_ACTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ThumbnailTypeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
