/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-sap/model/ClusterStatus.h>
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
      namespace ClusterStatusMapper
      {

        static const int ONLINE_HASH = HashingUtils::HashString("ONLINE");
        static const int STANDBY_HASH = HashingUtils::HashString("STANDBY");
        static const int MAINTENANCE_HASH = HashingUtils::HashString("MAINTENANCE");
        static const int OFFLINE_HASH = HashingUtils::HashString("OFFLINE");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        ClusterStatus GetClusterStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ONLINE_HASH)
          {
            return ClusterStatus::ONLINE;
          }
          else if (hashCode == STANDBY_HASH)
          {
            return ClusterStatus::STANDBY;
          }
          else if (hashCode == MAINTENANCE_HASH)
          {
            return ClusterStatus::MAINTENANCE;
          }
          else if (hashCode == OFFLINE_HASH)
          {
            return ClusterStatus::OFFLINE;
          }
          else if (hashCode == NONE_HASH)
          {
            return ClusterStatus::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ClusterStatus>(hashCode);
          }

          return ClusterStatus::NOT_SET;
        }

        Aws::String GetNameForClusterStatus(ClusterStatus enumValue)
        {
          switch(enumValue)
          {
          case ClusterStatus::NOT_SET:
            return {};
          case ClusterStatus::ONLINE:
            return "ONLINE";
          case ClusterStatus::STANDBY:
            return "STANDBY";
          case ClusterStatus::MAINTENANCE:
            return "MAINTENANCE";
          case ClusterStatus::OFFLINE:
            return "OFFLINE";
          case ClusterStatus::NONE:
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

      } // namespace ClusterStatusMapper
    } // namespace Model
  } // namespace SsmSap
} // namespace Aws
