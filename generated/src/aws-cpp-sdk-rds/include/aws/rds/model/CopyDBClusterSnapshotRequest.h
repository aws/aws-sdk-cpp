/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/Tag.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CopyDBClusterSnapshotMessage">AWS
   * API Reference</a></p>
   */
  class CopyDBClusterSnapshotRequest : public RDSRequest
  {
  public:
    AWS_RDS_API CopyDBClusterSnapshotRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CopyDBClusterSnapshot"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The identifier of the DB cluster snapshot to copy. This parameter isn't
     * case-sensitive.</p> <p>You can't copy an encrypted, shared DB cluster snapshot
     * from one Amazon Web Services Region to another.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must specify a valid system snapshot in the "available" state.</p> </li>
     * <li> <p>If the source snapshot is in the same Amazon Web Services Region as the
     * copy, specify a valid DB snapshot identifier.</p> </li> <li> <p>If the source
     * snapshot is in a different Amazon Web Services Region than the copy, specify a
     * valid DB cluster snapshot ARN. For more information, go to <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_CopySnapshot.html#USER_CopySnapshot.AcrossRegions">
     * Copying Snapshots Across Amazon Web Services Regions</a> in the <i>Amazon Aurora
     * User Guide</i>.</p> </li> </ul> <p>Example: <code>my-cluster-snapshot1</code>
     * </p>
     */
    inline const Aws::String& GetSourceDBClusterSnapshotIdentifier() const { return m_sourceDBClusterSnapshotIdentifier; }
    inline bool SourceDBClusterSnapshotIdentifierHasBeenSet() const { return m_sourceDBClusterSnapshotIdentifierHasBeenSet; }
    template<typename SourceDBClusterSnapshotIdentifierT = Aws::String>
    void SetSourceDBClusterSnapshotIdentifier(SourceDBClusterSnapshotIdentifierT&& value) { m_sourceDBClusterSnapshotIdentifierHasBeenSet = true; m_sourceDBClusterSnapshotIdentifier = std::forward<SourceDBClusterSnapshotIdentifierT>(value); }
    template<typename SourceDBClusterSnapshotIdentifierT = Aws::String>
    CopyDBClusterSnapshotRequest& WithSourceDBClusterSnapshotIdentifier(SourceDBClusterSnapshotIdentifierT&& value) { SetSourceDBClusterSnapshotIdentifier(std::forward<SourceDBClusterSnapshotIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the new DB cluster snapshot to create from the source DB
     * cluster snapshot. This parameter isn't case-sensitive.</p> <p>Constraints:</p>
     * <ul> <li> <p>Must contain from 1 to 63 letters, numbers, or hyphens.</p> </li>
     * <li> <p>First character must be a letter.</p> </li> <li> <p>Can't end with a
     * hyphen or contain two consecutive hyphens.</p> </li> </ul> <p>Example:
     * <code>my-cluster-snapshot2</code> </p>
     */
    inline const Aws::String& GetTargetDBClusterSnapshotIdentifier() const { return m_targetDBClusterSnapshotIdentifier; }
    inline bool TargetDBClusterSnapshotIdentifierHasBeenSet() const { return m_targetDBClusterSnapshotIdentifierHasBeenSet; }
    template<typename TargetDBClusterSnapshotIdentifierT = Aws::String>
    void SetTargetDBClusterSnapshotIdentifier(TargetDBClusterSnapshotIdentifierT&& value) { m_targetDBClusterSnapshotIdentifierHasBeenSet = true; m_targetDBClusterSnapshotIdentifier = std::forward<TargetDBClusterSnapshotIdentifierT>(value); }
    template<typename TargetDBClusterSnapshotIdentifierT = Aws::String>
    CopyDBClusterSnapshotRequest& WithTargetDBClusterSnapshotIdentifier(TargetDBClusterSnapshotIdentifierT&& value) { SetTargetDBClusterSnapshotIdentifier(std::forward<TargetDBClusterSnapshotIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services KMS key identifier for an encrypted DB cluster
     * snapshot. The Amazon Web Services KMS key identifier is the key ARN, key ID,
     * alias ARN, or alias name for the Amazon Web Services KMS key.</p> <p>If you copy
     * an encrypted DB cluster snapshot from your Amazon Web Services account, you can
     * specify a value for <code>KmsKeyId</code> to encrypt the copy with a new KMS
     * key. If you don't specify a value for <code>KmsKeyId</code>, then the copy of
     * the DB cluster snapshot is encrypted with the same KMS key as the source DB
     * cluster snapshot.</p> <p>If you copy an encrypted DB cluster snapshot that is
     * shared from another Amazon Web Services account, then you must specify a value
     * for <code>KmsKeyId</code>.</p> <p>To copy an encrypted DB cluster snapshot to
     * another Amazon Web Services Region, you must set <code>KmsKeyId</code> to the
     * Amazon Web Services KMS key identifier you want to use to encrypt the copy of
     * the DB cluster snapshot in the destination Amazon Web Services Region. KMS keys
     * are specific to the Amazon Web Services Region that they are created in, and you
     * can't use KMS keys from one Amazon Web Services Region in another Amazon Web
     * Services Region.</p> <p>If you copy an unencrypted DB cluster snapshot and
     * specify a value for the <code>KmsKeyId</code> parameter, an error is
     * returned.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    CopyDBClusterSnapshotRequest& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When you are copying a DB cluster snapshot from one Amazon Web Services
     * GovCloud (US) Region to another, the URL that contains a Signature Version 4
     * signed request for the <code>CopyDBClusterSnapshot</code> API operation in the
     * Amazon Web Services Region that contains the source DB cluster snapshot to copy.
     * Use the <code>PreSignedUrl</code> parameter when copying an encrypted DB cluster
     * snapshot from another Amazon Web Services Region. Don't specify
     * <code>PreSignedUrl</code> when copying an encrypted DB cluster snapshot in the
     * same Amazon Web Services Region.</p> <p>This setting applies only to Amazon Web
     * Services GovCloud (US) Regions. It's ignored in other Amazon Web Services
     * Regions.</p> <p>The presigned URL must be a valid request for the
     * <code>CopyDBClusterSnapshot</code> API operation that can run in the source
     * Amazon Web Services Region that contains the encrypted DB cluster snapshot to
     * copy. The presigned URL request must contain the following parameter values:</p>
     * <ul> <li> <p> <code>KmsKeyId</code> - The KMS key identifier for the KMS key to
     * use to encrypt the copy of the DB cluster snapshot in the destination Amazon Web
     * Services Region. This is the same identifier for both the
     * <code>CopyDBClusterSnapshot</code> operation that is called in the destination
     * Amazon Web Services Region, and the operation contained in the presigned
     * URL.</p> </li> <li> <p> <code>DestinationRegion</code> - The name of the Amazon
     * Web Services Region that the DB cluster snapshot is to be created in.</p> </li>
     * <li> <p> <code>SourceDBClusterSnapshotIdentifier</code> - The DB cluster
     * snapshot identifier for the encrypted DB cluster snapshot to be copied. This
     * identifier must be in the Amazon Resource Name (ARN) format for the source
     * Amazon Web Services Region. For example, if you are copying an encrypted DB
     * cluster snapshot from the us-west-2 Amazon Web Services Region, then your
     * <code>SourceDBClusterSnapshotIdentifier</code> looks like the following example:
     * <code>arn:aws:rds:us-west-2:123456789012:cluster-snapshot:aurora-cluster1-snapshot-20161115</code>.</p>
     * </li> </ul> <p>To learn how to generate a Signature Version 4 signed request,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">
     * Authenticating Requests: Using Query Parameters (Amazon Web Services Signature
     * Version 4)</a> and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">
     * Signature Version 4 Signing Process</a>.</p>  <p>If you are using an
     * Amazon Web Services SDK tool or the CLI, you can specify
     * <code>SourceRegion</code> (or <code>--source-region</code> for the CLI) instead
     * of specifying <code>PreSignedUrl</code> manually. Specifying
     * <code>SourceRegion</code> autogenerates a presigned URL that is a valid request
     * for the operation that can run in the source Amazon Web Services Region.</p>
     * 
     */
    inline const Aws::String& GetPreSignedUrl() const { return m_preSignedUrl; }
    inline bool PreSignedUrlHasBeenSet() const { return m_preSignedUrlHasBeenSet; }
    template<typename PreSignedUrlT = Aws::String>
    void SetPreSignedUrl(PreSignedUrlT&& value) { m_preSignedUrlHasBeenSet = true; m_preSignedUrl = std::forward<PreSignedUrlT>(value); }
    template<typename PreSignedUrlT = Aws::String>
    CopyDBClusterSnapshotRequest& WithPreSignedUrl(PreSignedUrlT&& value) { SetPreSignedUrl(std::forward<PreSignedUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to copy all tags from the source DB cluster snapshot to the
     * target DB cluster snapshot. By default, tags are not copied.</p>
     */
    inline bool GetCopyTags() const { return m_copyTags; }
    inline bool CopyTagsHasBeenSet() const { return m_copyTagsHasBeenSet; }
    inline void SetCopyTags(bool value) { m_copyTagsHasBeenSet = true; m_copyTags = value; }
    inline CopyDBClusterSnapshotRequest& WithCopyTags(bool value) { SetCopyTags(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CopyDBClusterSnapshotRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CopyDBClusterSnapshotRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * If SourceRegion is specified, SDKs will generate pre-signed URLs and populate the pre-signed URL field.
     */
    inline const Aws::String& GetSourceRegion() const { return m_sourceRegion; }
    inline bool SourceRegionHasBeenSet() const { return m_sourceRegionHasBeenSet; }
    template<typename SourceRegionT = Aws::String>
    void SetSourceRegion(SourceRegionT&& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = std::forward<SourceRegionT>(value); }
    template<typename SourceRegionT = Aws::String>
    CopyDBClusterSnapshotRequest& WithSourceRegion(SourceRegionT&& value) { SetSourceRegion(std::forward<SourceRegionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sourceDBClusterSnapshotIdentifier;
    bool m_sourceDBClusterSnapshotIdentifierHasBeenSet = false;

    Aws::String m_targetDBClusterSnapshotIdentifier;
    bool m_targetDBClusterSnapshotIdentifierHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_preSignedUrl;
    bool m_preSignedUrlHasBeenSet = false;

    bool m_copyTags{false};
    bool m_copyTagsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_sourceRegion;
    bool m_sourceRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
