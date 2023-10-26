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

        static const int ACTIVATED_HASH = HashingUtils::HashString("ACTIVATED");
        static const int STARTING_HASH = HashingUtils::HashString("STARTING");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");
        static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int RUNNING_WITH_ERROR_HASH = HashingUtils::HashString("RUNNING_WITH_ERROR");
        static const int UNDEFINED_HASH = HashingUtils::HashString("UNDEFINED");


        ComponentStatus GetComponentStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
