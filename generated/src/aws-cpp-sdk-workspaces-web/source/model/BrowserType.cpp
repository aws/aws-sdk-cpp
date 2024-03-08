/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/BrowserType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpacesWeb
  {
    namespace Model
    {
      namespace BrowserTypeMapper
      {

        static const int Chrome_HASH = HashingUtils::HashString("Chrome");


        BrowserType GetBrowserTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Chrome_HASH)
          {
            return BrowserType::Chrome;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BrowserType>(hashCode);
          }

          return BrowserType::NOT_SET;
        }

        Aws::String GetNameForBrowserType(BrowserType enumValue)
        {
          switch(enumValue)
          {
          case BrowserType::NOT_SET:
            return {};
          case BrowserType::Chrome:
            return "Chrome";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BrowserTypeMapper
    } // namespace Model
  } // namespace WorkSpacesWeb
} // namespace Aws
