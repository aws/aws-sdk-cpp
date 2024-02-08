/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AdditionalS3DataSourceDataType.h>
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
      namespace AdditionalS3DataSourceDataTypeMapper
      {

        static const int S3Object_HASH = HashingUtils::HashString("S3Object");
        static const int S3Prefix_HASH = HashingUtils::HashString("S3Prefix");


        AdditionalS3DataSourceDataType GetAdditionalS3DataSourceDataTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == S3Object_HASH)
          {
            return AdditionalS3DataSourceDataType::S3Object;
          }
          else if (hashCode == S3Prefix_HASH)
          {
            return AdditionalS3DataSourceDataType::S3Prefix;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AdditionalS3DataSourceDataType>(hashCode);
          }

          return AdditionalS3DataSourceDataType::NOT_SET;
        }

        Aws::String GetNameForAdditionalS3DataSourceDataType(AdditionalS3DataSourceDataType enumValue)
        {
          switch(enumValue)
          {
          case AdditionalS3DataSourceDataType::NOT_SET:
            return {};
          case AdditionalS3DataSourceDataType::S3Object:
            return "S3Object";
          case AdditionalS3DataSourceDataType::S3Prefix:
            return "S3Prefix";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AdditionalS3DataSourceDataTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
