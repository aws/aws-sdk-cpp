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
    AWS_RDS_API StartExportTaskRequest() = default;

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
    inline const Aws::String& GetExportTaskIdentifier() const { return m_exportTaskIdentifier; }
    inline bool ExportTaskIdentifierHasBeenSet() const { return m_exportTaskIdentifierHasBeenSet; }
    template<typename ExportTaskIdentifierT = Aws::String>
    void SetExportTaskIdentifier(ExportTaskIdentifierT&& value) { m_exportTaskIdentifierHasBeenSet = true; m_exportTaskIdentifier = std::forward<ExportTaskIdentifierT>(value); }
    template<typename ExportTaskIdentifierT = Aws::String>
    StartExportTaskRequest& WithExportTaskIdentifier(ExportTaskIdentifierT&& value) { SetExportTaskIdentifier(std::forward<ExportTaskIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot or cluster to export to Amazon
     * S3.</p>
     */
    inline const Aws::String& GetSourceArn() const { return m_sourceArn; }
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }
    template<typename SourceArnT = Aws::String>
    void SetSourceArn(SourceArnT&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::forward<SourceArnT>(value); }
    template<typename SourceArnT = Aws::String>
    StartExportTaskRequest& WithSourceArn(SourceArnT&& value) { SetSourceArn(std::forward<SourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon S3 bucket to export the snapshot or cluster data
     * to.</p>
     */
    inline const Aws::String& GetS3BucketName() const { return m_s3BucketName; }
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }
    template<typename S3BucketNameT = Aws::String>
    void SetS3BucketName(S3BucketNameT&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::forward<S3BucketNameT>(value); }
    template<typename S3BucketNameT = Aws::String>
    StartExportTaskRequest& WithS3BucketName(S3BucketNameT&& value) { SetS3BucketName(std::forward<S3BucketNameT>(value)); return *this;}
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
    inline const Aws::String& GetIamRoleArn() const { return m_iamRoleArn; }
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
    template<typename IamRoleArnT = Aws::String>
    void SetIamRoleArn(IamRoleArnT&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::forward<IamRoleArnT>(value); }
    template<typename IamRoleArnT = Aws::String>
    StartExportTaskRequest& WithIamRoleArn(IamRoleArnT&& value) { SetIamRoleArn(std::forward<IamRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services KMS key to use to encrypt the data exported
     * to Amazon S3. The Amazon Web Services KMS key identifier is the key ARN, key ID,
     * alias ARN, or alias name for the KMS key. The caller of this operation must be
     * authorized to run the following operations. These can be set in the Amazon Web
     * Services KMS key policy:</p> <ul> <li> <p>kms:CreateGrant</p> </li> <li>
     * <p>kms:DescribeKey</p> </li> </ul>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    StartExportTaskRequest& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 bucket prefix to use as the file name and path of the exported
     * data.</p>
     */
    inline const Aws::String& GetS3Prefix() const { return m_s3Prefix; }
    inline bool S3PrefixHasBeenSet() const { return m_s3PrefixHasBeenSet; }
    template<typename S3PrefixT = Aws::String>
    void SetS3Prefix(S3PrefixT&& value) { m_s3PrefixHasBeenSet = true; m_s3Prefix = std::forward<S3PrefixT>(value); }
    template<typename S3PrefixT = Aws::String>
    StartExportTaskRequest& WithS3Prefix(S3PrefixT&& value) { SetS3Prefix(std::forward<S3PrefixT>(value)); return *this;}
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
    inline const Aws::Vector<Aws::String>& GetExportOnly() const { return m_exportOnly; }
    inline bool ExportOnlyHasBeenSet() const { return m_exportOnlyHasBeenSet; }
    template<typename ExportOnlyT = Aws::Vector<Aws::String>>
    void SetExportOnly(ExportOnlyT&& value) { m_exportOnlyHasBeenSet = true; m_exportOnly = std::forward<ExportOnlyT>(value); }
    template<typename ExportOnlyT = Aws::Vector<Aws::String>>
    StartExportTaskRequest& WithExportOnly(ExportOnlyT&& value) { SetExportOnly(std::forward<ExportOnlyT>(value)); return *this;}
    template<typename ExportOnlyT = Aws::String>
    StartExportTaskRequest& AddExportOnly(ExportOnlyT&& value) { m_exportOnlyHasBeenSet = true; m_exportOnly.emplace_back(std::forward<ExportOnlyT>(value)); return *this; }
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
