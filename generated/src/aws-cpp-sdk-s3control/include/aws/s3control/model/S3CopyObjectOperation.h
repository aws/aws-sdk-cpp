/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/model/S3CannedAccessControlList.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3control/model/S3MetadataDirective.h>
#include <aws/core/utils/DateTime.h>
#include <aws/s3control/model/S3ObjectMetadata.h>
#include <aws/s3control/model/S3StorageClass.h>
#include <aws/s3control/model/S3ObjectLockLegalHoldStatus.h>
#include <aws/s3control/model/S3ObjectLockMode.h>
#include <aws/s3control/model/S3ChecksumAlgorithm.h>
#include <aws/s3control/model/S3Grant.h>
#include <aws/s3control/model/S3Tag.h>
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
namespace S3Control
{
namespace Model
{

  /**
   * <p>Contains the configuration parameters for a PUT Copy object operation. S3
   * Batch Operations passes every object to the underlying <code>CopyObject</code>
   * API operation. For more information about the parameters for this operation, see
   * <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/API/RESTObjectCOPY.html">CopyObject</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/S3CopyObjectOperation">AWS
   * API Reference</a></p>
   */
  class S3CopyObjectOperation
  {
  public:
    AWS_S3CONTROL_API S3CopyObjectOperation() = default;
    AWS_S3CONTROL_API S3CopyObjectOperation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API S3CopyObjectOperation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Specifies the destination bucket Amazon Resource Name (ARN) for the batch
     * copy operation.</p> <ul> <li> <p> <b>General purpose buckets</b> - For example,
     * to copy objects to a general purpose bucket named
     * <code>destinationBucket</code>, set the <code>TargetResource</code> property to
     * <code>arn:aws:s3:::destinationBucket</code>.</p> </li> <li> <p> <b>Directory
     * buckets</b> - For example, to copy objects to a directory bucket named
     * <code>destinationBucket</code> in the Availability Zone identified by the AZ ID
     * <code>usw2-az1</code>, set the <code>TargetResource</code> property to
     * <code>arn:aws:s3express:<i>region</i>:<i>account_id</i>:/bucket/<i>destination_bucket_base_name</i>--<i>usw2-az1</i>--x-s3</code>.
     * A directory bucket as a destination bucket can be in Availability Zone or Local
     * Zone. </p>  <p>Copying objects across different Amazon Web Services
     * Regions isn't supported when the source or destination bucket is in Amazon Web
     * Services Local Zones. The source and destination buckets must have the same
     * parent Amazon Web Services Region. Otherwise, you get an HTTP <code>400 Bad
     * Request</code> error with the error code <code>InvalidRequest</code>.</p>
     *  </li> </ul>
     */
    inline const Aws::String& GetTargetResource() const { return m_targetResource; }
    inline bool TargetResourceHasBeenSet() const { return m_targetResourceHasBeenSet; }
    template<typename TargetResourceT = Aws::String>
    void SetTargetResource(TargetResourceT&& value) { m_targetResourceHasBeenSet = true; m_targetResource = std::forward<TargetResourceT>(value); }
    template<typename TargetResourceT = Aws::String>
    S3CopyObjectOperation& WithTargetResource(TargetResourceT&& value) { SetTargetResource(std::forward<TargetResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>  <p>This functionality is not supported by directory buckets.</p>
     * 
     */
    inline S3CannedAccessControlList GetCannedAccessControlList() const { return m_cannedAccessControlList; }
    inline bool CannedAccessControlListHasBeenSet() const { return m_cannedAccessControlListHasBeenSet; }
    inline void SetCannedAccessControlList(S3CannedAccessControlList value) { m_cannedAccessControlListHasBeenSet = true; m_cannedAccessControlList = value; }
    inline S3CopyObjectOperation& WithCannedAccessControlList(S3CannedAccessControlList value) { SetCannedAccessControlList(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>  <p>This functionality is not supported by directory buckets.</p>
     * 
     */
    inline const Aws::Vector<S3Grant>& GetAccessControlGrants() const { return m_accessControlGrants; }
    inline bool AccessControlGrantsHasBeenSet() const { return m_accessControlGrantsHasBeenSet; }
    template<typename AccessControlGrantsT = Aws::Vector<S3Grant>>
    void SetAccessControlGrants(AccessControlGrantsT&& value) { m_accessControlGrantsHasBeenSet = true; m_accessControlGrants = std::forward<AccessControlGrantsT>(value); }
    template<typename AccessControlGrantsT = Aws::Vector<S3Grant>>
    S3CopyObjectOperation& WithAccessControlGrants(AccessControlGrantsT&& value) { SetAccessControlGrants(std::forward<AccessControlGrantsT>(value)); return *this;}
    template<typename AccessControlGrantsT = S3Grant>
    S3CopyObjectOperation& AddAccessControlGrants(AccessControlGrantsT&& value) { m_accessControlGrantsHasBeenSet = true; m_accessControlGrants.emplace_back(std::forward<AccessControlGrantsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline S3MetadataDirective GetMetadataDirective() const { return m_metadataDirective; }
    inline bool MetadataDirectiveHasBeenSet() const { return m_metadataDirectiveHasBeenSet; }
    inline void SetMetadataDirective(S3MetadataDirective value) { m_metadataDirectiveHasBeenSet = true; m_metadataDirective = value; }
    inline S3CopyObjectOperation& WithMetadataDirective(S3MetadataDirective value) { SetMetadataDirective(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::Utils::DateTime& GetModifiedSinceConstraint() const { return m_modifiedSinceConstraint; }
    inline bool ModifiedSinceConstraintHasBeenSet() const { return m_modifiedSinceConstraintHasBeenSet; }
    template<typename ModifiedSinceConstraintT = Aws::Utils::DateTime>
    void SetModifiedSinceConstraint(ModifiedSinceConstraintT&& value) { m_modifiedSinceConstraintHasBeenSet = true; m_modifiedSinceConstraint = std::forward<ModifiedSinceConstraintT>(value); }
    template<typename ModifiedSinceConstraintT = Aws::Utils::DateTime>
    S3CopyObjectOperation& WithModifiedSinceConstraint(ModifiedSinceConstraintT&& value) { SetModifiedSinceConstraint(std::forward<ModifiedSinceConstraintT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you don't provide this parameter, Amazon S3 copies all the metadata from
     * the original objects. If you specify an empty set, the new objects will have no
     * tags. Otherwise, Amazon S3 assigns the supplied tags to the new objects.</p>
     */
    inline const S3ObjectMetadata& GetNewObjectMetadata() const { return m_newObjectMetadata; }
    inline bool NewObjectMetadataHasBeenSet() const { return m_newObjectMetadataHasBeenSet; }
    template<typename NewObjectMetadataT = S3ObjectMetadata>
    void SetNewObjectMetadata(NewObjectMetadataT&& value) { m_newObjectMetadataHasBeenSet = true; m_newObjectMetadata = std::forward<NewObjectMetadataT>(value); }
    template<typename NewObjectMetadataT = S3ObjectMetadata>
    S3CopyObjectOperation& WithNewObjectMetadata(NewObjectMetadataT&& value) { SetNewObjectMetadata(std::forward<NewObjectMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a list of tags to add to the destination objects after they are
     * copied. If <code>NewObjectTagging</code> is not specified, the tags of the
     * source objects are copied to destination objects by default.</p>  <p>
     * <b>Directory buckets</b> - Tags aren't supported by directory buckets. If your
     * source objects have tags and your destination bucket is a directory bucket,
     * specify an empty tag set in the <code>NewObjectTagging</code> field to prevent
     * copying the source object tags to the directory bucket.</p> 
     */
    inline const Aws::Vector<S3Tag>& GetNewObjectTagging() const { return m_newObjectTagging; }
    inline bool NewObjectTaggingHasBeenSet() const { return m_newObjectTaggingHasBeenSet; }
    template<typename NewObjectTaggingT = Aws::Vector<S3Tag>>
    void SetNewObjectTagging(NewObjectTaggingT&& value) { m_newObjectTaggingHasBeenSet = true; m_newObjectTagging = std::forward<NewObjectTaggingT>(value); }
    template<typename NewObjectTaggingT = Aws::Vector<S3Tag>>
    S3CopyObjectOperation& WithNewObjectTagging(NewObjectTaggingT&& value) { SetNewObjectTagging(std::forward<NewObjectTaggingT>(value)); return *this;}
    template<typename NewObjectTaggingT = S3Tag>
    S3CopyObjectOperation& AddNewObjectTagging(NewObjectTaggingT&& value) { m_newObjectTaggingHasBeenSet = true; m_newObjectTagging.emplace_back(std::forward<NewObjectTaggingT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the destination bucket is configured as a website, specifies an optional
     * metadata property for website redirects,
     * <code>x-amz-website-redirect-location</code>. Allows webpage redirects if the
     * object copy is accessed through a website endpoint.</p>  <p>This
     * functionality is not supported by directory buckets.</p> 
     */
    inline const Aws::String& GetRedirectLocation() const { return m_redirectLocation; }
    inline bool RedirectLocationHasBeenSet() const { return m_redirectLocationHasBeenSet; }
    template<typename RedirectLocationT = Aws::String>
    void SetRedirectLocation(RedirectLocationT&& value) { m_redirectLocationHasBeenSet = true; m_redirectLocation = std::forward<RedirectLocationT>(value); }
    template<typename RedirectLocationT = Aws::String>
    S3CopyObjectOperation& WithRedirectLocation(RedirectLocationT&& value) { SetRedirectLocation(std::forward<RedirectLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>  <p>This functionality is not supported by directory buckets.</p>
     * 
     */
    inline bool GetRequesterPays() const { return m_requesterPays; }
    inline bool RequesterPaysHasBeenSet() const { return m_requesterPaysHasBeenSet; }
    inline void SetRequesterPays(bool value) { m_requesterPaysHasBeenSet = true; m_requesterPays = value; }
    inline S3CopyObjectOperation& WithRequesterPays(bool value) { SetRequesterPays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the storage class for the destination objects in a <code>Copy</code>
     * operation.</p>  <p> <b>Directory buckets </b> - This functionality is not
     * supported by directory buckets. </p> 
     */
    inline S3StorageClass GetStorageClass() const { return m_storageClass; }
    inline bool StorageClassHasBeenSet() const { return m_storageClassHasBeenSet; }
    inline void SetStorageClass(S3StorageClass value) { m_storageClassHasBeenSet = true; m_storageClass = value; }
    inline S3CopyObjectOperation& WithStorageClass(S3StorageClass value) { SetStorageClass(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::Utils::DateTime& GetUnModifiedSinceConstraint() const { return m_unModifiedSinceConstraint; }
    inline bool UnModifiedSinceConstraintHasBeenSet() const { return m_unModifiedSinceConstraintHasBeenSet; }
    template<typename UnModifiedSinceConstraintT = Aws::Utils::DateTime>
    void SetUnModifiedSinceConstraint(UnModifiedSinceConstraintT&& value) { m_unModifiedSinceConstraintHasBeenSet = true; m_unModifiedSinceConstraint = std::forward<UnModifiedSinceConstraintT>(value); }
    template<typename UnModifiedSinceConstraintT = Aws::Utils::DateTime>
    S3CopyObjectOperation& WithUnModifiedSinceConstraint(UnModifiedSinceConstraintT&& value) { SetUnModifiedSinceConstraint(std::forward<UnModifiedSinceConstraintT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the KMS key ID (Key ID, Key ARN, or Key Alias) to use for object
     * encryption. If the KMS key doesn't exist in the same account that's issuing the
     * command, you must use the full Key ARN not the Key ID.</p>  <p>
     * <b>Directory buckets</b> - If you specify <code>SSEAlgorithm</code> with
     * <code>KMS</code>, you must specify the <code> SSEAwsKmsKeyId</code> parameter
     * with the ID (Key ID or Key ARN) of the KMS symmetric encryption customer managed
     * key to use. Otherwise, you get an HTTP <code>400 Bad Request</code> error. The
     * key alias format of the KMS key isn't supported. To encrypt new object copies in
     * a directory bucket with SSE-KMS, you must specify SSE-KMS as the directory
     * bucket's default encryption configuration with a KMS key (specifically, a <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#customer-cmk">customer
     * managed key</a>). The <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#aws-managed-cmk">Amazon
     * Web Services managed key</a> (<code>aws/s3</code>) isn't supported. Your SSE-KMS
     * configuration can only support 1 <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#customer-cmk">customer
     * managed key</a> per directory bucket for the lifetime of the bucket. After you
     * specify a customer managed key for SSE-KMS as the bucket default encryption, you
     * can't override the customer managed key for the bucket's SSE-KMS configuration.
     * Then, when you specify server-side encryption settings for new object copies
     * with SSE-KMS, you must make sure the encryption key is the same customer managed
     * key that you specified for the directory bucket's default encryption
     * configuration. </p> 
     */
    inline const Aws::String& GetSSEAwsKmsKeyId() const { return m_sSEAwsKmsKeyId; }
    inline bool SSEAwsKmsKeyIdHasBeenSet() const { return m_sSEAwsKmsKeyIdHasBeenSet; }
    template<typename SSEAwsKmsKeyIdT = Aws::String>
    void SetSSEAwsKmsKeyId(SSEAwsKmsKeyIdT&& value) { m_sSEAwsKmsKeyIdHasBeenSet = true; m_sSEAwsKmsKeyId = std::forward<SSEAwsKmsKeyIdT>(value); }
    template<typename SSEAwsKmsKeyIdT = Aws::String>
    S3CopyObjectOperation& WithSSEAwsKmsKeyId(SSEAwsKmsKeyIdT&& value) { SetSSEAwsKmsKeyId(std::forward<SSEAwsKmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the folder prefix that you want the objects to be copied into. For
     * example, to copy objects into a folder named <code>Folder1</code> in the
     * destination bucket, set the <code>TargetKeyPrefix</code> property to
     * <code>Folder1</code>.</p>
     */
    inline const Aws::String& GetTargetKeyPrefix() const { return m_targetKeyPrefix; }
    inline bool TargetKeyPrefixHasBeenSet() const { return m_targetKeyPrefixHasBeenSet; }
    template<typename TargetKeyPrefixT = Aws::String>
    void SetTargetKeyPrefix(TargetKeyPrefixT&& value) { m_targetKeyPrefixHasBeenSet = true; m_targetKeyPrefix = std::forward<TargetKeyPrefixT>(value); }
    template<typename TargetKeyPrefixT = Aws::String>
    S3CopyObjectOperation& WithTargetKeyPrefix(TargetKeyPrefixT&& value) { SetTargetKeyPrefix(std::forward<TargetKeyPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The legal hold status to be applied to all objects in the Batch Operations
     * job.</p>  <p>This functionality is not supported by directory buckets.</p>
     * 
     */
    inline S3ObjectLockLegalHoldStatus GetObjectLockLegalHoldStatus() const { return m_objectLockLegalHoldStatus; }
    inline bool ObjectLockLegalHoldStatusHasBeenSet() const { return m_objectLockLegalHoldStatusHasBeenSet; }
    inline void SetObjectLockLegalHoldStatus(S3ObjectLockLegalHoldStatus value) { m_objectLockLegalHoldStatusHasBeenSet = true; m_objectLockLegalHoldStatus = value; }
    inline S3CopyObjectOperation& WithObjectLockLegalHoldStatus(S3ObjectLockLegalHoldStatus value) { SetObjectLockLegalHoldStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retention mode to be applied to all objects in the Batch Operations
     * job.</p>  <p>This functionality is not supported by directory buckets.</p>
     * 
     */
    inline S3ObjectLockMode GetObjectLockMode() const { return m_objectLockMode; }
    inline bool ObjectLockModeHasBeenSet() const { return m_objectLockModeHasBeenSet; }
    inline void SetObjectLockMode(S3ObjectLockMode value) { m_objectLockModeHasBeenSet = true; m_objectLockMode = value; }
    inline S3CopyObjectOperation& WithObjectLockMode(S3ObjectLockMode value) { SetObjectLockMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the applied object retention configuration expires on all
     * objects in the Batch Operations job.</p>  <p>This functionality is not
     * supported by directory buckets.</p> 
     */
    inline const Aws::Utils::DateTime& GetObjectLockRetainUntilDate() const { return m_objectLockRetainUntilDate; }
    inline bool ObjectLockRetainUntilDateHasBeenSet() const { return m_objectLockRetainUntilDateHasBeenSet; }
    template<typename ObjectLockRetainUntilDateT = Aws::Utils::DateTime>
    void SetObjectLockRetainUntilDate(ObjectLockRetainUntilDateT&& value) { m_objectLockRetainUntilDateHasBeenSet = true; m_objectLockRetainUntilDate = std::forward<ObjectLockRetainUntilDateT>(value); }
    template<typename ObjectLockRetainUntilDateT = Aws::Utils::DateTime>
    S3CopyObjectOperation& WithObjectLockRetainUntilDate(ObjectLockRetainUntilDateT&& value) { SetObjectLockRetainUntilDate(std::forward<ObjectLockRetainUntilDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether Amazon S3 should use an S3 Bucket Key for object encryption
     * with server-side encryption using Amazon Web Services KMS (SSE-KMS). Setting
     * this header to <code>true</code> causes Amazon S3 to use an S3 Bucket Key for
     * object encryption with SSE-KMS.</p> <p>Specifying this header with an
     * <i>Copy</i> action doesn’t affect <i>bucket-level</i> settings for S3 Bucket
     * Key.</p>  <p> <b>Directory buckets</b> - S3 Bucket Keys aren't supported,
     * when you copy SSE-KMS encrypted objects from general purpose buckets to
     * directory buckets, from directory buckets to general purpose buckets, or between
     * directory buckets, through <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/directory-buckets-objects-Batch-Ops">the
     * Copy operation in Batch Operations</a>. In this case, Amazon S3 makes a call to
     * KMS every time a copy request is made for a KMS-encrypted object.</p> 
     */
    inline bool GetBucketKeyEnabled() const { return m_bucketKeyEnabled; }
    inline bool BucketKeyEnabledHasBeenSet() const { return m_bucketKeyEnabledHasBeenSet; }
    inline void SetBucketKeyEnabled(bool value) { m_bucketKeyEnabledHasBeenSet = true; m_bucketKeyEnabled = value; }
    inline S3CopyObjectOperation& WithBucketKeyEnabled(bool value) { SetBucketKeyEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the algorithm that you want Amazon S3 to use to create the
     * checksum. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/checking-object-integrity.html">
     * Checking object integrity</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline S3ChecksumAlgorithm GetChecksumAlgorithm() const { return m_checksumAlgorithm; }
    inline bool ChecksumAlgorithmHasBeenSet() const { return m_checksumAlgorithmHasBeenSet; }
    inline void SetChecksumAlgorithm(S3ChecksumAlgorithm value) { m_checksumAlgorithmHasBeenSet = true; m_checksumAlgorithm = value; }
    inline S3CopyObjectOperation& WithChecksumAlgorithm(S3ChecksumAlgorithm value) { SetChecksumAlgorithm(value); return *this;}
    ///@}
  private:

    Aws::String m_targetResource;
    bool m_targetResourceHasBeenSet = false;

    S3CannedAccessControlList m_cannedAccessControlList{S3CannedAccessControlList::NOT_SET};
    bool m_cannedAccessControlListHasBeenSet = false;

    Aws::Vector<S3Grant> m_accessControlGrants;
    bool m_accessControlGrantsHasBeenSet = false;

    S3MetadataDirective m_metadataDirective{S3MetadataDirective::NOT_SET};
    bool m_metadataDirectiveHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedSinceConstraint{};
    bool m_modifiedSinceConstraintHasBeenSet = false;

    S3ObjectMetadata m_newObjectMetadata;
    bool m_newObjectMetadataHasBeenSet = false;

    Aws::Vector<S3Tag> m_newObjectTagging;
    bool m_newObjectTaggingHasBeenSet = false;

    Aws::String m_redirectLocation;
    bool m_redirectLocationHasBeenSet = false;

    bool m_requesterPays{false};
    bool m_requesterPaysHasBeenSet = false;

    S3StorageClass m_storageClass{S3StorageClass::NOT_SET};
    bool m_storageClassHasBeenSet = false;

    Aws::Utils::DateTime m_unModifiedSinceConstraint{};
    bool m_unModifiedSinceConstraintHasBeenSet = false;

    Aws::String m_sSEAwsKmsKeyId;
    bool m_sSEAwsKmsKeyIdHasBeenSet = false;

    Aws::String m_targetKeyPrefix;
    bool m_targetKeyPrefixHasBeenSet = false;

    S3ObjectLockLegalHoldStatus m_objectLockLegalHoldStatus{S3ObjectLockLegalHoldStatus::NOT_SET};
    bool m_objectLockLegalHoldStatusHasBeenSet = false;

    S3ObjectLockMode m_objectLockMode{S3ObjectLockMode::NOT_SET};
    bool m_objectLockModeHasBeenSet = false;

    Aws::Utils::DateTime m_objectLockRetainUntilDate{};
    bool m_objectLockRetainUntilDateHasBeenSet = false;

    bool m_bucketKeyEnabled{false};
    bool m_bucketKeyEnabledHasBeenSet = false;

    S3ChecksumAlgorithm m_checksumAlgorithm{S3ChecksumAlgorithm::NOT_SET};
    bool m_checksumAlgorithmHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
