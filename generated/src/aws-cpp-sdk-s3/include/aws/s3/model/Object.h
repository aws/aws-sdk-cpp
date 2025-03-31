/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3/model/ChecksumType.h>
#include <aws/s3/model/ObjectStorageClass.h>
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
   * <p>An object consists of data and its descriptive metadata.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/Object">AWS API
   * Reference</a></p>
   */
  class Object
  {
  public:
    AWS_S3_API Object() = default;
    AWS_S3_API Object(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3_API Object& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The name that you assign to an object. You use the object key to retrieve the
     * object.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    Object& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Creation date of the object.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModified() const { return m_lastModified; }
    inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }
    template<typename LastModifiedT = Aws::Utils::DateTime>
    void SetLastModified(LastModifiedT&& value) { m_lastModifiedHasBeenSet = true; m_lastModified = std::forward<LastModifiedT>(value); }
    template<typename LastModifiedT = Aws::Utils::DateTime>
    Object& WithLastModified(LastModifiedT&& value) { SetLastModified(std::forward<LastModifiedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity tag is a hash of the object. The ETag reflects changes only to the
     * contents of an object, not its metadata. The ETag may or may not be an MD5
     * digest of the object data. Whether or not it is depends on how the object was
     * created and how it is encrypted as described below:</p> <ul> <li> <p>Objects
     * created by the PUT Object, POST Object, or Copy operation, or through the Amazon
     * Web Services Management Console, and are encrypted by SSE-S3 or plaintext, have
     * ETags that are an MD5 digest of their object data.</p> </li> <li> <p>Objects
     * created by the PUT Object, POST Object, or Copy operation, or through the Amazon
     * Web Services Management Console, and are encrypted by SSE-C or SSE-KMS, have
     * ETags that are not an MD5 digest of their object data.</p> </li> <li> <p>If an
     * object is created by either the Multipart Upload or Part Copy operation, the
     * ETag is not an MD5 digest, regardless of the method of encryption. If an object
     * is larger than 16 MB, the Amazon Web Services Management Console will upload or
     * copy that object as a Multipart Upload, and therefore the ETag will not be an
     * MD5 digest.</p> </li> </ul>  <p> <b>Directory buckets</b> - MD5 is not
     * supported by directory buckets.</p> 
     */
    inline const Aws::String& GetETag() const { return m_eTag; }
    inline bool ETagHasBeenSet() const { return m_eTagHasBeenSet; }
    template<typename ETagT = Aws::String>
    void SetETag(ETagT&& value) { m_eTagHasBeenSet = true; m_eTag = std::forward<ETagT>(value); }
    template<typename ETagT = Aws::String>
    Object& WithETag(ETagT&& value) { SetETag(std::forward<ETagT>(value)); return *this;}
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
    Object& WithChecksumAlgorithm(ChecksumAlgorithmT&& value) { SetChecksumAlgorithm(std::forward<ChecksumAlgorithmT>(value)); return *this;}
    inline Object& AddChecksumAlgorithm(ChecksumAlgorithm value) { m_checksumAlgorithmHasBeenSet = true; m_checksumAlgorithm.push_back(value); return *this; }
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
    inline Object& WithChecksumType(ChecksumType value) { SetChecksumType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Size in bytes of the object</p>
     */
    inline long long GetSize() const { return m_size; }
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }
    inline void SetSize(long long value) { m_sizeHasBeenSet = true; m_size = value; }
    inline Object& WithSize(long long value) { SetSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The class of storage used to store the object.</p>  <p> <b>Directory
     * buckets</b> - Directory buckets only support <code>EXPRESS_ONEZONE</code> (the
     * S3 Express One Zone storage class) in Availability Zones and
     * <code>ONEZONE_IA</code> (the S3 One Zone-Infrequent Access storage class) in
     * Dedicated Local Zones.</p> 
     */
    inline ObjectStorageClass GetStorageClass() const { return m_storageClass; }
    inline bool StorageClassHasBeenSet() const { return m_storageClassHasBeenSet; }
    inline void SetStorageClass(ObjectStorageClass value) { m_storageClassHasBeenSet = true; m_storageClass = value; }
    inline Object& WithStorageClass(ObjectStorageClass value) { SetStorageClass(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner of the object</p>  <p> <b>Directory buckets</b> - The bucket
     * owner is returned as the object owner.</p> 
     */
    inline const Owner& GetOwner() const { return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    template<typename OwnerT = Owner>
    void SetOwner(OwnerT&& value) { m_ownerHasBeenSet = true; m_owner = std::forward<OwnerT>(value); }
    template<typename OwnerT = Owner>
    Object& WithOwner(OwnerT&& value) { SetOwner(std::forward<OwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the restoration status of an object. Objects in certain storage
     * classes must be restored before they can be retrieved. For more information
     * about these storage classes and how to work with archived objects, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/archived-objects.html">
     * Working with archived objects</a> in the <i>Amazon S3 User Guide</i>.</p> 
     * <p>This functionality is not supported for directory buckets. Directory buckets
     * only support <code>EXPRESS_ONEZONE</code> (the S3 Express One Zone storage
     * class) in Availability Zones and <code>ONEZONE_IA</code> (the S3 One
     * Zone-Infrequent Access storage class) in Dedicated Local Zones.</p> 
     */
    inline const RestoreStatus& GetRestoreStatus() const { return m_restoreStatus; }
    inline bool RestoreStatusHasBeenSet() const { return m_restoreStatusHasBeenSet; }
    template<typename RestoreStatusT = RestoreStatus>
    void SetRestoreStatus(RestoreStatusT&& value) { m_restoreStatusHasBeenSet = true; m_restoreStatus = std::forward<RestoreStatusT>(value); }
    template<typename RestoreStatusT = RestoreStatus>
    Object& WithRestoreStatus(RestoreStatusT&& value) { SetRestoreStatus(std::forward<RestoreStatusT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::Utils::DateTime m_lastModified{};
    bool m_lastModifiedHasBeenSet = false;

    Aws::String m_eTag;
    bool m_eTagHasBeenSet = false;

    Aws::Vector<ChecksumAlgorithm> m_checksumAlgorithm;
    bool m_checksumAlgorithmHasBeenSet = false;

    ChecksumType m_checksumType{ChecksumType::NOT_SET};
    bool m_checksumTypeHasBeenSet = false;

    long long m_size{0};
    bool m_sizeHasBeenSet = false;

    ObjectStorageClass m_storageClass{ObjectStorageClass::NOT_SET};
    bool m_storageClassHasBeenSet = false;

    Owner m_owner;
    bool m_ownerHasBeenSet = false;

    RestoreStatus m_restoreStatus;
    bool m_restoreStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
