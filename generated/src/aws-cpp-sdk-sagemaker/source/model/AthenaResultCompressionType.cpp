/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AthenaResultCompressionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace AthenaResultCompressionTypeMapper
      {

        static constexpr uint32_t GZIP_HASH = ConstExprHashingUtils::HashString("GZIP");
        static constexpr uint32_t SNAPPY_HASH = ConstExprHashingUtils::HashString("SNAPPY");
        static constexpr uint32_t ZLIB_HASH = ConstExprHashingUtils::HashString("ZLIB");


        AthenaResultCompressionType GetAthenaResultCompressionTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GZIP_HASH)
          {
            return AthenaResultCompressionType::GZIP;
          }
          else if (hashCode == SNAPPY_HASH)
          {
            return AthenaResultCompressionType::SNAPPY;
          }
          else if (hashCode == ZLIB_HASH)
          {
            return AthenaResultCompressionType::ZLIB;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AthenaResultCompressionType>(hashCode);
          }

          return AthenaResultCompressionType::NOT_SET;
        }

        Aws::String GetNameForAthenaResultCompressionType(AthenaResultCompressionType enumValue)
        {
          switch(enumValue)
          {
          case AthenaResultCompressionType::NOT_SET:
            return {};
          case AthenaResultCompressionType::GZIP:
            return "GZIP";
          case AthenaResultCompressionType::SNAPPY:
            return "SNAPPY";
          case AthenaResultCompressionType::ZLIB:
            return "ZLIB";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AthenaResultCompressionTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
