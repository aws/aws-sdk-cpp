/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/ManagedStatus.h>
#include <aws/ssm/model/PlatformType.h>
#include <aws/ssm/model/ResourceType.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Details about a specific managed node.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/InstanceInfo">AWS
   * API Reference</a></p>
   */
  class InstanceInfo
  {
  public:
    AWS_SSM_API InstanceInfo();
    AWS_SSM_API InstanceInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API InstanceInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of agent installed on the node.</p>
     */
    inline const Aws::String& GetAgentType() const{ return m_agentType; }
    inline bool AgentTypeHasBeenSet() const { return m_agentTypeHasBeenSet; }
    inline void SetAgentType(const Aws::String& value) { m_agentTypeHasBeenSet = true; m_agentType = value; }
    inline void SetAgentType(Aws::String&& value) { m_agentTypeHasBeenSet = true; m_agentType = std::move(value); }
    inline void SetAgentType(const char* value) { m_agentTypeHasBeenSet = true; m_agentType.assign(value); }
    inline InstanceInfo& WithAgentType(const Aws::String& value) { SetAgentType(value); return *this;}
    inline InstanceInfo& WithAgentType(Aws::String&& value) { SetAgentType(std::move(value)); return *this;}
    inline InstanceInfo& WithAgentType(const char* value) { SetAgentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the agent installed on the node.</p>
     */
    inline const Aws::String& GetAgentVersion() const{ return m_agentVersion; }
    inline bool AgentVersionHasBeenSet() const { return m_agentVersionHasBeenSet; }
    inline void SetAgentVersion(const Aws::String& value) { m_agentVersionHasBeenSet = true; m_agentVersion = value; }
    inline void SetAgentVersion(Aws::String&& value) { m_agentVersionHasBeenSet = true; m_agentVersion = std::move(value); }
    inline void SetAgentVersion(const char* value) { m_agentVersionHasBeenSet = true; m_agentVersion.assign(value); }
    inline InstanceInfo& WithAgentVersion(const Aws::String& value) { SetAgentVersion(value); return *this;}
    inline InstanceInfo& WithAgentVersion(Aws::String&& value) { SetAgentVersion(std::move(value)); return *this;}
    inline InstanceInfo& WithAgentVersion(const char* value) { SetAgentVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fully qualified host name of the managed node.</p>
     */
    inline const Aws::String& GetComputerName() const{ return m_computerName; }
    inline bool ComputerNameHasBeenSet() const { return m_computerNameHasBeenSet; }
    inline void SetComputerName(const Aws::String& value) { m_computerNameHasBeenSet = true; m_computerName = value; }
    inline void SetComputerName(Aws::String&& value) { m_computerNameHasBeenSet = true; m_computerName = std::move(value); }
    inline void SetComputerName(const char* value) { m_computerNameHasBeenSet = true; m_computerName.assign(value); }
    inline InstanceInfo& WithComputerName(const Aws::String& value) { SetComputerName(value); return *this;}
    inline InstanceInfo& WithComputerName(Aws::String&& value) { SetComputerName(std::move(value)); return *this;}
    inline InstanceInfo& WithComputerName(const char* value) { SetComputerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the managed node.</p>
     */
    inline const Aws::String& GetInstanceStatus() const{ return m_instanceStatus; }
    inline bool InstanceStatusHasBeenSet() const { return m_instanceStatusHasBeenSet; }
    inline void SetInstanceStatus(const Aws::String& value) { m_instanceStatusHasBeenSet = true; m_instanceStatus = value; }
    inline void SetInstanceStatus(Aws::String&& value) { m_instanceStatusHasBeenSet = true; m_instanceStatus = std::move(value); }
    inline void SetInstanceStatus(const char* value) { m_instanceStatusHasBeenSet = true; m_instanceStatus.assign(value); }
    inline InstanceInfo& WithInstanceStatus(const Aws::String& value) { SetInstanceStatus(value); return *this;}
    inline InstanceInfo& WithInstanceStatus(Aws::String&& value) { SetInstanceStatus(std::move(value)); return *this;}
    inline InstanceInfo& WithInstanceStatus(const char* value) { SetInstanceStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address of the managed node.</p>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::move(value); }
    inline void SetIpAddress(const char* value) { m_ipAddressHasBeenSet = true; m_ipAddress.assign(value); }
    inline InstanceInfo& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}
    inline InstanceInfo& WithIpAddress(Aws::String&& value) { SetIpAddress(std::move(value)); return *this;}
    inline InstanceInfo& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the node is managed by Systems Manager.</p>
     */
    inline const ManagedStatus& GetManagedStatus() const{ return m_managedStatus; }
    inline bool ManagedStatusHasBeenSet() const { return m_managedStatusHasBeenSet; }
    inline void SetManagedStatus(const ManagedStatus& value) { m_managedStatusHasBeenSet = true; m_managedStatus = value; }
    inline void SetManagedStatus(ManagedStatus&& value) { m_managedStatusHasBeenSet = true; m_managedStatus = std::move(value); }
    inline InstanceInfo& WithManagedStatus(const ManagedStatus& value) { SetManagedStatus(value); return *this;}
    inline InstanceInfo& WithManagedStatus(ManagedStatus&& value) { SetManagedStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operating system platform type of the managed node.</p>
     */
    inline const PlatformType& GetPlatformType() const{ return m_platformType; }
    inline bool PlatformTypeHasBeenSet() const { return m_platformTypeHasBeenSet; }
    inline void SetPlatformType(const PlatformType& value) { m_platformTypeHasBeenSet = true; m_platformType = value; }
    inline void SetPlatformType(PlatformType&& value) { m_platformTypeHasBeenSet = true; m_platformType = std::move(value); }
    inline InstanceInfo& WithPlatformType(const PlatformType& value) { SetPlatformType(value); return *this;}
    inline InstanceInfo& WithPlatformType(PlatformType&& value) { SetPlatformType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the operating system platform running on your managed node.</p>
     */
    inline const Aws::String& GetPlatformName() const{ return m_platformName; }
    inline bool PlatformNameHasBeenSet() const { return m_platformNameHasBeenSet; }
    inline void SetPlatformName(const Aws::String& value) { m_platformNameHasBeenSet = true; m_platformName = value; }
    inline void SetPlatformName(Aws::String&& value) { m_platformNameHasBeenSet = true; m_platformName = std::move(value); }
    inline void SetPlatformName(const char* value) { m_platformNameHasBeenSet = true; m_platformName.assign(value); }
    inline InstanceInfo& WithPlatformName(const Aws::String& value) { SetPlatformName(value); return *this;}
    inline InstanceInfo& WithPlatformName(Aws::String&& value) { SetPlatformName(std::move(value)); return *this;}
    inline InstanceInfo& WithPlatformName(const char* value) { SetPlatformName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the OS platform running on your managed node. </p>
     */
    inline const Aws::String& GetPlatformVersion() const{ return m_platformVersion; }
    inline bool PlatformVersionHasBeenSet() const { return m_platformVersionHasBeenSet; }
    inline void SetPlatformVersion(const Aws::String& value) { m_platformVersionHasBeenSet = true; m_platformVersion = value; }
    inline void SetPlatformVersion(Aws::String&& value) { m_platformVersionHasBeenSet = true; m_platformVersion = std::move(value); }
    inline void SetPlatformVersion(const char* value) { m_platformVersionHasBeenSet = true; m_platformVersion.assign(value); }
    inline InstanceInfo& WithPlatformVersion(const Aws::String& value) { SetPlatformVersion(value); return *this;}
    inline InstanceInfo& WithPlatformVersion(Aws::String&& value) { SetPlatformVersion(std::move(value)); return *this;}
    inline InstanceInfo& WithPlatformVersion(const char* value) { SetPlatformVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of instance, either an EC2 instance or another supported machine
     * type in a hybrid fleet.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline InstanceInfo& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}
    inline InstanceInfo& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_agentType;
    bool m_agentTypeHasBeenSet = false;

    Aws::String m_agentVersion;
    bool m_agentVersionHasBeenSet = false;

    Aws::String m_computerName;
    bool m_computerNameHasBeenSet = false;

    Aws::String m_instanceStatus;
    bool m_instanceStatusHasBeenSet = false;

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;

    ManagedStatus m_managedStatus;
    bool m_managedStatusHasBeenSet = false;

    PlatformType m_platformType;
    bool m_platformTypeHasBeenSet = false;

    Aws::String m_platformName;
    bool m_platformNameHasBeenSet = false;

    Aws::String m_platformVersion;
    bool m_platformVersionHasBeenSet = false;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
