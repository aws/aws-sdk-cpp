/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/DescriptorContentType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace tnb
  {
    namespace Model
    {
      namespace DescriptorContentTypeMapper
      {

        static const int text_plain_HASH = HashingUtils::HashString("text/plain");


        DescriptorContentType GetDescriptorContentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == text_plain_HASH)
          {
            return DescriptorContentType::text_plain;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DescriptorContentType>(hashCode);
          }

          return DescriptorContentType::NOT_SET;
        }

        Aws::String GetNameForDescriptorContentType(DescriptorContentType enumValue)
        {
          switch(enumValue)
          {
          case DescriptorContentType::NOT_SET:
            return {};
          case DescriptorContentType::text_plain:
            return "text/plain";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DescriptorContentTypeMapper
    } // namespace Model
  } // namespace tnb
} // namespace Aws
