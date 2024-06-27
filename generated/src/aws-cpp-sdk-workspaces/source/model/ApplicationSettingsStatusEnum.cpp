/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/ApplicationSettingsStatusEnum.h>
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
      namespace ApplicationSettingsStatusEnumMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");


        ApplicationSettingsStatusEnum GetApplicationSettingsStatusEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return ApplicationSettingsStatusEnum::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return ApplicationSettingsStatusEnum::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ApplicationSettingsStatusEnum>(hashCode);
          }

          return ApplicationSettingsStatusEnum::NOT_SET;
        }

        Aws::String GetNameForApplicationSettingsStatusEnum(ApplicationSettingsStatusEnum enumValue)
        {
          switch(enumValue)
          {
          case ApplicationSettingsStatusEnum::NOT_SET:
            return {};
          case ApplicationSettingsStatusEnum::DISABLED:
            return "DISABLED";
          case ApplicationSettingsStatusEnum::ENABLED:
            return "ENABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ApplicationSettingsStatusEnumMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
