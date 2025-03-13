/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/S3Request.h>
#include <aws/s3/model/SessionMode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3/model/ServerSideEncryption.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace S3
{
namespace Model
{

  /**
   */
  class CreateSessionRequest : public S3Request
  {
  public:
    AWS_S3_API CreateSessionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSession"; }

    AWS_S3_API Aws::String SerializePayload() const override;

    AWS_S3_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    AWS_S3_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    AWS_S3_API bool HasEmbeddedError(IOStream &body, const Http::HeaderValueCollection &header) const override;
    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_S3_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>Specifies the mode of the session that will be created, either
     * <code>ReadWrite</code> or <code>ReadOnly</code>. By default, a
     * <code>ReadWrite</code> session is created. A <code>ReadWrite</code> session is
     * capable of executing all the Zonal endpoint API operations on a directory
     * bucket. A <code>ReadOnly</code> session is constrained to execute the following
     * Zonal endpoint API operations: <code>GetObject</code>, <code>HeadObject</code>,
     * <code>ListObjectsV2</code>, <code>GetObjectAttributes</code>,
     * <code>ListParts</code>, and <code>ListMultipartUploads</code>.</p>
     */
    inline SessionMode GetSessionMode() const { return m_sessionMode; }
    inline bool SessionModeHasBeenSet() const { return m_sessionModeHasBeenSet; }
    inline void SetSessionMode(SessionMode value) { m_sessionModeHasBeenSet = true; m_sessionMode = value; }
    inline CreateSessionRequest& WithSessionMode(SessionMode value) { SetSessionMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the bucket that you create a session for.</p>
     */
    inline const Aws::String& GetBucket() const { return m_bucket; }
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
    template<typename BucketT = Aws::String>
    void SetBucket(BucketT&& value) { m_bucketHasBeenSet = true; m_bucket = std::forward<BucketT>(value); }
    template<typename BucketT = Aws::String>
    CreateSessionRequest& WithBucket(BucketT&& value) { SetBucket(std::forward<BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The server-side encryption algorithm to use when you store objects in the
     * directory bucket.</p> <p>For directory buckets, there are only two supported
     * options for server-side encryption: server-side encryption with Amazon S3
     * managed keys (SSE-S3) (<code>AES256</code>) and server-side encryption with KMS
     * keys (SSE-KMS) (<code>aws:kms</code>). By default, Amazon S3 encrypts data with
     * SSE-S3. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/serv-side-encryption.html">Protecting
     * data with server-side encryption</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline ServerSideEncryption GetServerSideEncryption() const { return m_serverSideEncryption; }
    inline bool ServerSideEncryptionHasBeenSet() const { return m_serverSideEncryptionHasBeenSet; }
    inline void SetServerSideEncryption(ServerSideEncryption value) { m_serverSideEncryptionHasBeenSet = true; m_serverSideEncryption = value; }
    inline CreateSessionRequest& WithServerSideEncryption(ServerSideEncryption value) { SetServerSideEncryption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you specify <code>x-amz-server-side-encryption</code> with
     * <code>aws:kms</code>, you must specify the <code>
     * x-amz-server-side-encryption-aws-kms-key-id</code> header with the ID (Key ID or
     * Key ARN) of the KMS symmetric encryption customer managed key to use. Otherwise,
     * you get an HTTP <code>400 Bad Request</code> error. Only use the key ID or key
     * ARN. The key alias format of the KMS key isn't supported. Also, if the KMS key
     * doesn't exist in the same account that't issuing the command, you must use the
     * full Key ARN not the Key ID. </p> <p>Your SSE-KMS configuration can only support
     * 1 <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#customer-cmk">customer
     * managed key</a> per directory bucket's lifetime. The <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#aws-managed-cmk">Amazon
     * Web Services managed key</a> (<code>aws/s3</code>) isn't supported. </p>
     */
    inline const Aws::String& GetSSEKMSKeyId() const { return m_sSEKMSKeyId; }
    inline bool SSEKMSKeyIdHasBeenSet() const { return m_sSEKMSKeyIdHasBeenSet; }
    template<typename SSEKMSKeyIdT = Aws::String>
    void SetSSEKMSKeyId(SSEKMSKeyIdT&& value) { m_sSEKMSKeyIdHasBeenSet = true; m_sSEKMSKeyId = std::forward<SSEKMSKeyIdT>(value); }
    template<typename SSEKMSKeyIdT = Aws::String>
    CreateSessionRequest& WithSSEKMSKeyId(SSEKMSKeyIdT&& value) { SetSSEKMSKeyId(std::forward<SSEKMSKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Amazon Web Services KMS Encryption Context as an additional
     * encryption context to use for object encryption. The value of this header is a
     * Base64 encoded string of a UTF-8 encoded JSON, which contains the encryption
     * context as key-value pairs. This value is stored as object metadata and
     * automatically gets passed on to Amazon Web Services KMS for future
     * <code>GetObject</code> operations on this object.</p> <p> <b>General purpose
     * buckets</b> - This value must be explicitly added during <code>CopyObject</code>
     * operations if you want an additional encryption context for your object. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/UsingKMSEncryption.html#encryption-context">Encryption
     * context</a> in the <i>Amazon S3 User Guide</i>.</p> <p> <b>Directory buckets</b>
     * - You can optionally provide an explicit encryption context value. The value
     * must match the default encryption context - the bucket Amazon Resource Name
     * (ARN). An additional encryption context value is not supported. </p>
     */
    inline const Aws::String& GetSSEKMSEncryptionContext() const { return m_sSEKMSEncryptionContext; }
    inline bool SSEKMSEncryptionContextHasBeenSet() const { return m_sSEKMSEncryptionContextHasBeenSet; }
    template<typename SSEKMSEncryptionContextT = Aws::String>
    void SetSSEKMSEncryptionContext(SSEKMSEncryptionContextT&& value) { m_sSEKMSEncryptionContextHasBeenSet = true; m_sSEKMSEncryptionContext = std::forward<SSEKMSEncryptionContextT>(value); }
    template<typename SSEKMSEncryptionContextT = Aws::String>
    CreateSessionRequest& WithSSEKMSEncryptionContext(SSEKMSEncryptionContextT&& value) { SetSSEKMSEncryptionContext(std::forward<SSEKMSEncryptionContextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether Amazon S3 should use an S3 Bucket Key for object encryption
     * with server-side encryption using KMS keys (SSE-KMS).</p> <p>S3 Bucket Keys are
     * always enabled for <code>GET</code> and <code>PUT</code> operations in a
     * directory bucket and can’t be disabled. S3 Bucket Keys aren't supported, when
     * you copy SSE-KMS encrypted objects from general purpose buckets to directory
     * buckets, from directory buckets to general purpose buckets, or between directory
     * buckets, through <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CopyObject.html">CopyObject</a>,
     * <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_UploadPartCopy.html">UploadPartCopy</a>,
     * <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/directory-buckets-objects-Batch-Ops">the
     * Copy operation in Batch Operations</a>, or <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/create-import-job">the
     * import jobs</a>. In this case, Amazon S3 makes a call to KMS every time a copy
     * request is made for a KMS-encrypted object.</p>
     */
    inline bool GetBucketKeyEnabled() const { return m_bucketKeyEnabled; }
    inline bool BucketKeyEnabledHasBeenSet() const { return m_bucketKeyEnabledHasBeenSet; }
    inline void SetBucketKeyEnabled(bool value) { m_bucketKeyEnabledHasBeenSet = true; m_bucketKeyEnabled = value; }
    inline CreateSessionRequest& WithBucketKeyEnabled(bool value) { SetBucketKeyEnabled(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetCustomizedAccessLogTag() const { return m_customizedAccessLogTag; }
    inline bool CustomizedAccessLogTagHasBeenSet() const { return m_customizedAccessLogTagHasBeenSet; }
    template<typename CustomizedAccessLogTagT = Aws::Map<Aws::String, Aws::String>>
    void SetCustomizedAccessLogTag(CustomizedAccessLogTagT&& value) { m_customizedAccessLogTagHasBeenSet = true; m_customizedAccessLogTag = std::forward<CustomizedAccessLogTagT>(value); }
    template<typename CustomizedAccessLogTagT = Aws::Map<Aws::String, Aws::String>>
    CreateSessionRequest& WithCustomizedAccessLogTag(CustomizedAccessLogTagT&& value) { SetCustomizedAccessLogTag(std::forward<CustomizedAccessLogTagT>(value)); return *this;}
    template<typename CustomizedAccessLogTagKeyT = Aws::String, typename CustomizedAccessLogTagValueT = Aws::String>
    CreateSessionRequest& AddCustomizedAccessLogTag(CustomizedAccessLogTagKeyT&& key, CustomizedAccessLogTagValueT&& value) {
      m_customizedAccessLogTagHasBeenSet = true; m_customizedAccessLogTag.emplace(std::forward<CustomizedAccessLogTagKeyT>(key), std::forward<CustomizedAccessLogTagValueT>(value)); return *this;
    }
    ///@}
  private:

    SessionMode m_sessionMode{SessionMode::NOT_SET};
    bool m_sessionModeHasBeenSet = false;

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    ServerSideEncryption m_serverSideEncryption{ServerSideEncryption::NOT_SET};
    bool m_serverSideEncryptionHasBeenSet = false;

    Aws::String m_sSEKMSKeyId;
    bool m_sSEKMSKeyIdHasBeenSet = false;

    Aws::String m_sSEKMSEncryptionContext;
    bool m_sSEKMSEncryptionContextHasBeenSet = false;

    bool m_bucketKeyEnabled{false};
    bool m_bucketKeyEnabledHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_customizedAccessLogTag;
    bool m_customizedAccessLogTagHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
