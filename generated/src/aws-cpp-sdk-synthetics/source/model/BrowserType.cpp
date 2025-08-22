/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/synthetics/model/BrowserType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Synthetics
  {
    namespace Model
    {
      namespace BrowserTypeMapper
      {

        static const int CHROME_HASH = HashingUtils::HashString("CHROME");
        static const int FIREFOX_HASH = HashingUtils::HashString("FIREFOX");


        BrowserType GetBrowserTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CHROME_HASH)
          {
            return BrowserType::CHROME;
          }
          else if (hashCode == FIREFOX_HASH)
          {
            return BrowserType::FIREFOX;
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
          case BrowserType::CHROME:
            return "CHROME";
          case BrowserType::FIREFOX:
            return "FIREFOX";
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
  } // namespace Synthetics
} // namespace Aws
