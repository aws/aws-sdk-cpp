/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SecurityLake
{
namespace Model
{
  enum class OcsfEventClass
  {
    NOT_SET,
    ACCESS_ACTIVITY,
    FILE_ACTIVITY,
    KERNEL_ACTIVITY,
    KERNEL_EXTENSION,
    MEMORY_ACTIVITY,
    MODULE_ACTIVITY,
    PROCESS_ACTIVITY,
    REGISTRY_KEY_ACTIVITY,
    REGISTRY_VALUE_ACTIVITY,
    RESOURCE_ACTIVITY,
    SCHEDULED_JOB_ACTIVITY,
    SECURITY_FINDING,
    ACCOUNT_CHANGE,
    AUTHENTICATION,
    AUTHORIZATION,
    ENTITY_MANAGEMENT_AUDIT,
    DHCP_ACTIVITY,
    NETWORK_ACTIVITY,
    DNS_ACTIVITY,
    FTP_ACTIVITY,
    HTTP_ACTIVITY,
    RDP_ACTIVITY,
    SMB_ACTIVITY,
    SSH_ACTIVITY,
    CLOUD_API,
    CONTAINER_LIFECYCLE,
    DATABASE_LIFECYCLE,
    CONFIG_STATE,
    CLOUD_STORAGE,
    INVENTORY_INFO,
    RFB_ACTIVITY,
    SMTP_ACTIVITY,
    VIRTUAL_MACHINE_ACTIVITY
  };

namespace OcsfEventClassMapper
{
AWS_SECURITYLAKE_API OcsfEventClass GetOcsfEventClassForName(const Aws::String& name);

AWS_SECURITYLAKE_API Aws::String GetNameForOcsfEventClass(OcsfEventClass value);
} // namespace OcsfEventClassMapper
} // namespace Model
} // namespace SecurityLake
} // namespace Aws
