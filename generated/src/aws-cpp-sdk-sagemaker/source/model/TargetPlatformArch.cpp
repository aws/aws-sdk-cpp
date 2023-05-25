/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TargetPlatformArch.h>
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
      namespace TargetPlatformArchMapper
      {

        static const int X86_64_HASH = HashingUtils::HashString("X86_64");
        static const int X86_HASH = HashingUtils::HashString("X86");
        static const int ARM64_HASH = HashingUtils::HashString("ARM64");
        static const int ARM_EABI_HASH = HashingUtils::HashString("ARM_EABI");
        static const int ARM_EABIHF_HASH = HashingUtils::HashString("ARM_EABIHF");


        TargetPlatformArch GetTargetPlatformArchForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == X86_64_HASH)
          {
            return TargetPlatformArch::X86_64;
          }
          else if (hashCode == X86_HASH)
          {
            return TargetPlatformArch::X86;
          }
          else if (hashCode == ARM64_HASH)
          {
            return TargetPlatformArch::ARM64;
          }
          else if (hashCode == ARM_EABI_HASH)
          {
            return TargetPlatformArch::ARM_EABI;
          }
          else if (hashCode == ARM_EABIHF_HASH)
          {
            return TargetPlatformArch::ARM_EABIHF;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TargetPlatformArch>(hashCode);
          }

          return TargetPlatformArch::NOT_SET;
        }

        Aws::String GetNameForTargetPlatformArch(TargetPlatformArch enumValue)
        {
          switch(enumValue)
          {
          case TargetPlatformArch::X86_64:
            return "X86_64";
          case TargetPlatformArch::X86:
            return "X86";
          case TargetPlatformArch::ARM64:
            return "ARM64";
          case TargetPlatformArch::ARM_EABI:
            return "ARM_EABI";
          case TargetPlatformArch::ARM_EABIHF:
            return "ARM_EABIHF";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TargetPlatformArchMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
