/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/Compute.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpaces
  {
    namespace Model
    {
      namespace ComputeMapper
      {

        static constexpr uint32_t VALUE_HASH = ConstExprHashingUtils::HashString("VALUE");
        static constexpr uint32_t STANDARD_HASH = ConstExprHashingUtils::HashString("STANDARD");
        static constexpr uint32_t PERFORMANCE_HASH = ConstExprHashingUtils::HashString("PERFORMANCE");
        static constexpr uint32_t POWER_HASH = ConstExprHashingUtils::HashString("POWER");
        static constexpr uint32_t GRAPHICS_HASH = ConstExprHashingUtils::HashString("GRAPHICS");
        static constexpr uint32_t POWERPRO_HASH = ConstExprHashingUtils::HashString("POWERPRO");
        static constexpr uint32_t GRAPHICSPRO_HASH = ConstExprHashingUtils::HashString("GRAPHICSPRO");
        static constexpr uint32_t GRAPHICS_G4DN_HASH = ConstExprHashingUtils::HashString("GRAPHICS_G4DN");
        static constexpr uint32_t GRAPHICSPRO_G4DN_HASH = ConstExprHashingUtils::HashString("GRAPHICSPRO_G4DN");


        Compute GetComputeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VALUE_HASH)
          {
            return Compute::VALUE;
          }
          else if (hashCode == STANDARD_HASH)
          {
            return Compute::STANDARD;
          }
          else if (hashCode == PERFORMANCE_HASH)
          {
            return Compute::PERFORMANCE;
          }
          else if (hashCode == POWER_HASH)
          {
            return Compute::POWER;
          }
          else if (hashCode == GRAPHICS_HASH)
          {
            return Compute::GRAPHICS;
          }
          else if (hashCode == POWERPRO_HASH)
          {
            return Compute::POWERPRO;
          }
          else if (hashCode == GRAPHICSPRO_HASH)
          {
            return Compute::GRAPHICSPRO;
          }
          else if (hashCode == GRAPHICS_G4DN_HASH)
          {
            return Compute::GRAPHICS_G4DN;
          }
          else if (hashCode == GRAPHICSPRO_G4DN_HASH)
          {
            return Compute::GRAPHICSPRO_G4DN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Compute>(hashCode);
          }

          return Compute::NOT_SET;
        }

        Aws::String GetNameForCompute(Compute enumValue)
        {
          switch(enumValue)
          {
          case Compute::NOT_SET:
            return {};
          case Compute::VALUE:
            return "VALUE";
          case Compute::STANDARD:
            return "STANDARD";
          case Compute::PERFORMANCE:
            return "PERFORMANCE";
          case Compute::POWER:
            return "POWER";
          case Compute::GRAPHICS:
            return "GRAPHICS";
          case Compute::POWERPRO:
            return "POWERPRO";
          case Compute::GRAPHICSPRO:
            return "GRAPHICSPRO";
          case Compute::GRAPHICS_G4DN:
            return "GRAPHICS_G4DN";
          case Compute::GRAPHICSPRO_G4DN:
            return "GRAPHICSPRO_G4DN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ComputeMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
