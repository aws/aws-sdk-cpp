/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb/QLDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/qldb/model/ExportStatus.h>
#include <aws/qldb/model/S3ExportConfiguration.h>
#include <aws/qldb/model/OutputFormat.h>
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
   * <p>Information about a journal export job, including the ledger name, export ID,
   * creation time, current status, and the parameters of the original export
   * creation request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/JournalS3ExportDescription">AWS
   * API Reference</a></p>
   */
  class JournalS3ExportDescription
  {
  public:
    AWS_QLDB_API JournalS3ExportDescription() = default;
    AWS_QLDB_API JournalS3ExportDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_QLDB_API JournalS3ExportDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    JournalS3ExportDescription& WithLedgerName(LedgerNameT&& value) { SetLedgerName(std::forward<LedgerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The UUID (represented in Base62-encoded text) of the journal export job.</p>
     */
    inline const Aws::String& GetExportId() const { return m_exportId; }
    inline bool ExportIdHasBeenSet() const { return m_exportIdHasBeenSet; }
    template<typename ExportIdT = Aws::String>
    void SetExportId(ExportIdT&& value) { m_exportIdHasBeenSet = true; m_exportId = std::forward<ExportIdT>(value); }
    template<typename ExportIdT = Aws::String>
    JournalS3ExportDescription& WithExportId(ExportIdT&& value) { SetExportId(std::forward<ExportIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in epoch time format, when the export job was created.
     * (Epoch time format is the number of seconds elapsed since 12:00:00 AM January 1,
     * 1970 UTC.)</p>
     */
    inline const Aws::Utils::DateTime& GetExportCreationTime() const { return m_exportCreationTime; }
    inline bool ExportCreationTimeHasBeenSet() const { return m_exportCreationTimeHasBeenSet; }
    template<typename ExportCreationTimeT = Aws::Utils::DateTime>
    void SetExportCreationTime(ExportCreationTimeT&& value) { m_exportCreationTimeHasBeenSet = true; m_exportCreationTime = std::forward<ExportCreationTimeT>(value); }
    template<typename ExportCreationTimeT = Aws::Utils::DateTime>
    JournalS3ExportDescription& WithExportCreationTime(ExportCreationTimeT&& value) { SetExportCreationTime(std::forward<ExportCreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the journal export job.</p>
     */
    inline ExportStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ExportStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline JournalS3ExportDescription& WithStatus(ExportStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inclusive start date and time for the range of journal contents that was
     * specified in the original export request.</p>
     */
    inline const Aws::Utils::DateTime& GetInclusiveStartTime() const { return m_inclusiveStartTime; }
    inline bool InclusiveStartTimeHasBeenSet() const { return m_inclusiveStartTimeHasBeenSet; }
    template<typename InclusiveStartTimeT = Aws::Utils::DateTime>
    void SetInclusiveStartTime(InclusiveStartTimeT&& value) { m_inclusiveStartTimeHasBeenSet = true; m_inclusiveStartTime = std::forward<InclusiveStartTimeT>(value); }
    template<typename InclusiveStartTimeT = Aws::Utils::DateTime>
    JournalS3ExportDescription& WithInclusiveStartTime(InclusiveStartTimeT&& value) { SetInclusiveStartTime(std::forward<InclusiveStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The exclusive end date and time for the range of journal contents that was
     * specified in the original export request.</p>
     */
    inline const Aws::Utils::DateTime& GetExclusiveEndTime() const { return m_exclusiveEndTime; }
    inline bool ExclusiveEndTimeHasBeenSet() const { return m_exclusiveEndTimeHasBeenSet; }
    template<typename ExclusiveEndTimeT = Aws::Utils::DateTime>
    void SetExclusiveEndTime(ExclusiveEndTimeT&& value) { m_exclusiveEndTimeHasBeenSet = true; m_exclusiveEndTime = std::forward<ExclusiveEndTimeT>(value); }
    template<typename ExclusiveEndTimeT = Aws::Utils::DateTime>
    JournalS3ExportDescription& WithExclusiveEndTime(ExclusiveEndTimeT&& value) { SetExclusiveEndTime(std::forward<ExclusiveEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const S3ExportConfiguration& GetS3ExportConfiguration() const { return m_s3ExportConfiguration; }
    inline bool S3ExportConfigurationHasBeenSet() const { return m_s3ExportConfigurationHasBeenSet; }
    template<typename S3ExportConfigurationT = S3ExportConfiguration>
    void SetS3ExportConfiguration(S3ExportConfigurationT&& value) { m_s3ExportConfigurationHasBeenSet = true; m_s3ExportConfiguration = std::forward<S3ExportConfigurationT>(value); }
    template<typename S3ExportConfigurationT = S3ExportConfiguration>
    JournalS3ExportDescription& WithS3ExportConfiguration(S3ExportConfigurationT&& value) { SetS3ExportConfiguration(std::forward<S3ExportConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants QLDB permissions
     * for a journal export job to do the following:</p> <ul> <li> <p>Write objects
     * into your Amazon Simple Storage Service (Amazon S3) bucket.</p> </li> <li>
     * <p>(Optional) Use your customer managed key in Key Management Service (KMS) for
     * server-side encryption of your exported data.</p> </li> </ul>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    JournalS3ExportDescription& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output format of the exported journal data.</p>
     */
    inline OutputFormat GetOutputFormat() const { return m_outputFormat; }
    inline bool OutputFormatHasBeenSet() const { return m_outputFormatHasBeenSet; }
    inline void SetOutputFormat(OutputFormat value) { m_outputFormatHasBeenSet = true; m_outputFormat = value; }
    inline JournalS3ExportDescription& WithOutputFormat(OutputFormat value) { SetOutputFormat(value); return *this;}
    ///@}
  private:

    Aws::String m_ledgerName;
    bool m_ledgerNameHasBeenSet = false;

    Aws::String m_exportId;
    bool m_exportIdHasBeenSet = false;

    Aws::Utils::DateTime m_exportCreationTime{};
    bool m_exportCreationTimeHasBeenSet = false;

    ExportStatus m_status{ExportStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_inclusiveStartTime{};
    bool m_inclusiveStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_exclusiveEndTime{};
    bool m_exclusiveEndTimeHasBeenSet = false;

    S3ExportConfiguration m_s3ExportConfiguration;
    bool m_s3ExportConfigurationHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    OutputFormat m_outputFormat{OutputFormat::NOT_SET};
    bool m_outputFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace QLDB
} // namespace Aws
