/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/synthetics/model/ProvisionedResourceCleanupSetting.h>
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
      namespace ProvisionedResourceCleanupSettingMapper
      {

        static const int AUTOMATIC_HASH = HashingUtils::HashString("AUTOMATIC");
        static const int OFF_HASH = HashingUtils::HashString("OFF");


        ProvisionedResourceCleanupSetting GetProvisionedResourceCleanupSettingForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTOMATIC_HASH)
          {
            return ProvisionedResourceCleanupSetting::AUTOMATIC;
          }
          else if (hashCode == OFF_HASH)
          {
            return ProvisionedResourceCleanupSetting::OFF;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProvisionedResourceCleanupSetting>(hashCode);
          }

          return ProvisionedResourceCleanupSetting::NOT_SET;
        }

        Aws::String GetNameForProvisionedResourceCleanupSetting(ProvisionedResourceCleanupSetting enumValue)
        {
          switch(enumValue)
          {
          case ProvisionedResourceCleanupSetting::NOT_SET:
            return {};
          case ProvisionedResourceCleanupSetting::AUTOMATIC:
            return "AUTOMATIC";
          case ProvisionedResourceCleanupSetting::OFF:
            return "OFF";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProvisionedResourceCleanupSettingMapper
    } // namespace Model
  } // namespace Synthetics
} // namespace Aws
