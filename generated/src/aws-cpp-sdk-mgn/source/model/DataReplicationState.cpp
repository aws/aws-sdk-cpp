/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/DataReplicationState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace mgn
  {
    namespace Model
    {
      namespace DataReplicationStateMapper
      {

        static constexpr uint32_t STOPPED_HASH = ConstExprHashingUtils::HashString("STOPPED");
        static constexpr uint32_t INITIATING_HASH = ConstExprHashingUtils::HashString("INITIATING");
        static constexpr uint32_t INITIAL_SYNC_HASH = ConstExprHashingUtils::HashString("INITIAL_SYNC");
        static constexpr uint32_t BACKLOG_HASH = ConstExprHashingUtils::HashString("BACKLOG");
        static constexpr uint32_t CREATING_SNAPSHOT_HASH = ConstExprHashingUtils::HashString("CREATING_SNAPSHOT");
        static constexpr uint32_t CONTINUOUS_HASH = ConstExprHashingUtils::HashString("CONTINUOUS");
        static constexpr uint32_t PAUSED_HASH = ConstExprHashingUtils::HashString("PAUSED");
        static constexpr uint32_t RESCAN_HASH = ConstExprHashingUtils::HashString("RESCAN");
        static constexpr uint32_t STALLED_HASH = ConstExprHashingUtils::HashString("STALLED");
        static constexpr uint32_t DISCONNECTED_HASH = ConstExprHashingUtils::HashString("DISCONNECTED");
        static constexpr uint32_t PENDING_SNAPSHOT_SHIPPING_HASH = ConstExprHashingUtils::HashString("PENDING_SNAPSHOT_SHIPPING");
        static constexpr uint32_t SHIPPING_SNAPSHOT_HASH = ConstExprHashingUtils::HashString("SHIPPING_SNAPSHOT");


        DataReplicationState GetDataReplicationStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STOPPED_HASH)
          {
            return DataReplicationState::STOPPED;
          }
          else if (hashCode == INITIATING_HASH)
          {
            return DataReplicationState::INITIATING;
          }
          else if (hashCode == INITIAL_SYNC_HASH)
          {
            return DataReplicationState::INITIAL_SYNC;
          }
          else if (hashCode == BACKLOG_HASH)
          {
            return DataReplicationState::BACKLOG;
          }
          else if (hashCode == CREATING_SNAPSHOT_HASH)
          {
            return DataReplicationState::CREATING_SNAPSHOT;
          }
          else if (hashCode == CONTINUOUS_HASH)
          {
            return DataReplicationState::CONTINUOUS;
          }
          else if (hashCode == PAUSED_HASH)
          {
            return DataReplicationState::PAUSED;
          }
          else if (hashCode == RESCAN_HASH)
          {
            return DataReplicationState::RESCAN;
          }
          else if (hashCode == STALLED_HASH)
          {
            return DataReplicationState::STALLED;
          }
          else if (hashCode == DISCONNECTED_HASH)
          {
            return DataReplicationState::DISCONNECTED;
          }
          else if (hashCode == PENDING_SNAPSHOT_SHIPPING_HASH)
          {
            return DataReplicationState::PENDING_SNAPSHOT_SHIPPING;
          }
          else if (hashCode == SHIPPING_SNAPSHOT_HASH)
          {
            return DataReplicationState::SHIPPING_SNAPSHOT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataReplicationState>(hashCode);
          }

          return DataReplicationState::NOT_SET;
        }

        Aws::String GetNameForDataReplicationState(DataReplicationState enumValue)
        {
          switch(enumValue)
          {
          case DataReplicationState::NOT_SET:
            return {};
          case DataReplicationState::STOPPED:
            return "STOPPED";
          case DataReplicationState::INITIATING:
            return "INITIATING";
          case DataReplicationState::INITIAL_SYNC:
            return "INITIAL_SYNC";
          case DataReplicationState::BACKLOG:
            return "BACKLOG";
          case DataReplicationState::CREATING_SNAPSHOT:
            return "CREATING_SNAPSHOT";
          case DataReplicationState::CONTINUOUS:
            return "CONTINUOUS";
          case DataReplicationState::PAUSED:
            return "PAUSED";
          case DataReplicationState::RESCAN:
            return "RESCAN";
          case DataReplicationState::STALLED:
            return "STALLED";
          case DataReplicationState::DISCONNECTED:
            return "DISCONNECTED";
          case DataReplicationState::PENDING_SNAPSHOT_SHIPPING:
            return "PENDING_SNAPSHOT_SHIPPING";
          case DataReplicationState::SHIPPING_SNAPSHOT:
            return "SHIPPING_SNAPSHOT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataReplicationStateMapper
    } // namespace Model
  } // namespace mgn
} // namespace Aws
