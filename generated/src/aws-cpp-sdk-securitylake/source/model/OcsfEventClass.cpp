/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/OcsfEventClass.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityLake
  {
    namespace Model
    {
      namespace OcsfEventClassMapper
      {

        static const int ACCESS_ACTIVITY_HASH = HashingUtils::HashString("ACCESS_ACTIVITY");
        static const int FILE_ACTIVITY_HASH = HashingUtils::HashString("FILE_ACTIVITY");
        static const int KERNEL_ACTIVITY_HASH = HashingUtils::HashString("KERNEL_ACTIVITY");
        static const int KERNEL_EXTENSION_HASH = HashingUtils::HashString("KERNEL_EXTENSION");
        static const int MEMORY_ACTIVITY_HASH = HashingUtils::HashString("MEMORY_ACTIVITY");
        static const int MODULE_ACTIVITY_HASH = HashingUtils::HashString("MODULE_ACTIVITY");
        static const int PROCESS_ACTIVITY_HASH = HashingUtils::HashString("PROCESS_ACTIVITY");
        static const int REGISTRY_KEY_ACTIVITY_HASH = HashingUtils::HashString("REGISTRY_KEY_ACTIVITY");
        static const int REGISTRY_VALUE_ACTIVITY_HASH = HashingUtils::HashString("REGISTRY_VALUE_ACTIVITY");
        static const int RESOURCE_ACTIVITY_HASH = HashingUtils::HashString("RESOURCE_ACTIVITY");
        static const int SCHEDULED_JOB_ACTIVITY_HASH = HashingUtils::HashString("SCHEDULED_JOB_ACTIVITY");
        static const int SECURITY_FINDING_HASH = HashingUtils::HashString("SECURITY_FINDING");
        static const int ACCOUNT_CHANGE_HASH = HashingUtils::HashString("ACCOUNT_CHANGE");
        static const int AUTHENTICATION_HASH = HashingUtils::HashString("AUTHENTICATION");
        static const int AUTHORIZATION_HASH = HashingUtils::HashString("AUTHORIZATION");
        static const int ENTITY_MANAGEMENT_AUDIT_HASH = HashingUtils::HashString("ENTITY_MANAGEMENT_AUDIT");
        static const int DHCP_ACTIVITY_HASH = HashingUtils::HashString("DHCP_ACTIVITY");
        static const int NETWORK_ACTIVITY_HASH = HashingUtils::HashString("NETWORK_ACTIVITY");
        static const int DNS_ACTIVITY_HASH = HashingUtils::HashString("DNS_ACTIVITY");
        static const int FTP_ACTIVITY_HASH = HashingUtils::HashString("FTP_ACTIVITY");
        static const int HTTP_ACTIVITY_HASH = HashingUtils::HashString("HTTP_ACTIVITY");
        static const int RDP_ACTIVITY_HASH = HashingUtils::HashString("RDP_ACTIVITY");
        static const int SMB_ACTIVITY_HASH = HashingUtils::HashString("SMB_ACTIVITY");
        static const int SSH_ACTIVITY_HASH = HashingUtils::HashString("SSH_ACTIVITY");
        static const int CLOUD_API_HASH = HashingUtils::HashString("CLOUD_API");
        static const int CONTAINER_LIFECYCLE_HASH = HashingUtils::HashString("CONTAINER_LIFECYCLE");
        static const int DATABASE_LIFECYCLE_HASH = HashingUtils::HashString("DATABASE_LIFECYCLE");
        static const int CONFIG_STATE_HASH = HashingUtils::HashString("CONFIG_STATE");
        static const int CLOUD_STORAGE_HASH = HashingUtils::HashString("CLOUD_STORAGE");
        static const int INVENTORY_INFO_HASH = HashingUtils::HashString("INVENTORY_INFO");
        static const int RFB_ACTIVITY_HASH = HashingUtils::HashString("RFB_ACTIVITY");
        static const int SMTP_ACTIVITY_HASH = HashingUtils::HashString("SMTP_ACTIVITY");
        static const int VIRTUAL_MACHINE_ACTIVITY_HASH = HashingUtils::HashString("VIRTUAL_MACHINE_ACTIVITY");


        OcsfEventClass GetOcsfEventClassForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCESS_ACTIVITY_HASH)
          {
            return OcsfEventClass::ACCESS_ACTIVITY;
          }
          else if (hashCode == FILE_ACTIVITY_HASH)
          {
            return OcsfEventClass::FILE_ACTIVITY;
          }
          else if (hashCode == KERNEL_ACTIVITY_HASH)
          {
            return OcsfEventClass::KERNEL_ACTIVITY;
          }
          else if (hashCode == KERNEL_EXTENSION_HASH)
          {
            return OcsfEventClass::KERNEL_EXTENSION;
          }
          else if (hashCode == MEMORY_ACTIVITY_HASH)
          {
            return OcsfEventClass::MEMORY_ACTIVITY;
          }
          else if (hashCode == MODULE_ACTIVITY_HASH)
          {
            return OcsfEventClass::MODULE_ACTIVITY;
          }
          else if (hashCode == PROCESS_ACTIVITY_HASH)
          {
            return OcsfEventClass::PROCESS_ACTIVITY;
          }
          else if (hashCode == REGISTRY_KEY_ACTIVITY_HASH)
          {
            return OcsfEventClass::REGISTRY_KEY_ACTIVITY;
          }
          else if (hashCode == REGISTRY_VALUE_ACTIVITY_HASH)
          {
            return OcsfEventClass::REGISTRY_VALUE_ACTIVITY;
          }
          else if (hashCode == RESOURCE_ACTIVITY_HASH)
          {
            return OcsfEventClass::RESOURCE_ACTIVITY;
          }
          else if (hashCode == SCHEDULED_JOB_ACTIVITY_HASH)
          {
            return OcsfEventClass::SCHEDULED_JOB_ACTIVITY;
          }
          else if (hashCode == SECURITY_FINDING_HASH)
          {
            return OcsfEventClass::SECURITY_FINDING;
          }
          else if (hashCode == ACCOUNT_CHANGE_HASH)
          {
            return OcsfEventClass::ACCOUNT_CHANGE;
          }
          else if (hashCode == AUTHENTICATION_HASH)
          {
            return OcsfEventClass::AUTHENTICATION;
          }
          else if (hashCode == AUTHORIZATION_HASH)
          {
            return OcsfEventClass::AUTHORIZATION;
          }
          else if (hashCode == ENTITY_MANAGEMENT_AUDIT_HASH)
          {
            return OcsfEventClass::ENTITY_MANAGEMENT_AUDIT;
          }
          else if (hashCode == DHCP_ACTIVITY_HASH)
          {
            return OcsfEventClass::DHCP_ACTIVITY;
          }
          else if (hashCode == NETWORK_ACTIVITY_HASH)
          {
            return OcsfEventClass::NETWORK_ACTIVITY;
          }
          else if (hashCode == DNS_ACTIVITY_HASH)
          {
            return OcsfEventClass::DNS_ACTIVITY;
          }
          else if (hashCode == FTP_ACTIVITY_HASH)
          {
            return OcsfEventClass::FTP_ACTIVITY;
          }
          else if (hashCode == HTTP_ACTIVITY_HASH)
          {
            return OcsfEventClass::HTTP_ACTIVITY;
          }
          else if (hashCode == RDP_ACTIVITY_HASH)
          {
            return OcsfEventClass::RDP_ACTIVITY;
          }
          else if (hashCode == SMB_ACTIVITY_HASH)
          {
            return OcsfEventClass::SMB_ACTIVITY;
          }
          else if (hashCode == SSH_ACTIVITY_HASH)
          {
            return OcsfEventClass::SSH_ACTIVITY;
          }
          else if (hashCode == CLOUD_API_HASH)
          {
            return OcsfEventClass::CLOUD_API;
          }
          else if (hashCode == CONTAINER_LIFECYCLE_HASH)
          {
            return OcsfEventClass::CONTAINER_LIFECYCLE;
          }
          else if (hashCode == DATABASE_LIFECYCLE_HASH)
          {
            return OcsfEventClass::DATABASE_LIFECYCLE;
          }
          else if (hashCode == CONFIG_STATE_HASH)
          {
            return OcsfEventClass::CONFIG_STATE;
          }
          else if (hashCode == CLOUD_STORAGE_HASH)
          {
            return OcsfEventClass::CLOUD_STORAGE;
          }
          else if (hashCode == INVENTORY_INFO_HASH)
          {
            return OcsfEventClass::INVENTORY_INFO;
          }
          else if (hashCode == RFB_ACTIVITY_HASH)
          {
            return OcsfEventClass::RFB_ACTIVITY;
          }
          else if (hashCode == SMTP_ACTIVITY_HASH)
          {
            return OcsfEventClass::SMTP_ACTIVITY;
          }
          else if (hashCode == VIRTUAL_MACHINE_ACTIVITY_HASH)
          {
            return OcsfEventClass::VIRTUAL_MACHINE_ACTIVITY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OcsfEventClass>(hashCode);
          }

          return OcsfEventClass::NOT_SET;
        }

        Aws::String GetNameForOcsfEventClass(OcsfEventClass enumValue)
        {
          switch(enumValue)
          {
          case OcsfEventClass::ACCESS_ACTIVITY:
            return "ACCESS_ACTIVITY";
          case OcsfEventClass::FILE_ACTIVITY:
            return "FILE_ACTIVITY";
          case OcsfEventClass::KERNEL_ACTIVITY:
            return "KERNEL_ACTIVITY";
          case OcsfEventClass::KERNEL_EXTENSION:
            return "KERNEL_EXTENSION";
          case OcsfEventClass::MEMORY_ACTIVITY:
            return "MEMORY_ACTIVITY";
          case OcsfEventClass::MODULE_ACTIVITY:
            return "MODULE_ACTIVITY";
          case OcsfEventClass::PROCESS_ACTIVITY:
            return "PROCESS_ACTIVITY";
          case OcsfEventClass::REGISTRY_KEY_ACTIVITY:
            return "REGISTRY_KEY_ACTIVITY";
          case OcsfEventClass::REGISTRY_VALUE_ACTIVITY:
            return "REGISTRY_VALUE_ACTIVITY";
          case OcsfEventClass::RESOURCE_ACTIVITY:
            return "RESOURCE_ACTIVITY";
          case OcsfEventClass::SCHEDULED_JOB_ACTIVITY:
            return "SCHEDULED_JOB_ACTIVITY";
          case OcsfEventClass::SECURITY_FINDING:
            return "SECURITY_FINDING";
          case OcsfEventClass::ACCOUNT_CHANGE:
            return "ACCOUNT_CHANGE";
          case OcsfEventClass::AUTHENTICATION:
            return "AUTHENTICATION";
          case OcsfEventClass::AUTHORIZATION:
            return "AUTHORIZATION";
          case OcsfEventClass::ENTITY_MANAGEMENT_AUDIT:
            return "ENTITY_MANAGEMENT_AUDIT";
          case OcsfEventClass::DHCP_ACTIVITY:
            return "DHCP_ACTIVITY";
          case OcsfEventClass::NETWORK_ACTIVITY:
            return "NETWORK_ACTIVITY";
          case OcsfEventClass::DNS_ACTIVITY:
            return "DNS_ACTIVITY";
          case OcsfEventClass::FTP_ACTIVITY:
            return "FTP_ACTIVITY";
          case OcsfEventClass::HTTP_ACTIVITY:
            return "HTTP_ACTIVITY";
          case OcsfEventClass::RDP_ACTIVITY:
            return "RDP_ACTIVITY";
          case OcsfEventClass::SMB_ACTIVITY:
            return "SMB_ACTIVITY";
          case OcsfEventClass::SSH_ACTIVITY:
            return "SSH_ACTIVITY";
          case OcsfEventClass::CLOUD_API:
            return "CLOUD_API";
          case OcsfEventClass::CONTAINER_LIFECYCLE:
            return "CONTAINER_LIFECYCLE";
          case OcsfEventClass::DATABASE_LIFECYCLE:
            return "DATABASE_LIFECYCLE";
          case OcsfEventClass::CONFIG_STATE:
            return "CONFIG_STATE";
          case OcsfEventClass::CLOUD_STORAGE:
            return "CLOUD_STORAGE";
          case OcsfEventClass::INVENTORY_INFO:
            return "INVENTORY_INFO";
          case OcsfEventClass::RFB_ACTIVITY:
            return "RFB_ACTIVITY";
          case OcsfEventClass::SMTP_ACTIVITY:
            return "SMTP_ACTIVITY";
          case OcsfEventClass::VIRTUAL_MACHINE_ACTIVITY:
            return "VIRTUAL_MACHINE_ACTIVITY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OcsfEventClassMapper
    } // namespace Model
  } // namespace SecurityLake
} // namespace Aws
