/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sms/model/ServerType.h>
#include <aws/sms/model/VmServer.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sms/model/LicenseType.h>
#include <aws/sms/model/ReplicationJobState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sms/model/ReplicationRun.h>
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
namespace SMS
{
namespace Model
{

  /**
   * <p>Represents a replication job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/ReplicationJob">AWS
   * API Reference</a></p>
   */
  class ReplicationJob
  {
  public:
    AWS_SMS_API ReplicationJob() = default;
    AWS_SMS_API ReplicationJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API ReplicationJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the replication job.</p>
     */
    inline const Aws::String& GetReplicationJobId() const { return m_replicationJobId; }
    inline bool ReplicationJobIdHasBeenSet() const { return m_replicationJobIdHasBeenSet; }
    template<typename ReplicationJobIdT = Aws::String>
    void SetReplicationJobId(ReplicationJobIdT&& value) { m_replicationJobIdHasBeenSet = true; m_replicationJobId = std::forward<ReplicationJobIdT>(value); }
    template<typename ReplicationJobIdT = Aws::String>
    ReplicationJob& WithReplicationJobId(ReplicationJobIdT&& value) { SetReplicationJobId(std::forward<ReplicationJobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the server.</p>
     */
    inline const Aws::String& GetServerId() const { return m_serverId; }
    inline bool ServerIdHasBeenSet() const { return m_serverIdHasBeenSet; }
    template<typename ServerIdT = Aws::String>
    void SetServerId(ServerIdT&& value) { m_serverIdHasBeenSet = true; m_serverId = std::forward<ServerIdT>(value); }
    template<typename ServerIdT = Aws::String>
    ReplicationJob& WithServerId(ServerIdT&& value) { SetServerId(std::forward<ServerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of server.</p>
     */
    inline ServerType GetServerType() const { return m_serverType; }
    inline bool ServerTypeHasBeenSet() const { return m_serverTypeHasBeenSet; }
    inline void SetServerType(ServerType value) { m_serverTypeHasBeenSet = true; m_serverType = value; }
    inline ReplicationJob& WithServerType(ServerType value) { SetServerType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the VM server.</p>
     */
    inline const VmServer& GetVmServer() const { return m_vmServer; }
    inline bool VmServerHasBeenSet() const { return m_vmServerHasBeenSet; }
    template<typename VmServerT = VmServer>
    void SetVmServer(VmServerT&& value) { m_vmServerHasBeenSet = true; m_vmServer = std::forward<VmServerT>(value); }
    template<typename VmServerT = VmServer>
    ReplicationJob& WithVmServer(VmServerT&& value) { SetVmServer(std::forward<VmServerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The seed replication time.</p>
     */
    inline const Aws::Utils::DateTime& GetSeedReplicationTime() const { return m_seedReplicationTime; }
    inline bool SeedReplicationTimeHasBeenSet() const { return m_seedReplicationTimeHasBeenSet; }
    template<typename SeedReplicationTimeT = Aws::Utils::DateTime>
    void SetSeedReplicationTime(SeedReplicationTimeT&& value) { m_seedReplicationTimeHasBeenSet = true; m_seedReplicationTime = std::forward<SeedReplicationTimeT>(value); }
    template<typename SeedReplicationTimeT = Aws::Utils::DateTime>
    ReplicationJob& WithSeedReplicationTime(SeedReplicationTimeT&& value) { SetSeedReplicationTime(std::forward<SeedReplicationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time between consecutive replication runs, in hours.</p>
     */
    inline int GetFrequency() const { return m_frequency; }
    inline bool FrequencyHasBeenSet() const { return m_frequencyHasBeenSet; }
    inline void SetFrequency(int value) { m_frequencyHasBeenSet = true; m_frequency = value; }
    inline ReplicationJob& WithFrequency(int value) { SetFrequency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to run the replication job one time.</p>
     */
    inline bool GetRunOnce() const { return m_runOnce; }
    inline bool RunOnceHasBeenSet() const { return m_runOnceHasBeenSet; }
    inline void SetRunOnce(bool value) { m_runOnceHasBeenSet = true; m_runOnce = value; }
    inline ReplicationJob& WithRunOnce(bool value) { SetRunOnce(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time of the next replication run.</p>
     */
    inline const Aws::Utils::DateTime& GetNextReplicationRunStartTime() const { return m_nextReplicationRunStartTime; }
    inline bool NextReplicationRunStartTimeHasBeenSet() const { return m_nextReplicationRunStartTimeHasBeenSet; }
    template<typename NextReplicationRunStartTimeT = Aws::Utils::DateTime>
    void SetNextReplicationRunStartTime(NextReplicationRunStartTimeT&& value) { m_nextReplicationRunStartTimeHasBeenSet = true; m_nextReplicationRunStartTime = std::forward<NextReplicationRunStartTimeT>(value); }
    template<typename NextReplicationRunStartTimeT = Aws::Utils::DateTime>
    ReplicationJob& WithNextReplicationRunStartTime(NextReplicationRunStartTimeT&& value) { SetNextReplicationRunStartTime(std::forward<NextReplicationRunStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The license type to be used for the AMI created by a successful replication
     * run.</p>
     */
    inline LicenseType GetLicenseType() const { return m_licenseType; }
    inline bool LicenseTypeHasBeenSet() const { return m_licenseTypeHasBeenSet; }
    inline void SetLicenseType(LicenseType value) { m_licenseTypeHasBeenSet = true; m_licenseType = value; }
    inline ReplicationJob& WithLicenseType(LicenseType value) { SetLicenseType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the IAM role to be used by Server Migration Service.</p>
     */
    inline const Aws::String& GetRoleName() const { return m_roleName; }
    inline bool RoleNameHasBeenSet() const { return m_roleNameHasBeenSet; }
    template<typename RoleNameT = Aws::String>
    void SetRoleName(RoleNameT&& value) { m_roleNameHasBeenSet = true; m_roleName = std::forward<RoleNameT>(value); }
    template<typename RoleNameT = Aws::String>
    ReplicationJob& WithRoleName(RoleNameT&& value) { SetRoleName(std::forward<RoleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the latest Amazon Machine Image (AMI).</p>
     */
    inline const Aws::String& GetLatestAmiId() const { return m_latestAmiId; }
    inline bool LatestAmiIdHasBeenSet() const { return m_latestAmiIdHasBeenSet; }
    template<typename LatestAmiIdT = Aws::String>
    void SetLatestAmiId(LatestAmiIdT&& value) { m_latestAmiIdHasBeenSet = true; m_latestAmiId = std::forward<LatestAmiIdT>(value); }
    template<typename LatestAmiIdT = Aws::String>
    ReplicationJob& WithLatestAmiId(LatestAmiIdT&& value) { SetLatestAmiId(std::forward<LatestAmiIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the replication job.</p>
     */
    inline ReplicationJobState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(ReplicationJobState value) { m_stateHasBeenSet = true; m_state = value; }
    inline ReplicationJob& WithState(ReplicationJobState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the current status of the replication job.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    ReplicationJob& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the replication job.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ReplicationJob& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of recent AMIs to keep in the customer's account for a replication
     * job. By default, the value is set to zero, meaning that all AMIs are kept.</p>
     */
    inline int GetNumberOfRecentAmisToKeep() const { return m_numberOfRecentAmisToKeep; }
    inline bool NumberOfRecentAmisToKeepHasBeenSet() const { return m_numberOfRecentAmisToKeepHasBeenSet; }
    inline void SetNumberOfRecentAmisToKeep(int value) { m_numberOfRecentAmisToKeepHasBeenSet = true; m_numberOfRecentAmisToKeep = value; }
    inline ReplicationJob& WithNumberOfRecentAmisToKeep(int value) { SetNumberOfRecentAmisToKeep(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the replication job should produce encrypted AMIs.</p>
     */
    inline bool GetEncrypted() const { return m_encrypted; }
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }
    inline ReplicationJob& WithEncrypted(bool value) { SetEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the KMS key for replication jobs that produce encrypted AMIs. This
     * value can be any of the following: </p> <ul> <li> <p>KMS key ID</p> </li> <li>
     * <p>KMS key alias</p> </li> <li> <p>ARN referring to the KMS key ID</p> </li>
     * <li> <p>ARN referring to the KMS key alias</p> </li> </ul> <p>If encrypted is
     * enabled but a KMS key ID is not specified, the customer's default KMS key for
     * Amazon EBS is used.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    ReplicationJob& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the replication runs.</p>
     */
    inline const Aws::Vector<ReplicationRun>& GetReplicationRunList() const { return m_replicationRunList; }
    inline bool ReplicationRunListHasBeenSet() const { return m_replicationRunListHasBeenSet; }
    template<typename ReplicationRunListT = Aws::Vector<ReplicationRun>>
    void SetReplicationRunList(ReplicationRunListT&& value) { m_replicationRunListHasBeenSet = true; m_replicationRunList = std::forward<ReplicationRunListT>(value); }
    template<typename ReplicationRunListT = Aws::Vector<ReplicationRun>>
    ReplicationJob& WithReplicationRunList(ReplicationRunListT&& value) { SetReplicationRunList(std::forward<ReplicationRunListT>(value)); return *this;}
    template<typename ReplicationRunListT = ReplicationRun>
    ReplicationJob& AddReplicationRunList(ReplicationRunListT&& value) { m_replicationRunListHasBeenSet = true; m_replicationRunList.emplace_back(std::forward<ReplicationRunListT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_replicationJobId;
    bool m_replicationJobIdHasBeenSet = false;

    Aws::String m_serverId;
    bool m_serverIdHasBeenSet = false;

    ServerType m_serverType{ServerType::NOT_SET};
    bool m_serverTypeHasBeenSet = false;

    VmServer m_vmServer;
    bool m_vmServerHasBeenSet = false;

    Aws::Utils::DateTime m_seedReplicationTime{};
    bool m_seedReplicationTimeHasBeenSet = false;

    int m_frequency{0};
    bool m_frequencyHasBeenSet = false;

    bool m_runOnce{false};
    bool m_runOnceHasBeenSet = false;

    Aws::Utils::DateTime m_nextReplicationRunStartTime{};
    bool m_nextReplicationRunStartTimeHasBeenSet = false;

    LicenseType m_licenseType{LicenseType::NOT_SET};
    bool m_licenseTypeHasBeenSet = false;

    Aws::String m_roleName;
    bool m_roleNameHasBeenSet = false;

    Aws::String m_latestAmiId;
    bool m_latestAmiIdHasBeenSet = false;

    ReplicationJobState m_state{ReplicationJobState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_numberOfRecentAmisToKeep{0};
    bool m_numberOfRecentAmisToKeepHasBeenSet = false;

    bool m_encrypted{false};
    bool m_encryptedHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::Vector<ReplicationRun> m_replicationRunList;
    bool m_replicationRunListHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
