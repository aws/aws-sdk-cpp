/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/observabilityadmin/model/Status.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ObservabilityAdmin
  {
    namespace Model
    {
      namespace StatusMapper
      {

        static const int NOT_STARTED_HASH = HashingUtils::HashString("NOT_STARTED");
        static const int STARTING_HASH = HashingUtils::HashString("STARTING");
        static const int FAILED_START_HASH = HashingUtils::HashString("FAILED_START");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
        static const int FAILED_STOP_HASH = HashingUtils::HashString("FAILED_STOP");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");


        Status GetStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NOT_STARTED_HASH)
          {
            return Status::NOT_STARTED;
          }
          else if (hashCode == STARTING_HASH)
          {
            return Status::STARTING;
          }
          else if (hashCode == FAILED_START_HASH)
          {
            return Status::FAILED_START;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return Status::RUNNING;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return Status::STOPPING;
          }
          else if (hashCode == FAILED_STOP_HASH)
          {
            return Status::FAILED_STOP;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return Status::STOPPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Status>(hashCode);
          }

          return Status::NOT_SET;
        }

        Aws::String GetNameForStatus(Status enumValue)
        {
          switch(enumValue)
          {
          case Status::NOT_SET:
            return {};
          case Status::NOT_STARTED:
            return "NOT_STARTED";
          case Status::STARTING:
            return "STARTING";
          case Status::FAILED_START:
            return "FAILED_START";
          case Status::RUNNING:
            return "RUNNING";
          case Status::STOPPING:
            return "STOPPING";
          case Status::FAILED_STOP:
            return "FAILED_STOP";
          case Status::STOPPED:
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

      } // namespace StatusMapper
    } // namespace Model
  } // namespace ObservabilityAdmin
} // namespace Aws
