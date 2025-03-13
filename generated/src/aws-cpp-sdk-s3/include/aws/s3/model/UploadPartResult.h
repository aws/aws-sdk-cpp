/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/model/ServerSideEncryption.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3/model/RequestCharged.h>
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
namespace S3
{
namespace Model
{
  class UploadPartResult
  {
  public:
    AWS_S3_API UploadPartResult() = default;
    AWS_S3_API UploadPartResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3_API UploadPartResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The server-side encryption algorithm used when you store this object in
     * Amazon S3 (for example, <code>AES256</code>, <code>aws:kms</code>).</p>
     */
    inline ServerSideEncryption GetServerSideEncryption() const { return m_serverSideEncryption; }
    inline void SetServerSideEncryption(ServerSideEncryption value) { m_serverSideEncryptionHasBeenSet = true; m_serverSideEncryption = value; }
    inline UploadPartResult& WithServerSideEncryption(ServerSideEncryption value) { SetServerSideEncryption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Entity tag for the uploaded object.</p>
     */
    inline const Aws::String& GetETag() const { return m_eTag; }
    template<typename ETagT = Aws::String>
    void SetETag(ETagT&& value) { m_eTagHasBeenSet = true; m_eTag = std::forward<ETagT>(value); }
    template<typename ETagT = Aws::String>
    UploadPartResult& WithETag(ETagT&& value) { SetETag(std::forward<ETagT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Base64 encoded, 32-bit <code>CRC32 checksum</code> of the object. This
     * checksum is only be present if the checksum was uploaded with the object. When
     * you use an API operation on an object that was uploaded using multipart uploads,
     * this value may not be a direct checksum value of the full object. Instead, it's
     * a calculation based on the checksum values of each individual part. For more
     * information about how checksums are calculated with multipart uploads, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/checking-object-integrity.html#large-object-checksums">
     * Checking object integrity</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline const Aws::String& GetChecksumCRC32() const { return m_checksumCRC32; }
    template<typename ChecksumCRC32T = Aws::String>
    void SetChecksumCRC32(ChecksumCRC32T&& value) { m_checksumCRC32HasBeenSet = true; m_checksumCRC32 = std::forward<ChecksumCRC32T>(value); }
    template<typename ChecksumCRC32T = Aws::String>
    UploadPartResult& WithChecksumCRC32(ChecksumCRC32T&& value) { SetChecksumCRC32(std::forward<ChecksumCRC32T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Base64 encoded, 32-bit <code>CRC32C</code> checksum of the object. This
     * checksum is only present if the checksum was uploaded with the object. When you
     * use an API operation on an object that was uploaded using multipart uploads,
     * this value may not be a direct checksum value of the full object. Instead, it's
     * a calculation based on the checksum values of each individual part. For more
     * information about how checksums are calculated with multipart uploads, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/checking-object-integrity.html#large-object-checksums">
     * Checking object integrity</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline const Aws::String& GetChecksumCRC32C() const { return m_checksumCRC32C; }
    template<typename ChecksumCRC32CT = Aws::String>
    void SetChecksumCRC32C(ChecksumCRC32CT&& value) { m_checksumCRC32CHasBeenSet = true; m_checksumCRC32C = std::forward<ChecksumCRC32CT>(value); }
    template<typename ChecksumCRC32CT = Aws::String>
    UploadPartResult& WithChecksumCRC32C(ChecksumCRC32CT&& value) { SetChecksumCRC32C(std::forward<ChecksumCRC32CT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This header can be used as a data integrity check to verify that the data
     * received is the same data that was originally sent. This header specifies the
     * Base64 encoded, 64-bit <code>CRC64NVME</code> checksum of the part. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/checking-object-integrity.html">Checking
     * object integrity</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline const Aws::String& GetChecksumCRC64NVME() const { return m_checksumCRC64NVME; }
    template<typename ChecksumCRC64NVMET = Aws::String>
    void SetChecksumCRC64NVME(ChecksumCRC64NVMET&& value) { m_checksumCRC64NVMEHasBeenSet = true; m_checksumCRC64NVME = std::forward<ChecksumCRC64NVMET>(value); }
    template<typename ChecksumCRC64NVMET = Aws::String>
    UploadPartResult& WithChecksumCRC64NVME(ChecksumCRC64NVMET&& value) { SetChecksumCRC64NVME(std::forward<ChecksumCRC64NVMET>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Base64 encoded, 160-bit <code>SHA1</code> digest of the object. This will
     * only be present if the object was uploaded with the object. When you use the API
     * operation on an object that was uploaded using multipart uploads, this value may
     * not be a direct checksum value of the full object. Instead, it's a calculation
     * based on the checksum values of each individual part. For more information about
     * how checksums are calculated with multipart uploads, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/checking-object-integrity.html#large-object-checksums">
     * Checking object integrity</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline const Aws::String& GetChecksumSHA1() const { return m_checksumSHA1; }
    template<typename ChecksumSHA1T = Aws::String>
    void SetChecksumSHA1(ChecksumSHA1T&& value) { m_checksumSHA1HasBeenSet = true; m_checksumSHA1 = std::forward<ChecksumSHA1T>(value); }
    template<typename ChecksumSHA1T = Aws::String>
    UploadPartResult& WithChecksumSHA1(ChecksumSHA1T&& value) { SetChecksumSHA1(std::forward<ChecksumSHA1T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Base64 encoded, 256-bit <code>SHA256</code> digest of the object. This
     * will only be present if the object was uploaded with the object. When you use an
     * API operation on an object that was uploaded using multipart uploads, this value
     * may not be a direct checksum value of the full object. Instead, it's a
     * calculation based on the checksum values of each individual part. For more
     * information about how checksums are calculated with multipart uploads, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/checking-object-integrity.html#large-object-checksums">
     * Checking object integrity</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline const Aws::String& GetChecksumSHA256() const { return m_checksumSHA256; }
    template<typename ChecksumSHA256T = Aws::String>
    void SetChecksumSHA256(ChecksumSHA256T&& value) { m_checksumSHA256HasBeenSet = true; m_checksumSHA256 = std::forward<ChecksumSHA256T>(value); }
    template<typename ChecksumSHA256T = Aws::String>
    UploadPartResult& WithChecksumSHA256(ChecksumSHA256T&& value) { SetChecksumSHA256(std::forward<ChecksumSHA256T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If server-side encryption with a customer-provided encryption key was
     * requested, the response will include this header to confirm the encryption
     * algorithm that's used.</p>  <p>This functionality is not supported for
     * directory buckets.</p> 
     */
    inline const Aws::String& GetSSECustomerAlgorithm() const { return m_sSECustomerAlgorithm; }
    template<typename SSECustomerAlgorithmT = Aws::String>
    void SetSSECustomerAlgorithm(SSECustomerAlgorithmT&& value) { m_sSECustomerAlgorithmHasBeenSet = true; m_sSECustomerAlgorithm = std::forward<SSECustomerAlgorithmT>(value); }
    template<typename SSECustomerAlgorithmT = Aws::String>
    UploadPartResult& WithSSECustomerAlgorithm(SSECustomerAlgorithmT&& value) { SetSSECustomerAlgorithm(std::forward<SSECustomerAlgorithmT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If server-side encryption with a customer-provided encryption key was
     * requested, the response will include this header to provide the round-trip
     * message integrity verification of the customer-provided encryption key.</p>
     *  <p>This functionality is not supported for directory buckets.</p> 
     */
    inline const Aws::String& GetSSECustomerKeyMD5() const { return m_sSECustomerKeyMD5; }
    template<typename SSECustomerKeyMD5T = Aws::String>
    void SetSSECustomerKeyMD5(SSECustomerKeyMD5T&& value) { m_sSECustomerKeyMD5HasBeenSet = true; m_sSECustomerKeyMD5 = std::forward<SSECustomerKeyMD5T>(value); }
    template<typename SSECustomerKeyMD5T = Aws::String>
    UploadPartResult& WithSSECustomerKeyMD5(SSECustomerKeyMD5T&& value) { SetSSECustomerKeyMD5(std::forward<SSECustomerKeyMD5T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If present, indicates the ID of the KMS key that was used for object
     * encryption.</p>
     */
    inline const Aws::String& GetSSEKMSKeyId() const { return m_sSEKMSKeyId; }
    template<typename SSEKMSKeyIdT = Aws::String>
    void SetSSEKMSKeyId(SSEKMSKeyIdT&& value) { m_sSEKMSKeyIdHasBeenSet = true; m_sSEKMSKeyId = std::forward<SSEKMSKeyIdT>(value); }
    template<typename SSEKMSKeyIdT = Aws::String>
    UploadPartResult& WithSSEKMSKeyId(SSEKMSKeyIdT&& value) { SetSSEKMSKeyId(std::forward<SSEKMSKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the multipart upload uses an S3 Bucket Key for server-side
     * encryption with Key Management Service (KMS) keys (SSE-KMS).</p>
     */
    inline bool GetBucketKeyEnabled() const { return m_bucketKeyEnabled; }
    inline void SetBucketKeyEnabled(bool value) { m_bucketKeyEnabledHasBeenSet = true; m_bucketKeyEnabled = value; }
    inline UploadPartResult& WithBucketKeyEnabled(bool value) { SetBucketKeyEnabled(value); return *this;}
    ///@}

    ///@{
    
    inline RequestCharged GetRequestCharged() const { return m_requestCharged; }
    inline void SetRequestCharged(RequestCharged value) { m_requestChargedHasBeenSet = true; m_requestCharged = value; }
    inline UploadPartResult& WithRequestCharged(RequestCharged value) { SetRequestCharged(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UploadPartResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ServerSideEncryption m_serverSideEncryption{ServerSideEncryption::NOT_SET};
    bool m_serverSideEncryptionHasBeenSet = false;

    Aws::String m_eTag;
    bool m_eTagHasBeenSet = false;

    Aws::String m_checksumCRC32;
    bool m_checksumCRC32HasBeenSet = false;

    Aws::String m_checksumCRC32C;
    bool m_checksumCRC32CHasBeenSet = false;

    Aws::String m_checksumCRC64NVME;
    bool m_checksumCRC64NVMEHasBeenSet = false;

    Aws::String m_checksumSHA1;
    bool m_checksumSHA1HasBeenSet = false;

    Aws::String m_checksumSHA256;
    bool m_checksumSHA256HasBeenSet = false;

    Aws::String m_sSECustomerAlgorithm;
    bool m_sSECustomerAlgorithmHasBeenSet = false;

    Aws::String m_sSECustomerKeyMD5;
    bool m_sSECustomerKeyMD5HasBeenSet = false;

    Aws::String m_sSEKMSKeyId;
    bool m_sSEKMSKeyIdHasBeenSet = false;

    bool m_bucketKeyEnabled{false};
    bool m_bucketKeyEnabledHasBeenSet = false;

    RequestCharged m_requestCharged{RequestCharged::NOT_SET};
    bool m_requestChargedHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
