/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3/model/ChecksumType.h>
#include <aws/s3/model/ObjectVersionStorageClass.h>
#include <aws/core/utils/DateTime.h>
#include <aws/s3/model/Owner.h>
#include <aws/s3/model/RestoreStatus.h>
#include <aws/s3/model/ChecksumAlgorithm.h>
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
   * <p>The version of an object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/ObjectVersion">AWS
   * API Reference</a></p>
   */
  class ObjectVersion
  {
  public:
    AWS_S3_API ObjectVersion() = default;
    AWS_S3_API ObjectVersion(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3_API ObjectVersion& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The entity tag is an MD5 hash of that version of the object.</p>
     */
    inline const Aws::String& GetETag() const { return m_eTag; }
    inline bool ETagHasBeenSet() const { return m_eTagHasBeenSet; }
    template<typename ETagT = Aws::String>
    void SetETag(ETagT&& value) { m_eTagHasBeenSet = true; m_eTag = std::forward<ETagT>(value); }
    template<typename ETagT = Aws::String>
    ObjectVersion& WithETag(ETagT&& value) { SetETag(std::forward<ETagT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The algorithm that was used to create a checksum of the object.</p>
     */
    inline const Aws::Vector<ChecksumAlgorithm>& GetChecksumAlgorithm() const { return m_checksumAlgorithm; }
    inline bool ChecksumAlgorithmHasBeenSet() const { return m_checksumAlgorithmHasBeenSet; }
    template<typename ChecksumAlgorithmT = Aws::Vector<ChecksumAlgorithm>>
    void SetChecksumAlgorithm(ChecksumAlgorithmT&& value) { m_checksumAlgorithmHasBeenSet = true; m_checksumAlgorithm = std::forward<ChecksumAlgorithmT>(value); }
    template<typename ChecksumAlgorithmT = Aws::Vector<ChecksumAlgorithm>>
    ObjectVersion& WithChecksumAlgorithm(ChecksumAlgorithmT&& value) { SetChecksumAlgorithm(std::forward<ChecksumAlgorithmT>(value)); return *this;}
    inline ObjectVersion& AddChecksumAlgorithm(ChecksumAlgorithm value) { m_checksumAlgorithmHasBeenSet = true; m_checksumAlgorithm.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The checksum type that is used to calculate the object’s checksum value. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/checking-object-integrity.html">Checking
     * object integrity</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline ChecksumType GetChecksumType() const { return m_checksumType; }
    inline bool ChecksumTypeHasBeenSet() const { return m_checksumTypeHasBeenSet; }
    inline void SetChecksumType(ChecksumType value) { m_checksumTypeHasBeenSet = true; m_checksumType = value; }
    inline ObjectVersion& WithChecksumType(ChecksumType value) { SetChecksumType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Size in bytes of the object.</p>
     */
    inline long long GetSize() const { return m_size; }
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }
    inline void SetSize(long long value) { m_sizeHasBeenSet = true; m_size = value; }
    inline ObjectVersion& WithSize(long long value) { SetSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The class of storage used to store the object.</p>
     */
    inline ObjectVersionStorageClass GetStorageClass() const { return m_storageClass; }
    inline bool StorageClassHasBeenSet() const { return m_storageClassHasBeenSet; }
    inline void SetStorageClass(ObjectVersionStorageClass value) { m_storageClassHasBeenSet = true; m_storageClass = value; }
    inline ObjectVersion& WithStorageClass(ObjectVersionStorageClass value) { SetStorageClass(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The object key.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    ObjectVersion& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Version ID of an object.</p>
     */
    inline const Aws::String& GetVersionId() const { return m_versionId; }
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }
    template<typename VersionIdT = Aws::String>
    void SetVersionId(VersionIdT&& value) { m_versionIdHasBeenSet = true; m_versionId = std::forward<VersionIdT>(value); }
    template<typename VersionIdT = Aws::String>
    ObjectVersion& WithVersionId(VersionIdT&& value) { SetVersionId(std::forward<VersionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the object is (true) or is not (false) the latest version
     * of an object.</p>
     */
    inline bool GetIsLatest() const { return m_isLatest; }
    inline bool IsLatestHasBeenSet() const { return m_isLatestHasBeenSet; }
    inline void SetIsLatest(bool value) { m_isLatestHasBeenSet = true; m_isLatest = value; }
    inline ObjectVersion& WithIsLatest(bool value) { SetIsLatest(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date and time when the object was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModified() const { return m_lastModified; }
    inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }
    template<typename LastModifiedT = Aws::Utils::DateTime>
    void SetLastModified(LastModifiedT&& value) { m_lastModifiedHasBeenSet = true; m_lastModified = std::forward<LastModifiedT>(value); }
    template<typename LastModifiedT = Aws::Utils::DateTime>
    ObjectVersion& WithLastModified(LastModifiedT&& value) { SetLastModified(std::forward<LastModifiedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the owner of the object.</p>
     */
    inline const Owner& GetOwner() const { return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    template<typename OwnerT = Owner>
    void SetOwner(OwnerT&& value) { m_ownerHasBeenSet = true; m_owner = std::forward<OwnerT>(value); }
    template<typename OwnerT = Owner>
    ObjectVersion& WithOwner(OwnerT&& value) { SetOwner(std::forward<OwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the restoration status of an object. Objects in certain storage
     * classes must be restored before they can be retrieved. For more information
     * about these storage classes and how to work with archived objects, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/archived-objects.html">
     * Working with archived objects</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline const RestoreStatus& GetRestoreStatus() const { return m_restoreStatus; }
    inline bool RestoreStatusHasBeenSet() const { return m_restoreStatusHasBeenSet; }
    template<typename RestoreStatusT = RestoreStatus>
    void SetRestoreStatus(RestoreStatusT&& value) { m_restoreStatusHasBeenSet = true; m_restoreStatus = std::forward<RestoreStatusT>(value); }
    template<typename RestoreStatusT = RestoreStatus>
    ObjectVersion& WithRestoreStatus(RestoreStatusT&& value) { SetRestoreStatus(std::forward<RestoreStatusT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_eTag;
    bool m_eTagHasBeenSet = false;

    Aws::Vector<ChecksumAlgorithm> m_checksumAlgorithm;
    bool m_checksumAlgorithmHasBeenSet = false;

    ChecksumType m_checksumType{ChecksumType::NOT_SET};
    bool m_checksumTypeHasBeenSet = false;

    long long m_size{0};
    bool m_sizeHasBeenSet = false;

    ObjectVersionStorageClass m_storageClass{ObjectVersionStorageClass::NOT_SET};
    bool m_storageClassHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet = false;

    bool m_isLatest{false};
    bool m_isLatestHasBeenSet = false;

    Aws::Utils::DateTime m_lastModified{};
    bool m_lastModifiedHasBeenSet = false;

    Owner m_owner;
    bool m_ownerHasBeenSet = false;

    RestoreStatus m_restoreStatus;
    bool m_restoreStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
