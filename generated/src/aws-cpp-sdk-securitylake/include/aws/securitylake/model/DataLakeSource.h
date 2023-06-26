/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securitylake/model/DataLakeSourceStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityLake
{
namespace Model
{

  /**
   * <p>Amazon Security Lake collects logs and events from supported Amazon Web
   * Services and custom sources. For the list of supported Amazon Web Services, see
   * the <a
   * href="https://docs.aws.amazon.com/security-lake/latest/userguide/internal-sources.html">Amazon
   * Security Lake User Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/DataLakeSource">AWS
   * API Reference</a></p>
   */
  class DataLakeSource
  {
  public:
    AWS_SECURITYLAKE_API DataLakeSource();
    AWS_SECURITYLAKE_API DataLakeSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API DataLakeSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the Security Lake account for which logs are collected.</p>
     */
    inline const Aws::String& GetAccount() const{ return m_account; }

    /**
     * <p>The ID of the Security Lake account for which logs are collected.</p>
     */
    inline bool AccountHasBeenSet() const { return m_accountHasBeenSet; }

    /**
     * <p>The ID of the Security Lake account for which logs are collected.</p>
     */
    inline void SetAccount(const Aws::String& value) { m_accountHasBeenSet = true; m_account = value; }

    /**
     * <p>The ID of the Security Lake account for which logs are collected.</p>
     */
    inline void SetAccount(Aws::String&& value) { m_accountHasBeenSet = true; m_account = std::move(value); }

    /**
     * <p>The ID of the Security Lake account for which logs are collected.</p>
     */
    inline void SetAccount(const char* value) { m_accountHasBeenSet = true; m_account.assign(value); }

    /**
     * <p>The ID of the Security Lake account for which logs are collected.</p>
     */
    inline DataLakeSource& WithAccount(const Aws::String& value) { SetAccount(value); return *this;}

    /**
     * <p>The ID of the Security Lake account for which logs are collected.</p>
     */
    inline DataLakeSource& WithAccount(Aws::String&& value) { SetAccount(std::move(value)); return *this;}

    /**
     * <p>The ID of the Security Lake account for which logs are collected.</p>
     */
    inline DataLakeSource& WithAccount(const char* value) { SetAccount(value); return *this;}


    /**
     * <p>The Open Cybersecurity Schema Framework (OCSF) event classes which describes
     * the type of data that the custom source will send to Security Lake. The
     * supported event classes are:</p> <ul> <li> <p> <code>ACCESS_ACTIVITY</code> </p>
     * </li> <li> <p> <code>FILE_ACTIVITY</code> </p> </li> <li> <p>
     * <code>KERNEL_ACTIVITY</code> </p> </li> <li> <p> <code>KERNEL_EXTENSION</code>
     * </p> </li> <li> <p> <code>MEMORY_ACTIVITY</code> </p> </li> <li> <p>
     * <code>MODULE_ACTIVITY</code> </p> </li> <li> <p> <code>PROCESS_ACTIVITY</code>
     * </p> </li> <li> <p> <code>REGISTRY_KEY_ACTIVITY</code> </p> </li> <li> <p>
     * <code>REGISTRY_VALUE_ACTIVITY</code> </p> </li> <li> <p>
     * <code>RESOURCE_ACTIVITY</code> </p> </li> <li> <p>
     * <code>SCHEDULED_JOB_ACTIVITY</code> </p> </li> <li> <p>
     * <code>SECURITY_FINDING</code> </p> </li> <li> <p> <code>ACCOUNT_CHANGE</code>
     * </p> </li> <li> <p> <code>AUTHENTICATION</code> </p> </li> <li> <p>
     * <code>AUTHORIZATION</code> </p> </li> <li> <p>
     * <code>ENTITY_MANAGEMENT_AUDIT</code> </p> </li> <li> <p>
     * <code>DHCP_ACTIVITY</code> </p> </li> <li> <p> <code>NETWORK_ACTIVITY</code>
     * </p> </li> <li> <p> <code>DNS_ACTIVITY</code> </p> </li> <li> <p>
     * <code>FTP_ACTIVITY</code> </p> </li> <li> <p> <code>HTTP_ACTIVITY</code> </p>
     * </li> <li> <p> <code>RDP_ACTIVITY</code> </p> </li> <li> <p>
     * <code>SMB_ACTIVITY</code> </p> </li> <li> <p> <code>SSH_ACTIVITY</code> </p>
     * </li> <li> <p> <code>CONFIG_STATE</code> </p> </li> <li> <p>
     * <code>INVENTORY_INFO</code> </p> </li> <li> <p> <code>EMAIL_ACTIVITY</code> </p>
     * </li> <li> <p> <code>API_ACTIVITY</code> </p> </li> <li> <p>
     * <code>CLOUD_API</code> </p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetEventClasses() const{ return m_eventClasses; }

    /**
     * <p>The Open Cybersecurity Schema Framework (OCSF) event classes which describes
     * the type of data that the custom source will send to Security Lake. The
     * supported event classes are:</p> <ul> <li> <p> <code>ACCESS_ACTIVITY</code> </p>
     * </li> <li> <p> <code>FILE_ACTIVITY</code> </p> </li> <li> <p>
     * <code>KERNEL_ACTIVITY</code> </p> </li> <li> <p> <code>KERNEL_EXTENSION</code>
     * </p> </li> <li> <p> <code>MEMORY_ACTIVITY</code> </p> </li> <li> <p>
     * <code>MODULE_ACTIVITY</code> </p> </li> <li> <p> <code>PROCESS_ACTIVITY</code>
     * </p> </li> <li> <p> <code>REGISTRY_KEY_ACTIVITY</code> </p> </li> <li> <p>
     * <code>REGISTRY_VALUE_ACTIVITY</code> </p> </li> <li> <p>
     * <code>RESOURCE_ACTIVITY</code> </p> </li> <li> <p>
     * <code>SCHEDULED_JOB_ACTIVITY</code> </p> </li> <li> <p>
     * <code>SECURITY_FINDING</code> </p> </li> <li> <p> <code>ACCOUNT_CHANGE</code>
     * </p> </li> <li> <p> <code>AUTHENTICATION</code> </p> </li> <li> <p>
     * <code>AUTHORIZATION</code> </p> </li> <li> <p>
     * <code>ENTITY_MANAGEMENT_AUDIT</code> </p> </li> <li> <p>
     * <code>DHCP_ACTIVITY</code> </p> </li> <li> <p> <code>NETWORK_ACTIVITY</code>
     * </p> </li> <li> <p> <code>DNS_ACTIVITY</code> </p> </li> <li> <p>
     * <code>FTP_ACTIVITY</code> </p> </li> <li> <p> <code>HTTP_ACTIVITY</code> </p>
     * </li> <li> <p> <code>RDP_ACTIVITY</code> </p> </li> <li> <p>
     * <code>SMB_ACTIVITY</code> </p> </li> <li> <p> <code>SSH_ACTIVITY</code> </p>
     * </li> <li> <p> <code>CONFIG_STATE</code> </p> </li> <li> <p>
     * <code>INVENTORY_INFO</code> </p> </li> <li> <p> <code>EMAIL_ACTIVITY</code> </p>
     * </li> <li> <p> <code>API_ACTIVITY</code> </p> </li> <li> <p>
     * <code>CLOUD_API</code> </p> </li> </ul>
     */
    inline bool EventClassesHasBeenSet() const { return m_eventClassesHasBeenSet; }

    /**
     * <p>The Open Cybersecurity Schema Framework (OCSF) event classes which describes
     * the type of data that the custom source will send to Security Lake. The
     * supported event classes are:</p> <ul> <li> <p> <code>ACCESS_ACTIVITY</code> </p>
     * </li> <li> <p> <code>FILE_ACTIVITY</code> </p> </li> <li> <p>
     * <code>KERNEL_ACTIVITY</code> </p> </li> <li> <p> <code>KERNEL_EXTENSION</code>
     * </p> </li> <li> <p> <code>MEMORY_ACTIVITY</code> </p> </li> <li> <p>
     * <code>MODULE_ACTIVITY</code> </p> </li> <li> <p> <code>PROCESS_ACTIVITY</code>
     * </p> </li> <li> <p> <code>REGISTRY_KEY_ACTIVITY</code> </p> </li> <li> <p>
     * <code>REGISTRY_VALUE_ACTIVITY</code> </p> </li> <li> <p>
     * <code>RESOURCE_ACTIVITY</code> </p> </li> <li> <p>
     * <code>SCHEDULED_JOB_ACTIVITY</code> </p> </li> <li> <p>
     * <code>SECURITY_FINDING</code> </p> </li> <li> <p> <code>ACCOUNT_CHANGE</code>
     * </p> </li> <li> <p> <code>AUTHENTICATION</code> </p> </li> <li> <p>
     * <code>AUTHORIZATION</code> </p> </li> <li> <p>
     * <code>ENTITY_MANAGEMENT_AUDIT</code> </p> </li> <li> <p>
     * <code>DHCP_ACTIVITY</code> </p> </li> <li> <p> <code>NETWORK_ACTIVITY</code>
     * </p> </li> <li> <p> <code>DNS_ACTIVITY</code> </p> </li> <li> <p>
     * <code>FTP_ACTIVITY</code> </p> </li> <li> <p> <code>HTTP_ACTIVITY</code> </p>
     * </li> <li> <p> <code>RDP_ACTIVITY</code> </p> </li> <li> <p>
     * <code>SMB_ACTIVITY</code> </p> </li> <li> <p> <code>SSH_ACTIVITY</code> </p>
     * </li> <li> <p> <code>CONFIG_STATE</code> </p> </li> <li> <p>
     * <code>INVENTORY_INFO</code> </p> </li> <li> <p> <code>EMAIL_ACTIVITY</code> </p>
     * </li> <li> <p> <code>API_ACTIVITY</code> </p> </li> <li> <p>
     * <code>CLOUD_API</code> </p> </li> </ul>
     */
    inline void SetEventClasses(const Aws::Vector<Aws::String>& value) { m_eventClassesHasBeenSet = true; m_eventClasses = value; }

    /**
     * <p>The Open Cybersecurity Schema Framework (OCSF) event classes which describes
     * the type of data that the custom source will send to Security Lake. The
     * supported event classes are:</p> <ul> <li> <p> <code>ACCESS_ACTIVITY</code> </p>
     * </li> <li> <p> <code>FILE_ACTIVITY</code> </p> </li> <li> <p>
     * <code>KERNEL_ACTIVITY</code> </p> </li> <li> <p> <code>KERNEL_EXTENSION</code>
     * </p> </li> <li> <p> <code>MEMORY_ACTIVITY</code> </p> </li> <li> <p>
     * <code>MODULE_ACTIVITY</code> </p> </li> <li> <p> <code>PROCESS_ACTIVITY</code>
     * </p> </li> <li> <p> <code>REGISTRY_KEY_ACTIVITY</code> </p> </li> <li> <p>
     * <code>REGISTRY_VALUE_ACTIVITY</code> </p> </li> <li> <p>
     * <code>RESOURCE_ACTIVITY</code> </p> </li> <li> <p>
     * <code>SCHEDULED_JOB_ACTIVITY</code> </p> </li> <li> <p>
     * <code>SECURITY_FINDING</code> </p> </li> <li> <p> <code>ACCOUNT_CHANGE</code>
     * </p> </li> <li> <p> <code>AUTHENTICATION</code> </p> </li> <li> <p>
     * <code>AUTHORIZATION</code> </p> </li> <li> <p>
     * <code>ENTITY_MANAGEMENT_AUDIT</code> </p> </li> <li> <p>
     * <code>DHCP_ACTIVITY</code> </p> </li> <li> <p> <code>NETWORK_ACTIVITY</code>
     * </p> </li> <li> <p> <code>DNS_ACTIVITY</code> </p> </li> <li> <p>
     * <code>FTP_ACTIVITY</code> </p> </li> <li> <p> <code>HTTP_ACTIVITY</code> </p>
     * </li> <li> <p> <code>RDP_ACTIVITY</code> </p> </li> <li> <p>
     * <code>SMB_ACTIVITY</code> </p> </li> <li> <p> <code>SSH_ACTIVITY</code> </p>
     * </li> <li> <p> <code>CONFIG_STATE</code> </p> </li> <li> <p>
     * <code>INVENTORY_INFO</code> </p> </li> <li> <p> <code>EMAIL_ACTIVITY</code> </p>
     * </li> <li> <p> <code>API_ACTIVITY</code> </p> </li> <li> <p>
     * <code>CLOUD_API</code> </p> </li> </ul>
     */
    inline void SetEventClasses(Aws::Vector<Aws::String>&& value) { m_eventClassesHasBeenSet = true; m_eventClasses = std::move(value); }

    /**
     * <p>The Open Cybersecurity Schema Framework (OCSF) event classes which describes
     * the type of data that the custom source will send to Security Lake. The
     * supported event classes are:</p> <ul> <li> <p> <code>ACCESS_ACTIVITY</code> </p>
     * </li> <li> <p> <code>FILE_ACTIVITY</code> </p> </li> <li> <p>
     * <code>KERNEL_ACTIVITY</code> </p> </li> <li> <p> <code>KERNEL_EXTENSION</code>
     * </p> </li> <li> <p> <code>MEMORY_ACTIVITY</code> </p> </li> <li> <p>
     * <code>MODULE_ACTIVITY</code> </p> </li> <li> <p> <code>PROCESS_ACTIVITY</code>
     * </p> </li> <li> <p> <code>REGISTRY_KEY_ACTIVITY</code> </p> </li> <li> <p>
     * <code>REGISTRY_VALUE_ACTIVITY</code> </p> </li> <li> <p>
     * <code>RESOURCE_ACTIVITY</code> </p> </li> <li> <p>
     * <code>SCHEDULED_JOB_ACTIVITY</code> </p> </li> <li> <p>
     * <code>SECURITY_FINDING</code> </p> </li> <li> <p> <code>ACCOUNT_CHANGE</code>
     * </p> </li> <li> <p> <code>AUTHENTICATION</code> </p> </li> <li> <p>
     * <code>AUTHORIZATION</code> </p> </li> <li> <p>
     * <code>ENTITY_MANAGEMENT_AUDIT</code> </p> </li> <li> <p>
     * <code>DHCP_ACTIVITY</code> </p> </li> <li> <p> <code>NETWORK_ACTIVITY</code>
     * </p> </li> <li> <p> <code>DNS_ACTIVITY</code> </p> </li> <li> <p>
     * <code>FTP_ACTIVITY</code> </p> </li> <li> <p> <code>HTTP_ACTIVITY</code> </p>
     * </li> <li> <p> <code>RDP_ACTIVITY</code> </p> </li> <li> <p>
     * <code>SMB_ACTIVITY</code> </p> </li> <li> <p> <code>SSH_ACTIVITY</code> </p>
     * </li> <li> <p> <code>CONFIG_STATE</code> </p> </li> <li> <p>
     * <code>INVENTORY_INFO</code> </p> </li> <li> <p> <code>EMAIL_ACTIVITY</code> </p>
     * </li> <li> <p> <code>API_ACTIVITY</code> </p> </li> <li> <p>
     * <code>CLOUD_API</code> </p> </li> </ul>
     */
    inline DataLakeSource& WithEventClasses(const Aws::Vector<Aws::String>& value) { SetEventClasses(value); return *this;}

    /**
     * <p>The Open Cybersecurity Schema Framework (OCSF) event classes which describes
     * the type of data that the custom source will send to Security Lake. The
     * supported event classes are:</p> <ul> <li> <p> <code>ACCESS_ACTIVITY</code> </p>
     * </li> <li> <p> <code>FILE_ACTIVITY</code> </p> </li> <li> <p>
     * <code>KERNEL_ACTIVITY</code> </p> </li> <li> <p> <code>KERNEL_EXTENSION</code>
     * </p> </li> <li> <p> <code>MEMORY_ACTIVITY</code> </p> </li> <li> <p>
     * <code>MODULE_ACTIVITY</code> </p> </li> <li> <p> <code>PROCESS_ACTIVITY</code>
     * </p> </li> <li> <p> <code>REGISTRY_KEY_ACTIVITY</code> </p> </li> <li> <p>
     * <code>REGISTRY_VALUE_ACTIVITY</code> </p> </li> <li> <p>
     * <code>RESOURCE_ACTIVITY</code> </p> </li> <li> <p>
     * <code>SCHEDULED_JOB_ACTIVITY</code> </p> </li> <li> <p>
     * <code>SECURITY_FINDING</code> </p> </li> <li> <p> <code>ACCOUNT_CHANGE</code>
     * </p> </li> <li> <p> <code>AUTHENTICATION</code> </p> </li> <li> <p>
     * <code>AUTHORIZATION</code> </p> </li> <li> <p>
     * <code>ENTITY_MANAGEMENT_AUDIT</code> </p> </li> <li> <p>
     * <code>DHCP_ACTIVITY</code> </p> </li> <li> <p> <code>NETWORK_ACTIVITY</code>
     * </p> </li> <li> <p> <code>DNS_ACTIVITY</code> </p> </li> <li> <p>
     * <code>FTP_ACTIVITY</code> </p> </li> <li> <p> <code>HTTP_ACTIVITY</code> </p>
     * </li> <li> <p> <code>RDP_ACTIVITY</code> </p> </li> <li> <p>
     * <code>SMB_ACTIVITY</code> </p> </li> <li> <p> <code>SSH_ACTIVITY</code> </p>
     * </li> <li> <p> <code>CONFIG_STATE</code> </p> </li> <li> <p>
     * <code>INVENTORY_INFO</code> </p> </li> <li> <p> <code>EMAIL_ACTIVITY</code> </p>
     * </li> <li> <p> <code>API_ACTIVITY</code> </p> </li> <li> <p>
     * <code>CLOUD_API</code> </p> </li> </ul>
     */
    inline DataLakeSource& WithEventClasses(Aws::Vector<Aws::String>&& value) { SetEventClasses(std::move(value)); return *this;}

    /**
     * <p>The Open Cybersecurity Schema Framework (OCSF) event classes which describes
     * the type of data that the custom source will send to Security Lake. The
     * supported event classes are:</p> <ul> <li> <p> <code>ACCESS_ACTIVITY</code> </p>
     * </li> <li> <p> <code>FILE_ACTIVITY</code> </p> </li> <li> <p>
     * <code>KERNEL_ACTIVITY</code> </p> </li> <li> <p> <code>KERNEL_EXTENSION</code>
     * </p> </li> <li> <p> <code>MEMORY_ACTIVITY</code> </p> </li> <li> <p>
     * <code>MODULE_ACTIVITY</code> </p> </li> <li> <p> <code>PROCESS_ACTIVITY</code>
     * </p> </li> <li> <p> <code>REGISTRY_KEY_ACTIVITY</code> </p> </li> <li> <p>
     * <code>REGISTRY_VALUE_ACTIVITY</code> </p> </li> <li> <p>
     * <code>RESOURCE_ACTIVITY</code> </p> </li> <li> <p>
     * <code>SCHEDULED_JOB_ACTIVITY</code> </p> </li> <li> <p>
     * <code>SECURITY_FINDING</code> </p> </li> <li> <p> <code>ACCOUNT_CHANGE</code>
     * </p> </li> <li> <p> <code>AUTHENTICATION</code> </p> </li> <li> <p>
     * <code>AUTHORIZATION</code> </p> </li> <li> <p>
     * <code>ENTITY_MANAGEMENT_AUDIT</code> </p> </li> <li> <p>
     * <code>DHCP_ACTIVITY</code> </p> </li> <li> <p> <code>NETWORK_ACTIVITY</code>
     * </p> </li> <li> <p> <code>DNS_ACTIVITY</code> </p> </li> <li> <p>
     * <code>FTP_ACTIVITY</code> </p> </li> <li> <p> <code>HTTP_ACTIVITY</code> </p>
     * </li> <li> <p> <code>RDP_ACTIVITY</code> </p> </li> <li> <p>
     * <code>SMB_ACTIVITY</code> </p> </li> <li> <p> <code>SSH_ACTIVITY</code> </p>
     * </li> <li> <p> <code>CONFIG_STATE</code> </p> </li> <li> <p>
     * <code>INVENTORY_INFO</code> </p> </li> <li> <p> <code>EMAIL_ACTIVITY</code> </p>
     * </li> <li> <p> <code>API_ACTIVITY</code> </p> </li> <li> <p>
     * <code>CLOUD_API</code> </p> </li> </ul>
     */
    inline DataLakeSource& AddEventClasses(const Aws::String& value) { m_eventClassesHasBeenSet = true; m_eventClasses.push_back(value); return *this; }

    /**
     * <p>The Open Cybersecurity Schema Framework (OCSF) event classes which describes
     * the type of data that the custom source will send to Security Lake. The
     * supported event classes are:</p> <ul> <li> <p> <code>ACCESS_ACTIVITY</code> </p>
     * </li> <li> <p> <code>FILE_ACTIVITY</code> </p> </li> <li> <p>
     * <code>KERNEL_ACTIVITY</code> </p> </li> <li> <p> <code>KERNEL_EXTENSION</code>
     * </p> </li> <li> <p> <code>MEMORY_ACTIVITY</code> </p> </li> <li> <p>
     * <code>MODULE_ACTIVITY</code> </p> </li> <li> <p> <code>PROCESS_ACTIVITY</code>
     * </p> </li> <li> <p> <code>REGISTRY_KEY_ACTIVITY</code> </p> </li> <li> <p>
     * <code>REGISTRY_VALUE_ACTIVITY</code> </p> </li> <li> <p>
     * <code>RESOURCE_ACTIVITY</code> </p> </li> <li> <p>
     * <code>SCHEDULED_JOB_ACTIVITY</code> </p> </li> <li> <p>
     * <code>SECURITY_FINDING</code> </p> </li> <li> <p> <code>ACCOUNT_CHANGE</code>
     * </p> </li> <li> <p> <code>AUTHENTICATION</code> </p> </li> <li> <p>
     * <code>AUTHORIZATION</code> </p> </li> <li> <p>
     * <code>ENTITY_MANAGEMENT_AUDIT</code> </p> </li> <li> <p>
     * <code>DHCP_ACTIVITY</code> </p> </li> <li> <p> <code>NETWORK_ACTIVITY</code>
     * </p> </li> <li> <p> <code>DNS_ACTIVITY</code> </p> </li> <li> <p>
     * <code>FTP_ACTIVITY</code> </p> </li> <li> <p> <code>HTTP_ACTIVITY</code> </p>
     * </li> <li> <p> <code>RDP_ACTIVITY</code> </p> </li> <li> <p>
     * <code>SMB_ACTIVITY</code> </p> </li> <li> <p> <code>SSH_ACTIVITY</code> </p>
     * </li> <li> <p> <code>CONFIG_STATE</code> </p> </li> <li> <p>
     * <code>INVENTORY_INFO</code> </p> </li> <li> <p> <code>EMAIL_ACTIVITY</code> </p>
     * </li> <li> <p> <code>API_ACTIVITY</code> </p> </li> <li> <p>
     * <code>CLOUD_API</code> </p> </li> </ul>
     */
    inline DataLakeSource& AddEventClasses(Aws::String&& value) { m_eventClassesHasBeenSet = true; m_eventClasses.push_back(std::move(value)); return *this; }

    /**
     * <p>The Open Cybersecurity Schema Framework (OCSF) event classes which describes
     * the type of data that the custom source will send to Security Lake. The
     * supported event classes are:</p> <ul> <li> <p> <code>ACCESS_ACTIVITY</code> </p>
     * </li> <li> <p> <code>FILE_ACTIVITY</code> </p> </li> <li> <p>
     * <code>KERNEL_ACTIVITY</code> </p> </li> <li> <p> <code>KERNEL_EXTENSION</code>
     * </p> </li> <li> <p> <code>MEMORY_ACTIVITY</code> </p> </li> <li> <p>
     * <code>MODULE_ACTIVITY</code> </p> </li> <li> <p> <code>PROCESS_ACTIVITY</code>
     * </p> </li> <li> <p> <code>REGISTRY_KEY_ACTIVITY</code> </p> </li> <li> <p>
     * <code>REGISTRY_VALUE_ACTIVITY</code> </p> </li> <li> <p>
     * <code>RESOURCE_ACTIVITY</code> </p> </li> <li> <p>
     * <code>SCHEDULED_JOB_ACTIVITY</code> </p> </li> <li> <p>
     * <code>SECURITY_FINDING</code> </p> </li> <li> <p> <code>ACCOUNT_CHANGE</code>
     * </p> </li> <li> <p> <code>AUTHENTICATION</code> </p> </li> <li> <p>
     * <code>AUTHORIZATION</code> </p> </li> <li> <p>
     * <code>ENTITY_MANAGEMENT_AUDIT</code> </p> </li> <li> <p>
     * <code>DHCP_ACTIVITY</code> </p> </li> <li> <p> <code>NETWORK_ACTIVITY</code>
     * </p> </li> <li> <p> <code>DNS_ACTIVITY</code> </p> </li> <li> <p>
     * <code>FTP_ACTIVITY</code> </p> </li> <li> <p> <code>HTTP_ACTIVITY</code> </p>
     * </li> <li> <p> <code>RDP_ACTIVITY</code> </p> </li> <li> <p>
     * <code>SMB_ACTIVITY</code> </p> </li> <li> <p> <code>SSH_ACTIVITY</code> </p>
     * </li> <li> <p> <code>CONFIG_STATE</code> </p> </li> <li> <p>
     * <code>INVENTORY_INFO</code> </p> </li> <li> <p> <code>EMAIL_ACTIVITY</code> </p>
     * </li> <li> <p> <code>API_ACTIVITY</code> </p> </li> <li> <p>
     * <code>CLOUD_API</code> </p> </li> </ul>
     */
    inline DataLakeSource& AddEventClasses(const char* value) { m_eventClassesHasBeenSet = true; m_eventClasses.push_back(value); return *this; }


    /**
     * <p>The supported Amazon Web Services from which logs and events are collected.
     * Amazon Security Lake supports log and event collection for natively supported
     * Amazon Web Services.</p>
     */
    inline const Aws::String& GetSourceName() const{ return m_sourceName; }

    /**
     * <p>The supported Amazon Web Services from which logs and events are collected.
     * Amazon Security Lake supports log and event collection for natively supported
     * Amazon Web Services.</p>
     */
    inline bool SourceNameHasBeenSet() const { return m_sourceNameHasBeenSet; }

    /**
     * <p>The supported Amazon Web Services from which logs and events are collected.
     * Amazon Security Lake supports log and event collection for natively supported
     * Amazon Web Services.</p>
     */
    inline void SetSourceName(const Aws::String& value) { m_sourceNameHasBeenSet = true; m_sourceName = value; }

    /**
     * <p>The supported Amazon Web Services from which logs and events are collected.
     * Amazon Security Lake supports log and event collection for natively supported
     * Amazon Web Services.</p>
     */
    inline void SetSourceName(Aws::String&& value) { m_sourceNameHasBeenSet = true; m_sourceName = std::move(value); }

    /**
     * <p>The supported Amazon Web Services from which logs and events are collected.
     * Amazon Security Lake supports log and event collection for natively supported
     * Amazon Web Services.</p>
     */
    inline void SetSourceName(const char* value) { m_sourceNameHasBeenSet = true; m_sourceName.assign(value); }

    /**
     * <p>The supported Amazon Web Services from which logs and events are collected.
     * Amazon Security Lake supports log and event collection for natively supported
     * Amazon Web Services.</p>
     */
    inline DataLakeSource& WithSourceName(const Aws::String& value) { SetSourceName(value); return *this;}

    /**
     * <p>The supported Amazon Web Services from which logs and events are collected.
     * Amazon Security Lake supports log and event collection for natively supported
     * Amazon Web Services.</p>
     */
    inline DataLakeSource& WithSourceName(Aws::String&& value) { SetSourceName(std::move(value)); return *this;}

    /**
     * <p>The supported Amazon Web Services from which logs and events are collected.
     * Amazon Security Lake supports log and event collection for natively supported
     * Amazon Web Services.</p>
     */
    inline DataLakeSource& WithSourceName(const char* value) { SetSourceName(value); return *this;}


    /**
     * <p>The log status for the Security Lake account.</p>
     */
    inline const Aws::Vector<DataLakeSourceStatus>& GetSourceStatuses() const{ return m_sourceStatuses; }

    /**
     * <p>The log status for the Security Lake account.</p>
     */
    inline bool SourceStatusesHasBeenSet() const { return m_sourceStatusesHasBeenSet; }

    /**
     * <p>The log status for the Security Lake account.</p>
     */
    inline void SetSourceStatuses(const Aws::Vector<DataLakeSourceStatus>& value) { m_sourceStatusesHasBeenSet = true; m_sourceStatuses = value; }

    /**
     * <p>The log status for the Security Lake account.</p>
     */
    inline void SetSourceStatuses(Aws::Vector<DataLakeSourceStatus>&& value) { m_sourceStatusesHasBeenSet = true; m_sourceStatuses = std::move(value); }

    /**
     * <p>The log status for the Security Lake account.</p>
     */
    inline DataLakeSource& WithSourceStatuses(const Aws::Vector<DataLakeSourceStatus>& value) { SetSourceStatuses(value); return *this;}

    /**
     * <p>The log status for the Security Lake account.</p>
     */
    inline DataLakeSource& WithSourceStatuses(Aws::Vector<DataLakeSourceStatus>&& value) { SetSourceStatuses(std::move(value)); return *this;}

    /**
     * <p>The log status for the Security Lake account.</p>
     */
    inline DataLakeSource& AddSourceStatuses(const DataLakeSourceStatus& value) { m_sourceStatusesHasBeenSet = true; m_sourceStatuses.push_back(value); return *this; }

    /**
     * <p>The log status for the Security Lake account.</p>
     */
    inline DataLakeSource& AddSourceStatuses(DataLakeSourceStatus&& value) { m_sourceStatusesHasBeenSet = true; m_sourceStatuses.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_account;
    bool m_accountHasBeenSet = false;

    Aws::Vector<Aws::String> m_eventClasses;
    bool m_eventClassesHasBeenSet = false;

    Aws::String m_sourceName;
    bool m_sourceNameHasBeenSet = false;

    Aws::Vector<DataLakeSourceStatus> m_sourceStatuses;
    bool m_sourceStatusesHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
