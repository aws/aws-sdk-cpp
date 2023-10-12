/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms/model/AppLaunchConfigurationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SMS
  {
    namespace Model
    {
      namespace AppLaunchConfigurationStatusMapper
      {

        static constexpr uint32_t NOT_CONFIGURED_HASH = ConstExprHashingUtils::HashString("NOT_CONFIGURED");
        static constexpr uint32_t CONFIGURED_HASH = ConstExprHashingUtils::HashString("CONFIGURED");


        AppLaunchConfigurationStatus GetAppLaunchConfigurationStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NOT_CONFIGURED_HASH)
          {
            return AppLaunchConfigurationStatus::NOT_CONFIGURED;
          }
          else if (hashCode == CONFIGURED_HASH)
          {
            return AppLaunchConfigurationStatus::CONFIGURED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AppLaunchConfigurationStatus>(hashCode);
          }

          return AppLaunchConfigurationStatus::NOT_SET;
        }

        Aws::String GetNameForAppLaunchConfigurationStatus(AppLaunchConfigurationStatus enumValue)
        {
          switch(enumValue)
          {
          case AppLaunchConfigurationStatus::NOT_SET:
            return {};
          case AppLaunchConfigurationStatus::NOT_CONFIGURED:
            return "NOT_CONFIGURED";
          case AppLaunchConfigurationStatus::CONFIGURED:
            return "CONFIGURED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AppLaunchConfigurationStatusMapper
    } // namespace Model
  } // namespace SMS
} // namespace Aws
