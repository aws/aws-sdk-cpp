/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snow-device-management/model/InstanceStateName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SnowDeviceManagement
  {
    namespace Model
    {
      namespace InstanceStateNameMapper
      {

        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t SHUTTING_DOWN_HASH = ConstExprHashingUtils::HashString("SHUTTING_DOWN");
        static constexpr uint32_t TERMINATED_HASH = ConstExprHashingUtils::HashString("TERMINATED");
        static constexpr uint32_t STOPPING_HASH = ConstExprHashingUtils::HashString("STOPPING");
        static constexpr uint32_t STOPPED_HASH = ConstExprHashingUtils::HashString("STOPPED");


        InstanceStateName GetInstanceStateNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return InstanceStateName::PENDING;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return InstanceStateName::RUNNING;
          }
          else if (hashCode == SHUTTING_DOWN_HASH)
          {
            return InstanceStateName::SHUTTING_DOWN;
          }
          else if (hashCode == TERMINATED_HASH)
          {
            return InstanceStateName::TERMINATED;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return InstanceStateName::STOPPING;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return InstanceStateName::STOPPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceStateName>(hashCode);
          }

          return InstanceStateName::NOT_SET;
        }

        Aws::String GetNameForInstanceStateName(InstanceStateName enumValue)
        {
          switch(enumValue)
          {
          case InstanceStateName::NOT_SET:
            return {};
          case InstanceStateName::PENDING:
            return "PENDING";
          case InstanceStateName::RUNNING:
            return "RUNNING";
          case InstanceStateName::SHUTTING_DOWN:
            return "SHUTTING_DOWN";
          case InstanceStateName::TERMINATED:
            return "TERMINATED";
          case InstanceStateName::STOPPING:
            return "STOPPING";
          case InstanceStateName::STOPPED:
            return "STOPPED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InstanceStateNameMapper
    } // namespace Model
  } // namespace SnowDeviceManagement
} // namespace Aws
