/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3-crt/model/CompressionType.h>
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
      namespace CompressionTypeMapper
      {

        static constexpr uint32_t NONE_HASH = ConstExprHashingUtils::HashString("NONE");
        static constexpr uint32_t GZIP_HASH = ConstExprHashingUtils::HashString("GZIP");
        static constexpr uint32_t BZIP2_HASH = ConstExprHashingUtils::HashString("BZIP2");


        CompressionType GetCompressionTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return CompressionType::NONE;
          }
          else if (hashCode == GZIP_HASH)
          {
            return CompressionType::GZIP;
          }
          else if (hashCode == BZIP2_HASH)
          {
            return CompressionType::BZIP2;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CompressionType>(hashCode);
          }

          return CompressionType::NOT_SET;
        }

        Aws::String GetNameForCompressionType(CompressionType enumValue)
        {
          switch(enumValue)
          {
          case CompressionType::NOT_SET:
            return {};
          case CompressionType::NONE:
            return "NONE";
          case CompressionType::GZIP:
            return "GZIP";
          case CompressionType::BZIP2:
            return "BZIP2";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CompressionTypeMapper
    } // namespace Model
  } // namespace S3Crt
} // namespace Aws
