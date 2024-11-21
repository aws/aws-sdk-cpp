/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notifications/model/MediaElementType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Notifications
  {
    namespace Model
    {
      namespace MediaElementTypeMapper
      {

        static const int IMAGE_HASH = HashingUtils::HashString("IMAGE");


        MediaElementType GetMediaElementTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IMAGE_HASH)
          {
            return MediaElementType::IMAGE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MediaElementType>(hashCode);
          }

          return MediaElementType::NOT_SET;
        }

        Aws::String GetNameForMediaElementType(MediaElementType enumValue)
        {
          switch(enumValue)
          {
          case MediaElementType::NOT_SET:
            return {};
          case MediaElementType::IMAGE:
            return "IMAGE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MediaElementTypeMapper
    } // namespace Model
  } // namespace Notifications
} // namespace Aws
