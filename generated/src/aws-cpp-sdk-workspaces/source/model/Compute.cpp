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

        static const int VALUE_HASH = HashingUtils::HashString("VALUE");
        static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");
        static const int PERFORMANCE_HASH = HashingUtils::HashString("PERFORMANCE");
        static const int POWER_HASH = HashingUtils::HashString("POWER");
        static const int GRAPHICS_HASH = HashingUtils::HashString("GRAPHICS");
        static const int POWERPRO_HASH = HashingUtils::HashString("POWERPRO");
        static const int GRAPHICSPRO_HASH = HashingUtils::HashString("GRAPHICSPRO");
        static const int GRAPHICS_G4DN_HASH = HashingUtils::HashString("GRAPHICS_G4DN");
        static const int GRAPHICSPRO_G4DN_HASH = HashingUtils::HashString("GRAPHICSPRO_G4DN");


        Compute GetComputeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
