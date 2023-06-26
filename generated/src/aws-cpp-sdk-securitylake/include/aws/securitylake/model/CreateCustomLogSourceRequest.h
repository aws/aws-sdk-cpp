/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/securitylake/SecurityLakeRequest.h>
#include <aws/securitylake/model/CustomLogSourceConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SecurityLake
{
namespace Model
{

  /**
   */
  class CreateCustomLogSourceRequest : public SecurityLakeRequest
  {
  public:
    AWS_SECURITYLAKE_API CreateCustomLogSourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCustomLogSource"; }

    AWS_SECURITYLAKE_API Aws::String SerializePayload() const override;


    /**
     * <p>The configuration for the third-party custom source.</p>
     */
    inline const CustomLogSourceConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The configuration for the third-party custom source.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>The configuration for the third-party custom source.</p>
     */
    inline void SetConfiguration(const CustomLogSourceConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>The configuration for the third-party custom source.</p>
     */
    inline void SetConfiguration(CustomLogSourceConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>The configuration for the third-party custom source.</p>
     */
    inline CreateCustomLogSourceRequest& WithConfiguration(const CustomLogSourceConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The configuration for the third-party custom source.</p>
     */
    inline CreateCustomLogSourceRequest& WithConfiguration(CustomLogSourceConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}


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
    inline CreateCustomLogSourceRequest& WithEventClasses(const Aws::Vector<Aws::String>& value) { SetEventClasses(value); return *this;}

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
    inline CreateCustomLogSourceRequest& WithEventClasses(Aws::Vector<Aws::String>&& value) { SetEventClasses(std::move(value)); return *this;}

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
    inline CreateCustomLogSourceRequest& AddEventClasses(const Aws::String& value) { m_eventClassesHasBeenSet = true; m_eventClasses.push_back(value); return *this; }

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
    inline CreateCustomLogSourceRequest& AddEventClasses(Aws::String&& value) { m_eventClassesHasBeenSet = true; m_eventClasses.push_back(std::move(value)); return *this; }

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
    inline CreateCustomLogSourceRequest& AddEventClasses(const char* value) { m_eventClassesHasBeenSet = true; m_eventClasses.push_back(value); return *this; }


    /**
     * <p>Specify the name for a third-party custom source. This must be a Regionally
     * unique value.</p>
     */
    inline const Aws::String& GetSourceName() const{ return m_sourceName; }

    /**
     * <p>Specify the name for a third-party custom source. This must be a Regionally
     * unique value.</p>
     */
    inline bool SourceNameHasBeenSet() const { return m_sourceNameHasBeenSet; }

    /**
     * <p>Specify the name for a third-party custom source. This must be a Regionally
     * unique value.</p>
     */
    inline void SetSourceName(const Aws::String& value) { m_sourceNameHasBeenSet = true; m_sourceName = value; }

    /**
     * <p>Specify the name for a third-party custom source. This must be a Regionally
     * unique value.</p>
     */
    inline void SetSourceName(Aws::String&& value) { m_sourceNameHasBeenSet = true; m_sourceName = std::move(value); }

    /**
     * <p>Specify the name for a third-party custom source. This must be a Regionally
     * unique value.</p>
     */
    inline void SetSourceName(const char* value) { m_sourceNameHasBeenSet = true; m_sourceName.assign(value); }

    /**
     * <p>Specify the name for a third-party custom source. This must be a Regionally
     * unique value.</p>
     */
    inline CreateCustomLogSourceRequest& WithSourceName(const Aws::String& value) { SetSourceName(value); return *this;}

    /**
     * <p>Specify the name for a third-party custom source. This must be a Regionally
     * unique value.</p>
     */
    inline CreateCustomLogSourceRequest& WithSourceName(Aws::String&& value) { SetSourceName(std::move(value)); return *this;}

    /**
     * <p>Specify the name for a third-party custom source. This must be a Regionally
     * unique value.</p>
     */
    inline CreateCustomLogSourceRequest& WithSourceName(const char* value) { SetSourceName(value); return *this;}


    /**
     * <p>Specify the source version for the third-party custom source, to limit log
     * collection to a specific version of custom data source.</p>
     */
    inline const Aws::String& GetSourceVersion() const{ return m_sourceVersion; }

    /**
     * <p>Specify the source version for the third-party custom source, to limit log
     * collection to a specific version of custom data source.</p>
     */
    inline bool SourceVersionHasBeenSet() const { return m_sourceVersionHasBeenSet; }

    /**
     * <p>Specify the source version for the third-party custom source, to limit log
     * collection to a specific version of custom data source.</p>
     */
    inline void SetSourceVersion(const Aws::String& value) { m_sourceVersionHasBeenSet = true; m_sourceVersion = value; }

    /**
     * <p>Specify the source version for the third-party custom source, to limit log
     * collection to a specific version of custom data source.</p>
     */
    inline void SetSourceVersion(Aws::String&& value) { m_sourceVersionHasBeenSet = true; m_sourceVersion = std::move(value); }

    /**
     * <p>Specify the source version for the third-party custom source, to limit log
     * collection to a specific version of custom data source.</p>
     */
    inline void SetSourceVersion(const char* value) { m_sourceVersionHasBeenSet = true; m_sourceVersion.assign(value); }

    /**
     * <p>Specify the source version for the third-party custom source, to limit log
     * collection to a specific version of custom data source.</p>
     */
    inline CreateCustomLogSourceRequest& WithSourceVersion(const Aws::String& value) { SetSourceVersion(value); return *this;}

    /**
     * <p>Specify the source version for the third-party custom source, to limit log
     * collection to a specific version of custom data source.</p>
     */
    inline CreateCustomLogSourceRequest& WithSourceVersion(Aws::String&& value) { SetSourceVersion(std::move(value)); return *this;}

    /**
     * <p>Specify the source version for the third-party custom source, to limit log
     * collection to a specific version of custom data source.</p>
     */
    inline CreateCustomLogSourceRequest& WithSourceVersion(const char* value) { SetSourceVersion(value); return *this;}

  private:

    CustomLogSourceConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::Vector<Aws::String> m_eventClasses;
    bool m_eventClassesHasBeenSet = false;

    Aws::String m_sourceName;
    bool m_sourceNameHasBeenSet = false;

    Aws::String m_sourceVersion;
    bool m_sourceVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
