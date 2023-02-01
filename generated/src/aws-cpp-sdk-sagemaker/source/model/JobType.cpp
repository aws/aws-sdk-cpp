/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/JobType.h>
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
      namespace JobTypeMapper
      {

        static const int TRAINING_HASH = HashingUtils::HashString("TRAINING");
        static const int INFERENCE_HASH = HashingUtils::HashString("INFERENCE");
        static const int NOTEBOOK_KERNEL_HASH = HashingUtils::HashString("NOTEBOOK_KERNEL");


        JobType GetJobTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TRAINING_HASH)
          {
            return JobType::TRAINING;
          }
          else if (hashCode == INFERENCE_HASH)
          {
            return JobType::INFERENCE;
          }
          else if (hashCode == NOTEBOOK_KERNEL_HASH)
          {
            return JobType::NOTEBOOK_KERNEL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JobType>(hashCode);
          }

          return JobType::NOT_SET;
        }

        Aws::String GetNameForJobType(JobType enumValue)
        {
          switch(enumValue)
          {
          case JobType::TRAINING:
            return "TRAINING";
          case JobType::INFERENCE:
            return "INFERENCE";
          case JobType::NOTEBOOK_KERNEL:
            return "NOTEBOOK_KERNEL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace JobTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
