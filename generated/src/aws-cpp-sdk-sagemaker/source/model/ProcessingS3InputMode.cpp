/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ProcessingS3InputMode.h>
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
      namespace ProcessingS3InputModeMapper
      {

        static const int Pipe_HASH = HashingUtils::HashString("Pipe");
        static const int File_HASH = HashingUtils::HashString("File");


        ProcessingS3InputMode GetProcessingS3InputModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Pipe_HASH)
          {
            return ProcessingS3InputMode::Pipe;
          }
          else if (hashCode == File_HASH)
          {
            return ProcessingS3InputMode::File;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProcessingS3InputMode>(hashCode);
          }

          return ProcessingS3InputMode::NOT_SET;
        }

        Aws::String GetNameForProcessingS3InputMode(ProcessingS3InputMode enumValue)
        {
          switch(enumValue)
          {
          case ProcessingS3InputMode::Pipe:
            return "Pipe";
          case ProcessingS3InputMode::File:
            return "File";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProcessingS3InputModeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
