/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/HyperParameterTuningAllocationStrategy.h>
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
      namespace HyperParameterTuningAllocationStrategyMapper
      {

        static const int Prioritized_HASH = HashingUtils::HashString("Prioritized");


        HyperParameterTuningAllocationStrategy GetHyperParameterTuningAllocationStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Prioritized_HASH)
          {
            return HyperParameterTuningAllocationStrategy::Prioritized;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HyperParameterTuningAllocationStrategy>(hashCode);
          }

          return HyperParameterTuningAllocationStrategy::NOT_SET;
        }

        Aws::String GetNameForHyperParameterTuningAllocationStrategy(HyperParameterTuningAllocationStrategy enumValue)
        {
          switch(enumValue)
          {
          case HyperParameterTuningAllocationStrategy::NOT_SET:
            return {};
          case HyperParameterTuningAllocationStrategy::Prioritized:
            return "Prioritized";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HyperParameterTuningAllocationStrategyMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
