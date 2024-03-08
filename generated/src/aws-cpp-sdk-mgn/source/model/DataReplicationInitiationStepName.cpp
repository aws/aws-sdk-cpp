/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/DataReplicationInitiationStepName.h>
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
      namespace DataReplicationInitiationStepNameMapper
      {

        static const int WAIT_HASH = HashingUtils::HashString("WAIT");
        static const int CREATE_SECURITY_GROUP_HASH = HashingUtils::HashString("CREATE_SECURITY_GROUP");
        static const int LAUNCH_REPLICATION_SERVER_HASH = HashingUtils::HashString("LAUNCH_REPLICATION_SERVER");
        static const int BOOT_REPLICATION_SERVER_HASH = HashingUtils::HashString("BOOT_REPLICATION_SERVER");
        static const int AUTHENTICATE_WITH_SERVICE_HASH = HashingUtils::HashString("AUTHENTICATE_WITH_SERVICE");
        static const int DOWNLOAD_REPLICATION_SOFTWARE_HASH = HashingUtils::HashString("DOWNLOAD_REPLICATION_SOFTWARE");
        static const int CREATE_STAGING_DISKS_HASH = HashingUtils::HashString("CREATE_STAGING_DISKS");
        static const int ATTACH_STAGING_DISKS_HASH = HashingUtils::HashString("ATTACH_STAGING_DISKS");
        static const int PAIR_REPLICATION_SERVER_WITH_AGENT_HASH = HashingUtils::HashString("PAIR_REPLICATION_SERVER_WITH_AGENT");
        static const int CONNECT_AGENT_TO_REPLICATION_SERVER_HASH = HashingUtils::HashString("CONNECT_AGENT_TO_REPLICATION_SERVER");
        static const int START_DATA_TRANSFER_HASH = HashingUtils::HashString("START_DATA_TRANSFER");


        DataReplicationInitiationStepName GetDataReplicationInitiationStepNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WAIT_HASH)
          {
            return DataReplicationInitiationStepName::WAIT;
          }
          else if (hashCode == CREATE_SECURITY_GROUP_HASH)
          {
            return DataReplicationInitiationStepName::CREATE_SECURITY_GROUP;
          }
          else if (hashCode == LAUNCH_REPLICATION_SERVER_HASH)
          {
            return DataReplicationInitiationStepName::LAUNCH_REPLICATION_SERVER;
          }
          else if (hashCode == BOOT_REPLICATION_SERVER_HASH)
          {
            return DataReplicationInitiationStepName::BOOT_REPLICATION_SERVER;
          }
          else if (hashCode == AUTHENTICATE_WITH_SERVICE_HASH)
          {
            return DataReplicationInitiationStepName::AUTHENTICATE_WITH_SERVICE;
          }
          else if (hashCode == DOWNLOAD_REPLICATION_SOFTWARE_HASH)
          {
            return DataReplicationInitiationStepName::DOWNLOAD_REPLICATION_SOFTWARE;
          }
          else if (hashCode == CREATE_STAGING_DISKS_HASH)
          {
            return DataReplicationInitiationStepName::CREATE_STAGING_DISKS;
          }
          else if (hashCode == ATTACH_STAGING_DISKS_HASH)
          {
            return DataReplicationInitiationStepName::ATTACH_STAGING_DISKS;
          }
          else if (hashCode == PAIR_REPLICATION_SERVER_WITH_AGENT_HASH)
          {
            return DataReplicationInitiationStepName::PAIR_REPLICATION_SERVER_WITH_AGENT;
          }
          else if (hashCode == CONNECT_AGENT_TO_REPLICATION_SERVER_HASH)
          {
            return DataReplicationInitiationStepName::CONNECT_AGENT_TO_REPLICATION_SERVER;
          }
          else if (hashCode == START_DATA_TRANSFER_HASH)
          {
            return DataReplicationInitiationStepName::START_DATA_TRANSFER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataReplicationInitiationStepName>(hashCode);
          }

          return DataReplicationInitiationStepName::NOT_SET;
        }

        Aws::String GetNameForDataReplicationInitiationStepName(DataReplicationInitiationStepName enumValue)
        {
          switch(enumValue)
          {
          case DataReplicationInitiationStepName::NOT_SET:
            return {};
          case DataReplicationInitiationStepName::WAIT:
            return "WAIT";
          case DataReplicationInitiationStepName::CREATE_SECURITY_GROUP:
            return "CREATE_SECURITY_GROUP";
          case DataReplicationInitiationStepName::LAUNCH_REPLICATION_SERVER:
            return "LAUNCH_REPLICATION_SERVER";
          case DataReplicationInitiationStepName::BOOT_REPLICATION_SERVER:
            return "BOOT_REPLICATION_SERVER";
          case DataReplicationInitiationStepName::AUTHENTICATE_WITH_SERVICE:
            return "AUTHENTICATE_WITH_SERVICE";
          case DataReplicationInitiationStepName::DOWNLOAD_REPLICATION_SOFTWARE:
            return "DOWNLOAD_REPLICATION_SOFTWARE";
          case DataReplicationInitiationStepName::CREATE_STAGING_DISKS:
            return "CREATE_STAGING_DISKS";
          case DataReplicationInitiationStepName::ATTACH_STAGING_DISKS:
            return "ATTACH_STAGING_DISKS";
          case DataReplicationInitiationStepName::PAIR_REPLICATION_SERVER_WITH_AGENT:
            return "PAIR_REPLICATION_SERVER_WITH_AGENT";
          case DataReplicationInitiationStepName::CONNECT_AGENT_TO_REPLICATION_SERVER:
            return "CONNECT_AGENT_TO_REPLICATION_SERVER";
          case DataReplicationInitiationStepName::START_DATA_TRANSFER:
            return "START_DATA_TRANSFER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataReplicationInitiationStepNameMapper
    } // namespace Model
  } // namespace mgn
} // namespace Aws
