/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/Architecture.h>
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
      namespace ArchitectureMapper
      {

        static constexpr uint32_t X86_64_HASH = ConstExprHashingUtils::HashString("X86_64");
        static constexpr uint32_t ARM64_HASH = ConstExprHashingUtils::HashString("ARM64");
        static constexpr uint32_t ARMHF_HASH = ConstExprHashingUtils::HashString("ARMHF");


        Architecture GetArchitectureForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == X86_64_HASH)
          {
            return Architecture::X86_64;
          }
          else if (hashCode == ARM64_HASH)
          {
            return Architecture::ARM64;
          }
          else if (hashCode == ARMHF_HASH)
          {
            return Architecture::ARMHF;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Architecture>(hashCode);
          }

          return Architecture::NOT_SET;
        }

        Aws::String GetNameForArchitecture(Architecture enumValue)
        {
          switch(enumValue)
          {
          case Architecture::NOT_SET:
            return {};
          case Architecture::X86_64:
            return "X86_64";
          case Architecture::ARM64:
            return "ARM64";
          case Architecture::ARMHF:
            return "ARMHF";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ArchitectureMapper
    } // namespace Model
  } // namespace RoboMaker
} // namespace Aws
