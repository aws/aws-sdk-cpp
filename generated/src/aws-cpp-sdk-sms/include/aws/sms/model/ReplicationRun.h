/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sms/model/ReplicationRunState.h>
#include <aws/sms/model/ReplicationRunType.h>
#include <aws/sms/model/ReplicationRunStageDetails.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Represents a replication run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/ReplicationRun">AWS
   * API Reference</a></p>
   */
  class ReplicationRun
  {
  public:
    AWS_SMS_API ReplicationRun() = default;
    AWS_SMS_API ReplicationRun(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API ReplicationRun& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the replication run.</p>
     */
    inline const Aws::String& GetReplicationRunId() const { return m_replicationRunId; }
    inline bool ReplicationRunIdHasBeenSet() const { return m_replicationRunIdHasBeenSet; }
    template<typename ReplicationRunIdT = Aws::String>
    void SetReplicationRunId(ReplicationRunIdT&& value) { m_replicationRunIdHasBeenSet = true; m_replicationRunId = std::forward<ReplicationRunIdT>(value); }
    template<typename ReplicationRunIdT = Aws::String>
    ReplicationRun& WithReplicationRunId(ReplicationRunIdT&& value) { SetReplicationRunId(std::forward<ReplicationRunIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the replication run.</p>
     */
    inline ReplicationRunState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(ReplicationRunState value) { m_stateHasBeenSet = true; m_state = value; }
    inline ReplicationRun& WithState(ReplicationRunState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of replication run.</p>
     */
    inline ReplicationRunType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ReplicationRunType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ReplicationRun& WithType(ReplicationRunType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the current stage of the replication run.</p>
     */
    inline const ReplicationRunStageDetails& GetStageDetails() const { return m_stageDetails; }
    inline bool StageDetailsHasBeenSet() const { return m_stageDetailsHasBeenSet; }
    template<typename StageDetailsT = ReplicationRunStageDetails>
    void SetStageDetails(StageDetailsT&& value) { m_stageDetailsHasBeenSet = true; m_stageDetails = std::forward<StageDetailsT>(value); }
    template<typename StageDetailsT = ReplicationRunStageDetails>
    ReplicationRun& WithStageDetails(StageDetailsT&& value) { SetStageDetails(std::forward<StageDetailsT>(value)); return *this;}
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
    ReplicationRun& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Machine Image (AMI) from the replication run.</p>
     */
    inline const Aws::String& GetAmiId() const { return m_amiId; }
    inline bool AmiIdHasBeenSet() const { return m_amiIdHasBeenSet; }
    template<typename AmiIdT = Aws::String>
    void SetAmiId(AmiIdT&& value) { m_amiIdHasBeenSet = true; m_amiId = std::forward<AmiIdT>(value); }
    template<typename AmiIdT = Aws::String>
    ReplicationRun& WithAmiId(AmiIdT&& value) { SetAmiId(std::forward<AmiIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time of the next replication run.</p>
     */
    inline const Aws::Utils::DateTime& GetScheduledStartTime() const { return m_scheduledStartTime; }
    inline bool ScheduledStartTimeHasBeenSet() const { return m_scheduledStartTimeHasBeenSet; }
    template<typename ScheduledStartTimeT = Aws::Utils::DateTime>
    void SetScheduledStartTime(ScheduledStartTimeT&& value) { m_scheduledStartTimeHasBeenSet = true; m_scheduledStartTime = std::forward<ScheduledStartTimeT>(value); }
    template<typename ScheduledStartTimeT = Aws::Utils::DateTime>
    ReplicationRun& WithScheduledStartTime(ScheduledStartTimeT&& value) { SetScheduledStartTime(std::forward<ScheduledStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The completion time of the last replication run.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedTime() const { return m_completedTime; }
    inline bool CompletedTimeHasBeenSet() const { return m_completedTimeHasBeenSet; }
    template<typename CompletedTimeT = Aws::Utils::DateTime>
    void SetCompletedTime(CompletedTimeT&& value) { m_completedTimeHasBeenSet = true; m_completedTime = std::forward<CompletedTimeT>(value); }
    template<typename CompletedTimeT = Aws::Utils::DateTime>
    ReplicationRun& WithCompletedTime(CompletedTimeT&& value) { SetCompletedTime(std::forward<CompletedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the replication run.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ReplicationRun& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the replication run should produce an encrypted AMI.</p>
     */
    inline bool GetEncrypted() const { return m_encrypted; }
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }
    inline ReplicationRun& WithEncrypted(bool value) { SetEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the KMS key for replication jobs that produce encrypted AMIs. This
     * value can be any of the following:</p> <ul> <li> <p>KMS key ID</p> </li> <li>
     * <p>KMS key alias</p> </li> <li> <p>ARN referring to the KMS key ID</p> </li>
     * <li> <p>ARN referring to the KMS key alias</p> </li> </ul> <p> If encrypted is
     * <i>true</i> but a KMS key ID is not specified, the customer's default KMS key
     * for Amazon EBS is used. </p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    ReplicationRun& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_replicationRunId;
    bool m_replicationRunIdHasBeenSet = false;

    ReplicationRunState m_state{ReplicationRunState::NOT_SET};
    bool m_stateHasBeenSet = false;

    ReplicationRunType m_type{ReplicationRunType::NOT_SET};
    bool m_typeHasBeenSet = false;

    ReplicationRunStageDetails m_stageDetails;
    bool m_stageDetailsHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::String m_amiId;
    bool m_amiIdHasBeenSet = false;

    Aws::Utils::DateTime m_scheduledStartTime{};
    bool m_scheduledStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_completedTime{};
    bool m_completedTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_encrypted{false};
    bool m_encryptedHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
