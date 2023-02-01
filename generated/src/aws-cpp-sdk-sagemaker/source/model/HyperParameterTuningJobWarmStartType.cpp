/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/HyperParameterTuningJobWarmStartType.h>
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
      namespace HyperParameterTuningJobWarmStartTypeMapper
      {

        static const int IdenticalDataAndAlgorithm_HASH = HashingUtils::HashString("IdenticalDataAndAlgorithm");
        static const int TransferLearning_HASH = HashingUtils::HashString("TransferLearning");


        HyperParameterTuningJobWarmStartType GetHyperParameterTuningJobWarmStartTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IdenticalDataAndAlgorithm_HASH)
          {
            return HyperParameterTuningJobWarmStartType::IdenticalDataAndAlgorithm;
          }
          else if (hashCode == TransferLearning_HASH)
          {
            return HyperParameterTuningJobWarmStartType::TransferLearning;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HyperParameterTuningJobWarmStartType>(hashCode);
          }

          return HyperParameterTuningJobWarmStartType::NOT_SET;
        }

        Aws::String GetNameForHyperParameterTuningJobWarmStartType(HyperParameterTuningJobWarmStartType enumValue)
        {
          switch(enumValue)
          {
          case HyperParameterTuningJobWarmStartType::IdenticalDataAndAlgorithm:
            return "IdenticalDataAndAlgorithm";
          case HyperParameterTuningJobWarmStartType::TransferLearning:
            return "TransferLearning";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HyperParameterTuningJobWarmStartTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
