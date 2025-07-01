/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/odb/model/ResourceStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace odb
  {
    namespace Model
    {
      namespace ResourceStatusMapper
      {

        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int PROVISIONING_HASH = HashingUtils::HashString("PROVISIONING");
        static const int TERMINATED_HASH = HashingUtils::HashString("TERMINATED");
        static const int TERMINATING_HASH = HashingUtils::HashString("TERMINATING");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int MAINTENANCE_IN_PROGRESS_HASH = HashingUtils::HashString("MAINTENANCE_IN_PROGRESS");


        ResourceStatus GetResourceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVAILABLE_HASH)
          {
            return ResourceStatus::AVAILABLE;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ResourceStatus::FAILED;
          }
          else if (hashCode == PROVISIONING_HASH)
          {
            return ResourceStatus::PROVISIONING;
          }
          else if (hashCode == TERMINATED_HASH)
          {
            return ResourceStatus::TERMINATED;
          }
          else if (hashCode == TERMINATING_HASH)
          {
            return ResourceStatus::TERMINATING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return ResourceStatus::UPDATING;
          }
          else if (hashCode == MAINTENANCE_IN_PROGRESS_HASH)
          {
            return ResourceStatus::MAINTENANCE_IN_PROGRESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceStatus>(hashCode);
          }

          return ResourceStatus::NOT_SET;
        }

        Aws::String GetNameForResourceStatus(ResourceStatus enumValue)
        {
          switch(enumValue)
          {
          case ResourceStatus::NOT_SET:
            return {};
          case ResourceStatus::AVAILABLE:
            return "AVAILABLE";
          case ResourceStatus::FAILED:
            return "FAILED";
          case ResourceStatus::PROVISIONING:
            return "PROVISIONING";
          case ResourceStatus::TERMINATED:
            return "TERMINATED";
          case ResourceStatus::TERMINATING:
            return "TERMINATING";
          case ResourceStatus::UPDATING:
            return "UPDATING";
          case ResourceStatus::MAINTENANCE_IN_PROGRESS:
            return "MAINTENANCE_IN_PROGRESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceStatusMapper
    } // namespace Model
  } // namespace odb
} // namespace Aws
