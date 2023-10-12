/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/Processor.h>
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
      namespace ProcessorMapper
      {

        static constexpr uint32_t CPU_HASH = ConstExprHashingUtils::HashString("CPU");
        static constexpr uint32_t GPU_HASH = ConstExprHashingUtils::HashString("GPU");


        Processor GetProcessorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CPU_HASH)
          {
            return Processor::CPU;
          }
          else if (hashCode == GPU_HASH)
          {
            return Processor::GPU;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Processor>(hashCode);
          }

          return Processor::NOT_SET;
        }

        Aws::String GetNameForProcessor(Processor enumValue)
        {
          switch(enumValue)
          {
          case Processor::NOT_SET:
            return {};
          case Processor::CPU:
            return "CPU";
          case Processor::GPU:
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

      } // namespace ProcessorMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
