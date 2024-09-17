/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   */
  class StartExportTaskRequest : public RDSRequest
  {
  public:
    AWS_RDS_API StartExportTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartExportTask"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>A unique identifier for the export task. This ID isn't an identifier for the
     * Amazon S3 bucket where the data is to be exported.</p>
     */
    inline const Aws::String& GetExportTaskIdentifier() const{ return m_exportTaskIdentifier; }
    inline bool ExportTaskIdentifierHasBeenSet() const { return m_exportTaskIdentifierHasBeenSet; }
    inline void SetExportTaskIdentifier(const Aws::String& value) { m_exportTaskIdentifierHasBeenSet = true; m_exportTaskIdentifier = value; }
    inline void SetExportTaskIdentifier(Aws::String&& value) { m_exportTaskIdentifierHasBeenSet = true; m_exportTaskIdentifier = std::move(value); }
    inline void SetExportTaskIdentifier(const char* value) { m_exportTaskIdentifierHasBeenSet = true; m_exportTaskIdentifier.assign(value); }
    inline StartExportTaskRequest& WithExportTaskIdentifier(const Aws::String& value) { SetExportTaskIdentifier(value); return *this;}
    inline StartExportTaskRequest& WithExportTaskIdentifier(Aws::String&& value) { SetExportTaskIdentifier(std::move(value)); return *this;}
    inline StartExportTaskRequest& WithExportTaskIdentifier(const char* value) { SetExportTaskIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot or cluster to export to Amazon
     * S3.</p>
     */
    inline const Aws::String& GetSourceArn() const{ return m_sourceArn; }
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }
    inline void SetSourceArn(const Aws::String& value) { m_sourceArnHasBeenSet = true; m_sourceArn = value; }
    inline void SetSourceArn(Aws::String&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::move(value); }
    inline void SetSourceArn(const char* value) { m_sourceArnHasBeenSet = true; m_sourceArn.assign(value); }
    inline StartExportTaskRequest& WithSourceArn(const Aws::String& value) { SetSourceArn(value); return *this;}
    inline StartExportTaskRequest& WithSourceArn(Aws::String&& value) { SetSourceArn(std::move(value)); return *this;}
    inline StartExportTaskRequest& WithSourceArn(const char* value) { SetSourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon S3 bucket to export the snapshot or cluster data
     * to.</p>
     */
    inline const Aws::String& GetS3BucketName() const{ return m_s3BucketName; }
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }
    inline void SetS3BucketName(const Aws::String& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = value; }
    inline void SetS3BucketName(Aws::String&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::move(value); }
    inline void SetS3BucketName(const char* value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName.assign(value); }
    inline StartExportTaskRequest& WithS3BucketName(const Aws::String& value) { SetS3BucketName(value); return *this;}
    inline StartExportTaskRequest& WithS3BucketName(Aws::String&& value) { SetS3BucketName(std::move(value)); return *this;}
    inline StartExportTaskRequest& WithS3BucketName(const char* value) { SetS3BucketName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the IAM role to use for writing to the Amazon S3 bucket when
     * exporting a snapshot or cluster.</p> <p>In the IAM policy attached to your IAM
     * role, include the following required actions to allow the transfer of files from
     * Amazon RDS or Amazon Aurora to an S3 bucket:</p> <ul> <li> <p>s3:PutObject*</p>
     * </li> <li> <p>s3:GetObject*</p> </li> <li> <p>s3:ListBucket</p> </li> <li>
     * <p>s3:DeleteObject*</p> </li> <li> <p>s3:GetBucketLocation </p> </li> </ul>
     * <p>In the policy, include the resources to identify the S3 bucket and objects in
     * the bucket. The following list of resources shows the Amazon Resource Name (ARN)
     * format for accessing S3:</p> <ul> <li> <p>
     * <code>arn:aws:s3:::<i>your-s3-bucket</i> </code> </p> </li> <li> <p>
     * <code>arn:aws:s3:::<i>your-s3-bucket</i>/ *</code> </p> </li> </ul>
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = value; }
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::move(value); }
    inline void SetIamRoleArn(const char* value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn.assign(value); }
    inline StartExportTaskRequest& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}
    inline StartExportTaskRequest& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}
    inline StartExportTaskRequest& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services KMS key to use to encrypt the data exported
     * to Amazon S3. The Amazon Web Services KMS key identifier is the key ARN, key ID,
     * alias ARN, or alias name for the KMS key. The caller of this operation must be
     * authorized to run the following operations. These can be set in the Amazon Web
     * Services KMS key policy:</p> <ul> <li> <p>kms:Encrypt</p> </li> <li>
     * <p>kms:Decrypt</p> </li> <li> <p>kms:GenerateDataKey</p> </li> <li>
     * <p>kms:GenerateDataKeyWithoutPlaintext</p> </li> <li> <p>kms:ReEncryptFrom</p>
     * </li> <li> <p>kms:ReEncryptTo</p> </li> <li> <p>kms:CreateGrant</p> </li> <li>
     * <p>kms:DescribeKey</p> </li> <li> <p>kms:RetireGrant</p> </li> </ul>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline StartExportTaskRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline StartExportTaskRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline StartExportTaskRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 bucket prefix to use as the file name and path of the exported
     * data.</p>
     */
    inline const Aws::String& GetS3Prefix() const{ return m_s3Prefix; }
    inline bool S3PrefixHasBeenSet() const { return m_s3PrefixHasBeenSet; }
    inline void SetS3Prefix(const Aws::String& value) { m_s3PrefixHasBeenSet = true; m_s3Prefix = value; }
    inline void SetS3Prefix(Aws::String&& value) { m_s3PrefixHasBeenSet = true; m_s3Prefix = std::move(value); }
    inline void SetS3Prefix(const char* value) { m_s3PrefixHasBeenSet = true; m_s3Prefix.assign(value); }
    inline StartExportTaskRequest& WithS3Prefix(const Aws::String& value) { SetS3Prefix(value); return *this;}
    inline StartExportTaskRequest& WithS3Prefix(Aws::String&& value) { SetS3Prefix(std::move(value)); return *this;}
    inline StartExportTaskRequest& WithS3Prefix(const char* value) { SetS3Prefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data to be exported from the snapshot or cluster. If this parameter isn't
     * provided, all of the data is exported.</p> <p>Valid Values:</p> <ul> <li> <p>
     * <code>database</code> - Export all the data from a specified database.</p> </li>
     * <li> <p> <code>database.table</code> <i>table-name</i> - Export a table of the
     * snapshot or cluster. This format is valid only for RDS for MySQL, RDS for
     * MariaDB, and Aurora MySQL.</p> </li> <li> <p> <code>database.schema</code>
     * <i>schema-name</i> - Export a database schema of the snapshot or cluster. This
     * format is valid only for RDS for PostgreSQL and Aurora PostgreSQL.</p> </li>
     * <li> <p> <code>database.schema.table</code> <i>table-name</i> - Export a table
     * of the database schema. This format is valid only for RDS for PostgreSQL and
     * Aurora PostgreSQL.</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetExportOnly() const{ return m_exportOnly; }
    inline bool ExportOnlyHasBeenSet() const { return m_exportOnlyHasBeenSet; }
    inline void SetExportOnly(const Aws::Vector<Aws::String>& value) { m_exportOnlyHasBeenSet = true; m_exportOnly = value; }
    inline void SetExportOnly(Aws::Vector<Aws::String>&& value) { m_exportOnlyHasBeenSet = true; m_exportOnly = std::move(value); }
    inline StartExportTaskRequest& WithExportOnly(const Aws::Vector<Aws::String>& value) { SetExportOnly(value); return *this;}
    inline StartExportTaskRequest& WithExportOnly(Aws::Vector<Aws::String>&& value) { SetExportOnly(std::move(value)); return *this;}
    inline StartExportTaskRequest& AddExportOnly(const Aws::String& value) { m_exportOnlyHasBeenSet = true; m_exportOnly.push_back(value); return *this; }
    inline StartExportTaskRequest& AddExportOnly(Aws::String&& value) { m_exportOnlyHasBeenSet = true; m_exportOnly.push_back(std::move(value)); return *this; }
    inline StartExportTaskRequest& AddExportOnly(const char* value) { m_exportOnlyHasBeenSet = true; m_exportOnly.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_exportTaskIdentifier;
    bool m_exportTaskIdentifierHasBeenSet = false;

    Aws::String m_sourceArn;
    bool m_sourceArnHasBeenSet = false;

    Aws::String m_s3BucketName;
    bool m_s3BucketNameHasBeenSet = false;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_s3Prefix;
    bool m_s3PrefixHasBeenSet = false;

    Aws::Vector<Aws::String> m_exportOnly;
    bool m_exportOnlyHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
