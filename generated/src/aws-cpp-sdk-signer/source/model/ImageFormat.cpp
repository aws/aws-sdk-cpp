/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/signer/model/ImageFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace signer
  {
    namespace Model
    {
      namespace ImageFormatMapper
      {

        static constexpr uint32_t JSON_HASH = ConstExprHashingUtils::HashString("JSON");
        static constexpr uint32_t JSONEmbedded_HASH = ConstExprHashingUtils::HashString("JSONEmbedded");
        static constexpr uint32_t JSONDetached_HASH = ConstExprHashingUtils::HashString("JSONDetached");


        ImageFormat GetImageFormatForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == JSON_HASH)
          {
            return ImageFormat::JSON;
          }
          else if (hashCode == JSONEmbedded_HASH)
          {
            return ImageFormat::JSONEmbedded;
          }
          else if (hashCode == JSONDetached_HASH)
          {
            return ImageFormat::JSONDetached;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImageFormat>(hashCode);
          }

          return ImageFormat::NOT_SET;
        }

        Aws::String GetNameForImageFormat(ImageFormat enumValue)
        {
          switch(enumValue)
          {
          case ImageFormat::NOT_SET:
            return {};
          case ImageFormat::JSON:
            return "JSON";
          case ImageFormat::JSONEmbedded:
            return "JSONEmbedded";
          case ImageFormat::JSONDetached:
            return "JSONDetached";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImageFormatMapper
    } // namespace Model
  } // namespace signer
} // namespace Aws
