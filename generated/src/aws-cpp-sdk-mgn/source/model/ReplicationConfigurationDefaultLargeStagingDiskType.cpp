/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/ReplicationConfigurationDefaultLargeStagingDiskType.h>
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
      namespace ReplicationConfigurationDefaultLargeStagingDiskTypeMapper
      {

        static const int GP2_HASH = HashingUtils::HashString("GP2");
        static const int ST1_HASH = HashingUtils::HashString("ST1");
        static const int GP3_HASH = HashingUtils::HashString("GP3");


        ReplicationConfigurationDefaultLargeStagingDiskType GetReplicationConfigurationDefaultLargeStagingDiskTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GP2_HASH)
          {
            return ReplicationConfigurationDefaultLargeStagingDiskType::GP2;
          }
          else if (hashCode == ST1_HASH)
          {
            return ReplicationConfigurationDefaultLargeStagingDiskType::ST1;
          }
          else if (hashCode == GP3_HASH)
          {
            return ReplicationConfigurationDefaultLargeStagingDiskType::GP3;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReplicationConfigurationDefaultLargeStagingDiskType>(hashCode);
          }

          return ReplicationConfigurationDefaultLargeStagingDiskType::NOT_SET;
        }

        Aws::String GetNameForReplicationConfigurationDefaultLargeStagingDiskType(ReplicationConfigurationDefaultLargeStagingDiskType enumValue)
        {
          switch(enumValue)
          {
          case ReplicationConfigurationDefaultLargeStagingDiskType::NOT_SET:
            return {};
          case ReplicationConfigurationDefaultLargeStagingDiskType::GP2:
            return "GP2";
          case ReplicationConfigurationDefaultLargeStagingDiskType::ST1:
            return "ST1";
          case ReplicationConfigurationDefaultLargeStagingDiskType::GP3:
            return "GP3";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReplicationConfigurationDefaultLargeStagingDiskTypeMapper
    } // namespace Model
  } // namespace mgn
} // namespace Aws
