/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/S3Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/s3/model/RequestPayer.h>
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
  class UploadPartCopyRequest : public S3Request
  {
  public:
    AWS_S3_API UploadPartCopyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UploadPartCopy"; }

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
     * <p>The bucket name.</p> <p> <b>Directory buckets</b> - When you use this
     * operation with a directory bucket, you must use virtual-hosted-style requests in
     * the format <code>
     * <i>Bucket-name</i>.s3express-<i>zone-id</i>.<i>region-code</i>.amazonaws.com</code>.
     * Path-style requests are not supported. Directory bucket names must be unique in
     * the chosen Zone (Availability Zone or Local Zone). Bucket names must follow the
     * format <code> <i>bucket-base-name</i>--<i>zone-id</i>--x-s3</code> (for example,
     * <code> <i>amzn-s3-demo-bucket</i>--<i>usw2-az1</i>--x-s3</code>). For
     * information about bucket naming restrictions, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/directory-bucket-naming-rules.html">Directory
     * bucket naming rules</a> in the <i>Amazon S3 User Guide</i>.</p> 
     * <p>Copying objects across different Amazon Web Services Regions isn't supported
     * when the source or destination bucket is in Amazon Web Services Local Zones. The
     * source and destination buckets must have the same parent Amazon Web Services
     * Region. Otherwise, you get an HTTP <code>400 Bad Request</code> error with the
     * error code <code>InvalidRequest</code>.</p>  <p> <b>Access points</b> -
     * When you use this action with an access point for general purpose buckets, you
     * must provide the alias of the access point in place of the bucket name or
     * specify the access point ARN. When you use this action with an access point for
     * directory buckets, you must provide the access point name in place of the bucket
     * name. When using the access point ARN, you must direct requests to the access
     * point hostname. The access point hostname takes the form
     * <i>AccessPointName</i>-<i>AccountId</i>.s3-accesspoint.<i>Region</i>.amazonaws.com.
     * When using this action with an access point through the Amazon Web Services
     * SDKs, you provide the access point ARN in place of the bucket name. For more
     * information about access point ARNs, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-access-points.html">Using
     * access points</a> in the <i>Amazon S3 User Guide</i>.</p>  <p>Object
     * Lambda access points are not supported by directory buckets.</p>  <p>
     * <b>S3 on Outposts</b> - When you use this action with S3 on Outposts, you must
     * direct requests to the S3 on Outposts hostname. The S3 on Outposts hostname
     * takes the form <code>
     * <i>AccessPointName</i>-<i>AccountId</i>.<i>outpostID</i>.s3-outposts.<i>Region</i>.amazonaws.com</code>.
     * When you use this action with S3 on Outposts, the destination bucket must be the
     * Outposts access point ARN or the access point alias. For more information about
     * S3 on Outposts, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3onOutposts.html">What
     * is S3 on Outposts?</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline const Aws::String& GetBucket() const { return m_bucket; }
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
    template<typename BucketT = Aws::String>
    void SetBucket(BucketT&& value) { m_bucketHasBeenSet = true; m_bucket = std::forward<BucketT>(value); }
    template<typename BucketT = Aws::String>
    UploadPartCopyRequest& WithBucket(BucketT&& value) { SetBucket(std::forward<BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the source object for the copy operation. You specify the value in
     * one of two formats, depending on whether you want to access the source object
     * through an <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/access-points.html">access
     * point</a>:</p> <ul> <li> <p>For objects not accessed through an access point,
     * specify the name of the source bucket and key of the source object, separated by
     * a slash (/). For example, to copy the object <code>reports/january.pdf</code>
     * from the bucket <code>awsexamplebucket</code>, use
     * <code>awsexamplebucket/reports/january.pdf</code>. The value must be
     * URL-encoded.</p> </li> <li> <p>For objects accessed through access points,
     * specify the Amazon Resource Name (ARN) of the object as accessed through the
     * access point, in the format
     * <code>arn:aws:s3:&lt;Region&gt;:&lt;account-id&gt;:accesspoint/&lt;access-point-name&gt;/object/&lt;key&gt;</code>.
     * For example, to copy the object <code>reports/january.pdf</code> through access
     * point <code>my-access-point</code> owned by account <code>123456789012</code> in
     * Region <code>us-west-2</code>, use the URL encoding of
     * <code>arn:aws:s3:us-west-2:123456789012:accesspoint/my-access-point/object/reports/january.pdf</code>.
     * The value must be URL encoded.</p>  <ul> <li> <p>Amazon S3 supports copy
     * operations using Access points only when the source and destination buckets are
     * in the same Amazon Web Services Region.</p> </li> <li> <p>Access points are not
     * supported by directory buckets.</p> </li> </ul>  <p>Alternatively, for
     * objects accessed through Amazon S3 on Outposts, specify the ARN of the object as
     * accessed in the format
     * <code>arn:aws:s3-outposts:&lt;Region&gt;:&lt;account-id&gt;:outpost/&lt;outpost-id&gt;/object/&lt;key&gt;</code>.
     * For example, to copy the object <code>reports/january.pdf</code> through outpost
     * <code>my-outpost</code> owned by account <code>123456789012</code> in Region
     * <code>us-west-2</code>, use the URL encoding of
     * <code>arn:aws:s3-outposts:us-west-2:123456789012:outpost/my-outpost/object/reports/january.pdf</code>.
     * The value must be URL-encoded. </p> </li> </ul> <p>If your bucket has versioning
     * enabled, you could have multiple versions of the same object. By default,
     * <code>x-amz-copy-source</code> identifies the current version of the source
     * object to copy. To copy a specific version of the source object to copy, append
     * <code>?versionId=&lt;version-id&gt;</code> to the <code>x-amz-copy-source</code>
     * request header (for example, <code>x-amz-copy-source:
     * /awsexamplebucket/reports/january.pdf?versionId=QUpfdndhfd8438MNFDN93jdnJFkdmqnh893</code>).
     * </p> <p>If the current version is a delete marker and you don't specify a
     * versionId in the <code>x-amz-copy-source</code> request header, Amazon S3
     * returns a <code>404 Not Found</code> error, because the object does not exist.
     * If you specify versionId in the <code>x-amz-copy-source</code> and the versionId
     * is a delete marker, Amazon S3 returns an HTTP <code>400 Bad Request</code>
     * error, because you are not allowed to specify a delete marker as a version for
     * the <code>x-amz-copy-source</code>. </p>  <p> <b>Directory buckets</b> -
     * S3 Versioning isn't enabled and supported for directory buckets.</p> 
     */
    inline const Aws::String& GetCopySource() const { return m_copySource; }
    inline bool CopySourceHasBeenSet() const { return m_copySourceHasBeenSet; }
    template<typename CopySourceT = Aws::String>
    void SetCopySource(CopySourceT&& value) { m_copySourceHasBeenSet = true; m_copySource = std::forward<CopySourceT>(value); }
    template<typename CopySourceT = Aws::String>
    UploadPartCopyRequest& WithCopySource(CopySourceT&& value) { SetCopySource(std::forward<CopySourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Copies the object if its entity tag (ETag) matches the specified tag.</p>
     * <p>If both of the <code>x-amz-copy-source-if-match</code> and
     * <code>x-amz-copy-source-if-unmodified-since</code> headers are present in the
     * request as follows:</p> <p> <code>x-amz-copy-source-if-match</code> condition
     * evaluates to <code>true</code>, and;</p> <p>
     * <code>x-amz-copy-source-if-unmodified-since</code> condition evaluates to
     * <code>false</code>;</p> <p>Amazon S3 returns <code>200 OK</code> and copies the
     * data. </p>
     */
    inline const Aws::String& GetCopySourceIfMatch() const { return m_copySourceIfMatch; }
    inline bool CopySourceIfMatchHasBeenSet() const { return m_copySourceIfMatchHasBeenSet; }
    template<typename CopySourceIfMatchT = Aws::String>
    void SetCopySourceIfMatch(CopySourceIfMatchT&& value) { m_copySourceIfMatchHasBeenSet = true; m_copySourceIfMatch = std::forward<CopySourceIfMatchT>(value); }
    template<typename CopySourceIfMatchT = Aws::String>
    UploadPartCopyRequest& WithCopySourceIfMatch(CopySourceIfMatchT&& value) { SetCopySourceIfMatch(std::forward<CopySourceIfMatchT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Copies the object if it has been modified since the specified time.</p> <p>If
     * both of the <code>x-amz-copy-source-if-none-match</code> and
     * <code>x-amz-copy-source-if-modified-since</code> headers are present in the
     * request as follows:</p> <p> <code>x-amz-copy-source-if-none-match</code>
     * condition evaluates to <code>false</code>, and;</p> <p>
     * <code>x-amz-copy-source-if-modified-since</code> condition evaluates to
     * <code>true</code>;</p> <p>Amazon S3 returns <code>412 Precondition Failed</code>
     * response code. </p>
     */
    inline const Aws::Utils::DateTime& GetCopySourceIfModifiedSince() const { return m_copySourceIfModifiedSince; }
    inline bool CopySourceIfModifiedSinceHasBeenSet() const { return m_copySourceIfModifiedSinceHasBeenSet; }
    template<typename CopySourceIfModifiedSinceT = Aws::Utils::DateTime>
    void SetCopySourceIfModifiedSince(CopySourceIfModifiedSinceT&& value) { m_copySourceIfModifiedSinceHasBeenSet = true; m_copySourceIfModifiedSince = std::forward<CopySourceIfModifiedSinceT>(value); }
    template<typename CopySourceIfModifiedSinceT = Aws::Utils::DateTime>
    UploadPartCopyRequest& WithCopySourceIfModifiedSince(CopySourceIfModifiedSinceT&& value) { SetCopySourceIfModifiedSince(std::forward<CopySourceIfModifiedSinceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Copies the object if its entity tag (ETag) is different than the specified
     * ETag.</p> <p>If both of the <code>x-amz-copy-source-if-none-match</code> and
     * <code>x-amz-copy-source-if-modified-since</code> headers are present in the
     * request as follows:</p> <p> <code>x-amz-copy-source-if-none-match</code>
     * condition evaluates to <code>false</code>, and;</p> <p>
     * <code>x-amz-copy-source-if-modified-since</code> condition evaluates to
     * <code>true</code>;</p> <p>Amazon S3 returns <code>412 Precondition Failed</code>
     * response code. </p>
     */
    inline const Aws::String& GetCopySourceIfNoneMatch() const { return m_copySourceIfNoneMatch; }
    inline bool CopySourceIfNoneMatchHasBeenSet() const { return m_copySourceIfNoneMatchHasBeenSet; }
    template<typename CopySourceIfNoneMatchT = Aws::String>
    void SetCopySourceIfNoneMatch(CopySourceIfNoneMatchT&& value) { m_copySourceIfNoneMatchHasBeenSet = true; m_copySourceIfNoneMatch = std::forward<CopySourceIfNoneMatchT>(value); }
    template<typename CopySourceIfNoneMatchT = Aws::String>
    UploadPartCopyRequest& WithCopySourceIfNoneMatch(CopySourceIfNoneMatchT&& value) { SetCopySourceIfNoneMatch(std::forward<CopySourceIfNoneMatchT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Copies the object if it hasn't been modified since the specified time.</p>
     * <p>If both of the <code>x-amz-copy-source-if-match</code> and
     * <code>x-amz-copy-source-if-unmodified-since</code> headers are present in the
     * request as follows:</p> <p> <code>x-amz-copy-source-if-match</code> condition
     * evaluates to <code>true</code>, and;</p> <p>
     * <code>x-amz-copy-source-if-unmodified-since</code> condition evaluates to
     * <code>false</code>;</p> <p>Amazon S3 returns <code>200 OK</code> and copies the
     * data. </p>
     */
    inline const Aws::Utils::DateTime& GetCopySourceIfUnmodifiedSince() const { return m_copySourceIfUnmodifiedSince; }
    inline bool CopySourceIfUnmodifiedSinceHasBeenSet() const { return m_copySourceIfUnmodifiedSinceHasBeenSet; }
    template<typename CopySourceIfUnmodifiedSinceT = Aws::Utils::DateTime>
    void SetCopySourceIfUnmodifiedSince(CopySourceIfUnmodifiedSinceT&& value) { m_copySourceIfUnmodifiedSinceHasBeenSet = true; m_copySourceIfUnmodifiedSince = std::forward<CopySourceIfUnmodifiedSinceT>(value); }
    template<typename CopySourceIfUnmodifiedSinceT = Aws::Utils::DateTime>
    UploadPartCopyRequest& WithCopySourceIfUnmodifiedSince(CopySourceIfUnmodifiedSinceT&& value) { SetCopySourceIfUnmodifiedSince(std::forward<CopySourceIfUnmodifiedSinceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The range of bytes to copy from the source object. The range value must use
     * the form bytes=first-last, where the first and last are the zero-based byte
     * offsets to copy. For example, bytes=0-9 indicates that you want to copy the
     * first 10 bytes of the source. You can copy a range only if the source object is
     * greater than 5 MB.</p>
     */
    inline const Aws::String& GetCopySourceRange() const { return m_copySourceRange; }
    inline bool CopySourceRangeHasBeenSet() const { return m_copySourceRangeHasBeenSet; }
    template<typename CopySourceRangeT = Aws::String>
    void SetCopySourceRange(CopySourceRangeT&& value) { m_copySourceRangeHasBeenSet = true; m_copySourceRange = std::forward<CopySourceRangeT>(value); }
    template<typename CopySourceRangeT = Aws::String>
    UploadPartCopyRequest& WithCopySourceRange(CopySourceRangeT&& value) { SetCopySourceRange(std::forward<CopySourceRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Object key for which the multipart upload was initiated.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    UploadPartCopyRequest& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Part number of part being copied. This is a positive integer between 1 and
     * 10,000.</p>
     */
    inline int GetPartNumber() const { return m_partNumber; }
    inline bool PartNumberHasBeenSet() const { return m_partNumberHasBeenSet; }
    inline void SetPartNumber(int value) { m_partNumberHasBeenSet = true; m_partNumber = value; }
    inline UploadPartCopyRequest& WithPartNumber(int value) { SetPartNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Upload ID identifying the multipart upload whose part is being copied.</p>
     */
    inline const Aws::String& GetUploadId() const { return m_uploadId; }
    inline bool UploadIdHasBeenSet() const { return m_uploadIdHasBeenSet; }
    template<typename UploadIdT = Aws::String>
    void SetUploadId(UploadIdT&& value) { m_uploadIdHasBeenSet = true; m_uploadId = std::forward<UploadIdT>(value); }
    template<typename UploadIdT = Aws::String>
    UploadPartCopyRequest& WithUploadId(UploadIdT&& value) { SetUploadId(std::forward<UploadIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the algorithm to use when encrypting the object (for example,
     * AES256).</p>  <p>This functionality is not supported when the destination
     * bucket is a directory bucket.</p> 
     */
    inline const Aws::String& GetSSECustomerAlgorithm() const { return m_sSECustomerAlgorithm; }
    inline bool SSECustomerAlgorithmHasBeenSet() const { return m_sSECustomerAlgorithmHasBeenSet; }
    template<typename SSECustomerAlgorithmT = Aws::String>
    void SetSSECustomerAlgorithm(SSECustomerAlgorithmT&& value) { m_sSECustomerAlgorithmHasBeenSet = true; m_sSECustomerAlgorithm = std::forward<SSECustomerAlgorithmT>(value); }
    template<typename SSECustomerAlgorithmT = Aws::String>
    UploadPartCopyRequest& WithSSECustomerAlgorithm(SSECustomerAlgorithmT&& value) { SetSSECustomerAlgorithm(std::forward<SSECustomerAlgorithmT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the customer-provided encryption key for Amazon S3 to use in
     * encrypting data. This value is used to store the object and then it is
     * discarded; Amazon S3 does not store the encryption key. The key must be
     * appropriate for use with the algorithm specified in the
     * <code>x-amz-server-side-encryption-customer-algorithm</code> header. This must
     * be the same encryption key specified in the initiate multipart upload
     * request.</p>  <p>This functionality is not supported when the destination
     * bucket is a directory bucket.</p> 
     */
    inline const Aws::String& GetSSECustomerKey() const { return m_sSECustomerKey; }
    inline bool SSECustomerKeyHasBeenSet() const { return m_sSECustomerKeyHasBeenSet; }
    template<typename SSECustomerKeyT = Aws::String>
    void SetSSECustomerKey(SSECustomerKeyT&& value) { m_sSECustomerKeyHasBeenSet = true; m_sSECustomerKey = std::forward<SSECustomerKeyT>(value); }
    template<typename SSECustomerKeyT = Aws::String>
    UploadPartCopyRequest& WithSSECustomerKey(SSECustomerKeyT&& value) { SetSSECustomerKey(std::forward<SSECustomerKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the 128-bit MD5 digest of the encryption key according to RFC 1321.
     * Amazon S3 uses this header for a message integrity check to ensure that the
     * encryption key was transmitted without error.</p>  <p>This functionality
     * is not supported when the destination bucket is a directory bucket.</p> 
     */
    inline const Aws::String& GetSSECustomerKeyMD5() const { return m_sSECustomerKeyMD5; }
    inline bool SSECustomerKeyMD5HasBeenSet() const { return m_sSECustomerKeyMD5HasBeenSet; }
    template<typename SSECustomerKeyMD5T = Aws::String>
    void SetSSECustomerKeyMD5(SSECustomerKeyMD5T&& value) { m_sSECustomerKeyMD5HasBeenSet = true; m_sSECustomerKeyMD5 = std::forward<SSECustomerKeyMD5T>(value); }
    template<typename SSECustomerKeyMD5T = Aws::String>
    UploadPartCopyRequest& WithSSECustomerKeyMD5(SSECustomerKeyMD5T&& value) { SetSSECustomerKeyMD5(std::forward<SSECustomerKeyMD5T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the algorithm to use when decrypting the source object (for
     * example, <code>AES256</code>).</p>  <p>This functionality is not supported
     * when the source object is in a directory bucket.</p> 
     */
    inline const Aws::String& GetCopySourceSSECustomerAlgorithm() const { return m_copySourceSSECustomerAlgorithm; }
    inline bool CopySourceSSECustomerAlgorithmHasBeenSet() const { return m_copySourceSSECustomerAlgorithmHasBeenSet; }
    template<typename CopySourceSSECustomerAlgorithmT = Aws::String>
    void SetCopySourceSSECustomerAlgorithm(CopySourceSSECustomerAlgorithmT&& value) { m_copySourceSSECustomerAlgorithmHasBeenSet = true; m_copySourceSSECustomerAlgorithm = std::forward<CopySourceSSECustomerAlgorithmT>(value); }
    template<typename CopySourceSSECustomerAlgorithmT = Aws::String>
    UploadPartCopyRequest& WithCopySourceSSECustomerAlgorithm(CopySourceSSECustomerAlgorithmT&& value) { SetCopySourceSSECustomerAlgorithm(std::forward<CopySourceSSECustomerAlgorithmT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the customer-provided encryption key for Amazon S3 to use to
     * decrypt the source object. The encryption key provided in this header must be
     * one that was used when the source object was created.</p>  <p>This
     * functionality is not supported when the source object is in a directory
     * bucket.</p> 
     */
    inline const Aws::String& GetCopySourceSSECustomerKey() const { return m_copySourceSSECustomerKey; }
    inline bool CopySourceSSECustomerKeyHasBeenSet() const { return m_copySourceSSECustomerKeyHasBeenSet; }
    template<typename CopySourceSSECustomerKeyT = Aws::String>
    void SetCopySourceSSECustomerKey(CopySourceSSECustomerKeyT&& value) { m_copySourceSSECustomerKeyHasBeenSet = true; m_copySourceSSECustomerKey = std::forward<CopySourceSSECustomerKeyT>(value); }
    template<typename CopySourceSSECustomerKeyT = Aws::String>
    UploadPartCopyRequest& WithCopySourceSSECustomerKey(CopySourceSSECustomerKeyT&& value) { SetCopySourceSSECustomerKey(std::forward<CopySourceSSECustomerKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the 128-bit MD5 digest of the encryption key according to RFC 1321.
     * Amazon S3 uses this header for a message integrity check to ensure that the
     * encryption key was transmitted without error.</p>  <p>This functionality
     * is not supported when the source object is in a directory bucket.</p> 
     */
    inline const Aws::String& GetCopySourceSSECustomerKeyMD5() const { return m_copySourceSSECustomerKeyMD5; }
    inline bool CopySourceSSECustomerKeyMD5HasBeenSet() const { return m_copySourceSSECustomerKeyMD5HasBeenSet; }
    template<typename CopySourceSSECustomerKeyMD5T = Aws::String>
    void SetCopySourceSSECustomerKeyMD5(CopySourceSSECustomerKeyMD5T&& value) { m_copySourceSSECustomerKeyMD5HasBeenSet = true; m_copySourceSSECustomerKeyMD5 = std::forward<CopySourceSSECustomerKeyMD5T>(value); }
    template<typename CopySourceSSECustomerKeyMD5T = Aws::String>
    UploadPartCopyRequest& WithCopySourceSSECustomerKeyMD5(CopySourceSSECustomerKeyMD5T&& value) { SetCopySourceSSECustomerKeyMD5(std::forward<CopySourceSSECustomerKeyMD5T>(value)); return *this;}
    ///@}

    ///@{
    
    inline RequestPayer GetRequestPayer() const { return m_requestPayer; }
    inline bool RequestPayerHasBeenSet() const { return m_requestPayerHasBeenSet; }
    inline void SetRequestPayer(RequestPayer value) { m_requestPayerHasBeenSet = true; m_requestPayer = value; }
    inline UploadPartCopyRequest& WithRequestPayer(RequestPayer value) { SetRequestPayer(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account ID of the expected destination bucket owner. If the account ID
     * that you provide does not match the actual owner of the destination bucket, the
     * request fails with the HTTP status code <code>403 Forbidden</code> (access
     * denied).</p>
     */
    inline const Aws::String& GetExpectedBucketOwner() const { return m_expectedBucketOwner; }
    inline bool ExpectedBucketOwnerHasBeenSet() const { return m_expectedBucketOwnerHasBeenSet; }
    template<typename ExpectedBucketOwnerT = Aws::String>
    void SetExpectedBucketOwner(ExpectedBucketOwnerT&& value) { m_expectedBucketOwnerHasBeenSet = true; m_expectedBucketOwner = std::forward<ExpectedBucketOwnerT>(value); }
    template<typename ExpectedBucketOwnerT = Aws::String>
    UploadPartCopyRequest& WithExpectedBucketOwner(ExpectedBucketOwnerT&& value) { SetExpectedBucketOwner(std::forward<ExpectedBucketOwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account ID of the expected source bucket owner. If the account ID that
     * you provide does not match the actual owner of the source bucket, the request
     * fails with the HTTP status code <code>403 Forbidden</code> (access denied).</p>
     */
    inline const Aws::String& GetExpectedSourceBucketOwner() const { return m_expectedSourceBucketOwner; }
    inline bool ExpectedSourceBucketOwnerHasBeenSet() const { return m_expectedSourceBucketOwnerHasBeenSet; }
    template<typename ExpectedSourceBucketOwnerT = Aws::String>
    void SetExpectedSourceBucketOwner(ExpectedSourceBucketOwnerT&& value) { m_expectedSourceBucketOwnerHasBeenSet = true; m_expectedSourceBucketOwner = std::forward<ExpectedSourceBucketOwnerT>(value); }
    template<typename ExpectedSourceBucketOwnerT = Aws::String>
    UploadPartCopyRequest& WithExpectedSourceBucketOwner(ExpectedSourceBucketOwnerT&& value) { SetExpectedSourceBucketOwner(std::forward<ExpectedSourceBucketOwnerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetCustomizedAccessLogTag() const { return m_customizedAccessLogTag; }
    inline bool CustomizedAccessLogTagHasBeenSet() const { return m_customizedAccessLogTagHasBeenSet; }
    template<typename CustomizedAccessLogTagT = Aws::Map<Aws::String, Aws::String>>
    void SetCustomizedAccessLogTag(CustomizedAccessLogTagT&& value) { m_customizedAccessLogTagHasBeenSet = true; m_customizedAccessLogTag = std::forward<CustomizedAccessLogTagT>(value); }
    template<typename CustomizedAccessLogTagT = Aws::Map<Aws::String, Aws::String>>
    UploadPartCopyRequest& WithCustomizedAccessLogTag(CustomizedAccessLogTagT&& value) { SetCustomizedAccessLogTag(std::forward<CustomizedAccessLogTagT>(value)); return *this;}
    template<typename CustomizedAccessLogTagKeyT = Aws::String, typename CustomizedAccessLogTagValueT = Aws::String>
    UploadPartCopyRequest& AddCustomizedAccessLogTag(CustomizedAccessLogTagKeyT&& key, CustomizedAccessLogTagValueT&& value) {
      m_customizedAccessLogTagHasBeenSet = true; m_customizedAccessLogTag.emplace(std::forward<CustomizedAccessLogTagKeyT>(key), std::forward<CustomizedAccessLogTagValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_copySource;
    bool m_copySourceHasBeenSet = false;

    Aws::String m_copySourceIfMatch;
    bool m_copySourceIfMatchHasBeenSet = false;

    Aws::Utils::DateTime m_copySourceIfModifiedSince{};
    bool m_copySourceIfModifiedSinceHasBeenSet = false;

    Aws::String m_copySourceIfNoneMatch;
    bool m_copySourceIfNoneMatchHasBeenSet = false;

    Aws::Utils::DateTime m_copySourceIfUnmodifiedSince{};
    bool m_copySourceIfUnmodifiedSinceHasBeenSet = false;

    Aws::String m_copySourceRange;
    bool m_copySourceRangeHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    int m_partNumber{0};
    bool m_partNumberHasBeenSet = false;

    Aws::String m_uploadId;
    bool m_uploadIdHasBeenSet = false;

    Aws::String m_sSECustomerAlgorithm;
    bool m_sSECustomerAlgorithmHasBeenSet = false;

    Aws::String m_sSECustomerKey;
    bool m_sSECustomerKeyHasBeenSet = false;

    Aws::String m_sSECustomerKeyMD5;
    bool m_sSECustomerKeyMD5HasBeenSet = false;

    Aws::String m_copySourceSSECustomerAlgorithm;
    bool m_copySourceSSECustomerAlgorithmHasBeenSet = false;

    Aws::String m_copySourceSSECustomerKey;
    bool m_copySourceSSECustomerKeyHasBeenSet = false;

    Aws::String m_copySourceSSECustomerKeyMD5;
    bool m_copySourceSSECustomerKeyMD5HasBeenSet = false;

    RequestPayer m_requestPayer{RequestPayer::NOT_SET};
    bool m_requestPayerHasBeenSet = false;

    Aws::String m_expectedBucketOwner;
    bool m_expectedBucketOwnerHasBeenSet = false;

    Aws::String m_expectedSourceBucketOwner;
    bool m_expectedSourceBucketOwnerHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_customizedAccessLogTag;
    bool m_customizedAccessLogTagHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
