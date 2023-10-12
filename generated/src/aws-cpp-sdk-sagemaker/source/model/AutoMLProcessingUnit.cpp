/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AutoMLProcessingUnit.h>
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
      namespace AutoMLProcessingUnitMapper
      {

        static constexpr uint32_t CPU_HASH = ConstExprHashingUtils::HashString("CPU");
        static constexpr uint32_t GPU_HASH = ConstExprHashingUtils::HashString("GPU");


        AutoMLProcessingUnit GetAutoMLProcessingUnitForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CPU_HASH)
          {
            return AutoMLProcessingUnit::CPU;
          }
          else if (hashCode == GPU_HASH)
          {
            return AutoMLProcessingUnit::GPU;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutoMLProcessingUnit>(hashCode);
          }

          return AutoMLProcessingUnit::NOT_SET;
        }

        Aws::String GetNameForAutoMLProcessingUnit(AutoMLProcessingUnit enumValue)
        {
          switch(enumValue)
          {
          case AutoMLProcessingUnit::NOT_SET:
            return {};
          case AutoMLProcessingUnit::CPU:
            return "CPU";
          case AutoMLProcessingUnit::GPU:
            return "GPU";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutoMLProcessingUnitMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
