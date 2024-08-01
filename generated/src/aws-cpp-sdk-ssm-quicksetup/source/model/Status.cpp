/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-quicksetup/model/Status.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSMQuickSetup
  {
    namespace Model
    {
      namespace StatusMapper
      {

        static const int INITIALIZING_HASH = HashingUtils::HashString("INITIALIZING");
        static const int DEPLOYING_HASH = HashingUtils::HashString("DEPLOYING");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");
        static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");
        static const int STOP_FAILED_HASH = HashingUtils::HashString("STOP_FAILED");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        Status GetStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INITIALIZING_HASH)
          {
            return Status::INITIALIZING;
          }
          else if (hashCode == DEPLOYING_HASH)
          {
            return Status::DEPLOYING;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return Status::SUCCEEDED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return Status::DELETING;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return Status::STOPPING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return Status::FAILED;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return Status::STOPPED;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return Status::DELETE_FAILED;
          }
          else if (hashCode == STOP_FAILED_HASH)
          {
            return Status::STOP_FAILED;
          }
          else if (hashCode == NONE_HASH)
          {
            return Status::NONE;
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
          case Status::INITIALIZING:
            return "INITIALIZING";
          case Status::DEPLOYING:
            return "DEPLOYING";
          case Status::SUCCEEDED:
            return "SUCCEEDED";
          case Status::DELETING:
            return "DELETING";
          case Status::STOPPING:
            return "STOPPING";
          case Status::FAILED:
            return "FAILED";
          case Status::STOPPED:
            return "STOPPED";
          case Status::DELETE_FAILED:
            return "DELETE_FAILED";
          case Status::STOP_FAILED:
            return "STOP_FAILED";
          case Status::NONE:
            return "NONE";
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
  } // namespace SSMQuickSetup
} // namespace Aws
