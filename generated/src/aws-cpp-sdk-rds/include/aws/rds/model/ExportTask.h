/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/rds/model/ExportSourceType.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{

  /**
   * <p>Contains the details of a snapshot or cluster export to Amazon S3.</p>
   * <p>This data type is used as a response element in the
   * <code>DescribeExportTasks</code> operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ExportTask">AWS API
   * Reference</a></p>
   */
  class ExportTask
  {
  public:
    AWS_RDS_API ExportTask() = default;
    AWS_RDS_API ExportTask(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API ExportTask& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>A unique identifier for the snapshot or cluster export task. This ID isn't an
     * identifier for the Amazon S3 bucket where the data is exported.</p>
     */
    inline const Aws::String& GetExportTaskIdentifier() const { return m_exportTaskIdentifier; }
    inline bool ExportTaskIdentifierHasBeenSet() const { return m_exportTaskIdentifierHasBeenSet; }
    template<typename ExportTaskIdentifierT = Aws::String>
    void SetExportTaskIdentifier(ExportTaskIdentifierT&& value) { m_exportTaskIdentifierHasBeenSet = true; m_exportTaskIdentifier = std::forward<ExportTaskIdentifierT>(value); }
    template<typename ExportTaskIdentifierT = Aws::String>
    ExportTask& WithExportTaskIdentifier(ExportTaskIdentifierT&& value) { SetExportTaskIdentifier(std::forward<ExportTaskIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot or cluster exported to Amazon
     * S3.</p>
     */
    inline const Aws::String& GetSourceArn() const { return m_sourceArn; }
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }
    template<typename SourceArnT = Aws::String>
    void SetSourceArn(SourceArnT&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::forward<SourceArnT>(value); }
    template<typename SourceArnT = Aws::String>
    ExportTask& WithSourceArn(SourceArnT&& value) { SetSourceArn(std::forward<SourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data exported from the snapshot or cluster.</p> <p>Valid Values:</p> <ul>
     * <li> <p> <code>database</code> - Export all the data from a specified
     * database.</p> </li> <li> <p> <code>database.table</code> <i>table-name</i> -
     * Export a table of the snapshot or cluster. This format is valid only for RDS for
     * MySQL, RDS for MariaDB, and Aurora MySQL.</p> </li> <li> <p>
     * <code>database.schema</code> <i>schema-name</i> - Export a database schema of
     * the snapshot or cluster. This format is valid only for RDS for PostgreSQL and
     * Aurora PostgreSQL.</p> </li> <li> <p> <code>database.schema.table</code>
     * <i>table-name</i> - Export a table of the database schema. This format is valid
     * only for RDS for PostgreSQL and Aurora PostgreSQL.</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetExportOnly() const { return m_exportOnly; }
    inline bool ExportOnlyHasBeenSet() const { return m_exportOnlyHasBeenSet; }
    template<typename ExportOnlyT = Aws::Vector<Aws::String>>
    void SetExportOnly(ExportOnlyT&& value) { m_exportOnlyHasBeenSet = true; m_exportOnly = std::forward<ExportOnlyT>(value); }
    template<typename ExportOnlyT = Aws::Vector<Aws::String>>
    ExportTask& WithExportOnly(ExportOnlyT&& value) { SetExportOnly(std::forward<ExportOnlyT>(value)); return *this;}
    template<typename ExportOnlyT = Aws::String>
    ExportTask& AddExportOnly(ExportOnlyT&& value) { m_exportOnlyHasBeenSet = true; m_exportOnly.emplace_back(std::forward<ExportOnlyT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time when the snapshot was created.</p>
     */
    inline const Aws::Utils::DateTime& GetSnapshotTime() const { return m_snapshotTime; }
    inline bool SnapshotTimeHasBeenSet() const { return m_snapshotTimeHasBeenSet; }
    template<typename SnapshotTimeT = Aws::Utils::DateTime>
    void SetSnapshotTime(SnapshotTimeT&& value) { m_snapshotTimeHasBeenSet = true; m_snapshotTime = std::forward<SnapshotTimeT>(value); }
    template<typename SnapshotTimeT = Aws::Utils::DateTime>
    ExportTask& WithSnapshotTime(SnapshotTimeT&& value) { SetSnapshotTime(std::forward<SnapshotTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the snapshot or cluster export task started.</p>
     */
    inline const Aws::Utils::DateTime& GetTaskStartTime() const { return m_taskStartTime; }
    inline bool TaskStartTimeHasBeenSet() const { return m_taskStartTimeHasBeenSet; }
    template<typename TaskStartTimeT = Aws::Utils::DateTime>
    void SetTaskStartTime(TaskStartTimeT&& value) { m_taskStartTimeHasBeenSet = true; m_taskStartTime = std::forward<TaskStartTimeT>(value); }
    template<typename TaskStartTimeT = Aws::Utils::DateTime>
    ExportTask& WithTaskStartTime(TaskStartTimeT&& value) { SetTaskStartTime(std::forward<TaskStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the snapshot or cluster export task ended.</p>
     */
    inline const Aws::Utils::DateTime& GetTaskEndTime() const { return m_taskEndTime; }
    inline bool TaskEndTimeHasBeenSet() const { return m_taskEndTimeHasBeenSet; }
    template<typename TaskEndTimeT = Aws::Utils::DateTime>
    void SetTaskEndTime(TaskEndTimeT&& value) { m_taskEndTimeHasBeenSet = true; m_taskEndTime = std::forward<TaskEndTimeT>(value); }
    template<typename TaskEndTimeT = Aws::Utils::DateTime>
    ExportTask& WithTaskEndTime(TaskEndTimeT&& value) { SetTaskEndTime(std::forward<TaskEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 bucket where the snapshot or cluster is exported to.</p>
     */
    inline const Aws::String& GetS3Bucket() const { return m_s3Bucket; }
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }
    template<typename S3BucketT = Aws::String>
    void SetS3Bucket(S3BucketT&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::forward<S3BucketT>(value); }
    template<typename S3BucketT = Aws::String>
    ExportTask& WithS3Bucket(S3BucketT&& value) { SetS3Bucket(std::forward<S3BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 bucket prefix that is the file name and path of the exported
     * data.</p>
     */
    inline const Aws::String& GetS3Prefix() const { return m_s3Prefix; }
    inline bool S3PrefixHasBeenSet() const { return m_s3PrefixHasBeenSet; }
    template<typename S3PrefixT = Aws::String>
    void SetS3Prefix(S3PrefixT&& value) { m_s3PrefixHasBeenSet = true; m_s3Prefix = std::forward<S3PrefixT>(value); }
    template<typename S3PrefixT = Aws::String>
    ExportTask& WithS3Prefix(S3PrefixT&& value) { SetS3Prefix(std::forward<S3PrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the IAM role that is used to write to Amazon S3 when exporting a
     * snapshot or cluster.</p>
     */
    inline const Aws::String& GetIamRoleArn() const { return m_iamRoleArn; }
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
    template<typename IamRoleArnT = Aws::String>
    void SetIamRoleArn(IamRoleArnT&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::forward<IamRoleArnT>(value); }
    template<typename IamRoleArnT = Aws::String>
    ExportTask& WithIamRoleArn(IamRoleArnT&& value) { SetIamRoleArn(std::forward<IamRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key identifier of the Amazon Web Services KMS key that is used to encrypt
     * the data when it's exported to Amazon S3. The KMS key identifier is its key ARN,
     * key ID, alias ARN, or alias name. The IAM role used for the export must have
     * encryption and decryption permissions to use this KMS key.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    ExportTask& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The progress status of the export task. The status can be one of the
     * following:</p> <ul> <li> <p> <code>CANCELED</code> </p> </li> <li> <p>
     * <code>CANCELING</code> </p> </li> <li> <p> <code>COMPLETE</code> </p> </li> <li>
     * <p> <code>FAILED</code> </p> </li> <li> <p> <code>IN_PROGRESS</code> </p> </li>
     * <li> <p> <code>STARTING</code> </p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    ExportTask& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The progress of the snapshot or cluster export task as a percentage.</p>
     */
    inline int GetPercentProgress() const { return m_percentProgress; }
    inline bool PercentProgressHasBeenSet() const { return m_percentProgressHasBeenSet; }
    inline void SetPercentProgress(int value) { m_percentProgressHasBeenSet = true; m_percentProgress = value; }
    inline ExportTask& WithPercentProgress(int value) { SetPercentProgress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total amount of data exported, in gigabytes.</p>
     */
    inline int GetTotalExtractedDataInGB() const { return m_totalExtractedDataInGB; }
    inline bool TotalExtractedDataInGBHasBeenSet() const { return m_totalExtractedDataInGBHasBeenSet; }
    inline void SetTotalExtractedDataInGB(int value) { m_totalExtractedDataInGBHasBeenSet = true; m_totalExtractedDataInGB = value; }
    inline ExportTask& WithTotalExtractedDataInGB(int value) { SetTotalExtractedDataInGB(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason the export failed, if it failed.</p>
     */
    inline const Aws::String& GetFailureCause() const { return m_failureCause; }
    inline bool FailureCauseHasBeenSet() const { return m_failureCauseHasBeenSet; }
    template<typename FailureCauseT = Aws::String>
    void SetFailureCause(FailureCauseT&& value) { m_failureCauseHasBeenSet = true; m_failureCause = std::forward<FailureCauseT>(value); }
    template<typename FailureCauseT = Aws::String>
    ExportTask& WithFailureCause(FailureCauseT&& value) { SetFailureCause(std::forward<FailureCauseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A warning about the snapshot or cluster export task.</p>
     */
    inline const Aws::String& GetWarningMessage() const { return m_warningMessage; }
    inline bool WarningMessageHasBeenSet() const { return m_warningMessageHasBeenSet; }
    template<typename WarningMessageT = Aws::String>
    void SetWarningMessage(WarningMessageT&& value) { m_warningMessageHasBeenSet = true; m_warningMessage = std::forward<WarningMessageT>(value); }
    template<typename WarningMessageT = Aws::String>
    ExportTask& WithWarningMessage(WarningMessageT&& value) { SetWarningMessage(std::forward<WarningMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of source for the export.</p>
     */
    inline ExportSourceType GetSourceType() const { return m_sourceType; }
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
    inline void SetSourceType(ExportSourceType value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }
    inline ExportTask& WithSourceType(ExportSourceType value) { SetSourceType(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ExportTask& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_exportTaskIdentifier;
    bool m_exportTaskIdentifierHasBeenSet = false;

    Aws::String m_sourceArn;
    bool m_sourceArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_exportOnly;
    bool m_exportOnlyHasBeenSet = false;

    Aws::Utils::DateTime m_snapshotTime{};
    bool m_snapshotTimeHasBeenSet = false;

    Aws::Utils::DateTime m_taskStartTime{};
    bool m_taskStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_taskEndTime{};
    bool m_taskEndTimeHasBeenSet = false;

    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet = false;

    Aws::String m_s3Prefix;
    bool m_s3PrefixHasBeenSet = false;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    int m_percentProgress{0};
    bool m_percentProgressHasBeenSet = false;

    int m_totalExtractedDataInGB{0};
    bool m_totalExtractedDataInGBHasBeenSet = false;

    Aws::String m_failureCause;
    bool m_failureCauseHasBeenSet = false;

    Aws::String m_warningMessage;
    bool m_warningMessageHasBeenSet = false;

    ExportSourceType m_sourceType{ExportSourceType::NOT_SET};
    bool m_sourceTypeHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = true;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
