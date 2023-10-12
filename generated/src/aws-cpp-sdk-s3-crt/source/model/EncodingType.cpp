/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3-crt/model/EncodingType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace S3Crt
  {
    namespace Model
    {
      namespace EncodingTypeMapper
      {

        static constexpr uint32_t url_HASH = ConstExprHashingUtils::HashString("url");


        EncodingType GetEncodingTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == url_HASH)
          {
            return EncodingType::url;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EncodingType>(hashCode);
          }

          return EncodingType::NOT_SET;
        }

        Aws::String GetNameForEncodingType(EncodingType enumValue)
        {
          switch(enumValue)
          {
          case EncodingType::NOT_SET:
            return {};
          case EncodingType::url:
            return "url";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EncodingTypeMapper
    } // namespace Model
  } // namespace S3Crt
} // namespace Aws
