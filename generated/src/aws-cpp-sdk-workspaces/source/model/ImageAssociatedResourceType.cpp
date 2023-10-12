/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/ImageAssociatedResourceType.h>
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
      namespace ImageAssociatedResourceTypeMapper
      {

        static constexpr uint32_t APPLICATION_HASH = ConstExprHashingUtils::HashString("APPLICATION");


        ImageAssociatedResourceType GetImageAssociatedResourceTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == APPLICATION_HASH)
          {
            return ImageAssociatedResourceType::APPLICATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImageAssociatedResourceType>(hashCode);
          }

          return ImageAssociatedResourceType::NOT_SET;
        }

        Aws::String GetNameForImageAssociatedResourceType(ImageAssociatedResourceType enumValue)
        {
          switch(enumValue)
          {
          case ImageAssociatedResourceType::NOT_SET:
            return {};
          case ImageAssociatedResourceType::APPLICATION:
            return "APPLICATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImageAssociatedResourceTypeMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
