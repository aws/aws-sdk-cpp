/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/LaunchProfilePlatform.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NimbleStudio
  {
    namespace Model
    {
      namespace LaunchProfilePlatformMapper
      {

        static constexpr uint32_t LINUX_HASH = ConstExprHashingUtils::HashString("LINUX");
        static constexpr uint32_t WINDOWS_HASH = ConstExprHashingUtils::HashString("WINDOWS");


        LaunchProfilePlatform GetLaunchProfilePlatformForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LINUX_HASH)
          {
            return LaunchProfilePlatform::LINUX;
          }
          else if (hashCode == WINDOWS_HASH)
          {
            return LaunchProfilePlatform::WINDOWS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LaunchProfilePlatform>(hashCode);
          }

          return LaunchProfilePlatform::NOT_SET;
        }

        Aws::String GetNameForLaunchProfilePlatform(LaunchProfilePlatform enumValue)
        {
          switch(enumValue)
          {
          case LaunchProfilePlatform::NOT_SET:
            return {};
          case LaunchProfilePlatform::LINUX:
            return "LINUX";
          case LaunchProfilePlatform::WINDOWS:
            return "WINDOWS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LaunchProfilePlatformMapper
    } // namespace Model
  } // namespace NimbleStudio
} // namespace Aws
