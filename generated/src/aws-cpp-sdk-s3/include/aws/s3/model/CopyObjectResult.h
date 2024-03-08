/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3/model/ServerSideEncryption.h>
#include <aws/s3/model/RequestCharged.h>
#include <aws/s3/model/CopyObjectResultDetails.h>
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
  class CopyObjectResult
  {
  public:
    AWS_S3_API CopyObjectResult();
    AWS_S3_API CopyObjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3_API CopyObjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>If the object expiration is configured, the response includes this
     * header.</p>  <p>This functionality is not supported for directory
     * buckets.</p> 
     */
    inline const Aws::String& GetExpiration() const{ return m_expiration; }

    /**
     * <p>If the object expiration is configured, the response includes this
     * header.</p>  <p>This functionality is not supported for directory
     * buckets.</p> 
     */
    inline void SetExpiration(const Aws::String& value) { m_expiration = value; }

    /**
     * <p>If the object expiration is configured, the response includes this
     * header.</p>  <p>This functionality is not supported for directory
     * buckets.</p> 
     */
    inline void SetExpiration(Aws::String&& value) { m_expiration = std::move(value); }

    /**
     * <p>If the object expiration is configured, the response includes this
     * header.</p>  <p>This functionality is not supported for directory
     * buckets.</p> 
     */
    inline void SetExpiration(const char* value) { m_expiration.assign(value); }

    /**
     * <p>If the object expiration is configured, the response includes this
     * header.</p>  <p>This functionality is not supported for directory
     * buckets.</p> 
     */
    inline CopyObjectResult& WithExpiration(const Aws::String& value) { SetExpiration(value); return *this;}

    /**
     * <p>If the object expiration is configured, the response includes this
     * header.</p>  <p>This functionality is not supported for directory
     * buckets.</p> 
     */
    inline CopyObjectResult& WithExpiration(Aws::String&& value) { SetExpiration(std::move(value)); return *this;}

    /**
     * <p>If the object expiration is configured, the response includes this
     * header.</p>  <p>This functionality is not supported for directory
     * buckets.</p> 
     */
    inline CopyObjectResult& WithExpiration(const char* value) { SetExpiration(value); return *this;}


    /**
     * <p>Version ID of the source object that was copied.</p>  <p>This
     * functionality is not supported when the source object is in a directory
     * bucket.</p> 
     */
    inline const Aws::String& GetCopySourceVersionId() const{ return m_copySourceVersionId; }

    /**
     * <p>Version ID of the source object that was copied.</p>  <p>This
     * functionality is not supported when the source object is in a directory
     * bucket.</p> 
     */
    inline void SetCopySourceVersionId(const Aws::String& value) { m_copySourceVersionId = value; }

    /**
     * <p>Version ID of the source object that was copied.</p>  <p>This
     * functionality is not supported when the source object is in a directory
     * bucket.</p> 
     */
    inline void SetCopySourceVersionId(Aws::String&& value) { m_copySourceVersionId = std::move(value); }

    /**
     * <p>Version ID of the source object that was copied.</p>  <p>This
     * functionality is not supported when the source object is in a directory
     * bucket.</p> 
     */
    inline void SetCopySourceVersionId(const char* value) { m_copySourceVersionId.assign(value); }

    /**
     * <p>Version ID of the source object that was copied.</p>  <p>This
     * functionality is not supported when the source object is in a directory
     * bucket.</p> 
     */
    inline CopyObjectResult& WithCopySourceVersionId(const Aws::String& value) { SetCopySourceVersionId(value); return *this;}

    /**
     * <p>Version ID of the source object that was copied.</p>  <p>This
     * functionality is not supported when the source object is in a directory
     * bucket.</p> 
     */
    inline CopyObjectResult& WithCopySourceVersionId(Aws::String&& value) { SetCopySourceVersionId(std::move(value)); return *this;}

    /**
     * <p>Version ID of the source object that was copied.</p>  <p>This
     * functionality is not supported when the source object is in a directory
     * bucket.</p> 
     */
    inline CopyObjectResult& WithCopySourceVersionId(const char* value) { SetCopySourceVersionId(value); return *this;}


    /**
     * <p>Version ID of the newly created copy.</p>  <p>This functionality is not
     * supported for directory buckets.</p> 
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }

    /**
     * <p>Version ID of the newly created copy.</p>  <p>This functionality is not
     * supported for directory buckets.</p> 
     */
    inline void SetVersionId(const Aws::String& value) { m_versionId = value; }

    /**
     * <p>Version ID of the newly created copy.</p>  <p>This functionality is not
     * supported for directory buckets.</p> 
     */
    inline void SetVersionId(Aws::String&& value) { m_versionId = std::move(value); }

    /**
     * <p>Version ID of the newly created copy.</p>  <p>This functionality is not
     * supported for directory buckets.</p> 
     */
    inline void SetVersionId(const char* value) { m_versionId.assign(value); }

    /**
     * <p>Version ID of the newly created copy.</p>  <p>This functionality is not
     * supported for directory buckets.</p> 
     */
    inline CopyObjectResult& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}

    /**
     * <p>Version ID of the newly created copy.</p>  <p>This functionality is not
     * supported for directory buckets.</p> 
     */
    inline CopyObjectResult& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}

    /**
     * <p>Version ID of the newly created copy.</p>  <p>This functionality is not
     * supported for directory buckets.</p> 
     */
    inline CopyObjectResult& WithVersionId(const char* value) { SetVersionId(value); return *this;}


    /**
     * <p>The server-side encryption algorithm used when you store this object in
     * Amazon S3 (for example, <code>AES256</code>, <code>aws:kms</code>,
     * <code>aws:kms:dsse</code>).</p>  <p>For directory buckets, only
     * server-side encryption with Amazon S3 managed keys (SSE-S3)
     * (<code>AES256</code>) is supported.</p> 
     */
    inline const ServerSideEncryption& GetServerSideEncryption() const{ return m_serverSideEncryption; }

    /**
     * <p>The server-side encryption algorithm used when you store this object in
     * Amazon S3 (for example, <code>AES256</code>, <code>aws:kms</code>,
     * <code>aws:kms:dsse</code>).</p>  <p>For directory buckets, only
     * server-side encryption with Amazon S3 managed keys (SSE-S3)
     * (<code>AES256</code>) is supported.</p> 
     */
    inline void SetServerSideEncryption(const ServerSideEncryption& value) { m_serverSideEncryption = value; }

    /**
     * <p>The server-side encryption algorithm used when you store this object in
     * Amazon S3 (for example, <code>AES256</code>, <code>aws:kms</code>,
     * <code>aws:kms:dsse</code>).</p>  <p>For directory buckets, only
     * server-side encryption with Amazon S3 managed keys (SSE-S3)
     * (<code>AES256</code>) is supported.</p> 
     */
    inline void SetServerSideEncryption(ServerSideEncryption&& value) { m_serverSideEncryption = std::move(value); }

    /**
     * <p>The server-side encryption algorithm used when you store this object in
     * Amazon S3 (for example, <code>AES256</code>, <code>aws:kms</code>,
     * <code>aws:kms:dsse</code>).</p>  <p>For directory buckets, only
     * server-side encryption with Amazon S3 managed keys (SSE-S3)
     * (<code>AES256</code>) is supported.</p> 
     */
    inline CopyObjectResult& WithServerSideEncryption(const ServerSideEncryption& value) { SetServerSideEncryption(value); return *this;}

    /**
     * <p>The server-side encryption algorithm used when you store this object in
     * Amazon S3 (for example, <code>AES256</code>, <code>aws:kms</code>,
     * <code>aws:kms:dsse</code>).</p>  <p>For directory buckets, only
     * server-side encryption with Amazon S3 managed keys (SSE-S3)
     * (<code>AES256</code>) is supported.</p> 
     */
    inline CopyObjectResult& WithServerSideEncryption(ServerSideEncryption&& value) { SetServerSideEncryption(std::move(value)); return *this;}


    /**
     * <p>If server-side encryption with a customer-provided encryption key was
     * requested, the response will include this header to confirm the encryption
     * algorithm that's used.</p>  <p>This functionality is not supported for
     * directory buckets.</p> 
     */
    inline const Aws::String& GetSSECustomerAlgorithm() const{ return m_sSECustomerAlgorithm; }

    /**
     * <p>If server-side encryption with a customer-provided encryption key was
     * requested, the response will include this header to confirm the encryption
     * algorithm that's used.</p>  <p>This functionality is not supported for
     * directory buckets.</p> 
     */
    inline void SetSSECustomerAlgorithm(const Aws::String& value) { m_sSECustomerAlgorithm = value; }

    /**
     * <p>If server-side encryption with a customer-provided encryption key was
     * requested, the response will include this header to confirm the encryption
     * algorithm that's used.</p>  <p>This functionality is not supported for
     * directory buckets.</p> 
     */
    inline void SetSSECustomerAlgorithm(Aws::String&& value) { m_sSECustomerAlgorithm = std::move(value); }

    /**
     * <p>If server-side encryption with a customer-provided encryption key was
     * requested, the response will include this header to confirm the encryption
     * algorithm that's used.</p>  <p>This functionality is not supported for
     * directory buckets.</p> 
     */
    inline void SetSSECustomerAlgorithm(const char* value) { m_sSECustomerAlgorithm.assign(value); }

    /**
     * <p>If server-side encryption with a customer-provided encryption key was
     * requested, the response will include this header to confirm the encryption
     * algorithm that's used.</p>  <p>This functionality is not supported for
     * directory buckets.</p> 
     */
    inline CopyObjectResult& WithSSECustomerAlgorithm(const Aws::String& value) { SetSSECustomerAlgorithm(value); return *this;}

    /**
     * <p>If server-side encryption with a customer-provided encryption key was
     * requested, the response will include this header to confirm the encryption
     * algorithm that's used.</p>  <p>This functionality is not supported for
     * directory buckets.</p> 
     */
    inline CopyObjectResult& WithSSECustomerAlgorithm(Aws::String&& value) { SetSSECustomerAlgorithm(std::move(value)); return *this;}

    /**
     * <p>If server-side encryption with a customer-provided encryption key was
     * requested, the response will include this header to confirm the encryption
     * algorithm that's used.</p>  <p>This functionality is not supported for
     * directory buckets.</p> 
     */
    inline CopyObjectResult& WithSSECustomerAlgorithm(const char* value) { SetSSECustomerAlgorithm(value); return *this;}


    /**
     * <p>If server-side encryption with a customer-provided encryption key was
     * requested, the response will include this header to provide the round-trip
     * message integrity verification of the customer-provided encryption key.</p>
     *  <p>This functionality is not supported for directory buckets.</p> 
     */
    inline const Aws::String& GetSSECustomerKeyMD5() const{ return m_sSECustomerKeyMD5; }

    /**
     * <p>If server-side encryption with a customer-provided encryption key was
     * requested, the response will include this header to provide the round-trip
     * message integrity verification of the customer-provided encryption key.</p>
     *  <p>This functionality is not supported for directory buckets.</p> 
     */
    inline void SetSSECustomerKeyMD5(const Aws::String& value) { m_sSECustomerKeyMD5 = value; }

    /**
     * <p>If server-side encryption with a customer-provided encryption key was
     * requested, the response will include this header to provide the round-trip
     * message integrity verification of the customer-provided encryption key.</p>
     *  <p>This functionality is not supported for directory buckets.</p> 
     */
    inline void SetSSECustomerKeyMD5(Aws::String&& value) { m_sSECustomerKeyMD5 = std::move(value); }

    /**
     * <p>If server-side encryption with a customer-provided encryption key was
     * requested, the response will include this header to provide the round-trip
     * message integrity verification of the customer-provided encryption key.</p>
     *  <p>This functionality is not supported for directory buckets.</p> 
     */
    inline void SetSSECustomerKeyMD5(const char* value) { m_sSECustomerKeyMD5.assign(value); }

    /**
     * <p>If server-side encryption with a customer-provided encryption key was
     * requested, the response will include this header to provide the round-trip
     * message integrity verification of the customer-provided encryption key.</p>
     *  <p>This functionality is not supported for directory buckets.</p> 
     */
    inline CopyObjectResult& WithSSECustomerKeyMD5(const Aws::String& value) { SetSSECustomerKeyMD5(value); return *this;}

    /**
     * <p>If server-side encryption with a customer-provided encryption key was
     * requested, the response will include this header to provide the round-trip
     * message integrity verification of the customer-provided encryption key.</p>
     *  <p>This functionality is not supported for directory buckets.</p> 
     */
    inline CopyObjectResult& WithSSECustomerKeyMD5(Aws::String&& value) { SetSSECustomerKeyMD5(std::move(value)); return *this;}

    /**
     * <p>If server-side encryption with a customer-provided encryption key was
     * requested, the response will include this header to provide the round-trip
     * message integrity verification of the customer-provided encryption key.</p>
     *  <p>This functionality is not supported for directory buckets.</p> 
     */
    inline CopyObjectResult& WithSSECustomerKeyMD5(const char* value) { SetSSECustomerKeyMD5(value); return *this;}


    /**
     * <p>If present, indicates the ID of the Key Management Service (KMS) symmetric
     * encryption customer managed key that was used for the object.</p>  <p>This
     * functionality is not supported for directory buckets.</p> 
     */
    inline const Aws::String& GetSSEKMSKeyId() const{ return m_sSEKMSKeyId; }

    /**
     * <p>If present, indicates the ID of the Key Management Service (KMS) symmetric
     * encryption customer managed key that was used for the object.</p>  <p>This
     * functionality is not supported for directory buckets.</p> 
     */
    inline void SetSSEKMSKeyId(const Aws::String& value) { m_sSEKMSKeyId = value; }

    /**
     * <p>If present, indicates the ID of the Key Management Service (KMS) symmetric
     * encryption customer managed key that was used for the object.</p>  <p>This
     * functionality is not supported for directory buckets.</p> 
     */
    inline void SetSSEKMSKeyId(Aws::String&& value) { m_sSEKMSKeyId = std::move(value); }

    /**
     * <p>If present, indicates the ID of the Key Management Service (KMS) symmetric
     * encryption customer managed key that was used for the object.</p>  <p>This
     * functionality is not supported for directory buckets.</p> 
     */
    inline void SetSSEKMSKeyId(const char* value) { m_sSEKMSKeyId.assign(value); }

    /**
     * <p>If present, indicates the ID of the Key Management Service (KMS) symmetric
     * encryption customer managed key that was used for the object.</p>  <p>This
     * functionality is not supported for directory buckets.</p> 
     */
    inline CopyObjectResult& WithSSEKMSKeyId(const Aws::String& value) { SetSSEKMSKeyId(value); return *this;}

    /**
     * <p>If present, indicates the ID of the Key Management Service (KMS) symmetric
     * encryption customer managed key that was used for the object.</p>  <p>This
     * functionality is not supported for directory buckets.</p> 
     */
    inline CopyObjectResult& WithSSEKMSKeyId(Aws::String&& value) { SetSSEKMSKeyId(std::move(value)); return *this;}

    /**
     * <p>If present, indicates the ID of the Key Management Service (KMS) symmetric
     * encryption customer managed key that was used for the object.</p>  <p>This
     * functionality is not supported for directory buckets.</p> 
     */
    inline CopyObjectResult& WithSSEKMSKeyId(const char* value) { SetSSEKMSKeyId(value); return *this;}


    /**
     * <p>If present, indicates the Amazon Web Services KMS Encryption Context to use
     * for object encryption. The value of this header is a base64-encoded UTF-8 string
     * holding JSON with the encryption context key-value pairs.</p>  <p>This
     * functionality is not supported for directory buckets.</p> 
     */
    inline const Aws::String& GetSSEKMSEncryptionContext() const{ return m_sSEKMSEncryptionContext; }

    /**
     * <p>If present, indicates the Amazon Web Services KMS Encryption Context to use
     * for object encryption. The value of this header is a base64-encoded UTF-8 string
     * holding JSON with the encryption context key-value pairs.</p>  <p>This
     * functionality is not supported for directory buckets.</p> 
     */
    inline void SetSSEKMSEncryptionContext(const Aws::String& value) { m_sSEKMSEncryptionContext = value; }

    /**
     * <p>If present, indicates the Amazon Web Services KMS Encryption Context to use
     * for object encryption. The value of this header is a base64-encoded UTF-8 string
     * holding JSON with the encryption context key-value pairs.</p>  <p>This
     * functionality is not supported for directory buckets.</p> 
     */
    inline void SetSSEKMSEncryptionContext(Aws::String&& value) { m_sSEKMSEncryptionContext = std::move(value); }

    /**
     * <p>If present, indicates the Amazon Web Services KMS Encryption Context to use
     * for object encryption. The value of this header is a base64-encoded UTF-8 string
     * holding JSON with the encryption context key-value pairs.</p>  <p>This
     * functionality is not supported for directory buckets.</p> 
     */
    inline void SetSSEKMSEncryptionContext(const char* value) { m_sSEKMSEncryptionContext.assign(value); }

    /**
     * <p>If present, indicates the Amazon Web Services KMS Encryption Context to use
     * for object encryption. The value of this header is a base64-encoded UTF-8 string
     * holding JSON with the encryption context key-value pairs.</p>  <p>This
     * functionality is not supported for directory buckets.</p> 
     */
    inline CopyObjectResult& WithSSEKMSEncryptionContext(const Aws::String& value) { SetSSEKMSEncryptionContext(value); return *this;}

    /**
     * <p>If present, indicates the Amazon Web Services KMS Encryption Context to use
     * for object encryption. The value of this header is a base64-encoded UTF-8 string
     * holding JSON with the encryption context key-value pairs.</p>  <p>This
     * functionality is not supported for directory buckets.</p> 
     */
    inline CopyObjectResult& WithSSEKMSEncryptionContext(Aws::String&& value) { SetSSEKMSEncryptionContext(std::move(value)); return *this;}

    /**
     * <p>If present, indicates the Amazon Web Services KMS Encryption Context to use
     * for object encryption. The value of this header is a base64-encoded UTF-8 string
     * holding JSON with the encryption context key-value pairs.</p>  <p>This
     * functionality is not supported for directory buckets.</p> 
     */
    inline CopyObjectResult& WithSSEKMSEncryptionContext(const char* value) { SetSSEKMSEncryptionContext(value); return *this;}


    /**
     * <p>Indicates whether the copied object uses an S3 Bucket Key for server-side
     * encryption with Key Management Service (KMS) keys (SSE-KMS).</p>  <p>This
     * functionality is not supported for directory buckets.</p> 
     */
    inline bool GetBucketKeyEnabled() const{ return m_bucketKeyEnabled; }

    /**
     * <p>Indicates whether the copied object uses an S3 Bucket Key for server-side
     * encryption with Key Management Service (KMS) keys (SSE-KMS).</p>  <p>This
     * functionality is not supported for directory buckets.</p> 
     */
    inline void SetBucketKeyEnabled(bool value) { m_bucketKeyEnabled = value; }

    /**
     * <p>Indicates whether the copied object uses an S3 Bucket Key for server-side
     * encryption with Key Management Service (KMS) keys (SSE-KMS).</p>  <p>This
     * functionality is not supported for directory buckets.</p> 
     */
    inline CopyObjectResult& WithBucketKeyEnabled(bool value) { SetBucketKeyEnabled(value); return *this;}


    
    inline const RequestCharged& GetRequestCharged() const{ return m_requestCharged; }

    
    inline void SetRequestCharged(const RequestCharged& value) { m_requestCharged = value; }

    
    inline void SetRequestCharged(RequestCharged&& value) { m_requestCharged = std::move(value); }

    
    inline CopyObjectResult& WithRequestCharged(const RequestCharged& value) { SetRequestCharged(value); return *this;}

    
    inline CopyObjectResult& WithRequestCharged(RequestCharged&& value) { SetRequestCharged(std::move(value)); return *this;}


    /**
     * <p>Container for all response elements.</p>
     */
    inline const CopyObjectResultDetails& GetCopyObjectResultDetails() const{ return m_copyObjectResultDetails; }

    /**
     * <p>Container for all response elements.</p>
     */
    inline void SetCopyObjectResultDetails(const CopyObjectResultDetails& value) { m_copyObjectResultDetails = value; }

    /**
     * <p>Container for all response elements.</p>
     */
    inline void SetCopyObjectResultDetails(CopyObjectResultDetails&& value) { m_copyObjectResultDetails = std::move(value); }

    /**
     * <p>Container for all response elements.</p>
     */
    inline CopyObjectResult& WithCopyObjectResultDetails(const CopyObjectResultDetails& value) { SetCopyObjectResultDetails(value); return *this;}

    /**
     * <p>Container for all response elements.</p>
     */
    inline CopyObjectResult& WithCopyObjectResultDetails(CopyObjectResultDetails&& value) { SetCopyObjectResultDetails(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CopyObjectResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CopyObjectResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CopyObjectResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_expiration;

    Aws::String m_copySourceVersionId;

    Aws::String m_versionId;

    ServerSideEncryption m_serverSideEncryption;

    Aws::String m_sSECustomerAlgorithm;

    Aws::String m_sSECustomerKeyMD5;

    Aws::String m_sSEKMSKeyId;

    Aws::String m_sSEKMSEncryptionContext;

    bool m_bucketKeyEnabled;

    RequestCharged m_requestCharged;

    CopyObjectResultDetails m_copyObjectResultDetails;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
