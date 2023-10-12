/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/RedshiftResultCompressionType.h>
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
      namespace RedshiftResultCompressionTypeMapper
      {

        static constexpr uint32_t None_HASH = ConstExprHashingUtils::HashString("None");
        static constexpr uint32_t GZIP_HASH = ConstExprHashingUtils::HashString("GZIP");
        static constexpr uint32_t BZIP2_HASH = ConstExprHashingUtils::HashString("BZIP2");
        static constexpr uint32_t ZSTD_HASH = ConstExprHashingUtils::HashString("ZSTD");
        static constexpr uint32_t SNAPPY_HASH = ConstExprHashingUtils::HashString("SNAPPY");


        RedshiftResultCompressionType GetRedshiftResultCompressionTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == None_HASH)
          {
            return RedshiftResultCompressionType::None;
          }
          else if (hashCode == GZIP_HASH)
          {
            return RedshiftResultCompressionType::GZIP;
          }
          else if (hashCode == BZIP2_HASH)
          {
            return RedshiftResultCompressionType::BZIP2;
          }
          else if (hashCode == ZSTD_HASH)
          {
            return RedshiftResultCompressionType::ZSTD;
          }
          else if (hashCode == SNAPPY_HASH)
          {
            return RedshiftResultCompressionType::SNAPPY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RedshiftResultCompressionType>(hashCode);
          }

          return RedshiftResultCompressionType::NOT_SET;
        }

        Aws::String GetNameForRedshiftResultCompressionType(RedshiftResultCompressionType enumValue)
        {
          switch(enumValue)
          {
          case RedshiftResultCompressionType::NOT_SET:
            return {};
          case RedshiftResultCompressionType::None:
            return "None";
          case RedshiftResultCompressionType::GZIP:
            return "GZIP";
          case RedshiftResultCompressionType::BZIP2:
            return "BZIP2";
          case RedshiftResultCompressionType::ZSTD:
            return "ZSTD";
          case RedshiftResultCompressionType::SNAPPY:
            return "SNAPPY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RedshiftResultCompressionTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
