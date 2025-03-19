/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb/QLDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/qldb/model/StreamStatus.h>
#include <aws/qldb/model/KinesisConfiguration.h>
#include <aws/qldb/model/ErrorCause.h>
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
namespace QLDB
{
namespace Model
{

  /**
   * <p>Information about an Amazon QLDB journal stream, including the Amazon
   * Resource Name (ARN), stream name, creation time, current status, and the
   * parameters of the original stream creation request.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/JournalKinesisStreamDescription">AWS
   * API Reference</a></p>
   */
  class JournalKinesisStreamDescription
  {
  public:
    AWS_QLDB_API JournalKinesisStreamDescription() = default;
    AWS_QLDB_API JournalKinesisStreamDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_QLDB_API JournalKinesisStreamDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QLDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the ledger.</p>
     */
    inline const Aws::String& GetLedgerName() const { return m_ledgerName; }
    inline bool LedgerNameHasBeenSet() const { return m_ledgerNameHasBeenSet; }
    template<typename LedgerNameT = Aws::String>
    void SetLedgerName(LedgerNameT&& value) { m_ledgerNameHasBeenSet = true; m_ledgerName = std::forward<LedgerNameT>(value); }
    template<typename LedgerNameT = Aws::String>
    JournalKinesisStreamDescription& WithLedgerName(LedgerNameT&& value) { SetLedgerName(std::forward<LedgerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in epoch time format, when the QLDB journal stream was
     * created. (Epoch time format is the number of seconds elapsed since 12:00:00 AM
     * January 1, 1970 UTC.)</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    JournalKinesisStreamDescription& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inclusive start date and time from which to start streaming journal
     * data.</p>
     */
    inline const Aws::Utils::DateTime& GetInclusiveStartTime() const { return m_inclusiveStartTime; }
    inline bool InclusiveStartTimeHasBeenSet() const { return m_inclusiveStartTimeHasBeenSet; }
    template<typename InclusiveStartTimeT = Aws::Utils::DateTime>
    void SetInclusiveStartTime(InclusiveStartTimeT&& value) { m_inclusiveStartTimeHasBeenSet = true; m_inclusiveStartTime = std::forward<InclusiveStartTimeT>(value); }
    template<typename InclusiveStartTimeT = Aws::Utils::DateTime>
    JournalKinesisStreamDescription& WithInclusiveStartTime(InclusiveStartTimeT&& value) { SetInclusiveStartTime(std::forward<InclusiveStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The exclusive date and time that specifies when the stream ends. If this
     * parameter is undefined, the stream runs indefinitely until you cancel it.</p>
     */
    inline const Aws::Utils::DateTime& GetExclusiveEndTime() const { return m_exclusiveEndTime; }
    inline bool ExclusiveEndTimeHasBeenSet() const { return m_exclusiveEndTimeHasBeenSet; }
    template<typename ExclusiveEndTimeT = Aws::Utils::DateTime>
    void SetExclusiveEndTime(ExclusiveEndTimeT&& value) { m_exclusiveEndTimeHasBeenSet = true; m_exclusiveEndTime = std::forward<ExclusiveEndTimeT>(value); }
    template<typename ExclusiveEndTimeT = Aws::Utils::DateTime>
    JournalKinesisStreamDescription& WithExclusiveEndTime(ExclusiveEndTimeT&& value) { SetExclusiveEndTime(std::forward<ExclusiveEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants QLDB permissions
     * for a journal stream to write data records to a Kinesis Data Streams
     * resource.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    JournalKinesisStreamDescription& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The UUID (represented in Base62-encoded text) of the QLDB journal stream.</p>
     */
    inline const Aws::String& GetStreamId() const { return m_streamId; }
    inline bool StreamIdHasBeenSet() const { return m_streamIdHasBeenSet; }
    template<typename StreamIdT = Aws::String>
    void SetStreamId(StreamIdT&& value) { m_streamIdHasBeenSet = true; m_streamId = std::forward<StreamIdT>(value); }
    template<typename StreamIdT = Aws::String>
    JournalKinesisStreamDescription& WithStreamId(StreamIdT&& value) { SetStreamId(std::forward<StreamIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the QLDB journal stream.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    JournalKinesisStreamDescription& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the QLDB journal stream.</p>
     */
    inline StreamStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(StreamStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline JournalKinesisStreamDescription& WithStatus(StreamStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings of the Amazon Kinesis Data Streams destination for
     * a QLDB journal stream.</p>
     */
    inline const KinesisConfiguration& GetKinesisConfiguration() const { return m_kinesisConfiguration; }
    inline bool KinesisConfigurationHasBeenSet() const { return m_kinesisConfigurationHasBeenSet; }
    template<typename KinesisConfigurationT = KinesisConfiguration>
    void SetKinesisConfiguration(KinesisConfigurationT&& value) { m_kinesisConfigurationHasBeenSet = true; m_kinesisConfiguration = std::forward<KinesisConfigurationT>(value); }
    template<typename KinesisConfigurationT = KinesisConfiguration>
    JournalKinesisStreamDescription& WithKinesisConfiguration(KinesisConfigurationT&& value) { SetKinesisConfiguration(std::forward<KinesisConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message that describes the reason that a stream has a status of
     * <code>IMPAIRED</code> or <code>FAILED</code>. This is not applicable to streams
     * that have other status values.</p>
     */
    inline ErrorCause GetErrorCause() const { return m_errorCause; }
    inline bool ErrorCauseHasBeenSet() const { return m_errorCauseHasBeenSet; }
    inline void SetErrorCause(ErrorCause value) { m_errorCauseHasBeenSet = true; m_errorCause = value; }
    inline JournalKinesisStreamDescription& WithErrorCause(ErrorCause value) { SetErrorCause(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-defined name of the QLDB journal stream.</p>
     */
    inline const Aws::String& GetStreamName() const { return m_streamName; }
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }
    template<typename StreamNameT = Aws::String>
    void SetStreamName(StreamNameT&& value) { m_streamNameHasBeenSet = true; m_streamName = std::forward<StreamNameT>(value); }
    template<typename StreamNameT = Aws::String>
    JournalKinesisStreamDescription& WithStreamName(StreamNameT&& value) { SetStreamName(std::forward<StreamNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ledgerName;
    bool m_ledgerNameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_inclusiveStartTime{};
    bool m_inclusiveStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_exclusiveEndTime{};
    bool m_exclusiveEndTimeHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_streamId;
    bool m_streamIdHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    StreamStatus m_status{StreamStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    KinesisConfiguration m_kinesisConfiguration;
    bool m_kinesisConfigurationHasBeenSet = false;

    ErrorCause m_errorCause{ErrorCause::NOT_SET};
    bool m_errorCauseHasBeenSet = false;

    Aws::String m_streamName;
    bool m_streamNameHasBeenSet = false;
  };

} // namespace Model
} // namespace QLDB
} // namespace Aws
