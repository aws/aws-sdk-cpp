/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/AGAModeForWorkSpaceEnum.h>
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
      namespace AGAModeForWorkSpaceEnumMapper
      {

        static const int ENABLED_AUTO_HASH = HashingUtils::HashString("ENABLED_AUTO");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int INHERITED_HASH = HashingUtils::HashString("INHERITED");


        AGAModeForWorkSpaceEnum GetAGAModeForWorkSpaceEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_AUTO_HASH)
          {
            return AGAModeForWorkSpaceEnum::ENABLED_AUTO;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return AGAModeForWorkSpaceEnum::DISABLED;
          }
          else if (hashCode == INHERITED_HASH)
          {
            return AGAModeForWorkSpaceEnum::INHERITED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AGAModeForWorkSpaceEnum>(hashCode);
          }

          return AGAModeForWorkSpaceEnum::NOT_SET;
        }

        Aws::String GetNameForAGAModeForWorkSpaceEnum(AGAModeForWorkSpaceEnum enumValue)
        {
          switch(enumValue)
          {
          case AGAModeForWorkSpaceEnum::NOT_SET:
            return {};
          case AGAModeForWorkSpaceEnum::ENABLED_AUTO:
            return "ENABLED_AUTO";
          case AGAModeForWorkSpaceEnum::DISABLED:
            return "DISABLED";
          case AGAModeForWorkSpaceEnum::INHERITED:
            return "INHERITED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AGAModeForWorkSpaceEnumMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
