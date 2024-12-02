/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/BrowserExtension.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QBusiness
  {
    namespace Model
    {
      namespace BrowserExtensionMapper
      {

        static const int FIREFOX_HASH = HashingUtils::HashString("FIREFOX");
        static const int CHROME_HASH = HashingUtils::HashString("CHROME");


        BrowserExtension GetBrowserExtensionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FIREFOX_HASH)
          {
            return BrowserExtension::FIREFOX;
          }
          else if (hashCode == CHROME_HASH)
          {
            return BrowserExtension::CHROME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BrowserExtension>(hashCode);
          }

          return BrowserExtension::NOT_SET;
        }

        Aws::String GetNameForBrowserExtension(BrowserExtension enumValue)
        {
          switch(enumValue)
          {
          case BrowserExtension::NOT_SET:
            return {};
          case BrowserExtension::FIREFOX:
            return "FIREFOX";
          case BrowserExtension::CHROME:
            return "CHROME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BrowserExtensionMapper
    } // namespace Model
  } // namespace QBusiness
} // namespace Aws
