/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/ReplicationConfigurationReplicatedDiskStagingDiskType.h>
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
      namespace ReplicationConfigurationReplicatedDiskStagingDiskTypeMapper
      {

        static constexpr uint32_t AUTO_HASH = ConstExprHashingUtils::HashString("AUTO");
        static constexpr uint32_t GP2_HASH = ConstExprHashingUtils::HashString("GP2");
        static constexpr uint32_t IO1_HASH = ConstExprHashingUtils::HashString("IO1");
        static constexpr uint32_t SC1_HASH = ConstExprHashingUtils::HashString("SC1");
        static constexpr uint32_t ST1_HASH = ConstExprHashingUtils::HashString("ST1");
        static constexpr uint32_t STANDARD_HASH = ConstExprHashingUtils::HashString("STANDARD");
        static constexpr uint32_t GP3_HASH = ConstExprHashingUtils::HashString("GP3");
        static constexpr uint32_t IO2_HASH = ConstExprHashingUtils::HashString("IO2");


        ReplicationConfigurationReplicatedDiskStagingDiskType GetReplicationConfigurationReplicatedDiskStagingDiskTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTO_HASH)
          {
            return ReplicationConfigurationReplicatedDiskStagingDiskType::AUTO;
          }
          else if (hashCode == GP2_HASH)
          {
            return ReplicationConfigurationReplicatedDiskStagingDiskType::GP2;
          }
          else if (hashCode == IO1_HASH)
          {
            return ReplicationConfigurationReplicatedDiskStagingDiskType::IO1;
          }
          else if (hashCode == SC1_HASH)
          {
            return ReplicationConfigurationReplicatedDiskStagingDiskType::SC1;
          }
          else if (hashCode == ST1_HASH)
          {
            return ReplicationConfigurationReplicatedDiskStagingDiskType::ST1;
          }
          else if (hashCode == STANDARD_HASH)
          {
            return ReplicationConfigurationReplicatedDiskStagingDiskType::STANDARD;
          }
          else if (hashCode == GP3_HASH)
          {
            return ReplicationConfigurationReplicatedDiskStagingDiskType::GP3;
          }
          else if (hashCode == IO2_HASH)
          {
            return ReplicationConfigurationReplicatedDiskStagingDiskType::IO2;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReplicationConfigurationReplicatedDiskStagingDiskType>(hashCode);
          }

          return ReplicationConfigurationReplicatedDiskStagingDiskType::NOT_SET;
        }

        Aws::String GetNameForReplicationConfigurationReplicatedDiskStagingDiskType(ReplicationConfigurationReplicatedDiskStagingDiskType enumValue)
        {
          switch(enumValue)
          {
          case ReplicationConfigurationReplicatedDiskStagingDiskType::NOT_SET:
            return {};
          case ReplicationConfigurationReplicatedDiskStagingDiskType::AUTO:
            return "AUTO";
          case ReplicationConfigurationReplicatedDiskStagingDiskType::GP2:
            return "GP2";
          case ReplicationConfigurationReplicatedDiskStagingDiskType::IO1:
            return "IO1";
          case ReplicationConfigurationReplicatedDiskStagingDiskType::SC1:
            return "SC1";
          case ReplicationConfigurationReplicatedDiskStagingDiskType::ST1:
            return "ST1";
          case ReplicationConfigurationReplicatedDiskStagingDiskType::STANDARD:
            return "STANDARD";
          case ReplicationConfigurationReplicatedDiskStagingDiskType::GP3:
            return "GP3";
          case ReplicationConfigurationReplicatedDiskStagingDiskType::IO2:
            return "IO2";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReplicationConfigurationReplicatedDiskStagingDiskTypeMapper
    } // namespace Model
  } // namespace mgn
} // namespace Aws
