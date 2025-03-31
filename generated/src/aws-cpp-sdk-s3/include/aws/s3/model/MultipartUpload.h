/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/s3/model/StorageClass.h>
#include <aws/s3/model/Owner.h>
#include <aws/s3/model/Initiator.h>
#include <aws/s3/model/ChecksumAlgorithm.h>
#include <aws/s3/model/ChecksumType.h>
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
   * <p>Container for the <code>MultipartUpload</code> for the Amazon S3
   * object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/MultipartUpload">AWS
   * API Reference</a></p>
   */
  class MultipartUpload
  {
  public:
    AWS_S3_API MultipartUpload() = default;
    AWS_S3_API MultipartUpload(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3_API MultipartUpload& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Upload ID that identifies the multipart upload.</p>
     */
    inline const Aws::String& GetUploadId() const { return m_uploadId; }
    inline bool UploadIdHasBeenSet() const { return m_uploadIdHasBeenSet; }
    template<typename UploadIdT = Aws::String>
    void SetUploadId(UploadIdT&& value) { m_uploadIdHasBeenSet = true; m_uploadId = std::forward<UploadIdT>(value); }
    template<typename UploadIdT = Aws::String>
    MultipartUpload& WithUploadId(UploadIdT&& value) { SetUploadId(std::forward<UploadIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Key of the object for which the multipart upload was initiated.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    MultipartUpload& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date and time at which the multipart upload was initiated.</p>
     */
    inline const Aws::Utils::DateTime& GetInitiated() const { return m_initiated; }
    inline bool InitiatedHasBeenSet() const { return m_initiatedHasBeenSet; }
    template<typename InitiatedT = Aws::Utils::DateTime>
    void SetInitiated(InitiatedT&& value) { m_initiatedHasBeenSet = true; m_initiated = std::forward<InitiatedT>(value); }
    template<typename InitiatedT = Aws::Utils::DateTime>
    MultipartUpload& WithInitiated(InitiatedT&& value) { SetInitiated(std::forward<InitiatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The class of storage used to store the object.</p>  <p> <b>Directory
     * buckets</b> - Directory buckets only support <code>EXPRESS_ONEZONE</code> (the
     * S3 Express One Zone storage class) in Availability Zones and
     * <code>ONEZONE_IA</code> (the S3 One Zone-Infrequent Access storage class) in
     * Dedicated Local Zones.</p> 
     */
    inline StorageClass GetStorageClass() const { return m_storageClass; }
    inline bool StorageClassHasBeenSet() const { return m_storageClassHasBeenSet; }
    inline void SetStorageClass(StorageClass value) { m_storageClassHasBeenSet = true; m_storageClass = value; }
    inline MultipartUpload& WithStorageClass(StorageClass value) { SetStorageClass(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the owner of the object that is part of the multipart upload. </p>
     *  <p> <b>Directory buckets</b> - The bucket owner is returned as the object
     * owner for all the objects.</p> 
     */
    inline const Owner& GetOwner() const { return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    template<typename OwnerT = Owner>
    void SetOwner(OwnerT&& value) { m_ownerHasBeenSet = true; m_owner = std::forward<OwnerT>(value); }
    template<typename OwnerT = Owner>
    MultipartUpload& WithOwner(OwnerT&& value) { SetOwner(std::forward<OwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies who initiated the multipart upload.</p>
     */
    inline const Initiator& GetInitiator() const { return m_initiator; }
    inline bool InitiatorHasBeenSet() const { return m_initiatorHasBeenSet; }
    template<typename InitiatorT = Initiator>
    void SetInitiator(InitiatorT&& value) { m_initiatorHasBeenSet = true; m_initiator = std::forward<InitiatorT>(value); }
    template<typename InitiatorT = Initiator>
    MultipartUpload& WithInitiator(InitiatorT&& value) { SetInitiator(std::forward<InitiatorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The algorithm that was used to create a checksum of the object.</p>
     */
    inline ChecksumAlgorithm GetChecksumAlgorithm() const { return m_checksumAlgorithm; }
    inline bool ChecksumAlgorithmHasBeenSet() const { return m_checksumAlgorithmHasBeenSet; }
    inline void SetChecksumAlgorithm(ChecksumAlgorithm value) { m_checksumAlgorithmHasBeenSet = true; m_checksumAlgorithm = value; }
    inline MultipartUpload& WithChecksumAlgorithm(ChecksumAlgorithm value) { SetChecksumAlgorithm(value); return *this;}
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
    inline MultipartUpload& WithChecksumType(ChecksumType value) { SetChecksumType(value); return *this;}
    ///@}
  private:

    Aws::String m_uploadId;
    bool m_uploadIdHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::Utils::DateTime m_initiated{};
    bool m_initiatedHasBeenSet = false;

    StorageClass m_storageClass{StorageClass::NOT_SET};
    bool m_storageClassHasBeenSet = false;

    Owner m_owner;
    bool m_ownerHasBeenSet = false;

    Initiator m_initiator;
    bool m_initiatorHasBeenSet = false;

    ChecksumAlgorithm m_checksumAlgorithm{ChecksumAlgorithm::NOT_SET};
    bool m_checksumAlgorithmHasBeenSet = false;

    ChecksumType m_checksumType{ChecksumType::NOT_SET};
    bool m_checksumTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
