/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/Platform.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WAFV2
  {
    namespace Model
    {
      namespace PlatformMapper
      {

        static const int IOS_HASH = HashingUtils::HashString("IOS");
        static const int ANDROID__HASH = HashingUtils::HashString("ANDROID");


        Platform GetPlatformForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IOS_HASH)
          {
            return Platform::IOS;
          }
          else if (hashCode == ANDROID__HASH)
          {
            return Platform::ANDROID_;
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
          case Platform::IOS:
            return "IOS";
          case Platform::ANDROID_:
            return "ANDROID";
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
  } // namespace WAFV2
} // namespace Aws
