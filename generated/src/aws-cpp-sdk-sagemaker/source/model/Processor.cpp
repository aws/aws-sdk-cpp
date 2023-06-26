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

        static const int CPU_HASH = HashingUtils::HashString("CPU");
        static const int GPU_HASH = HashingUtils::HashString("GPU");


        Processor GetProcessorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
