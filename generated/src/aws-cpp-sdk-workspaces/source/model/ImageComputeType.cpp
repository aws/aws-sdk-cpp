/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/ImageComputeType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpaces
  {
    namespace Model
    {
      namespace ImageComputeTypeMapper
      {

        static const int BASE_HASH = HashingUtils::HashString("BASE");
        static const int GRAPHICS_G4DN_HASH = HashingUtils::HashString("GRAPHICS_G4DN");


        ImageComputeType GetImageComputeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BASE_HASH)
          {
            return ImageComputeType::BASE;
          }
          else if (hashCode == GRAPHICS_G4DN_HASH)
          {
            return ImageComputeType::GRAPHICS_G4DN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImageComputeType>(hashCode);
          }

          return ImageComputeType::NOT_SET;
        }

        Aws::String GetNameForImageComputeType(ImageComputeType enumValue)
        {
          switch(enumValue)
          {
          case ImageComputeType::NOT_SET:
            return {};
          case ImageComputeType::BASE:
            return "BASE";
          case ImageComputeType::GRAPHICS_G4DN:
            return "GRAPHICS_G4DN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImageComputeTypeMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
