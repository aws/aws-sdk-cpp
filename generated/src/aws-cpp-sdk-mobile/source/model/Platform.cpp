/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mobile/model/Platform.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Mobile
  {
    namespace Model
    {
      namespace PlatformMapper
      {

        static constexpr uint32_t OSX_HASH = ConstExprHashingUtils::HashString("OSX");
        static constexpr uint32_t WINDOWS_HASH = ConstExprHashingUtils::HashString("WINDOWS");
        static constexpr uint32_t LINUX_HASH = ConstExprHashingUtils::HashString("LINUX");
        static constexpr uint32_t OBJC_HASH = ConstExprHashingUtils::HashString("OBJC");
        static constexpr uint32_t SWIFT_HASH = ConstExprHashingUtils::HashString("SWIFT");
        static constexpr uint32_t ANDROID__HASH = ConstExprHashingUtils::HashString("ANDROID");
        static constexpr uint32_t JAVASCRIPT_HASH = ConstExprHashingUtils::HashString("JAVASCRIPT");


        Platform GetPlatformForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OSX_HASH)
          {
            return Platform::OSX;
          }
          else if (hashCode == WINDOWS_HASH)
          {
            return Platform::WINDOWS;
          }
          else if (hashCode == LINUX_HASH)
          {
            return Platform::LINUX;
          }
          else if (hashCode == OBJC_HASH)
          {
            return Platform::OBJC;
          }
          else if (hashCode == SWIFT_HASH)
          {
            return Platform::SWIFT;
          }
          else if (hashCode == ANDROID__HASH)
          {
            return Platform::ANDROID_;
          }
          else if (hashCode == JAVASCRIPT_HASH)
          {
            return Platform::JAVASCRIPT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Platform>(hashCode);
          }

          return Platform::NOT_SET;
        }

        Aws::String GetNameForPlatform(Platform enumValue)
        {
          switch(enumValue)
          {
          case Platform::NOT_SET:
            return {};
          case Platform::OSX:
            return "OSX";
          case Platform::WINDOWS:
            return "WINDOWS";
          case Platform::LINUX:
            return "LINUX";
          case Platform::OBJC:
            return "OBJC";
          case Platform::SWIFT:
            return "SWIFT";
          case Platform::ANDROID_:
            return "ANDROID";
          case Platform::JAVASCRIPT:
            return "JAVASCRIPT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PlatformMapper
    } // namespace Model
  } // namespace Mobile
} // namespace Aws
