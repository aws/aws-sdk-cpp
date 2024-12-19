/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/AGAModeForDirectoryEnum.h>
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
      namespace AGAModeForDirectoryEnumMapper
      {

        static const int ENABLED_AUTO_HASH = HashingUtils::HashString("ENABLED_AUTO");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        AGAModeForDirectoryEnum GetAGAModeForDirectoryEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_AUTO_HASH)
          {
            return AGAModeForDirectoryEnum::ENABLED_AUTO;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return AGAModeForDirectoryEnum::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AGAModeForDirectoryEnum>(hashCode);
          }

          return AGAModeForDirectoryEnum::NOT_SET;
        }

        Aws::String GetNameForAGAModeForDirectoryEnum(AGAModeForDirectoryEnum enumValue)
        {
          switch(enumValue)
          {
          case AGAModeForDirectoryEnum::NOT_SET:
            return {};
          case AGAModeForDirectoryEnum::ENABLED_AUTO:
            return "ENABLED_AUTO";
          case AGAModeForDirectoryEnum::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AGAModeForDirectoryEnumMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
