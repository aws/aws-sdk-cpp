/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/OpsWorksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opsworks/model/AutoScalingType.h>
#include <aws/opsworks/model/Architecture.h>
#include <utility>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class UpdateInstanceRequest : public OpsWorksRequest
  {
  public:
    AWS_OPSWORKS_API UpdateInstanceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateInstance"; }

    AWS_OPSWORKS_API Aws::String SerializePayload() const override;

    AWS_OPSWORKS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The instance ID.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    UpdateInstanceRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance's layer IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLayerIds() const { return m_layerIds; }
    inline bool LayerIdsHasBeenSet() const { return m_layerIdsHasBeenSet; }
    template<typename LayerIdsT = Aws::Vector<Aws::String>>
    void SetLayerIds(LayerIdsT&& value) { m_layerIdsHasBeenSet = true; m_layerIds = std::forward<LayerIdsT>(value); }
    template<typename LayerIdsT = Aws::Vector<Aws::String>>
    UpdateInstanceRequest& WithLayerIds(LayerIdsT&& value) { SetLayerIds(std::forward<LayerIdsT>(value)); return *this;}
    template<typename LayerIdsT = Aws::String>
    UpdateInstanceRequest& AddLayerIds(LayerIdsT&& value) { m_layerIdsHasBeenSet = true; m_layerIds.emplace_back(std::forward<LayerIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The instance type, such as <code>t2.micro</code>. For a list of supported
     * instance types, open the stack in the console, choose <b>Instances</b>, and
     * choose <b>+ Instance</b>. The <b>Size</b> list contains the currently supported
     * types. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * Families and Types</a>. The parameter values that you use to specify the various
     * types are in the <b>API Name</b> column of the <b>Available Instance Types</b>
     * table.</p>
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    UpdateInstanceRequest& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For load-based or time-based instances, the type. Windows stacks can use only
     * time-based instances.</p>
     */
    inline AutoScalingType GetAutoScalingType() const { return m_autoScalingType; }
    inline bool AutoScalingTypeHasBeenSet() const { return m_autoScalingTypeHasBeenSet; }
    inline void SetAutoScalingType(AutoScalingType value) { m_autoScalingTypeHasBeenSet = true; m_autoScalingType = value; }
    inline UpdateInstanceRequest& WithAutoScalingType(AutoScalingType value) { SetAutoScalingType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance host name. The following are character limits for instance host
     * names.</p> <ul> <li> <p>Linux-based instances: 63 characters</p> </li> <li>
     * <p>Windows-based instances: 15 characters</p> </li> </ul>
     */
    inline const Aws::String& GetHostname() const { return m_hostname; }
    inline bool HostnameHasBeenSet() const { return m_hostnameHasBeenSet; }
    template<typename HostnameT = Aws::String>
    void SetHostname(HostnameT&& value) { m_hostnameHasBeenSet = true; m_hostname = std::forward<HostnameT>(value); }
    template<typename HostnameT = Aws::String>
    UpdateInstanceRequest& WithHostname(HostnameT&& value) { SetHostname(std::forward<HostnameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance's operating system, which must be set to one of the following.
     * You cannot update an instance that is using a custom AMI.</p> <ul> <li> <p>A
     * supported Linux operating system: An Amazon Linux version, such as <code>Amazon
     * Linux 2</code>, <code>Amazon Linux 2018.03</code>, <code>Amazon Linux
     * 2017.09</code>, <code>Amazon Linux 2017.03</code>, <code>Amazon Linux
     * 2016.09</code>, <code>Amazon Linux 2016.03</code>, <code>Amazon Linux
     * 2015.09</code>, or <code>Amazon Linux 2015.03</code>.</p> </li> <li> <p>A
     * supported Ubuntu operating system, such as <code>Ubuntu 18.04 LTS</code>,
     * <code>Ubuntu 16.04 LTS</code>, <code>Ubuntu 14.04 LTS</code>, or <code>Ubuntu
     * 12.04 LTS</code>.</p> </li> <li> <p> <code>CentOS Linux 7</code> </p> </li> <li>
     * <p> <code>Red Hat Enterprise Linux 7</code> </p> </li> <li> <p>A supported
     * Windows operating system, such as <code>Microsoft Windows Server 2012 R2
     * Base</code>, <code>Microsoft Windows Server 2012 R2 with SQL Server
     * Express</code>, <code>Microsoft Windows Server 2012 R2 with SQL Server
     * Standard</code>, or <code>Microsoft Windows Server 2012 R2 with SQL Server
     * Web</code>.</p> </li> </ul> <p>Not all operating systems are supported with all
     * versions of Chef. For more information about supported operating systems, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-os.html">OpsWorks
     * Stacks Operating Systems</a>.</p> <p>The default option is the current Amazon
     * Linux version. If you set this parameter to <code>Custom</code>, you must use
     * the AmiId parameter to specify the custom AMI that you want to use. For more
     * information about how to use custom AMIs with OpsWorks, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-custom-ami.html">Using
     * Custom AMIs</a>.</p>  <p>You can specify a different Linux operating
     * system for the updated stack, but you cannot change from Linux to Windows or
     * Windows to Linux.</p> 
     */
    inline const Aws::String& GetOs() const { return m_os; }
    inline bool OsHasBeenSet() const { return m_osHasBeenSet; }
    template<typename OsT = Aws::String>
    void SetOs(OsT&& value) { m_osHasBeenSet = true; m_os = std::forward<OsT>(value); }
    template<typename OsT = Aws::String>
    UpdateInstanceRequest& WithOs(OsT&& value) { SetOs(std::forward<OsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the AMI that was used to create the instance. The value of this
     * parameter must be the same AMI ID that the instance is already using. You cannot
     * apply a new AMI to an instance by running UpdateInstance. UpdateInstance does
     * not work on instances that are using custom AMIs. </p>
     */
    inline const Aws::String& GetAmiId() const { return m_amiId; }
    inline bool AmiIdHasBeenSet() const { return m_amiIdHasBeenSet; }
    template<typename AmiIdT = Aws::String>
    void SetAmiId(AmiIdT&& value) { m_amiIdHasBeenSet = true; m_amiId = std::forward<AmiIdT>(value); }
    template<typename AmiIdT = Aws::String>
    UpdateInstanceRequest& WithAmiId(AmiIdT&& value) { SetAmiId(std::forward<AmiIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance's Amazon EC2 key name.</p>
     */
    inline const Aws::String& GetSshKeyName() const { return m_sshKeyName; }
    inline bool SshKeyNameHasBeenSet() const { return m_sshKeyNameHasBeenSet; }
    template<typename SshKeyNameT = Aws::String>
    void SetSshKeyName(SshKeyNameT&& value) { m_sshKeyNameHasBeenSet = true; m_sshKeyName = std::forward<SshKeyNameT>(value); }
    template<typename SshKeyNameT = Aws::String>
    UpdateInstanceRequest& WithSshKeyName(SshKeyNameT&& value) { SetSshKeyName(std::forward<SshKeyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance architecture. Instance types do not necessarily support both
     * architectures. For a list of the architectures that are supported by the
     * different instance types, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * Families and Types</a>.</p>
     */
    inline Architecture GetArchitecture() const { return m_architecture; }
    inline bool ArchitectureHasBeenSet() const { return m_architectureHasBeenSet; }
    inline void SetArchitecture(Architecture value) { m_architectureHasBeenSet = true; m_architecture = value; }
    inline UpdateInstanceRequest& WithArchitecture(Architecture value) { SetArchitecture(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to install operating system and package updates when the instance
     * boots. The default value is <code>true</code>. To control when updates are
     * installed, set this value to <code>false</code>. You must then update your
     * instances manually by using <a>CreateDeployment</a> to run the
     * <code>update_dependencies</code> stack command or by manually running
     * <code>yum</code> (Amazon Linux) or <code>apt-get</code> (Ubuntu) on the
     * instances. </p>  <p>We strongly recommend using the default value of
     * <code>true</code>, to ensure that your instances have the latest security
     * updates.</p> 
     */
    inline bool GetInstallUpdatesOnBoot() const { return m_installUpdatesOnBoot; }
    inline bool InstallUpdatesOnBootHasBeenSet() const { return m_installUpdatesOnBootHasBeenSet; }
    inline void SetInstallUpdatesOnBoot(bool value) { m_installUpdatesOnBootHasBeenSet = true; m_installUpdatesOnBoot = value; }
    inline UpdateInstanceRequest& WithInstallUpdatesOnBoot(bool value) { SetInstallUpdatesOnBoot(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This property cannot be updated.</p>
     */
    inline bool GetEbsOptimized() const { return m_ebsOptimized; }
    inline bool EbsOptimizedHasBeenSet() const { return m_ebsOptimizedHasBeenSet; }
    inline void SetEbsOptimized(bool value) { m_ebsOptimizedHasBeenSet = true; m_ebsOptimized = value; }
    inline UpdateInstanceRequest& WithEbsOptimized(bool value) { SetEbsOptimized(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default OpsWorks Stacks agent version. You have the following
     * options:</p> <ul> <li> <p> <code>INHERIT</code> - Use the stack's default agent
     * version setting.</p> </li> <li> <p> <i>version_number</i> - Use the specified
     * agent version. This value overrides the stack's default setting. To update the
     * agent version, you must edit the instance configuration and specify a new
     * version. OpsWorks Stacks installs that version on the instance.</p> </li> </ul>
     * <p>The default setting is <code>INHERIT</code>. To specify an agent version, you
     * must use the complete version number, not the abbreviated number shown on the
     * console. For a list of available agent version numbers, call
     * <a>DescribeAgentVersions</a>.</p> <p>AgentVersion cannot be set to Chef
     * 12.2.</p>
     */
    inline const Aws::String& GetAgentVersion() const { return m_agentVersion; }
    inline bool AgentVersionHasBeenSet() const { return m_agentVersionHasBeenSet; }
    template<typename AgentVersionT = Aws::String>
    void SetAgentVersion(AgentVersionT&& value) { m_agentVersionHasBeenSet = true; m_agentVersion = std::forward<AgentVersionT>(value); }
    template<typename AgentVersionT = Aws::String>
    UpdateInstanceRequest& WithAgentVersion(AgentVersionT&& value) { SetAgentVersion(std::forward<AgentVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_layerIds;
    bool m_layerIdsHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    AutoScalingType m_autoScalingType{AutoScalingType::NOT_SET};
    bool m_autoScalingTypeHasBeenSet = false;

    Aws::String m_hostname;
    bool m_hostnameHasBeenSet = false;

    Aws::String m_os;
    bool m_osHasBeenSet = false;

    Aws::String m_amiId;
    bool m_amiIdHasBeenSet = false;

    Aws::String m_sshKeyName;
    bool m_sshKeyNameHasBeenSet = false;

    Architecture m_architecture{Architecture::NOT_SET};
    bool m_architectureHasBeenSet = false;

    bool m_installUpdatesOnBoot{false};
    bool m_installUpdatesOnBootHasBeenSet = false;

    bool m_ebsOptimized{false};
    bool m_ebsOptimizedHasBeenSet = false;

    Aws::String m_agentVersion;
    bool m_agentVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
