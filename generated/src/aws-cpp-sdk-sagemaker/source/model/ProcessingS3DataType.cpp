/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ProcessingS3DataType.h>
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
      namespace ProcessingS3DataTypeMapper
      {

        static const int ManifestFile_HASH = HashingUtils::HashString("ManifestFile");
        static const int S3Prefix_HASH = HashingUtils::HashString("S3Prefix");


        ProcessingS3DataType GetProcessingS3DataTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ManifestFile_HASH)
          {
            return ProcessingS3DataType::ManifestFile;
          }
          else if (hashCode == S3Prefix_HASH)
          {
            return ProcessingS3DataType::S3Prefix;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProcessingS3DataType>(hashCode);
          }

          return ProcessingS3DataType::NOT_SET;
        }

        Aws::String GetNameForProcessingS3DataType(ProcessingS3DataType enumValue)
        {
          switch(enumValue)
          {
          case ProcessingS3DataType::ManifestFile:
            return "ManifestFile";
          case ProcessingS3DataType::S3Prefix:
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

      } // namespace ProcessingS3DataTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
