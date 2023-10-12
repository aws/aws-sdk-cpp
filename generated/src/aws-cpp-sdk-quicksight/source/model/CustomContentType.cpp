/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/CustomContentType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace CustomContentTypeMapper
      {

        static constexpr uint32_t IMAGE_HASH = ConstExprHashingUtils::HashString("IMAGE");
        static constexpr uint32_t OTHER_EMBEDDED_CONTENT_HASH = ConstExprHashingUtils::HashString("OTHER_EMBEDDED_CONTENT");


        CustomContentType GetCustomContentTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IMAGE_HASH)
          {
            return CustomContentType::IMAGE;
          }
          else if (hashCode == OTHER_EMBEDDED_CONTENT_HASH)
          {
            return CustomContentType::OTHER_EMBEDDED_CONTENT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CustomContentType>(hashCode);
          }

          return CustomContentType::NOT_SET;
        }

        Aws::String GetNameForCustomContentType(CustomContentType enumValue)
        {
          switch(enumValue)
          {
          case CustomContentType::NOT_SET:
            return {};
          case CustomContentType::IMAGE:
            return "IMAGE";
          case CustomContentType::OTHER_EMBEDDED_CONTENT:
            return "OTHER_EMBEDDED_CONTENT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CustomContentTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
