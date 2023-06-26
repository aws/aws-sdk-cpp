/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms/model/ReplicationRunState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SMS
  {
    namespace Model
    {
      namespace ReplicationRunStateMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int MISSED_HASH = HashingUtils::HashString("MISSED");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        ReplicationRunState GetReplicationRunStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return ReplicationRunState::PENDING;
          }
          else if (hashCode == MISSED_HASH)
          {
            return ReplicationRunState::MISSED;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return ReplicationRunState::ACTIVE;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ReplicationRunState::FAILED;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return ReplicationRunState::COMPLETED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ReplicationRunState::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return ReplicationRunState::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReplicationRunState>(hashCode);
          }

          return ReplicationRunState::NOT_SET;
        }

        Aws::String GetNameForReplicationRunState(ReplicationRunState enumValue)
        {
          switch(enumValue)
          {
          case ReplicationRunState::PENDING:
            return "PENDING";
          case ReplicationRunState::MISSED:
            return "MISSED";
          case ReplicationRunState::ACTIVE:
            return "ACTIVE";
          case ReplicationRunState::FAILED:
            return "FAILED";
          case ReplicationRunState::COMPLETED:
            return "COMPLETED";
          case ReplicationRunState::DELETING:
            return "DELETING";
          case ReplicationRunState::DELETED:
            return "DELETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReplicationRunStateMapper
    } // namespace Model
  } // namespace SMS
} // namespace Aws
