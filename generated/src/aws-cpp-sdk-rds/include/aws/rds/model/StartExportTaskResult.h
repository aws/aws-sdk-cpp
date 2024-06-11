/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/rds/model/ExportSourceType.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
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
  class StartExportTaskResult
  {
  public:
    AWS_RDS_API StartExportTaskResult();
    AWS_RDS_API StartExportTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API StartExportTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A unique identifier for the snapshot or cluster export task. This ID isn't an
     * identifier for the Amazon S3 bucket where the data is exported.</p>
     */
    inline const Aws::String& GetExportTaskIdentifier() const{ return m_exportTaskIdentifier; }
    inline void SetExportTaskIdentifier(const Aws::String& value) { m_exportTaskIdentifier = value; }
    inline void SetExportTaskIdentifier(Aws::String&& value) { m_exportTaskIdentifier = std::move(value); }
    inline void SetExportTaskIdentifier(const char* value) { m_exportTaskIdentifier.assign(value); }
    inline StartExportTaskResult& WithExportTaskIdentifier(const Aws::String& value) { SetExportTaskIdentifier(value); return *this;}
    inline StartExportTaskResult& WithExportTaskIdentifier(Aws::String&& value) { SetExportTaskIdentifier(std::move(value)); return *this;}
    inline StartExportTaskResult& WithExportTaskIdentifier(const char* value) { SetExportTaskIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot or cluster exported to Amazon
     * S3.</p>
     */
    inline const Aws::String& GetSourceArn() const{ return m_sourceArn; }
    inline void SetSourceArn(const Aws::String& value) { m_sourceArn = value; }
    inline void SetSourceArn(Aws::String&& value) { m_sourceArn = std::move(value); }
    inline void SetSourceArn(const char* value) { m_sourceArn.assign(value); }
    inline StartExportTaskResult& WithSourceArn(const Aws::String& value) { SetSourceArn(value); return *this;}
    inline StartExportTaskResult& WithSourceArn(Aws::String&& value) { SetSourceArn(std::move(value)); return *this;}
    inline StartExportTaskResult& WithSourceArn(const char* value) { SetSourceArn(value); return *this;}
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
    inline const Aws::Vector<Aws::String>& GetExportOnly() const{ return m_exportOnly; }
    inline void SetExportOnly(const Aws::Vector<Aws::String>& value) { m_exportOnly = value; }
    inline void SetExportOnly(Aws::Vector<Aws::String>&& value) { m_exportOnly = std::move(value); }
    inline StartExportTaskResult& WithExportOnly(const Aws::Vector<Aws::String>& value) { SetExportOnly(value); return *this;}
    inline StartExportTaskResult& WithExportOnly(Aws::Vector<Aws::String>&& value) { SetExportOnly(std::move(value)); return *this;}
    inline StartExportTaskResult& AddExportOnly(const Aws::String& value) { m_exportOnly.push_back(value); return *this; }
    inline StartExportTaskResult& AddExportOnly(Aws::String&& value) { m_exportOnly.push_back(std::move(value)); return *this; }
    inline StartExportTaskResult& AddExportOnly(const char* value) { m_exportOnly.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time when the snapshot was created.</p>
     */
    inline const Aws::Utils::DateTime& GetSnapshotTime() const{ return m_snapshotTime; }
    inline void SetSnapshotTime(const Aws::Utils::DateTime& value) { m_snapshotTime = value; }
    inline void SetSnapshotTime(Aws::Utils::DateTime&& value) { m_snapshotTime = std::move(value); }
    inline StartExportTaskResult& WithSnapshotTime(const Aws::Utils::DateTime& value) { SetSnapshotTime(value); return *this;}
    inline StartExportTaskResult& WithSnapshotTime(Aws::Utils::DateTime&& value) { SetSnapshotTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the snapshot or cluster export task started.</p>
     */
    inline const Aws::Utils::DateTime& GetTaskStartTime() const{ return m_taskStartTime; }
    inline void SetTaskStartTime(const Aws::Utils::DateTime& value) { m_taskStartTime = value; }
    inline void SetTaskStartTime(Aws::Utils::DateTime&& value) { m_taskStartTime = std::move(value); }
    inline StartExportTaskResult& WithTaskStartTime(const Aws::Utils::DateTime& value) { SetTaskStartTime(value); return *this;}
    inline StartExportTaskResult& WithTaskStartTime(Aws::Utils::DateTime&& value) { SetTaskStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the snapshot or cluster export task ended.</p>
     */
    inline const Aws::Utils::DateTime& GetTaskEndTime() const{ return m_taskEndTime; }
    inline void SetTaskEndTime(const Aws::Utils::DateTime& value) { m_taskEndTime = value; }
    inline void SetTaskEndTime(Aws::Utils::DateTime&& value) { m_taskEndTime = std::move(value); }
    inline StartExportTaskResult& WithTaskEndTime(const Aws::Utils::DateTime& value) { SetTaskEndTime(value); return *this;}
    inline StartExportTaskResult& WithTaskEndTime(Aws::Utils::DateTime&& value) { SetTaskEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 bucket where the snapshot or cluster is exported to.</p>
     */
    inline const Aws::String& GetS3Bucket() const{ return m_s3Bucket; }
    inline void SetS3Bucket(const Aws::String& value) { m_s3Bucket = value; }
    inline void SetS3Bucket(Aws::String&& value) { m_s3Bucket = std::move(value); }
    inline void SetS3Bucket(const char* value) { m_s3Bucket.assign(value); }
    inline StartExportTaskResult& WithS3Bucket(const Aws::String& value) { SetS3Bucket(value); return *this;}
    inline StartExportTaskResult& WithS3Bucket(Aws::String&& value) { SetS3Bucket(std::move(value)); return *this;}
    inline StartExportTaskResult& WithS3Bucket(const char* value) { SetS3Bucket(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 bucket prefix that is the file name and path of the exported
     * data.</p>
     */
    inline const Aws::String& GetS3Prefix() const{ return m_s3Prefix; }
    inline void SetS3Prefix(const Aws::String& value) { m_s3Prefix = value; }
    inline void SetS3Prefix(Aws::String&& value) { m_s3Prefix = std::move(value); }
    inline void SetS3Prefix(const char* value) { m_s3Prefix.assign(value); }
    inline StartExportTaskResult& WithS3Prefix(const Aws::String& value) { SetS3Prefix(value); return *this;}
    inline StartExportTaskResult& WithS3Prefix(Aws::String&& value) { SetS3Prefix(std::move(value)); return *this;}
    inline StartExportTaskResult& WithS3Prefix(const char* value) { SetS3Prefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the IAM role that is used to write to Amazon S3 when exporting a
     * snapshot or cluster.</p>
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArn = value; }
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArn = std::move(value); }
    inline void SetIamRoleArn(const char* value) { m_iamRoleArn.assign(value); }
    inline StartExportTaskResult& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}
    inline StartExportTaskResult& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}
    inline StartExportTaskResult& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key identifier of the Amazon Web Services KMS key that is used to encrypt
     * the data when it's exported to Amazon S3. The KMS key identifier is its key ARN,
     * key ID, alias ARN, or alias name. The IAM role used for the export must have
     * encryption and decryption permissions to use this KMS key.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyId.assign(value); }
    inline StartExportTaskResult& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline StartExportTaskResult& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline StartExportTaskResult& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The progress status of the export task. The status can be one of the
     * following:</p> <ul> <li> <p> <code>CANCELED</code> </p> </li> <li> <p>
     * <code>CANCELING</code> </p> </li> <li> <p> <code>COMPLETE</code> </p> </li> <li>
     * <p> <code>FAILED</code> </p> </li> <li> <p> <code>IN_PROGRESS</code> </p> </li>
     * <li> <p> <code>STARTING</code> </p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline void SetStatus(const Aws::String& value) { m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_status.assign(value); }
    inline StartExportTaskResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline StartExportTaskResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline StartExportTaskResult& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The progress of the snapshot or cluster export task as a percentage.</p>
     */
    inline int GetPercentProgress() const{ return m_percentProgress; }
    inline void SetPercentProgress(int value) { m_percentProgress = value; }
    inline StartExportTaskResult& WithPercentProgress(int value) { SetPercentProgress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total amount of data exported, in gigabytes.</p>
     */
    inline int GetTotalExtractedDataInGB() const{ return m_totalExtractedDataInGB; }
    inline void SetTotalExtractedDataInGB(int value) { m_totalExtractedDataInGB = value; }
    inline StartExportTaskResult& WithTotalExtractedDataInGB(int value) { SetTotalExtractedDataInGB(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason the export failed, if it failed.</p>
     */
    inline const Aws::String& GetFailureCause() const{ return m_failureCause; }
    inline void SetFailureCause(const Aws::String& value) { m_failureCause = value; }
    inline void SetFailureCause(Aws::String&& value) { m_failureCause = std::move(value); }
    inline void SetFailureCause(const char* value) { m_failureCause.assign(value); }
    inline StartExportTaskResult& WithFailureCause(const Aws::String& value) { SetFailureCause(value); return *this;}
    inline StartExportTaskResult& WithFailureCause(Aws::String&& value) { SetFailureCause(std::move(value)); return *this;}
    inline StartExportTaskResult& WithFailureCause(const char* value) { SetFailureCause(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A warning about the snapshot or cluster export task.</p>
     */
    inline const Aws::String& GetWarningMessage() const{ return m_warningMessage; }
    inline void SetWarningMessage(const Aws::String& value) { m_warningMessage = value; }
    inline void SetWarningMessage(Aws::String&& value) { m_warningMessage = std::move(value); }
    inline void SetWarningMessage(const char* value) { m_warningMessage.assign(value); }
    inline StartExportTaskResult& WithWarningMessage(const Aws::String& value) { SetWarningMessage(value); return *this;}
    inline StartExportTaskResult& WithWarningMessage(Aws::String&& value) { SetWarningMessage(std::move(value)); return *this;}
    inline StartExportTaskResult& WithWarningMessage(const char* value) { SetWarningMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of source for the export.</p>
     */
    inline const ExportSourceType& GetSourceType() const{ return m_sourceType; }
    inline void SetSourceType(const ExportSourceType& value) { m_sourceType = value; }
    inline void SetSourceType(ExportSourceType&& value) { m_sourceType = std::move(value); }
    inline StartExportTaskResult& WithSourceType(const ExportSourceType& value) { SetSourceType(value); return *this;}
    inline StartExportTaskResult& WithSourceType(ExportSourceType&& value) { SetSourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline StartExportTaskResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline StartExportTaskResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_exportTaskIdentifier;

    Aws::String m_sourceArn;

    Aws::Vector<Aws::String> m_exportOnly;

    Aws::Utils::DateTime m_snapshotTime;

    Aws::Utils::DateTime m_taskStartTime;

    Aws::Utils::DateTime m_taskEndTime;

    Aws::String m_s3Bucket;

    Aws::String m_s3Prefix;

    Aws::String m_iamRoleArn;

    Aws::String m_kmsKeyId;

    Aws::String m_status;

    int m_percentProgress;

    int m_totalExtractedDataInGB;

    Aws::String m_failureCause;

    Aws::String m_warningMessage;

    ExportSourceType m_sourceType;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
