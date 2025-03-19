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
    AWS_SSM_API InstanceInfo() = default;
    AWS_SSM_API InstanceInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API InstanceInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of agent installed on the node.</p>
     */
    inline const Aws::String& GetAgentType() const { return m_agentType; }
    inline bool AgentTypeHasBeenSet() const { return m_agentTypeHasBeenSet; }
    template<typename AgentTypeT = Aws::String>
    void SetAgentType(AgentTypeT&& value) { m_agentTypeHasBeenSet = true; m_agentType = std::forward<AgentTypeT>(value); }
    template<typename AgentTypeT = Aws::String>
    InstanceInfo& WithAgentType(AgentTypeT&& value) { SetAgentType(std::forward<AgentTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the agent installed on the node.</p>
     */
    inline const Aws::String& GetAgentVersion() const { return m_agentVersion; }
    inline bool AgentVersionHasBeenSet() const { return m_agentVersionHasBeenSet; }
    template<typename AgentVersionT = Aws::String>
    void SetAgentVersion(AgentVersionT&& value) { m_agentVersionHasBeenSet = true; m_agentVersion = std::forward<AgentVersionT>(value); }
    template<typename AgentVersionT = Aws::String>
    InstanceInfo& WithAgentVersion(AgentVersionT&& value) { SetAgentVersion(std::forward<AgentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fully qualified host name of the managed node.</p>
     */
    inline const Aws::String& GetComputerName() const { return m_computerName; }
    inline bool ComputerNameHasBeenSet() const { return m_computerNameHasBeenSet; }
    template<typename ComputerNameT = Aws::String>
    void SetComputerName(ComputerNameT&& value) { m_computerNameHasBeenSet = true; m_computerName = std::forward<ComputerNameT>(value); }
    template<typename ComputerNameT = Aws::String>
    InstanceInfo& WithComputerName(ComputerNameT&& value) { SetComputerName(std::forward<ComputerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the managed node.</p>
     */
    inline const Aws::String& GetInstanceStatus() const { return m_instanceStatus; }
    inline bool InstanceStatusHasBeenSet() const { return m_instanceStatusHasBeenSet; }
    template<typename InstanceStatusT = Aws::String>
    void SetInstanceStatus(InstanceStatusT&& value) { m_instanceStatusHasBeenSet = true; m_instanceStatus = std::forward<InstanceStatusT>(value); }
    template<typename InstanceStatusT = Aws::String>
    InstanceInfo& WithInstanceStatus(InstanceStatusT&& value) { SetInstanceStatus(std::forward<InstanceStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address of the managed node.</p>
     */
    inline const Aws::String& GetIpAddress() const { return m_ipAddress; }
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }
    template<typename IpAddressT = Aws::String>
    void SetIpAddress(IpAddressT&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::forward<IpAddressT>(value); }
    template<typename IpAddressT = Aws::String>
    InstanceInfo& WithIpAddress(IpAddressT&& value) { SetIpAddress(std::forward<IpAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the node is managed by Systems Manager.</p>
     */
    inline ManagedStatus GetManagedStatus() const { return m_managedStatus; }
    inline bool ManagedStatusHasBeenSet() const { return m_managedStatusHasBeenSet; }
    inline void SetManagedStatus(ManagedStatus value) { m_managedStatusHasBeenSet = true; m_managedStatus = value; }
    inline InstanceInfo& WithManagedStatus(ManagedStatus value) { SetManagedStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operating system platform type of the managed node.</p>
     */
    inline PlatformType GetPlatformType() const { return m_platformType; }
    inline bool PlatformTypeHasBeenSet() const { return m_platformTypeHasBeenSet; }
    inline void SetPlatformType(PlatformType value) { m_platformTypeHasBeenSet = true; m_platformType = value; }
    inline InstanceInfo& WithPlatformType(PlatformType value) { SetPlatformType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the operating system platform running on your managed node.</p>
     */
    inline const Aws::String& GetPlatformName() const { return m_platformName; }
    inline bool PlatformNameHasBeenSet() const { return m_platformNameHasBeenSet; }
    template<typename PlatformNameT = Aws::String>
    void SetPlatformName(PlatformNameT&& value) { m_platformNameHasBeenSet = true; m_platformName = std::forward<PlatformNameT>(value); }
    template<typename PlatformNameT = Aws::String>
    InstanceInfo& WithPlatformName(PlatformNameT&& value) { SetPlatformName(std::forward<PlatformNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the OS platform running on your managed node. </p>
     */
    inline const Aws::String& GetPlatformVersion() const { return m_platformVersion; }
    inline bool PlatformVersionHasBeenSet() const { return m_platformVersionHasBeenSet; }
    template<typename PlatformVersionT = Aws::String>
    void SetPlatformVersion(PlatformVersionT&& value) { m_platformVersionHasBeenSet = true; m_platformVersion = std::forward<PlatformVersionT>(value); }
    template<typename PlatformVersionT = Aws::String>
    InstanceInfo& WithPlatformVersion(PlatformVersionT&& value) { SetPlatformVersion(std::forward<PlatformVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of instance, either an EC2 instance or another supported machine
     * type in a hybrid fleet.</p>
     */
    inline ResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(ResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline InstanceInfo& WithResourceType(ResourceType value) { SetResourceType(value); return *this;}
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

    ManagedStatus m_managedStatus{ManagedStatus::NOT_SET};
    bool m_managedStatusHasBeenSet = false;

    PlatformType m_platformType{PlatformType::NOT_SET};
    bool m_platformTypeHasBeenSet = false;

    Aws::String m_platformName;
    bool m_platformNameHasBeenSet = false;

    Aws::String m_platformVersion;
    bool m_platformVersionHasBeenSet = false;

    ResourceType m_resourceType{ResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
