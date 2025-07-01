/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/odb/model/DbNodeResourceStatus.h>
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
      namespace DbNodeResourceStatusMapper
      {

        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int PROVISIONING_HASH = HashingUtils::HashString("PROVISIONING");
        static const int TERMINATED_HASH = HashingUtils::HashString("TERMINATED");
        static const int TERMINATING_HASH = HashingUtils::HashString("TERMINATING");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");
        static const int STARTING_HASH = HashingUtils::HashString("STARTING");


        DbNodeResourceStatus GetDbNodeResourceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVAILABLE_HASH)
          {
            return DbNodeResourceStatus::AVAILABLE;
          }
          else if (hashCode == FAILED_HASH)
          {
            return DbNodeResourceStatus::FAILED;
          }
          else if (hashCode == PROVISIONING_HASH)
          {
            return DbNodeResourceStatus::PROVISIONING;
          }
          else if (hashCode == TERMINATED_HASH)
          {
            return DbNodeResourceStatus::TERMINATED;
          }
          else if (hashCode == TERMINATING_HASH)
          {
            return DbNodeResourceStatus::TERMINATING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return DbNodeResourceStatus::UPDATING;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return DbNodeResourceStatus::STOPPING;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return DbNodeResourceStatus::STOPPED;
          }
          else if (hashCode == STARTING_HASH)
          {
            return DbNodeResourceStatus::STARTING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DbNodeResourceStatus>(hashCode);
          }

          return DbNodeResourceStatus::NOT_SET;
        }

        Aws::String GetNameForDbNodeResourceStatus(DbNodeResourceStatus enumValue)
        {
          switch(enumValue)
          {
          case DbNodeResourceStatus::NOT_SET:
            return {};
          case DbNodeResourceStatus::AVAILABLE:
            return "AVAILABLE";
          case DbNodeResourceStatus::FAILED:
            return "FAILED";
          case DbNodeResourceStatus::PROVISIONING:
            return "PROVISIONING";
          case DbNodeResourceStatus::TERMINATED:
            return "TERMINATED";
          case DbNodeResourceStatus::TERMINATING:
            return "TERMINATING";
          case DbNodeResourceStatus::UPDATING:
            return "UPDATING";
          case DbNodeResourceStatus::STOPPING:
            return "STOPPING";
          case DbNodeResourceStatus::STOPPED:
            return "STOPPED";
          case DbNodeResourceStatus::STARTING:
            return "STARTING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DbNodeResourceStatusMapper
    } // namespace Model
  } // namespace odb
} // namespace Aws
