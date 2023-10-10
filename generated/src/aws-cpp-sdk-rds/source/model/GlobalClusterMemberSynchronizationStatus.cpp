/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/GlobalClusterMemberSynchronizationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RDS
  {
    namespace Model
    {
      namespace GlobalClusterMemberSynchronizationStatusMapper
      {

        static const int connected_HASH = HashingUtils::HashString("connected");
        static const int pending_resync_HASH = HashingUtils::HashString("pending-resync");


        GlobalClusterMemberSynchronizationStatus GetGlobalClusterMemberSynchronizationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == connected_HASH)
          {
            return GlobalClusterMemberSynchronizationStatus::connected;
          }
          else if (hashCode == pending_resync_HASH)
          {
            return GlobalClusterMemberSynchronizationStatus::pending_resync;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GlobalClusterMemberSynchronizationStatus>(hashCode);
          }

          return GlobalClusterMemberSynchronizationStatus::NOT_SET;
        }

        Aws::String GetNameForGlobalClusterMemberSynchronizationStatus(GlobalClusterMemberSynchronizationStatus enumValue)
        {
          switch(enumValue)
          {
          case GlobalClusterMemberSynchronizationStatus::NOT_SET:
            return {};
          case GlobalClusterMemberSynchronizationStatus::connected:
            return "connected";
          case GlobalClusterMemberSynchronizationStatus::pending_resync:
            return "pending-resync";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GlobalClusterMemberSynchronizationStatusMapper
    } // namespace Model
  } // namespace RDS
} // namespace Aws
