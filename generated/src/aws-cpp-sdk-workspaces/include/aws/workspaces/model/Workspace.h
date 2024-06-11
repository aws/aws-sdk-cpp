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
    AWS_WORKSPACES_API Workspace();
    AWS_WORKSPACES_API Workspace(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Workspace& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the WorkSpace.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = value; }
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::move(value); }
    inline void SetWorkspaceId(const char* value) { m_workspaceIdHasBeenSet = true; m_workspaceId.assign(value); }
    inline Workspace& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}
    inline Workspace& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}
    inline Workspace& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Directory Service directory for the WorkSpace.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }
    inline Workspace& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}
    inline Workspace& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}
    inline Workspace& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user for the WorkSpace.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }
    inline Workspace& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}
    inline Workspace& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}
    inline Workspace& WithUserName(const char* value) { SetUserName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address of the WorkSpace.</p>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::move(value); }
    inline void SetIpAddress(const char* value) { m_ipAddressHasBeenSet = true; m_ipAddress.assign(value); }
    inline Workspace& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}
    inline Workspace& WithIpAddress(Aws::String&& value) { SetIpAddress(std::move(value)); return *this;}
    inline Workspace& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}
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
    inline const WorkspaceState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const WorkspaceState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(WorkspaceState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline Workspace& WithState(const WorkspaceState& value) { SetState(value); return *this;}
    inline Workspace& WithState(WorkspaceState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the bundle used to create the WorkSpace.</p>
     */
    inline const Aws::String& GetBundleId() const{ return m_bundleId; }
    inline bool BundleIdHasBeenSet() const { return m_bundleIdHasBeenSet; }
    inline void SetBundleId(const Aws::String& value) { m_bundleIdHasBeenSet = true; m_bundleId = value; }
    inline void SetBundleId(Aws::String&& value) { m_bundleIdHasBeenSet = true; m_bundleId = std::move(value); }
    inline void SetBundleId(const char* value) { m_bundleIdHasBeenSet = true; m_bundleId.assign(value); }
    inline Workspace& WithBundleId(const Aws::String& value) { SetBundleId(value); return *this;}
    inline Workspace& WithBundleId(Aws::String&& value) { SetBundleId(std::move(value)); return *this;}
    inline Workspace& WithBundleId(const char* value) { SetBundleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the subnet for the WorkSpace.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }
    inline Workspace& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}
    inline Workspace& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}
    inline Workspace& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text of the error message that is returned if the WorkSpace cannot be
     * created.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }
    inline Workspace& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline Workspace& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline Workspace& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error code that is returned if the WorkSpace cannot be created.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }
    inline Workspace& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}
    inline Workspace& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}
    inline Workspace& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the WorkSpace, as seen by the operating system. The format of
     * this name varies. For more information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/launch-workspaces-tutorials.html">
     * Launch a WorkSpace</a>. </p>
     */
    inline const Aws::String& GetComputerName() const{ return m_computerName; }
    inline bool ComputerNameHasBeenSet() const { return m_computerNameHasBeenSet; }
    inline void SetComputerName(const Aws::String& value) { m_computerNameHasBeenSet = true; m_computerName = value; }
    inline void SetComputerName(Aws::String&& value) { m_computerNameHasBeenSet = true; m_computerName = std::move(value); }
    inline void SetComputerName(const char* value) { m_computerNameHasBeenSet = true; m_computerName.assign(value); }
    inline Workspace& WithComputerName(const Aws::String& value) { SetComputerName(value); return *this;}
    inline Workspace& WithComputerName(Aws::String&& value) { SetComputerName(std::move(value)); return *this;}
    inline Workspace& WithComputerName(const char* value) { SetComputerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the symmetric KMS key used to encrypt data stored on your
     * WorkSpace. Amazon WorkSpaces does not support asymmetric KMS keys.</p>
     */
    inline const Aws::String& GetVolumeEncryptionKey() const{ return m_volumeEncryptionKey; }
    inline bool VolumeEncryptionKeyHasBeenSet() const { return m_volumeEncryptionKeyHasBeenSet; }
    inline void SetVolumeEncryptionKey(const Aws::String& value) { m_volumeEncryptionKeyHasBeenSet = true; m_volumeEncryptionKey = value; }
    inline void SetVolumeEncryptionKey(Aws::String&& value) { m_volumeEncryptionKeyHasBeenSet = true; m_volumeEncryptionKey = std::move(value); }
    inline void SetVolumeEncryptionKey(const char* value) { m_volumeEncryptionKeyHasBeenSet = true; m_volumeEncryptionKey.assign(value); }
    inline Workspace& WithVolumeEncryptionKey(const Aws::String& value) { SetVolumeEncryptionKey(value); return *this;}
    inline Workspace& WithVolumeEncryptionKey(Aws::String&& value) { SetVolumeEncryptionKey(std::move(value)); return *this;}
    inline Workspace& WithVolumeEncryptionKey(const char* value) { SetVolumeEncryptionKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the data stored on the user volume is encrypted.</p>
     */
    inline bool GetUserVolumeEncryptionEnabled() const{ return m_userVolumeEncryptionEnabled; }
    inline bool UserVolumeEncryptionEnabledHasBeenSet() const { return m_userVolumeEncryptionEnabledHasBeenSet; }
    inline void SetUserVolumeEncryptionEnabled(bool value) { m_userVolumeEncryptionEnabledHasBeenSet = true; m_userVolumeEncryptionEnabled = value; }
    inline Workspace& WithUserVolumeEncryptionEnabled(bool value) { SetUserVolumeEncryptionEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the data stored on the root volume is encrypted.</p>
     */
    inline bool GetRootVolumeEncryptionEnabled() const{ return m_rootVolumeEncryptionEnabled; }
    inline bool RootVolumeEncryptionEnabledHasBeenSet() const { return m_rootVolumeEncryptionEnabledHasBeenSet; }
    inline void SetRootVolumeEncryptionEnabled(bool value) { m_rootVolumeEncryptionEnabledHasBeenSet = true; m_rootVolumeEncryptionEnabled = value; }
    inline Workspace& WithRootVolumeEncryptionEnabled(bool value) { SetRootVolumeEncryptionEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the user-decoupled WorkSpace.</p>
     */
    inline const Aws::String& GetWorkspaceName() const{ return m_workspaceName; }
    inline bool WorkspaceNameHasBeenSet() const { return m_workspaceNameHasBeenSet; }
    inline void SetWorkspaceName(const Aws::String& value) { m_workspaceNameHasBeenSet = true; m_workspaceName = value; }
    inline void SetWorkspaceName(Aws::String&& value) { m_workspaceNameHasBeenSet = true; m_workspaceName = std::move(value); }
    inline void SetWorkspaceName(const char* value) { m_workspaceNameHasBeenSet = true; m_workspaceName.assign(value); }
    inline Workspace& WithWorkspaceName(const Aws::String& value) { SetWorkspaceName(value); return *this;}
    inline Workspace& WithWorkspaceName(Aws::String&& value) { SetWorkspaceName(std::move(value)); return *this;}
    inline Workspace& WithWorkspaceName(const char* value) { SetWorkspaceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties of the WorkSpace.</p>
     */
    inline const WorkspaceProperties& GetWorkspaceProperties() const{ return m_workspaceProperties; }
    inline bool WorkspacePropertiesHasBeenSet() const { return m_workspacePropertiesHasBeenSet; }
    inline void SetWorkspaceProperties(const WorkspaceProperties& value) { m_workspacePropertiesHasBeenSet = true; m_workspaceProperties = value; }
    inline void SetWorkspaceProperties(WorkspaceProperties&& value) { m_workspacePropertiesHasBeenSet = true; m_workspaceProperties = std::move(value); }
    inline Workspace& WithWorkspaceProperties(const WorkspaceProperties& value) { SetWorkspaceProperties(value); return *this;}
    inline Workspace& WithWorkspaceProperties(WorkspaceProperties&& value) { SetWorkspaceProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The modification states of the WorkSpace.</p>
     */
    inline const Aws::Vector<ModificationState>& GetModificationStates() const{ return m_modificationStates; }
    inline bool ModificationStatesHasBeenSet() const { return m_modificationStatesHasBeenSet; }
    inline void SetModificationStates(const Aws::Vector<ModificationState>& value) { m_modificationStatesHasBeenSet = true; m_modificationStates = value; }
    inline void SetModificationStates(Aws::Vector<ModificationState>&& value) { m_modificationStatesHasBeenSet = true; m_modificationStates = std::move(value); }
    inline Workspace& WithModificationStates(const Aws::Vector<ModificationState>& value) { SetModificationStates(value); return *this;}
    inline Workspace& WithModificationStates(Aws::Vector<ModificationState>&& value) { SetModificationStates(std::move(value)); return *this;}
    inline Workspace& AddModificationStates(const ModificationState& value) { m_modificationStatesHasBeenSet = true; m_modificationStates.push_back(value); return *this; }
    inline Workspace& AddModificationStates(ModificationState&& value) { m_modificationStatesHasBeenSet = true; m_modificationStates.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The standby WorkSpace or primary WorkSpace related to the specified
     * WorkSpace.</p>
     */
    inline const Aws::Vector<RelatedWorkspaceProperties>& GetRelatedWorkspaces() const{ return m_relatedWorkspaces; }
    inline bool RelatedWorkspacesHasBeenSet() const { return m_relatedWorkspacesHasBeenSet; }
    inline void SetRelatedWorkspaces(const Aws::Vector<RelatedWorkspaceProperties>& value) { m_relatedWorkspacesHasBeenSet = true; m_relatedWorkspaces = value; }
    inline void SetRelatedWorkspaces(Aws::Vector<RelatedWorkspaceProperties>&& value) { m_relatedWorkspacesHasBeenSet = true; m_relatedWorkspaces = std::move(value); }
    inline Workspace& WithRelatedWorkspaces(const Aws::Vector<RelatedWorkspaceProperties>& value) { SetRelatedWorkspaces(value); return *this;}
    inline Workspace& WithRelatedWorkspaces(Aws::Vector<RelatedWorkspaceProperties>&& value) { SetRelatedWorkspaces(std::move(value)); return *this;}
    inline Workspace& AddRelatedWorkspaces(const RelatedWorkspaceProperties& value) { m_relatedWorkspacesHasBeenSet = true; m_relatedWorkspaces.push_back(value); return *this; }
    inline Workspace& AddRelatedWorkspaces(RelatedWorkspaceProperties&& value) { m_relatedWorkspacesHasBeenSet = true; m_relatedWorkspaces.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates the settings of the data replication.</p>
     */
    inline const DataReplicationSettings& GetDataReplicationSettings() const{ return m_dataReplicationSettings; }
    inline bool DataReplicationSettingsHasBeenSet() const { return m_dataReplicationSettingsHasBeenSet; }
    inline void SetDataReplicationSettings(const DataReplicationSettings& value) { m_dataReplicationSettingsHasBeenSet = true; m_dataReplicationSettings = value; }
    inline void SetDataReplicationSettings(DataReplicationSettings&& value) { m_dataReplicationSettingsHasBeenSet = true; m_dataReplicationSettings = std::move(value); }
    inline Workspace& WithDataReplicationSettings(const DataReplicationSettings& value) { SetDataReplicationSettings(value); return *this;}
    inline Workspace& WithDataReplicationSettings(DataReplicationSettings&& value) { SetDataReplicationSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties of the standby WorkSpace</p>
     */
    inline const Aws::Vector<StandbyWorkspacesProperties>& GetStandbyWorkspacesProperties() const{ return m_standbyWorkspacesProperties; }
    inline bool StandbyWorkspacesPropertiesHasBeenSet() const { return m_standbyWorkspacesPropertiesHasBeenSet; }
    inline void SetStandbyWorkspacesProperties(const Aws::Vector<StandbyWorkspacesProperties>& value) { m_standbyWorkspacesPropertiesHasBeenSet = true; m_standbyWorkspacesProperties = value; }
    inline void SetStandbyWorkspacesProperties(Aws::Vector<StandbyWorkspacesProperties>&& value) { m_standbyWorkspacesPropertiesHasBeenSet = true; m_standbyWorkspacesProperties = std::move(value); }
    inline Workspace& WithStandbyWorkspacesProperties(const Aws::Vector<StandbyWorkspacesProperties>& value) { SetStandbyWorkspacesProperties(value); return *this;}
    inline Workspace& WithStandbyWorkspacesProperties(Aws::Vector<StandbyWorkspacesProperties>&& value) { SetStandbyWorkspacesProperties(std::move(value)); return *this;}
    inline Workspace& AddStandbyWorkspacesProperties(const StandbyWorkspacesProperties& value) { m_standbyWorkspacesPropertiesHasBeenSet = true; m_standbyWorkspacesProperties.push_back(value); return *this; }
    inline Workspace& AddStandbyWorkspacesProperties(StandbyWorkspacesProperties&& value) { m_standbyWorkspacesPropertiesHasBeenSet = true; m_standbyWorkspacesProperties.push_back(std::move(value)); return *this; }
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

    WorkspaceState m_state;
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

    bool m_userVolumeEncryptionEnabled;
    bool m_userVolumeEncryptionEnabledHasBeenSet = false;

    bool m_rootVolumeEncryptionEnabled;
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
