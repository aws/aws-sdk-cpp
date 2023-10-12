/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CandidateStepType.h>
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
      namespace CandidateStepTypeMapper
      {

        static constexpr uint32_t AWS_SageMaker_TrainingJob_HASH = ConstExprHashingUtils::HashString("AWS::SageMaker::TrainingJob");
        static constexpr uint32_t AWS_SageMaker_TransformJob_HASH = ConstExprHashingUtils::HashString("AWS::SageMaker::TransformJob");
        static constexpr uint32_t AWS_SageMaker_ProcessingJob_HASH = ConstExprHashingUtils::HashString("AWS::SageMaker::ProcessingJob");


        CandidateStepType GetCandidateStepTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_SageMaker_TrainingJob_HASH)
          {
            return CandidateStepType::AWS_SageMaker_TrainingJob;
          }
          else if (hashCode == AWS_SageMaker_TransformJob_HASH)
          {
            return CandidateStepType::AWS_SageMaker_TransformJob;
          }
          else if (hashCode == AWS_SageMaker_ProcessingJob_HASH)
          {
            return CandidateStepType::AWS_SageMaker_ProcessingJob;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CandidateStepType>(hashCode);
          }

          return CandidateStepType::NOT_SET;
        }

        Aws::String GetNameForCandidateStepType(CandidateStepType enumValue)
        {
          switch(enumValue)
          {
          case CandidateStepType::NOT_SET:
            return {};
          case CandidateStepType::AWS_SageMaker_TrainingJob:
            return "AWS::SageMaker::TrainingJob";
          case CandidateStepType::AWS_SageMaker_TransformJob:
            return "AWS::SageMaker::TransformJob";
          case CandidateStepType::AWS_SageMaker_ProcessingJob:
            return "AWS::SageMaker::ProcessingJob";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CandidateStepTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
