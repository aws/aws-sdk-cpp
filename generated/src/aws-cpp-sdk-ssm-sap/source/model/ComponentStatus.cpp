/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-sap/model/ComponentStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SsmSap
  {
    namespace Model
    {
      namespace ComponentStatusMapper
      {

        static constexpr uint32_t ACTIVATED_HASH = ConstExprHashingUtils::HashString("ACTIVATED");
        static constexpr uint32_t STARTING_HASH = ConstExprHashingUtils::HashString("STARTING");
        static constexpr uint32_t STOPPED_HASH = ConstExprHashingUtils::HashString("STOPPED");
        static constexpr uint32_t STOPPING_HASH = ConstExprHashingUtils::HashString("STOPPING");
        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t RUNNING_WITH_ERROR_HASH = ConstExprHashingUtils::HashString("RUNNING_WITH_ERROR");
        static constexpr uint32_t UNDEFINED_HASH = ConstExprHashingUtils::HashString("UNDEFINED");


        ComponentStatus GetComponentStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVATED_HASH)
          {
            return ComponentStatus::ACTIVATED;
          }
          else if (hashCode == STARTING_HASH)
          {
            return ComponentStatus::STARTING;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return ComponentStatus::STOPPED;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return ComponentStatus::STOPPING;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return ComponentStatus::RUNNING;
          }
          else if (hashCode == RUNNING_WITH_ERROR_HASH)
          {
            return ComponentStatus::RUNNING_WITH_ERROR;
          }
          else if (hashCode == UNDEFINED_HASH)
          {
            return ComponentStatus::UNDEFINED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ComponentStatus>(hashCode);
          }

          return ComponentStatus::NOT_SET;
        }

        Aws::String GetNameForComponentStatus(ComponentStatus enumValue)
        {
          switch(enumValue)
          {
          case ComponentStatus::NOT_SET:
            return {};
          case ComponentStatus::ACTIVATED:
            return "ACTIVATED";
          case ComponentStatus::STARTING:
            return "STARTING";
          case ComponentStatus::STOPPED:
            return "STOPPED";
          case ComponentStatus::STOPPING:
            return "STOPPING";
          case ComponentStatus::RUNNING:
            return "RUNNING";
          case ComponentStatus::RUNNING_WITH_ERROR:
            return "RUNNING_WITH_ERROR";
          case ComponentStatus::UNDEFINED:
            return "UNDEFINED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ComponentStatusMapper
    } // namespace Model
  } // namespace SsmSap
} // namespace Aws
