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

        static constexpr uint32_t TRAINING_HASH = ConstExprHashingUtils::HashString("TRAINING");
        static constexpr uint32_t INFERENCE_HASH = ConstExprHashingUtils::HashString("INFERENCE");
        static constexpr uint32_t NOTEBOOK_KERNEL_HASH = ConstExprHashingUtils::HashString("NOTEBOOK_KERNEL");


        JobType GetJobTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case JobType::NOT_SET:
            return {};
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
