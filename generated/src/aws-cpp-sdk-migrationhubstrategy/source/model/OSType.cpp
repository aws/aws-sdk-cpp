/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/OSType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MigrationHubStrategyRecommendations
  {
    namespace Model
    {
      namespace OSTypeMapper
      {

        static const int LINUX_HASH = HashingUtils::HashString("LINUX");
        static const int WINDOWS_HASH = HashingUtils::HashString("WINDOWS");


        OSType GetOSTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LINUX_HASH)
          {
            return OSType::LINUX;
          }
          else if (hashCode == WINDOWS_HASH)
          {
            return OSType::WINDOWS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OSType>(hashCode);
          }

          return OSType::NOT_SET;
        }

        Aws::String GetNameForOSType(OSType enumValue)
        {
          switch(enumValue)
          {
          case OSType::NOT_SET:
            return {};
          case OSType::LINUX:
            return "LINUX";
          case OSType::WINDOWS:
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

      } // namespace OSTypeMapper
    } // namespace Model
  } // namespace MigrationHubStrategyRecommendations
} // namespace Aws
