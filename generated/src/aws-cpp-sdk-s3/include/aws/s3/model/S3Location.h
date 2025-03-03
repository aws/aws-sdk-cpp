/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3/model/Encryption.h>
#include <aws/s3/model/ObjectCannedACL.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3/model/Tagging.h>
#include <aws/s3/model/StorageClass.h>
#include <aws/s3/model/Grant.h>
#include <aws/s3/model/MetadataEntry.h>
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
namespace S3
{
namespace Model
{

  /**
   * <p>Describes an Amazon S3 location that will receive the results of the restore
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/S3Location">AWS API
   * Reference</a></p>
   */
  class S3Location
  {
  public:
    AWS_S3_API S3Location() = default;
    AWS_S3_API S3Location(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3_API S3Location& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The name of the bucket where the restore results will be placed.</p>
     */
    inline const Aws::String& GetBucketName() const { return m_bucketName; }
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }
    template<typename BucketNameT = Aws::String>
    void SetBucketName(BucketNameT&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::forward<BucketNameT>(value); }
    template<typename BucketNameT = Aws::String>
    S3Location& WithBucketName(BucketNameT&& value) { SetBucketName(std::forward<BucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prefix that is prepended to the restore results for this request.</p>
     */
    inline const Aws::String& GetPrefix() const { return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    template<typename PrefixT = Aws::String>
    void SetPrefix(PrefixT&& value) { m_prefixHasBeenSet = true; m_prefix = std::forward<PrefixT>(value); }
    template<typename PrefixT = Aws::String>
    S3Location& WithPrefix(PrefixT&& value) { SetPrefix(std::forward<PrefixT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Encryption& GetEncryption() const { return m_encryption; }
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }
    template<typename EncryptionT = Encryption>
    void SetEncryption(EncryptionT&& value) { m_encryptionHasBeenSet = true; m_encryption = std::forward<EncryptionT>(value); }
    template<typename EncryptionT = Encryption>
    S3Location& WithEncryption(EncryptionT&& value) { SetEncryption(std::forward<EncryptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The canned ACL to apply to the restore results.</p>
     */
    inline ObjectCannedACL GetCannedACL() const { return m_cannedACL; }
    inline bool CannedACLHasBeenSet() const { return m_cannedACLHasBeenSet; }
    inline void SetCannedACL(ObjectCannedACL value) { m_cannedACLHasBeenSet = true; m_cannedACL = value; }
    inline S3Location& WithCannedACL(ObjectCannedACL value) { SetCannedACL(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of grants that control access to the staged results.</p>
     */
    inline const Aws::Vector<Grant>& GetAccessControlList() const { return m_accessControlList; }
    inline bool AccessControlListHasBeenSet() const { return m_accessControlListHasBeenSet; }
    template<typename AccessControlListT = Aws::Vector<Grant>>
    void SetAccessControlList(AccessControlListT&& value) { m_accessControlListHasBeenSet = true; m_accessControlList = std::forward<AccessControlListT>(value); }
    template<typename AccessControlListT = Aws::Vector<Grant>>
    S3Location& WithAccessControlList(AccessControlListT&& value) { SetAccessControlList(std::forward<AccessControlListT>(value)); return *this;}
    template<typename AccessControlListT = Grant>
    S3Location& AddAccessControlList(AccessControlListT&& value) { m_accessControlListHasBeenSet = true; m_accessControlList.emplace_back(std::forward<AccessControlListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tag-set that is applied to the restore results.</p>
     */
    inline const Tagging& GetTagging() const { return m_tagging; }
    inline bool TaggingHasBeenSet() const { return m_taggingHasBeenSet; }
    template<typename TaggingT = Tagging>
    void SetTagging(TaggingT&& value) { m_taggingHasBeenSet = true; m_tagging = std::forward<TaggingT>(value); }
    template<typename TaggingT = Tagging>
    S3Location& WithTagging(TaggingT&& value) { SetTagging(std::forward<TaggingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of metadata to store with the restore results in S3.</p>
     */
    inline const Aws::Vector<MetadataEntry>& GetUserMetadata() const { return m_userMetadata; }
    inline bool UserMetadataHasBeenSet() const { return m_userMetadataHasBeenSet; }
    template<typename UserMetadataT = Aws::Vector<MetadataEntry>>
    void SetUserMetadata(UserMetadataT&& value) { m_userMetadataHasBeenSet = true; m_userMetadata = std::forward<UserMetadataT>(value); }
    template<typename UserMetadataT = Aws::Vector<MetadataEntry>>
    S3Location& WithUserMetadata(UserMetadataT&& value) { SetUserMetadata(std::forward<UserMetadataT>(value)); return *this;}
    template<typename UserMetadataT = MetadataEntry>
    S3Location& AddUserMetadata(UserMetadataT&& value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace_back(std::forward<UserMetadataT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The class of storage used to store the restore results.</p>
     */
    inline StorageClass GetStorageClass() const { return m_storageClass; }
    inline bool StorageClassHasBeenSet() const { return m_storageClassHasBeenSet; }
    inline void SetStorageClass(StorageClass value) { m_storageClassHasBeenSet = true; m_storageClass = value; }
    inline S3Location& WithStorageClass(StorageClass value) { SetStorageClass(value); return *this;}
    ///@}
  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;

    Encryption m_encryption;
    bool m_encryptionHasBeenSet = false;

    ObjectCannedACL m_cannedACL{ObjectCannedACL::NOT_SET};
    bool m_cannedACLHasBeenSet = false;

    Aws::Vector<Grant> m_accessControlList;
    bool m_accessControlListHasBeenSet = false;

    Tagging m_tagging;
    bool m_taggingHasBeenSet = false;

    Aws::Vector<MetadataEntry> m_userMetadata;
    bool m_userMetadataHasBeenSet = false;

    StorageClass m_storageClass{StorageClass::NOT_SET};
    bool m_storageClassHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
