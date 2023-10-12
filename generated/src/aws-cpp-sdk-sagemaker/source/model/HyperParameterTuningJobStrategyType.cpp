/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/HyperParameterTuningJobStrategyType.h>
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
      namespace HyperParameterTuningJobStrategyTypeMapper
      {

        static constexpr uint32_t Bayesian_HASH = ConstExprHashingUtils::HashString("Bayesian");
        static constexpr uint32_t Random_HASH = ConstExprHashingUtils::HashString("Random");
        static constexpr uint32_t Hyperband_HASH = ConstExprHashingUtils::HashString("Hyperband");
        static constexpr uint32_t Grid_HASH = ConstExprHashingUtils::HashString("Grid");


        HyperParameterTuningJobStrategyType GetHyperParameterTuningJobStrategyTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Bayesian_HASH)
          {
            return HyperParameterTuningJobStrategyType::Bayesian;
          }
          else if (hashCode == Random_HASH)
          {
            return HyperParameterTuningJobStrategyType::Random;
          }
          else if (hashCode == Hyperband_HASH)
          {
            return HyperParameterTuningJobStrategyType::Hyperband;
          }
          else if (hashCode == Grid_HASH)
          {
            return HyperParameterTuningJobStrategyType::Grid;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HyperParameterTuningJobStrategyType>(hashCode);
          }

          return HyperParameterTuningJobStrategyType::NOT_SET;
        }

        Aws::String GetNameForHyperParameterTuningJobStrategyType(HyperParameterTuningJobStrategyType enumValue)
        {
          switch(enumValue)
          {
          case HyperParameterTuningJobStrategyType::NOT_SET:
            return {};
          case HyperParameterTuningJobStrategyType::Bayesian:
            return "Bayesian";
          case HyperParameterTuningJobStrategyType::Random:
            return "Random";
          case HyperParameterTuningJobStrategyType::Hyperband:
            return "Hyperband";
          case HyperParameterTuningJobStrategyType::Grid:
            return "Grid";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HyperParameterTuningJobStrategyTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
