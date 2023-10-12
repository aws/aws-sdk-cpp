/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TargetPlatformAccelerator.h>
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
      namespace TargetPlatformAcceleratorMapper
      {

        static constexpr uint32_t INTEL_GRAPHICS_HASH = ConstExprHashingUtils::HashString("INTEL_GRAPHICS");
        static constexpr uint32_t MALI_HASH = ConstExprHashingUtils::HashString("MALI");
        static constexpr uint32_t NVIDIA_HASH = ConstExprHashingUtils::HashString("NVIDIA");
        static constexpr uint32_t NNA_HASH = ConstExprHashingUtils::HashString("NNA");


        TargetPlatformAccelerator GetTargetPlatformAcceleratorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INTEL_GRAPHICS_HASH)
          {
            return TargetPlatformAccelerator::INTEL_GRAPHICS;
          }
          else if (hashCode == MALI_HASH)
          {
            return TargetPlatformAccelerator::MALI;
          }
          else if (hashCode == NVIDIA_HASH)
          {
            return TargetPlatformAccelerator::NVIDIA;
          }
          else if (hashCode == NNA_HASH)
          {
            return TargetPlatformAccelerator::NNA;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TargetPlatformAccelerator>(hashCode);
          }

          return TargetPlatformAccelerator::NOT_SET;
        }

        Aws::String GetNameForTargetPlatformAccelerator(TargetPlatformAccelerator enumValue)
        {
          switch(enumValue)
          {
          case TargetPlatformAccelerator::NOT_SET:
            return {};
          case TargetPlatformAccelerator::INTEL_GRAPHICS:
            return "INTEL_GRAPHICS";
          case TargetPlatformAccelerator::MALI:
            return "MALI";
          case TargetPlatformAccelerator::NVIDIA:
            return "NVIDIA";
          case TargetPlatformAccelerator::NNA:
            return "NNA";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TargetPlatformAcceleratorMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
