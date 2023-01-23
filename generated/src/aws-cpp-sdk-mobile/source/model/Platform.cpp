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

        static const int OSX_HASH = HashingUtils::HashString("OSX");
        static const int WINDOWS_HASH = HashingUtils::HashString("WINDOWS");
        static const int LINUX_HASH = HashingUtils::HashString("LINUX");
        static const int OBJC_HASH = HashingUtils::HashString("OBJC");
        static const int SWIFT_HASH = HashingUtils::HashString("SWIFT");
        static const int ANDROID__HASH = HashingUtils::HashString("ANDROID");
        static const int JAVASCRIPT_HASH = HashingUtils::HashString("JAVASCRIPT");


        Platform GetPlatformForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
