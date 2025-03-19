/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3/model/ServerSideEncryption.h>
#include <aws/s3/model/RequestCharged.h>
#include <aws/s3/model/ChecksumAlgorithm.h>
#include <aws/s3/model/ChecksumType.h>
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
  class CreateMultipartUploadResult
  {
  public:
    AWS_S3_API CreateMultipartUploadResult() = default;
    AWS_S3_API CreateMultipartUploadResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3_API CreateMultipartUploadResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>If the bucket has a lifecycle rule configured with an action to abort
     * incomplete multipart uploads and the prefix in the lifecycle rule matches the
     * object name in the request, the response includes this header. The header
     * indicates when the initiated multipart upload becomes eligible for an abort
     * operation. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/mpuoverview.html#mpu-abort-incomplete-mpu-lifecycle-config">
     * Aborting Incomplete Multipart Uploads Using a Bucket Lifecycle Configuration</a>
     * in the <i>Amazon S3 User Guide</i>.</p> <p>The response also includes the
     * <code>x-amz-abort-rule-id</code> header that provides the ID of the lifecycle
     * configuration rule that defines the abort action.</p>  <p>This
     * functionality is not supported for directory buckets.</p> 
     */
    inline const Aws::Utils::DateTime& GetAbortDate() const { return m_abortDate; }
    template<typename AbortDateT = Aws::Utils::DateTime>
    void SetAbortDate(AbortDateT&& value) { m_abortDateHasBeenSet = true; m_abortDate = std::forward<AbortDateT>(value); }
    template<typename AbortDateT = Aws::Utils::DateTime>
    CreateMultipartUploadResult& WithAbortDate(AbortDateT&& value) { SetAbortDate(std::forward<AbortDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This header is returned along with the <code>x-amz-abort-date</code> header.
     * It identifies the applicable lifecycle configuration rule that defines the
     * action to abort incomplete multipart uploads.</p>  <p>This functionality
     * is not supported for directory buckets.</p> 
     */
    inline const Aws::String& GetAbortRuleId() const { return m_abortRuleId; }
    template<typename AbortRuleIdT = Aws::String>
    void SetAbortRuleId(AbortRuleIdT&& value) { m_abortRuleIdHasBeenSet = true; m_abortRuleId = std::forward<AbortRuleIdT>(value); }
    template<typename AbortRuleIdT = Aws::String>
    CreateMultipartUploadResult& WithAbortRuleId(AbortRuleIdT&& value) { SetAbortRuleId(std::forward<AbortRuleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the bucket to which the multipart upload was initiated. Does not
     * return the access point ARN or access point alias if used.</p>  <p>Access
     * points are not supported by directory buckets.</p> 
     */
    inline const Aws::String& GetBucket() const { return m_bucket; }
    template<typename BucketT = Aws::String>
    void SetBucket(BucketT&& value) { m_bucketHasBeenSet = true; m_bucket = std::forward<BucketT>(value); }
    template<typename BucketT = Aws::String>
    CreateMultipartUploadResult& WithBucket(BucketT&& value) { SetBucket(std::forward<BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Object key for which the multipart upload was initiated.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    CreateMultipartUploadResult& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID for the initiated multipart upload.</p>
     */
    inline const Aws::String& GetUploadId() const { return m_uploadId; }
    template<typename UploadIdT = Aws::String>
    void SetUploadId(UploadIdT&& value) { m_uploadIdHasBeenSet = true; m_uploadId = std::forward<UploadIdT>(value); }
    template<typename UploadIdT = Aws::String>
    CreateMultipartUploadResult& WithUploadId(UploadIdT&& value) { SetUploadId(std::forward<UploadIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The server-side encryption algorithm used when you store this object in
     * Amazon S3 (for example, <code>AES256</code>, <code>aws:kms</code>).</p>
     */
    inline ServerSideEncryption GetServerSideEncryption() const { return m_serverSideEncryption; }
    inline void SetServerSideEncryption(ServerSideEncryption value) { m_serverSideEncryptionHasBeenSet = true; m_serverSideEncryption = value; }
    inline CreateMultipartUploadResult& WithServerSideEncryption(ServerSideEncryption value) { SetServerSideEncryption(value); return *this;}
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
    CreateMultipartUploadResult& WithSSECustomerAlgorithm(SSECustomerAlgorithmT&& value) { SetSSECustomerAlgorithm(std::forward<SSECustomerAlgorithmT>(value)); return *this;}
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
    CreateMultipartUploadResult& WithSSECustomerKeyMD5(SSECustomerKeyMD5T&& value) { SetSSECustomerKeyMD5(std::forward<SSECustomerKeyMD5T>(value)); return *this;}
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
    CreateMultipartUploadResult& WithSSEKMSKeyId(SSEKMSKeyIdT&& value) { SetSSEKMSKeyId(std::forward<SSEKMSKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If present, indicates the Amazon Web Services KMS Encryption Context to use
     * for object encryption. The value of this header is a Base64 encoded string of a
     * UTF-8 encoded JSON, which contains the encryption context as key-value
     * pairs.</p>
     */
    inline const Aws::String& GetSSEKMSEncryptionContext() const { return m_sSEKMSEncryptionContext; }
    template<typename SSEKMSEncryptionContextT = Aws::String>
    void SetSSEKMSEncryptionContext(SSEKMSEncryptionContextT&& value) { m_sSEKMSEncryptionContextHasBeenSet = true; m_sSEKMSEncryptionContext = std::forward<SSEKMSEncryptionContextT>(value); }
    template<typename SSEKMSEncryptionContextT = Aws::String>
    CreateMultipartUploadResult& WithSSEKMSEncryptionContext(SSEKMSEncryptionContextT&& value) { SetSSEKMSEncryptionContext(std::forward<SSEKMSEncryptionContextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the multipart upload uses an S3 Bucket Key for server-side
     * encryption with Key Management Service (KMS) keys (SSE-KMS).</p>
     */
    inline bool GetBucketKeyEnabled() const { return m_bucketKeyEnabled; }
    inline void SetBucketKeyEnabled(bool value) { m_bucketKeyEnabledHasBeenSet = true; m_bucketKeyEnabled = value; }
    inline CreateMultipartUploadResult& WithBucketKeyEnabled(bool value) { SetBucketKeyEnabled(value); return *this;}
    ///@}

    ///@{
    
    inline RequestCharged GetRequestCharged() const { return m_requestCharged; }
    inline void SetRequestCharged(RequestCharged value) { m_requestChargedHasBeenSet = true; m_requestCharged = value; }
    inline CreateMultipartUploadResult& WithRequestCharged(RequestCharged value) { SetRequestCharged(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The algorithm that was used to create a checksum of the object.</p>
     */
    inline ChecksumAlgorithm GetChecksumAlgorithm() const { return m_checksumAlgorithm; }
    inline void SetChecksumAlgorithm(ChecksumAlgorithm value) { m_checksumAlgorithmHasBeenSet = true; m_checksumAlgorithm = value; }
    inline CreateMultipartUploadResult& WithChecksumAlgorithm(ChecksumAlgorithm value) { SetChecksumAlgorithm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates the checksum type that you want Amazon S3 to use to calculate the
     * object’s checksum value. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/checking-object-integrity.html">Checking
     * object integrity in the Amazon S3 User Guide</a>.</p>
     */
    inline ChecksumType GetChecksumType() const { return m_checksumType; }
    inline void SetChecksumType(ChecksumType value) { m_checksumTypeHasBeenSet = true; m_checksumType = value; }
    inline CreateMultipartUploadResult& WithChecksumType(ChecksumType value) { SetChecksumType(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateMultipartUploadResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_abortDate{};
    bool m_abortDateHasBeenSet = false;

    Aws::String m_abortRuleId;
    bool m_abortRuleIdHasBeenSet = false;

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_uploadId;
    bool m_uploadIdHasBeenSet = false;

    ServerSideEncryption m_serverSideEncryption{ServerSideEncryption::NOT_SET};
    bool m_serverSideEncryptionHasBeenSet = false;

    Aws::String m_sSECustomerAlgorithm;
    bool m_sSECustomerAlgorithmHasBeenSet = false;

    Aws::String m_sSECustomerKeyMD5;
    bool m_sSECustomerKeyMD5HasBeenSet = false;

    Aws::String m_sSEKMSKeyId;
    bool m_sSEKMSKeyIdHasBeenSet = false;

    Aws::String m_sSEKMSEncryptionContext;
    bool m_sSEKMSEncryptionContextHasBeenSet = false;

    bool m_bucketKeyEnabled{false};
    bool m_bucketKeyEnabledHasBeenSet = false;

    RequestCharged m_requestCharged{RequestCharged::NOT_SET};
    bool m_requestChargedHasBeenSet = false;

    ChecksumAlgorithm m_checksumAlgorithm{ChecksumAlgorithm::NOT_SET};
    bool m_checksumAlgorithmHasBeenSet = false;

    ChecksumType m_checksumType{ChecksumType::NOT_SET};
    bool m_checksumTypeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
