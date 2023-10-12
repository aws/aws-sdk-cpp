/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/ComputeType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RoboMaker
  {
    namespace Model
    {
      namespace ComputeTypeMapper
      {

        static constexpr uint32_t CPU_HASH = ConstExprHashingUtils::HashString("CPU");
        static constexpr uint32_t GPU_AND_CPU_HASH = ConstExprHashingUtils::HashString("GPU_AND_CPU");


        ComputeType GetComputeTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CPU_HASH)
          {
            return ComputeType::CPU;
          }
          else if (hashCode == GPU_AND_CPU_HASH)
          {
            return ComputeType::GPU_AND_CPU;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ComputeType>(hashCode);
          }

          return ComputeType::NOT_SET;
        }

        Aws::String GetNameForComputeType(ComputeType enumValue)
        {
          switch(enumValue)
          {
          case ComputeType::NOT_SET:
            return {};
          case ComputeType::CPU:
            return "CPU";
          case ComputeType::GPU_AND_CPU:
            return "GPU_AND_CPU";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ComputeTypeMapper
    } // namespace Model
  } // namespace RoboMaker
} // namespace Aws
