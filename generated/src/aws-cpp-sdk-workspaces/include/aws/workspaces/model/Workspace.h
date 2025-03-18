/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/WorkspaceState.h>
#include <aws/workspaces/model/WorkspaceProperties.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces/model/DataReplicationSettings.h>
#include <aws/workspaces/model/ModificationState.h>
#include <aws/workspaces/model/RelatedWorkspaceProperties.h>
#include <aws/workspaces/model/StandbyWorkspacesProperties.h>
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
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Describes a WorkSpace.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/Workspace">AWS
   * API Reference</a></p>
   */
  class Workspace
  {
  public:
    AWS_WORKSPACES_API Workspace() = default;
    AWS_WORKSPACES_API Workspace(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Workspace& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the WorkSpace.</p>
     */
    inline const Aws::String& GetWorkspaceId() const { return m_workspaceId; }
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }
    template<typename WorkspaceIdT = Aws::String>
    void SetWorkspaceId(WorkspaceIdT&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::forward<WorkspaceIdT>(value); }
    template<typename WorkspaceIdT = Aws::String>
    Workspace& WithWorkspaceId(WorkspaceIdT&& value) { SetWorkspaceId(std::forward<WorkspaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Directory Service directory for the WorkSpace.</p>
     */
    inline const Aws::String& GetDirectoryId() const { return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    template<typename DirectoryIdT = Aws::String>
    void SetDirectoryId(DirectoryIdT&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::forward<DirectoryIdT>(value); }
    template<typename DirectoryIdT = Aws::String>
    Workspace& WithDirectoryId(DirectoryIdT&& value) { SetDirectoryId(std::forward<DirectoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user for the WorkSpace.</p>
     */
    inline const Aws::String& GetUserName() const { return m_userName; }
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }
    template<typename UserNameT = Aws::String>
    void SetUserName(UserNameT&& value) { m_userNameHasBeenSet = true; m_userName = std::forward<UserNameT>(value); }
    template<typename UserNameT = Aws::String>
    Workspace& WithUserName(UserNameT&& value) { SetUserName(std::forward<UserNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address of the WorkSpace.</p>
     */
    inline const Aws::String& GetIpAddress() const { return m_ipAddress; }
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }
    template<typename IpAddressT = Aws::String>
    void SetIpAddress(IpAddressT&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::forward<IpAddressT>(value); }
    template<typename IpAddressT = Aws::String>
    Workspace& WithIpAddress(IpAddressT&& value) { SetIpAddress(std::forward<IpAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operational state of the WorkSpace.</p> <ul> <li> <p>
     * <code>PENDING</code> – The WorkSpace is in a waiting state (for example, the
     * WorkSpace is being created).</p> </li> <li> <p> <code>AVAILABLE</code> – The
     * WorkSpace is running and has passed the health checks.</p> </li> <li> <p>
     * <code>IMPAIRED</code> – Refer to <code>UNHEALTHY</code> state.</p> </li> <li>
     * <p> <code>UNHEALTHY</code> – The WorkSpace is not responding to health
     * checks.</p> </li> <li> <p> <code>REBOOTING</code> – The WorkSpace is being
     * rebooted (restarted).</p> </li> <li> <p> <code>STARTING</code> – The WorkSpace
     * is starting up and health checks are being run.</p> </li> <li> <p>
     * <code>REBUILDING</code> – The WorkSpace is being rebuilt.</p> </li> <li> <p>
     * <code>RESTORING</code> – The WorkSpace is being restored.</p> </li> <li> <p>
     * <code>MAINTENANCE</code> – The WorkSpace is undergoing scheduled maintenance by
     * Amazon Web Services.</p> </li> <li> <p> <code>ADMIN_MAINTENANCE</code> – The
     * WorkSpace is undergoing maintenance by the WorkSpaces administrator.</p> </li>
     * <li> <p> <code>TERMINATING</code> – The WorkSpace is being deleted.</p> </li>
     * <li> <p> <code>TERMINATED</code> – The WorkSpace has been deleted.</p> </li>
     * <li> <p> <code>SUSPENDED</code> – The WorkSpace has been suspended for image
     * creation.</p> </li> <li> <p> <code>UPDATING</code> – The WorkSpace is undergoing
     * an update.</p> </li> <li> <p> <code>STOPPING</code> – The WorkSpace is being
     * stopped.</p> </li> <li> <p> <code>STOPPED</code> – The WorkSpace has been
     * stopped.</p> </li> <li> <p> <code>ERROR </code> – The WorkSpace is an error
     * state (for example, an error occurred during startup).</p> </li> </ul> 
     * <p>After a WorkSpace is terminated, the <code>TERMINATED</code> state is
     * returned only briefly before the WorkSpace directory metadata is cleaned up, so
     * this state is rarely returned. To confirm that a WorkSpace is terminated, check
     * for the WorkSpace ID by using <a
     * href="https://docs.aws.amazon.com/workspaces/latest/api/API_DescribeWorkspaces.html">
     * DescribeWorkSpaces</a>. If the WorkSpace ID isn't returned, then the WorkSpace
     * has been successfully terminated.</p> 
     */
    inline WorkspaceState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(WorkspaceState value) { m_stateHasBeenSet = true; m_state = value; }
    inline Workspace& WithState(WorkspaceState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the bundle used to create the WorkSpace.</p>
     */
    inline const Aws::String& GetBundleId() const { return m_bundleId; }
    inline bool BundleIdHasBeenSet() const { return m_bundleIdHasBeenSet; }
    template<typename BundleIdT = Aws::String>
    void SetBundleId(BundleIdT&& value) { m_bundleIdHasBeenSet = true; m_bundleId = std::forward<BundleIdT>(value); }
    template<typename BundleIdT = Aws::String>
    Workspace& WithBundleId(BundleIdT&& value) { SetBundleId(std::forward<BundleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the subnet for the WorkSpace.</p>
     */
    inline const Aws::String& GetSubnetId() const { return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    template<typename SubnetIdT = Aws::String>
    void SetSubnetId(SubnetIdT&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::forward<SubnetIdT>(value); }
    template<typename SubnetIdT = Aws::String>
    Workspace& WithSubnetId(SubnetIdT&& value) { SetSubnetId(std::forward<SubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text of the error message that is returned if the WorkSpace cannot be
     * created.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    Workspace& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error code that is returned if the WorkSpace cannot be created.</p>
     */
    inline const Aws::String& GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    template<typename ErrorCodeT = Aws::String>
    void SetErrorCode(ErrorCodeT&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::forward<ErrorCodeT>(value); }
    template<typename ErrorCodeT = Aws::String>
    Workspace& WithErrorCode(ErrorCodeT&& value) { SetErrorCode(std::forward<ErrorCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the WorkSpace, as seen by the operating system. The format of
     * this name varies. For more information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/launch-workspaces-tutorials.html">
     * Launch a WorkSpace</a>. </p>
     */
    inline const Aws::String& GetComputerName() const { return m_computerName; }
    inline bool ComputerNameHasBeenSet() const { return m_computerNameHasBeenSet; }
    template<typename ComputerNameT = Aws::String>
    void SetComputerName(ComputerNameT&& value) { m_computerNameHasBeenSet = true; m_computerName = std::forward<ComputerNameT>(value); }
    template<typename ComputerNameT = Aws::String>
    Workspace& WithComputerName(ComputerNameT&& value) { SetComputerName(std::forward<ComputerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the symmetric KMS key used to encrypt data stored on your
     * WorkSpace. Amazon WorkSpaces does not support asymmetric KMS keys.</p>
     */
    inline const Aws::String& GetVolumeEncryptionKey() const { return m_volumeEncryptionKey; }
    inline bool VolumeEncryptionKeyHasBeenSet() const { return m_volumeEncryptionKeyHasBeenSet; }
    template<typename VolumeEncryptionKeyT = Aws::String>
    void SetVolumeEncryptionKey(VolumeEncryptionKeyT&& value) { m_volumeEncryptionKeyHasBeenSet = true; m_volumeEncryptionKey = std::forward<VolumeEncryptionKeyT>(value); }
    template<typename VolumeEncryptionKeyT = Aws::String>
    Workspace& WithVolumeEncryptionKey(VolumeEncryptionKeyT&& value) { SetVolumeEncryptionKey(std::forward<VolumeEncryptionKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the data stored on the user volume is encrypted.</p>
     */
    inline bool GetUserVolumeEncryptionEnabled() const { return m_userVolumeEncryptionEnabled; }
    inline bool UserVolumeEncryptionEnabledHasBeenSet() const { return m_userVolumeEncryptionEnabledHasBeenSet; }
    inline void SetUserVolumeEncryptionEnabled(bool value) { m_userVolumeEncryptionEnabledHasBeenSet = true; m_userVolumeEncryptionEnabled = value; }
    inline Workspace& WithUserVolumeEncryptionEnabled(bool value) { SetUserVolumeEncryptionEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the data stored on the root volume is encrypted.</p>
     */
    inline bool GetRootVolumeEncryptionEnabled() const { return m_rootVolumeEncryptionEnabled; }
    inline bool RootVolumeEncryptionEnabledHasBeenSet() const { return m_rootVolumeEncryptionEnabledHasBeenSet; }
    inline void SetRootVolumeEncryptionEnabled(bool value) { m_rootVolumeEncryptionEnabledHasBeenSet = true; m_rootVolumeEncryptionEnabled = value; }
    inline Workspace& WithRootVolumeEncryptionEnabled(bool value) { SetRootVolumeEncryptionEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the user-decoupled WorkSpace.</p>
     */
    inline const Aws::String& GetWorkspaceName() const { return m_workspaceName; }
    inline bool WorkspaceNameHasBeenSet() const { return m_workspaceNameHasBeenSet; }
    template<typename WorkspaceNameT = Aws::String>
    void SetWorkspaceName(WorkspaceNameT&& value) { m_workspaceNameHasBeenSet = true; m_workspaceName = std::forward<WorkspaceNameT>(value); }
    template<typename WorkspaceNameT = Aws::String>
    Workspace& WithWorkspaceName(WorkspaceNameT&& value) { SetWorkspaceName(std::forward<WorkspaceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties of the WorkSpace.</p>
     */
    inline const WorkspaceProperties& GetWorkspaceProperties() const { return m_workspaceProperties; }
    inline bool WorkspacePropertiesHasBeenSet() const { return m_workspacePropertiesHasBeenSet; }
    template<typename WorkspacePropertiesT = WorkspaceProperties>
    void SetWorkspaceProperties(WorkspacePropertiesT&& value) { m_workspacePropertiesHasBeenSet = true; m_workspaceProperties = std::forward<WorkspacePropertiesT>(value); }
    template<typename WorkspacePropertiesT = WorkspaceProperties>
    Workspace& WithWorkspaceProperties(WorkspacePropertiesT&& value) { SetWorkspaceProperties(std::forward<WorkspacePropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The modification states of the WorkSpace.</p>
     */
    inline const Aws::Vector<ModificationState>& GetModificationStates() const { return m_modificationStates; }
    inline bool ModificationStatesHasBeenSet() const { return m_modificationStatesHasBeenSet; }
    template<typename ModificationStatesT = Aws::Vector<ModificationState>>
    void SetModificationStates(ModificationStatesT&& value) { m_modificationStatesHasBeenSet = true; m_modificationStates = std::forward<ModificationStatesT>(value); }
    template<typename ModificationStatesT = Aws::Vector<ModificationState>>
    Workspace& WithModificationStates(ModificationStatesT&& value) { SetModificationStates(std::forward<ModificationStatesT>(value)); return *this;}
    template<typename ModificationStatesT = ModificationState>
    Workspace& AddModificationStates(ModificationStatesT&& value) { m_modificationStatesHasBeenSet = true; m_modificationStates.emplace_back(std::forward<ModificationStatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The standby WorkSpace or primary WorkSpace related to the specified
     * WorkSpace.</p>
     */
    inline const Aws::Vector<RelatedWorkspaceProperties>& GetRelatedWorkspaces() const { return m_relatedWorkspaces; }
    inline bool RelatedWorkspacesHasBeenSet() const { return m_relatedWorkspacesHasBeenSet; }
    template<typename RelatedWorkspacesT = Aws::Vector<RelatedWorkspaceProperties>>
    void SetRelatedWorkspaces(RelatedWorkspacesT&& value) { m_relatedWorkspacesHasBeenSet = true; m_relatedWorkspaces = std::forward<RelatedWorkspacesT>(value); }
    template<typename RelatedWorkspacesT = Aws::Vector<RelatedWorkspaceProperties>>
    Workspace& WithRelatedWorkspaces(RelatedWorkspacesT&& value) { SetRelatedWorkspaces(std::forward<RelatedWorkspacesT>(value)); return *this;}
    template<typename RelatedWorkspacesT = RelatedWorkspaceProperties>
    Workspace& AddRelatedWorkspaces(RelatedWorkspacesT&& value) { m_relatedWorkspacesHasBeenSet = true; m_relatedWorkspaces.emplace_back(std::forward<RelatedWorkspacesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates the settings of the data replication.</p>
     */
    inline const DataReplicationSettings& GetDataReplicationSettings() const { return m_dataReplicationSettings; }
    inline bool DataReplicationSettingsHasBeenSet() const { return m_dataReplicationSettingsHasBeenSet; }
    template<typename DataReplicationSettingsT = DataReplicationSettings>
    void SetDataReplicationSettings(DataReplicationSettingsT&& value) { m_dataReplicationSettingsHasBeenSet = true; m_dataReplicationSettings = std::forward<DataReplicationSettingsT>(value); }
    template<typename DataReplicationSettingsT = DataReplicationSettings>
    Workspace& WithDataReplicationSettings(DataReplicationSettingsT&& value) { SetDataReplicationSettings(std::forward<DataReplicationSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties of the standby WorkSpace</p>
     */
    inline const Aws::Vector<StandbyWorkspacesProperties>& GetStandbyWorkspacesProperties() const { return m_standbyWorkspacesProperties; }
    inline bool StandbyWorkspacesPropertiesHasBeenSet() const { return m_standbyWorkspacesPropertiesHasBeenSet; }
    template<typename StandbyWorkspacesPropertiesT = Aws::Vector<StandbyWorkspacesProperties>>
    void SetStandbyWorkspacesProperties(StandbyWorkspacesPropertiesT&& value) { m_standbyWorkspacesPropertiesHasBeenSet = true; m_standbyWorkspacesProperties = std::forward<StandbyWorkspacesPropertiesT>(value); }
    template<typename StandbyWorkspacesPropertiesT = Aws::Vector<StandbyWorkspacesProperties>>
    Workspace& WithStandbyWorkspacesProperties(StandbyWorkspacesPropertiesT&& value) { SetStandbyWorkspacesProperties(std::forward<StandbyWorkspacesPropertiesT>(value)); return *this;}
    template<typename StandbyWorkspacesPropertiesT = StandbyWorkspacesProperties>
    Workspace& AddStandbyWorkspacesProperties(StandbyWorkspacesPropertiesT&& value) { m_standbyWorkspacesPropertiesHasBeenSet = true; m_standbyWorkspacesProperties.emplace_back(std::forward<StandbyWorkspacesPropertiesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;

    WorkspaceState m_state{WorkspaceState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_bundleId;
    bool m_bundleIdHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_computerName;
    bool m_computerNameHasBeenSet = false;

    Aws::String m_volumeEncryptionKey;
    bool m_volumeEncryptionKeyHasBeenSet = false;

    bool m_userVolumeEncryptionEnabled{false};
    bool m_userVolumeEncryptionEnabledHasBeenSet = false;

    bool m_rootVolumeEncryptionEnabled{false};
    bool m_rootVolumeEncryptionEnabledHasBeenSet = false;

    Aws::String m_workspaceName;
    bool m_workspaceNameHasBeenSet = false;

    WorkspaceProperties m_workspaceProperties;
    bool m_workspacePropertiesHasBeenSet = false;

    Aws::Vector<ModificationState> m_modificationStates;
    bool m_modificationStatesHasBeenSet = false;

    Aws::Vector<RelatedWorkspaceProperties> m_relatedWorkspaces;
    bool m_relatedWorkspacesHasBeenSet = false;

    DataReplicationSettings m_dataReplicationSettings;
    bool m_dataReplicationSettingsHasBeenSet = false;

    Aws::Vector<StandbyWorkspacesProperties> m_standbyWorkspacesProperties;
    bool m_standbyWorkspacesPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
