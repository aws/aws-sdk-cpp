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
    AWS_SMS_API ReplicationJob();
    AWS_SMS_API ReplicationJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API ReplicationJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the replication job.</p>
     */
    inline const Aws::String& GetReplicationJobId() const{ return m_replicationJobId; }
    inline bool ReplicationJobIdHasBeenSet() const { return m_replicationJobIdHasBeenSet; }
    inline void SetReplicationJobId(const Aws::String& value) { m_replicationJobIdHasBeenSet = true; m_replicationJobId = value; }
    inline void SetReplicationJobId(Aws::String&& value) { m_replicationJobIdHasBeenSet = true; m_replicationJobId = std::move(value); }
    inline void SetReplicationJobId(const char* value) { m_replicationJobIdHasBeenSet = true; m_replicationJobId.assign(value); }
    inline ReplicationJob& WithReplicationJobId(const Aws::String& value) { SetReplicationJobId(value); return *this;}
    inline ReplicationJob& WithReplicationJobId(Aws::String&& value) { SetReplicationJobId(std::move(value)); return *this;}
    inline ReplicationJob& WithReplicationJobId(const char* value) { SetReplicationJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the server.</p>
     */
    inline const Aws::String& GetServerId() const{ return m_serverId; }
    inline bool ServerIdHasBeenSet() const { return m_serverIdHasBeenSet; }
    inline void SetServerId(const Aws::String& value) { m_serverIdHasBeenSet = true; m_serverId = value; }
    inline void SetServerId(Aws::String&& value) { m_serverIdHasBeenSet = true; m_serverId = std::move(value); }
    inline void SetServerId(const char* value) { m_serverIdHasBeenSet = true; m_serverId.assign(value); }
    inline ReplicationJob& WithServerId(const Aws::String& value) { SetServerId(value); return *this;}
    inline ReplicationJob& WithServerId(Aws::String&& value) { SetServerId(std::move(value)); return *this;}
    inline ReplicationJob& WithServerId(const char* value) { SetServerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of server.</p>
     */
    inline const ServerType& GetServerType() const{ return m_serverType; }
    inline bool ServerTypeHasBeenSet() const { return m_serverTypeHasBeenSet; }
    inline void SetServerType(const ServerType& value) { m_serverTypeHasBeenSet = true; m_serverType = value; }
    inline void SetServerType(ServerType&& value) { m_serverTypeHasBeenSet = true; m_serverType = std::move(value); }
    inline ReplicationJob& WithServerType(const ServerType& value) { SetServerType(value); return *this;}
    inline ReplicationJob& WithServerType(ServerType&& value) { SetServerType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the VM server.</p>
     */
    inline const VmServer& GetVmServer() const{ return m_vmServer; }
    inline bool VmServerHasBeenSet() const { return m_vmServerHasBeenSet; }
    inline void SetVmServer(const VmServer& value) { m_vmServerHasBeenSet = true; m_vmServer = value; }
    inline void SetVmServer(VmServer&& value) { m_vmServerHasBeenSet = true; m_vmServer = std::move(value); }
    inline ReplicationJob& WithVmServer(const VmServer& value) { SetVmServer(value); return *this;}
    inline ReplicationJob& WithVmServer(VmServer&& value) { SetVmServer(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The seed replication time.</p>
     */
    inline const Aws::Utils::DateTime& GetSeedReplicationTime() const{ return m_seedReplicationTime; }
    inline bool SeedReplicationTimeHasBeenSet() const { return m_seedReplicationTimeHasBeenSet; }
    inline void SetSeedReplicationTime(const Aws::Utils::DateTime& value) { m_seedReplicationTimeHasBeenSet = true; m_seedReplicationTime = value; }
    inline void SetSeedReplicationTime(Aws::Utils::DateTime&& value) { m_seedReplicationTimeHasBeenSet = true; m_seedReplicationTime = std::move(value); }
    inline ReplicationJob& WithSeedReplicationTime(const Aws::Utils::DateTime& value) { SetSeedReplicationTime(value); return *this;}
    inline ReplicationJob& WithSeedReplicationTime(Aws::Utils::DateTime&& value) { SetSeedReplicationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time between consecutive replication runs, in hours.</p>
     */
    inline int GetFrequency() const{ return m_frequency; }
    inline bool FrequencyHasBeenSet() const { return m_frequencyHasBeenSet; }
    inline void SetFrequency(int value) { m_frequencyHasBeenSet = true; m_frequency = value; }
    inline ReplicationJob& WithFrequency(int value) { SetFrequency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to run the replication job one time.</p>
     */
    inline bool GetRunOnce() const{ return m_runOnce; }
    inline bool RunOnceHasBeenSet() const { return m_runOnceHasBeenSet; }
    inline void SetRunOnce(bool value) { m_runOnceHasBeenSet = true; m_runOnce = value; }
    inline ReplicationJob& WithRunOnce(bool value) { SetRunOnce(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time of the next replication run.</p>
     */
    inline const Aws::Utils::DateTime& GetNextReplicationRunStartTime() const{ return m_nextReplicationRunStartTime; }
    inline bool NextReplicationRunStartTimeHasBeenSet() const { return m_nextReplicationRunStartTimeHasBeenSet; }
    inline void SetNextReplicationRunStartTime(const Aws::Utils::DateTime& value) { m_nextReplicationRunStartTimeHasBeenSet = true; m_nextReplicationRunStartTime = value; }
    inline void SetNextReplicationRunStartTime(Aws::Utils::DateTime&& value) { m_nextReplicationRunStartTimeHasBeenSet = true; m_nextReplicationRunStartTime = std::move(value); }
    inline ReplicationJob& WithNextReplicationRunStartTime(const Aws::Utils::DateTime& value) { SetNextReplicationRunStartTime(value); return *this;}
    inline ReplicationJob& WithNextReplicationRunStartTime(Aws::Utils::DateTime&& value) { SetNextReplicationRunStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The license type to be used for the AMI created by a successful replication
     * run.</p>
     */
    inline const LicenseType& GetLicenseType() const{ return m_licenseType; }
    inline bool LicenseTypeHasBeenSet() const { return m_licenseTypeHasBeenSet; }
    inline void SetLicenseType(const LicenseType& value) { m_licenseTypeHasBeenSet = true; m_licenseType = value; }
    inline void SetLicenseType(LicenseType&& value) { m_licenseTypeHasBeenSet = true; m_licenseType = std::move(value); }
    inline ReplicationJob& WithLicenseType(const LicenseType& value) { SetLicenseType(value); return *this;}
    inline ReplicationJob& WithLicenseType(LicenseType&& value) { SetLicenseType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the IAM role to be used by Server Migration Service.</p>
     */
    inline const Aws::String& GetRoleName() const{ return m_roleName; }
    inline bool RoleNameHasBeenSet() const { return m_roleNameHasBeenSet; }
    inline void SetRoleName(const Aws::String& value) { m_roleNameHasBeenSet = true; m_roleName = value; }
    inline void SetRoleName(Aws::String&& value) { m_roleNameHasBeenSet = true; m_roleName = std::move(value); }
    inline void SetRoleName(const char* value) { m_roleNameHasBeenSet = true; m_roleName.assign(value); }
    inline ReplicationJob& WithRoleName(const Aws::String& value) { SetRoleName(value); return *this;}
    inline ReplicationJob& WithRoleName(Aws::String&& value) { SetRoleName(std::move(value)); return *this;}
    inline ReplicationJob& WithRoleName(const char* value) { SetRoleName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the latest Amazon Machine Image (AMI).</p>
     */
    inline const Aws::String& GetLatestAmiId() const{ return m_latestAmiId; }
    inline bool LatestAmiIdHasBeenSet() const { return m_latestAmiIdHasBeenSet; }
    inline void SetLatestAmiId(const Aws::String& value) { m_latestAmiIdHasBeenSet = true; m_latestAmiId = value; }
    inline void SetLatestAmiId(Aws::String&& value) { m_latestAmiIdHasBeenSet = true; m_latestAmiId = std::move(value); }
    inline void SetLatestAmiId(const char* value) { m_latestAmiIdHasBeenSet = true; m_latestAmiId.assign(value); }
    inline ReplicationJob& WithLatestAmiId(const Aws::String& value) { SetLatestAmiId(value); return *this;}
    inline ReplicationJob& WithLatestAmiId(Aws::String&& value) { SetLatestAmiId(std::move(value)); return *this;}
    inline ReplicationJob& WithLatestAmiId(const char* value) { SetLatestAmiId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the replication job.</p>
     */
    inline const ReplicationJobState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const ReplicationJobState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(ReplicationJobState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline ReplicationJob& WithState(const ReplicationJobState& value) { SetState(value); return *this;}
    inline ReplicationJob& WithState(ReplicationJobState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the current status of the replication job.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline ReplicationJob& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline ReplicationJob& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline ReplicationJob& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the replication job.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ReplicationJob& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ReplicationJob& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ReplicationJob& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of recent AMIs to keep in the customer's account for a replication
     * job. By default, the value is set to zero, meaning that all AMIs are kept.</p>
     */
    inline int GetNumberOfRecentAmisToKeep() const{ return m_numberOfRecentAmisToKeep; }
    inline bool NumberOfRecentAmisToKeepHasBeenSet() const { return m_numberOfRecentAmisToKeepHasBeenSet; }
    inline void SetNumberOfRecentAmisToKeep(int value) { m_numberOfRecentAmisToKeepHasBeenSet = true; m_numberOfRecentAmisToKeep = value; }
    inline ReplicationJob& WithNumberOfRecentAmisToKeep(int value) { SetNumberOfRecentAmisToKeep(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the replication job should produce encrypted AMIs.</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }
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
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline ReplicationJob& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline ReplicationJob& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline ReplicationJob& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the replication runs.</p>
     */
    inline const Aws::Vector<ReplicationRun>& GetReplicationRunList() const{ return m_replicationRunList; }
    inline bool ReplicationRunListHasBeenSet() const { return m_replicationRunListHasBeenSet; }
    inline void SetReplicationRunList(const Aws::Vector<ReplicationRun>& value) { m_replicationRunListHasBeenSet = true; m_replicationRunList = value; }
    inline void SetReplicationRunList(Aws::Vector<ReplicationRun>&& value) { m_replicationRunListHasBeenSet = true; m_replicationRunList = std::move(value); }
    inline ReplicationJob& WithReplicationRunList(const Aws::Vector<ReplicationRun>& value) { SetReplicationRunList(value); return *this;}
    inline ReplicationJob& WithReplicationRunList(Aws::Vector<ReplicationRun>&& value) { SetReplicationRunList(std::move(value)); return *this;}
    inline ReplicationJob& AddReplicationRunList(const ReplicationRun& value) { m_replicationRunListHasBeenSet = true; m_replicationRunList.push_back(value); return *this; }
    inline ReplicationJob& AddReplicationRunList(ReplicationRun&& value) { m_replicationRunListHasBeenSet = true; m_replicationRunList.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_replicationJobId;
    bool m_replicationJobIdHasBeenSet = false;

    Aws::String m_serverId;
    bool m_serverIdHasBeenSet = false;

    ServerType m_serverType;
    bool m_serverTypeHasBeenSet = false;

    VmServer m_vmServer;
    bool m_vmServerHasBeenSet = false;

    Aws::Utils::DateTime m_seedReplicationTime;
    bool m_seedReplicationTimeHasBeenSet = false;

    int m_frequency;
    bool m_frequencyHasBeenSet = false;

    bool m_runOnce;
    bool m_runOnceHasBeenSet = false;

    Aws::Utils::DateTime m_nextReplicationRunStartTime;
    bool m_nextReplicationRunStartTimeHasBeenSet = false;

    LicenseType m_licenseType;
    bool m_licenseTypeHasBeenSet = false;

    Aws::String m_roleName;
    bool m_roleNameHasBeenSet = false;

    Aws::String m_latestAmiId;
    bool m_latestAmiIdHasBeenSet = false;

    ReplicationJobState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_numberOfRecentAmisToKeep;
    bool m_numberOfRecentAmisToKeepHasBeenSet = false;

    bool m_encrypted;
    bool m_encryptedHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::Vector<ReplicationRun> m_replicationRunList;
    bool m_replicationRunListHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
