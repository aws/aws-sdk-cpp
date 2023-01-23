/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ProcessingS3UploadMode.h>
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
      namespace ProcessingS3UploadModeMapper
      {

        static const int Continuous_HASH = HashingUtils::HashString("Continuous");
        static const int EndOfJob_HASH = HashingUtils::HashString("EndOfJob");


        ProcessingS3UploadMode GetProcessingS3UploadModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Continuous_HASH)
          {
            return ProcessingS3UploadMode::Continuous;
          }
          else if (hashCode == EndOfJob_HASH)
          {
            return ProcessingS3UploadMode::EndOfJob;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProcessingS3UploadMode>(hashCode);
          }

          return ProcessingS3UploadMode::NOT_SET;
        }

        Aws::String GetNameForProcessingS3UploadMode(ProcessingS3UploadMode enumValue)
        {
          switch(enumValue)
          {
          case ProcessingS3UploadMode::Continuous:
            return "Continuous";
          case ProcessingS3UploadMode::EndOfJob:
            return "EndOfJob";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProcessingS3UploadModeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
