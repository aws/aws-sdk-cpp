/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/model/ReplicationSetStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSMIncidents
  {
    namespace Model
    {
      namespace ReplicationSetStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        ReplicationSetStatus GetReplicationSetStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return ReplicationSetStatus::ACTIVE;
          }
          else if (hashCode == CREATING_HASH)
          {
            return ReplicationSetStatus::CREATING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return ReplicationSetStatus::UPDATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ReplicationSetStatus::DELETING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ReplicationSetStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReplicationSetStatus>(hashCode);
          }

          return ReplicationSetStatus::NOT_SET;
        }

        Aws::String GetNameForReplicationSetStatus(ReplicationSetStatus enumValue)
        {
          switch(enumValue)
          {
          case ReplicationSetStatus::NOT_SET:
            return {};
          case ReplicationSetStatus::ACTIVE:
            return "ACTIVE";
          case ReplicationSetStatus::CREATING:
            return "CREATING";
          case ReplicationSetStatus::UPDATING:
            return "UPDATING";
          case ReplicationSetStatus::DELETING:
            return "DELETING";
          case ReplicationSetStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReplicationSetStatusMapper
    } // namespace Model
  } // namespace SSMIncidents
} // namespace Aws
