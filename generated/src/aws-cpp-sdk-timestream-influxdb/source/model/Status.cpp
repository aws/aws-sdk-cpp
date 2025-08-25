/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-influxdb/model/Status.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace TimestreamInfluxDB
  {
    namespace Model
    {
      namespace StatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int MODIFYING_HASH = HashingUtils::HashString("MODIFYING");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int UPDATING_DEPLOYMENT_TYPE_HASH = HashingUtils::HashString("UPDATING_DEPLOYMENT_TYPE");
        static const int UPDATING_INSTANCE_TYPE_HASH = HashingUtils::HashString("UPDATING_INSTANCE_TYPE");
        static const int MAINTENANCE_HASH = HashingUtils::HashString("MAINTENANCE");


        Status GetStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return Status::CREATING;
          }
          else if (hashCode == AVAILABLE_HASH)
          {
            return Status::AVAILABLE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return Status::DELETING;
          }
          else if (hashCode == MODIFYING_HASH)
          {
            return Status::MODIFYING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return Status::UPDATING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return Status::DELETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return Status::FAILED;
          }
          else if (hashCode == UPDATING_DEPLOYMENT_TYPE_HASH)
          {
            return Status::UPDATING_DEPLOYMENT_TYPE;
          }
          else if (hashCode == UPDATING_INSTANCE_TYPE_HASH)
          {
            return Status::UPDATING_INSTANCE_TYPE;
          }
          else if (hashCode == MAINTENANCE_HASH)
          {
            return Status::MAINTENANCE;
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
          case Status::CREATING:
            return "CREATING";
          case Status::AVAILABLE:
            return "AVAILABLE";
          case Status::DELETING:
            return "DELETING";
          case Status::MODIFYING:
            return "MODIFYING";
          case Status::UPDATING:
            return "UPDATING";
          case Status::DELETED:
            return "DELETED";
          case Status::FAILED:
            return "FAILED";
          case Status::UPDATING_DEPLOYMENT_TYPE:
            return "UPDATING_DEPLOYMENT_TYPE";
          case Status::UPDATING_INSTANCE_TYPE:
            return "UPDATING_INSTANCE_TYPE";
          case Status::MAINTENANCE:
            return "MAINTENANCE";
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
  } // namespace TimestreamInfluxDB
} // namespace Aws
