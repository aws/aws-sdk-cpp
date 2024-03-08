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

        static const int None_HASH = HashingUtils::HashString("None");
        static const int GZIP_HASH = HashingUtils::HashString("GZIP");
        static const int BZIP2_HASH = HashingUtils::HashString("BZIP2");
        static const int ZSTD_HASH = HashingUtils::HashString("ZSTD");
        static const int SNAPPY_HASH = HashingUtils::HashString("SNAPPY");


        RedshiftResultCompressionType GetRedshiftResultCompressionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
