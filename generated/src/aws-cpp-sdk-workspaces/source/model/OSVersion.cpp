/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/OSVersion.h>
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
      namespace OSVersionMapper
      {

        static const int Windows_10_HASH = HashingUtils::HashString("Windows_10");
        static const int Windows_11_HASH = HashingUtils::HashString("Windows_11");


        OSVersion GetOSVersionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Windows_10_HASH)
          {
            return OSVersion::Windows_10;
          }
          else if (hashCode == Windows_11_HASH)
          {
            return OSVersion::Windows_11;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OSVersion>(hashCode);
          }

          return OSVersion::NOT_SET;
        }

        Aws::String GetNameForOSVersion(OSVersion enumValue)
        {
          switch(enumValue)
          {
          case OSVersion::NOT_SET:
            return {};
          case OSVersion::Windows_10:
            return "Windows_10";
          case OSVersion::Windows_11:
            return "Windows_11";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OSVersionMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
