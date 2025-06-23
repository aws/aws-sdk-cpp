/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-instances/model/InstanceInterruptionBehaviorEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkspacesInstances
  {
    namespace Model
    {
      namespace InstanceInterruptionBehaviorEnumMapper
      {

        static const int hibernate_HASH = HashingUtils::HashString("hibernate");
        static const int stop_HASH = HashingUtils::HashString("stop");


        InstanceInterruptionBehaviorEnum GetInstanceInterruptionBehaviorEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == hibernate_HASH)
          {
            return InstanceInterruptionBehaviorEnum::hibernate;
          }
          else if (hashCode == stop_HASH)
          {
            return InstanceInterruptionBehaviorEnum::stop;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceInterruptionBehaviorEnum>(hashCode);
          }

          return InstanceInterruptionBehaviorEnum::NOT_SET;
        }

        Aws::String GetNameForInstanceInterruptionBehaviorEnum(InstanceInterruptionBehaviorEnum enumValue)
        {
          switch(enumValue)
          {
          case InstanceInterruptionBehaviorEnum::NOT_SET:
            return {};
          case InstanceInterruptionBehaviorEnum::hibernate:
            return "hibernate";
          case InstanceInterruptionBehaviorEnum::stop:
            return "stop";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InstanceInterruptionBehaviorEnumMapper
    } // namespace Model
  } // namespace WorkspacesInstances
} // namespace Aws
