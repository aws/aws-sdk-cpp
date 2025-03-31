/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/S3Request.h>
#include <aws/s3/model/ObjectCannedACL.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3/model/ChecksumAlgorithm.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/s3/model/ServerSideEncryption.h>
#include <aws/s3/model/StorageClass.h>
#include <aws/s3/model/RequestPayer.h>
#include <aws/s3/model/ObjectLockMode.h>
#include <aws/s3/model/ObjectLockLegalHoldStatus.h>
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
  class PutObjectRequest : public StreamingS3Request
  {
  public:
    AWS_S3_API PutObjectRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutObject"; }

    AWS_S3_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    AWS_S3_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    AWS_S3_API bool HasEmbeddedError(IOStream &body, const Http::HeaderValueCollection &header) const override;
    AWS_S3_API Aws::String GetChecksumAlgorithmName() const override;
    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_S3_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>The canned ACL to apply to the object. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html#CannedACL">Canned
     * ACL</a> in the <i>Amazon S3 User Guide</i>.</p> <p>When adding a new object, you
     * can use headers to grant ACL-based permissions to individual Amazon Web Services
     * accounts or to predefined groups defined by Amazon S3. These permissions are
     * then added to the ACL on the object. By default, all objects are private. Only
     * the owner has full access control. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html">Access
     * Control List (ACL) Overview</a> and <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-using-rest-api.html">Managing
     * ACLs Using the REST API</a> in the <i>Amazon S3 User Guide</i>.</p> <p>If the
     * bucket that you're uploading objects to uses the bucket owner enforced setting
     * for S3 Object Ownership, ACLs are disabled and no longer affect permissions.
     * Buckets that use this setting only accept PUT requests that don't specify an ACL
     * or PUT requests that specify bucket owner full control ACLs, such as the
     * <code>bucket-owner-full-control</code> canned ACL or an equivalent form of this
     * ACL expressed in the XML format. PUT requests that contain other ACLs (for
     * example, custom grants to certain Amazon Web Services accounts) fail and return
     * a <code>400</code> error with the error code
     * <code>AccessControlListNotSupported</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/about-object-ownership.html">
     * Controlling ownership of objects and disabling ACLs</a> in the <i>Amazon S3 User
     * Guide</i>.</p>  <ul> <li> <p>This functionality is not supported for
     * directory buckets.</p> </li> <li> <p>This functionality is not supported for
     * Amazon S3 on Outposts.</p> </li> </ul> 
     */
    inline ObjectCannedACL GetACL() const { return m_aCL; }
    inline bool ACLHasBeenSet() const { return m_aCLHasBeenSet; }
    inline void SetACL(ObjectCannedACL value) { m_aCLHasBeenSet = true; m_aCL = value; }
    inline PutObjectRequest& WithACL(ObjectCannedACL value) { SetACL(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The bucket name to which the PUT action was initiated. </p> <p> <b>Directory
     * buckets</b> - When you use this operation with a directory bucket, you must use
     * virtual-hosted-style requests in the format <code>
     * <i>Bucket-name</i>.s3express-<i>zone-id</i>.<i>region-code</i>.amazonaws.com</code>.
     * Path-style requests are not supported. Directory bucket names must be unique in
     * the chosen Zone (Availability Zone or Local Zone). Bucket names must follow the
     * format <code> <i>bucket-base-name</i>--<i>zone-id</i>--x-s3</code> (for example,
     * <code> <i>amzn-s3-demo-bucket</i>--<i>usw2-az1</i>--x-s3</code>). For
     * information about bucket naming restrictions, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/directory-bucket-naming-rules.html">Directory
     * bucket naming rules</a> in the <i>Amazon S3 User Guide</i>.</p> <p> <b>Access
     * points</b> - When you use this action with an access point for general purpose
     * buckets, you must provide the alias of the access point in place of the bucket
     * name or specify the access point ARN. When you use this action with an access
     * point for directory buckets, you must provide the access point name in place of
     * the bucket name. When using the access point ARN, you must direct requests to
     * the access point hostname. The access point hostname takes the form
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
    PutObjectRequest& WithBucket(BucketT&& value) { SetBucket(std::forward<BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Can be used to specify caching behavior along the request/reply chain. For
     * more information, see <a
     * href="http://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.9">http://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.9</a>.</p>
     */
    inline const Aws::String& GetCacheControl() const { return m_cacheControl; }
    inline bool CacheControlHasBeenSet() const { return m_cacheControlHasBeenSet; }
    template<typename CacheControlT = Aws::String>
    void SetCacheControl(CacheControlT&& value) { m_cacheControlHasBeenSet = true; m_cacheControl = std::forward<CacheControlT>(value); }
    template<typename CacheControlT = Aws::String>
    PutObjectRequest& WithCacheControl(CacheControlT&& value) { SetCacheControl(std::forward<CacheControlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies presentational information for the object. For more information,
     * see <a
     * href="https://www.rfc-editor.org/rfc/rfc6266#section-4">https://www.rfc-editor.org/rfc/rfc6266#section-4</a>.</p>
     */
    inline const Aws::String& GetContentDisposition() const { return m_contentDisposition; }
    inline bool ContentDispositionHasBeenSet() const { return m_contentDispositionHasBeenSet; }
    template<typename ContentDispositionT = Aws::String>
    void SetContentDisposition(ContentDispositionT&& value) { m_contentDispositionHasBeenSet = true; m_contentDisposition = std::forward<ContentDispositionT>(value); }
    template<typename ContentDispositionT = Aws::String>
    PutObjectRequest& WithContentDisposition(ContentDispositionT&& value) { SetContentDisposition(std::forward<ContentDispositionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies what content encodings have been applied to the object and thus
     * what decoding mechanisms must be applied to obtain the media-type referenced by
     * the Content-Type header field. For more information, see <a
     * href="https://www.rfc-editor.org/rfc/rfc9110.html#field.content-encoding">https://www.rfc-editor.org/rfc/rfc9110.html#field.content-encoding</a>.</p>
     */
    inline const Aws::String& GetContentEncoding() const { return m_contentEncoding; }
    inline bool ContentEncodingHasBeenSet() const { return m_contentEncodingHasBeenSet; }
    template<typename ContentEncodingT = Aws::String>
    void SetContentEncoding(ContentEncodingT&& value) { m_contentEncodingHasBeenSet = true; m_contentEncoding = std::forward<ContentEncodingT>(value); }
    template<typename ContentEncodingT = Aws::String>
    PutObjectRequest& WithContentEncoding(ContentEncodingT&& value) { SetContentEncoding(std::forward<ContentEncodingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language the content is in.</p>
     */
    inline const Aws::String& GetContentLanguage() const { return m_contentLanguage; }
    inline bool ContentLanguageHasBeenSet() const { return m_contentLanguageHasBeenSet; }
    template<typename ContentLanguageT = Aws::String>
    void SetContentLanguage(ContentLanguageT&& value) { m_contentLanguageHasBeenSet = true; m_contentLanguage = std::forward<ContentLanguageT>(value); }
    template<typename ContentLanguageT = Aws::String>
    PutObjectRequest& WithContentLanguage(ContentLanguageT&& value) { SetContentLanguage(std::forward<ContentLanguageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Size of the body in bytes. This parameter is useful when the size of the body
     * cannot be determined automatically. For more information, see <a
     * href="https://www.rfc-editor.org/rfc/rfc9110.html#name-content-length">https://www.rfc-editor.org/rfc/rfc9110.html#name-content-length</a>.</p>
     */
    inline long long GetContentLength() const { return m_contentLength; }
    inline bool ContentLengthHasBeenSet() const { return m_contentLengthHasBeenSet; }
    inline void SetContentLength(long long value) { m_contentLengthHasBeenSet = true; m_contentLength = value; }
    inline PutObjectRequest& WithContentLength(long long value) { SetContentLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Base64 encoded 128-bit <code>MD5</code> digest of the message (without
     * the headers) according to RFC 1864. This header can be used as a message
     * integrity check to verify that the data is the same data that was originally
     * sent. Although it is optional, we recommend using the Content-MD5 mechanism as
     * an end-to-end integrity check. For more information about REST request
     * authentication, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/RESTAuthentication.html">REST
     * Authentication</a>.</p>  <p>The <code>Content-MD5</code> or
     * <code>x-amz-sdk-checksum-algorithm</code> header is required for any request to
     * upload an object with a retention period configured using Amazon S3 Object Lock.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/object-lock-managing.html#object-lock-put-object">Uploading
     * objects to an Object Lock enabled bucket </a> in the <i>Amazon S3 User
     * Guide</i>.</p>   <p>This functionality is not supported for
     * directory buckets.</p> 
     */
    inline const Aws::String& GetContentMD5() const { return m_contentMD5; }
    inline bool ContentMD5HasBeenSet() const { return m_contentMD5HasBeenSet; }
    template<typename ContentMD5T = Aws::String>
    void SetContentMD5(ContentMD5T&& value) { m_contentMD5HasBeenSet = true; m_contentMD5 = std::forward<ContentMD5T>(value); }
    template<typename ContentMD5T = Aws::String>
    PutObjectRequest& WithContentMD5(ContentMD5T&& value) { SetContentMD5(std::forward<ContentMD5T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the algorithm used to create the checksum for the object when you
     * use the SDK. This header will not provide any additional functionality if you
     * don't use the SDK. When you send this header, there must be a corresponding
     * <code>x-amz-checksum-<i>algorithm</i> </code> or <code>x-amz-trailer</code>
     * header sent. Otherwise, Amazon S3 fails the request with the HTTP status code
     * <code>400 Bad Request</code>.</p> <p>For the
     * <code>x-amz-checksum-<i>algorithm</i> </code> header, replace <code>
     * <i>algorithm</i> </code> with the supported algorithm from the following list:
     * </p> <ul> <li> <p> <code>CRC32</code> </p> </li> <li> <p> <code>CRC32C</code>
     * </p> </li> <li> <p> <code>CRC64NVME</code> </p> </li> <li> <p> <code>SHA1</code>
     * </p> </li> <li> <p> <code>SHA256</code> </p> </li> </ul> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/checking-object-integrity.html">Checking
     * object integrity</a> in the <i>Amazon S3 User Guide</i>.</p> <p>If the
     * individual checksum value you provide through
     * <code>x-amz-checksum-<i>algorithm</i> </code> doesn't match the checksum
     * algorithm you set through <code>x-amz-sdk-checksum-algorithm</code>, Amazon S3
     * fails the request with a <code>BadDigest</code> error.</p>  <p>The
     * <code>Content-MD5</code> or <code>x-amz-sdk-checksum-algorithm</code> header is
     * required for any request to upload an object with a retention period configured
     * using Amazon S3 Object Lock. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/object-lock-managing.html#object-lock-put-object">Uploading
     * objects to an Object Lock enabled bucket </a> in the <i>Amazon S3 User
     * Guide</i>.</p>  <p>For directory buckets, when you use Amazon Web
     * Services SDKs, <code>CRC32</code> is the default checksum algorithm that's used
     * for performance.</p>
     */
    inline ChecksumAlgorithm GetChecksumAlgorithm() const { return m_checksumAlgorithm; }
    inline bool ChecksumAlgorithmHasBeenSet() const { return m_checksumAlgorithmHasBeenSet; }
    inline void SetChecksumAlgorithm(ChecksumAlgorithm value) { m_checksumAlgorithmHasBeenSet = true; m_checksumAlgorithm = value; }
    inline PutObjectRequest& WithChecksumAlgorithm(ChecksumAlgorithm value) { SetChecksumAlgorithm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This header can be used as a data integrity check to verify that the data
     * received is the same data that was originally sent. This header specifies the
     * Base64 encoded, 32-bit <code>CRC32</code> checksum of the object. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/checking-object-integrity.html">Checking
     * object integrity</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline const Aws::String& GetChecksumCRC32() const { return m_checksumCRC32; }
    inline bool ChecksumCRC32HasBeenSet() const { return m_checksumCRC32HasBeenSet; }
    template<typename ChecksumCRC32T = Aws::String>
    void SetChecksumCRC32(ChecksumCRC32T&& value) { m_checksumCRC32HasBeenSet = true; m_checksumCRC32 = std::forward<ChecksumCRC32T>(value); SetChecksumAlgorithm(ChecksumAlgorithm::CRC32); }
    inline void SetChecksumCRC32(const char* value) { m_checksumCRC32HasBeenSet = true; m_checksumCRC32.assign(value); SetChecksumAlgorithm(ChecksumAlgorithm::CRC32); }
    template<typename ChecksumCRC32T = Aws::String>
    PutObjectRequest& WithChecksumCRC32(ChecksumCRC32T&& value) { SetChecksumCRC32(std::forward<ChecksumCRC32T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This header can be used as a data integrity check to verify that the data
     * received is the same data that was originally sent. This header specifies the
     * Base64 encoded, 32-bit <code>CRC32C</code> checksum of the object. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/checking-object-integrity.html">Checking
     * object integrity</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline const Aws::String& GetChecksumCRC32C() const { return m_checksumCRC32C; }
    inline bool ChecksumCRC32CHasBeenSet() const { return m_checksumCRC32CHasBeenSet; }
    template<typename ChecksumCRC32CT = Aws::String>
    void SetChecksumCRC32C(ChecksumCRC32CT&& value) { m_checksumCRC32CHasBeenSet = true; m_checksumCRC32C = std::forward<ChecksumCRC32CT>(value); SetChecksumAlgorithm(ChecksumAlgorithm::CRC32C); }
    inline void SetChecksumCRC32C(const char* value) { m_checksumCRC32CHasBeenSet = true; m_checksumCRC32C.assign(value); SetChecksumAlgorithm(ChecksumAlgorithm::CRC32C); }
    template<typename ChecksumCRC32CT = Aws::String>
    PutObjectRequest& WithChecksumCRC32C(ChecksumCRC32CT&& value) { SetChecksumCRC32C(std::forward<ChecksumCRC32CT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This header can be used as a data integrity check to verify that the data
     * received is the same data that was originally sent. This header specifies the
     * Base64 encoded, 64-bit <code>CRC64NVME</code> checksum of the object. The
     * <code>CRC64NVME</code> checksum is always a full object checksum. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/checking-object-integrity.html">Checking
     * object integrity in the Amazon S3 User Guide</a>.</p>
     */
    inline const Aws::String& GetChecksumCRC64NVME() const { return m_checksumCRC64NVME; }
    inline bool ChecksumCRC64NVMEHasBeenSet() const { return m_checksumCRC64NVMEHasBeenSet; }
    template<typename ChecksumCRC64NVMET = Aws::String>
    void SetChecksumCRC64NVME(ChecksumCRC64NVMET&& value) { m_checksumCRC64NVMEHasBeenSet = true; m_checksumCRC64NVME = std::forward<ChecksumCRC64NVMET>(value); }
    template<typename ChecksumCRC64NVMET = Aws::String>
    PutObjectRequest& WithChecksumCRC64NVME(ChecksumCRC64NVMET&& value) { SetChecksumCRC64NVME(std::forward<ChecksumCRC64NVMET>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This header can be used as a data integrity check to verify that the data
     * received is the same data that was originally sent. This header specifies the
     * Base64 encoded, 160-bit <code>SHA1</code> digest of the object. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/checking-object-integrity.html">Checking
     * object integrity</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline const Aws::String& GetChecksumSHA1() const { return m_checksumSHA1; }
    inline bool ChecksumSHA1HasBeenSet() const { return m_checksumSHA1HasBeenSet; }
    template<typename ChecksumSHA1T = Aws::String>
    void SetChecksumSHA1(ChecksumSHA1T&& value) { m_checksumSHA1HasBeenSet = true; m_checksumSHA1 = std::forward<ChecksumSHA1T>(value); SetChecksumAlgorithm(ChecksumAlgorithm::SHA1); }
    inline void SetChecksumSHA1(const char* value) { m_checksumSHA1HasBeenSet = true; m_checksumSHA1.assign(value); SetChecksumAlgorithm(ChecksumAlgorithm::SHA1); }
    template<typename ChecksumSHA1T = Aws::String>
    PutObjectRequest& WithChecksumSHA1(ChecksumSHA1T&& value) { SetChecksumSHA1(std::forward<ChecksumSHA1T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This header can be used as a data integrity check to verify that the data
     * received is the same data that was originally sent. This header specifies the
     * Base64 encoded, 256-bit <code>SHA256</code> digest of the object. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/checking-object-integrity.html">Checking
     * object integrity</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline const Aws::String& GetChecksumSHA256() const { return m_checksumSHA256; }
    inline bool ChecksumSHA256HasBeenSet() const { return m_checksumSHA256HasBeenSet; }
    template<typename ChecksumSHA256T = Aws::String>
    void SetChecksumSHA256(ChecksumSHA256T&& value) { m_checksumSHA256HasBeenSet = true; m_checksumSHA256 = std::forward<ChecksumSHA256T>(value); SetChecksumAlgorithm(ChecksumAlgorithm::SHA256); }
    inline void SetChecksumSHA256(const char* value) { m_checksumSHA256HasBeenSet = true; m_checksumSHA256.assign(value); SetChecksumAlgorithm(ChecksumAlgorithm::SHA256); }
    template<typename ChecksumSHA256T = Aws::String>
    PutObjectRequest& WithChecksumSHA256(ChecksumSHA256T&& value) { SetChecksumSHA256(std::forward<ChecksumSHA256T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the object is no longer cacheable. For more
     * information, see <a
     * href="https://www.rfc-editor.org/rfc/rfc7234#section-5.3">https://www.rfc-editor.org/rfc/rfc7234#section-5.3</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetExpires() const { return m_expires; }
    inline bool ExpiresHasBeenSet() const { return m_expiresHasBeenSet; }
    template<typename ExpiresT = Aws::Utils::DateTime>
    void SetExpires(ExpiresT&& value) { m_expiresHasBeenSet = true; m_expires = std::forward<ExpiresT>(value); }
    template<typename ExpiresT = Aws::Utils::DateTime>
    PutObjectRequest& WithExpires(ExpiresT&& value) { SetExpires(std::forward<ExpiresT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Uploads the object only if the ETag (entity tag) value provided during the
     * WRITE operation matches the ETag of the object in S3. If the ETag values do not
     * match, the operation returns a <code>412 Precondition Failed</code> error.</p>
     * <p>If a conflicting operation occurs during the upload S3 returns a <code>409
     * ConditionalRequestConflict</code> response. On a 409 failure you should fetch
     * the object's ETag and retry the upload.</p> <p>Expects the ETag value as a
     * string.</p> <p>For more information about conditional requests, see <a
     * href="https://tools.ietf.org/html/rfc7232">RFC 7232</a>, or <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/conditional-requests.html">Conditional
     * requests</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline const Aws::String& GetIfMatch() const { return m_ifMatch; }
    inline bool IfMatchHasBeenSet() const { return m_ifMatchHasBeenSet; }
    template<typename IfMatchT = Aws::String>
    void SetIfMatch(IfMatchT&& value) { m_ifMatchHasBeenSet = true; m_ifMatch = std::forward<IfMatchT>(value); }
    template<typename IfMatchT = Aws::String>
    PutObjectRequest& WithIfMatch(IfMatchT&& value) { SetIfMatch(std::forward<IfMatchT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Uploads the object only if the object key name does not already exist in the
     * bucket specified. Otherwise, Amazon S3 returns a <code>412 Precondition
     * Failed</code> error.</p> <p>If a conflicting operation occurs during the upload
     * S3 returns a <code>409 ConditionalRequestConflict</code> response. On a 409
     * failure you should retry the upload.</p> <p>Expects the '*' (asterisk)
     * character.</p> <p>For more information about conditional requests, see <a
     * href="https://tools.ietf.org/html/rfc7232">RFC 7232</a>, or <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/conditional-requests.html">Conditional
     * requests</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline const Aws::String& GetIfNoneMatch() const { return m_ifNoneMatch; }
    inline bool IfNoneMatchHasBeenSet() const { return m_ifNoneMatchHasBeenSet; }
    template<typename IfNoneMatchT = Aws::String>
    void SetIfNoneMatch(IfNoneMatchT&& value) { m_ifNoneMatchHasBeenSet = true; m_ifNoneMatch = std::forward<IfNoneMatchT>(value); }
    template<typename IfNoneMatchT = Aws::String>
    PutObjectRequest& WithIfNoneMatch(IfNoneMatchT&& value) { SetIfNoneMatch(std::forward<IfNoneMatchT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Gives the grantee READ, READ_ACP, and WRITE_ACP permissions on the
     * object.</p>  <ul> <li> <p>This functionality is not supported for
     * directory buckets.</p> </li> <li> <p>This functionality is not supported for
     * Amazon S3 on Outposts.</p> </li> </ul> 
     */
    inline const Aws::String& GetGrantFullControl() const { return m_grantFullControl; }
    inline bool GrantFullControlHasBeenSet() const { return m_grantFullControlHasBeenSet; }
    template<typename GrantFullControlT = Aws::String>
    void SetGrantFullControl(GrantFullControlT&& value) { m_grantFullControlHasBeenSet = true; m_grantFullControl = std::forward<GrantFullControlT>(value); }
    template<typename GrantFullControlT = Aws::String>
    PutObjectRequest& WithGrantFullControl(GrantFullControlT&& value) { SetGrantFullControl(std::forward<GrantFullControlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows grantee to read the object data and its metadata.</p>  <ul> <li>
     * <p>This functionality is not supported for directory buckets.</p> </li> <li>
     * <p>This functionality is not supported for Amazon S3 on Outposts.</p> </li>
     * </ul> 
     */
    inline const Aws::String& GetGrantRead() const { return m_grantRead; }
    inline bool GrantReadHasBeenSet() const { return m_grantReadHasBeenSet; }
    template<typename GrantReadT = Aws::String>
    void SetGrantRead(GrantReadT&& value) { m_grantReadHasBeenSet = true; m_grantRead = std::forward<GrantReadT>(value); }
    template<typename GrantReadT = Aws::String>
    PutObjectRequest& WithGrantRead(GrantReadT&& value) { SetGrantRead(std::forward<GrantReadT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows grantee to read the object ACL.</p>  <ul> <li> <p>This
     * functionality is not supported for directory buckets.</p> </li> <li> <p>This
     * functionality is not supported for Amazon S3 on Outposts.</p> </li> </ul>
     * 
     */
    inline const Aws::String& GetGrantReadACP() const { return m_grantReadACP; }
    inline bool GrantReadACPHasBeenSet() const { return m_grantReadACPHasBeenSet; }
    template<typename GrantReadACPT = Aws::String>
    void SetGrantReadACP(GrantReadACPT&& value) { m_grantReadACPHasBeenSet = true; m_grantReadACP = std::forward<GrantReadACPT>(value); }
    template<typename GrantReadACPT = Aws::String>
    PutObjectRequest& WithGrantReadACP(GrantReadACPT&& value) { SetGrantReadACP(std::forward<GrantReadACPT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows grantee to write the ACL for the applicable object.</p>  <ul>
     * <li> <p>This functionality is not supported for directory buckets.</p> </li>
     * <li> <p>This functionality is not supported for Amazon S3 on Outposts.</p> </li>
     * </ul> 
     */
    inline const Aws::String& GetGrantWriteACP() const { return m_grantWriteACP; }
    inline bool GrantWriteACPHasBeenSet() const { return m_grantWriteACPHasBeenSet; }
    template<typename GrantWriteACPT = Aws::String>
    void SetGrantWriteACP(GrantWriteACPT&& value) { m_grantWriteACPHasBeenSet = true; m_grantWriteACP = std::forward<GrantWriteACPT>(value); }
    template<typename GrantWriteACPT = Aws::String>
    PutObjectRequest& WithGrantWriteACP(GrantWriteACPT&& value) { SetGrantWriteACP(std::forward<GrantWriteACPT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Object key for which the PUT action was initiated.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    PutObjectRequest& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the offset for appending data to existing objects in bytes. The
     * offset must be equal to the size of the existing object being appended to. If no
     * object exists, setting this header to 0 will create a new object. </p> 
     * <p>This functionality is only supported for objects in the Amazon S3 Express One
     * Zone storage class in directory buckets.</p> 
     */
    inline long long GetWriteOffsetBytes() const { return m_writeOffsetBytes; }
    inline bool WriteOffsetBytesHasBeenSet() const { return m_writeOffsetBytesHasBeenSet; }
    inline void SetWriteOffsetBytes(long long value) { m_writeOffsetBytesHasBeenSet = true; m_writeOffsetBytes = value; }
    inline PutObjectRequest& WithWriteOffsetBytes(long long value) { SetWriteOffsetBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of metadata to store with the object in S3.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetMetadata() const { return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    template<typename MetadataT = Aws::Map<Aws::String, Aws::String>>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = Aws::Map<Aws::String, Aws::String>>
    PutObjectRequest& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    template<typename MetadataKeyT = Aws::String, typename MetadataValueT = Aws::String>
    PutObjectRequest& AddMetadata(MetadataKeyT&& key, MetadataValueT&& value) {
      m_metadataHasBeenSet = true; m_metadata.emplace(std::forward<MetadataKeyT>(key), std::forward<MetadataValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The server-side encryption algorithm that was used when you store this object
     * in Amazon S3 (for example, <code>AES256</code>, <code>aws:kms</code>,
     * <code>aws:kms:dsse</code>).</p> <ul> <li> <p> <b>General purpose buckets </b> -
     * You have four mutually exclusive options to protect data using server-side
     * encryption in Amazon S3, depending on how you choose to manage the encryption
     * keys. Specifically, the encryption key options are Amazon S3 managed keys
     * (SSE-S3), Amazon Web Services KMS keys (SSE-KMS or DSSE-KMS), and
     * customer-provided keys (SSE-C). Amazon S3 encrypts data with server-side
     * encryption by using Amazon S3 managed keys (SSE-S3) by default. You can
     * optionally tell Amazon S3 to encrypt data at rest by using server-side
     * encryption with other key options. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingServerSideEncryption.html">Using
     * Server-Side Encryption</a> in the <i>Amazon S3 User Guide</i>.</p> </li> <li>
     * <p> <b>Directory buckets </b> - For directory buckets, there are only two
     * supported options for server-side encryption: server-side encryption with Amazon
     * S3 managed keys (SSE-S3) (<code>AES256</code>) and server-side encryption with
     * KMS keys (SSE-KMS) (<code>aws:kms</code>). We recommend that the bucket's
     * default encryption uses the desired encryption configuration and you don't
     * override the bucket default encryption in your <code>CreateSession</code>
     * requests or <code>PUT</code> object requests. Then, new objects are
     * automatically encrypted with the desired encryption settings. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-express-serv-side-encryption.html">Protecting
     * data with server-side encryption</a> in the <i>Amazon S3 User Guide</i>. For
     * more information about the encryption overriding behaviors in directory buckets,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-express-specifying-kms-encryption.html">Specifying
     * server-side encryption with KMS for new object uploads</a>. </p> <p>In the Zonal
     * endpoint API calls (except <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CopyObject.html">CopyObject</a>
     * and <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_UploadPartCopy.html">UploadPartCopy</a>)
     * using the REST API, the encryption request headers must match the encryption
     * settings that are specified in the <code>CreateSession</code> request. You can't
     * override the values of the encryption settings
     * (<code>x-amz-server-side-encryption</code>,
     * <code>x-amz-server-side-encryption-aws-kms-key-id</code>,
     * <code>x-amz-server-side-encryption-context</code>, and
     * <code>x-amz-server-side-encryption-bucket-key-enabled</code>) that are specified
     * in the <code>CreateSession</code> request. You don't need to explicitly specify
     * these encryption settings values in Zonal endpoint API calls, and Amazon S3 will
     * use the encryption settings values from the <code>CreateSession</code> request
     * to protect new objects in the directory bucket. </p>  <p>When you use the
     * CLI or the Amazon Web Services SDKs, for <code>CreateSession</code>, the session
     * token refreshes automatically to avoid service interruptions when a session
     * expires. The CLI or the Amazon Web Services SDKs use the bucket's default
     * encryption configuration for the <code>CreateSession</code> request. It's not
     * supported to override the encryption settings values in the
     * <code>CreateSession</code> request. So in the Zonal endpoint API calls (except
     * <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CopyObject.html">CopyObject</a>
     * and <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_UploadPartCopy.html">UploadPartCopy</a>),
     * the encryption request headers must match the default encryption configuration
     * of the directory bucket. </p>  </li> </ul>
     */
    inline ServerSideEncryption GetServerSideEncryption() const { return m_serverSideEncryption; }
    inline bool ServerSideEncryptionHasBeenSet() const { return m_serverSideEncryptionHasBeenSet; }
    inline void SetServerSideEncryption(ServerSideEncryption value) { m_serverSideEncryptionHasBeenSet = true; m_serverSideEncryption = value; }
    inline PutObjectRequest& WithServerSideEncryption(ServerSideEncryption value) { SetServerSideEncryption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>By default, Amazon S3 uses the STANDARD Storage Class to store newly created
     * objects. The STANDARD storage class provides high durability and high
     * availability. Depending on performance needs, you can specify a different
     * Storage Class. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage-class-intro.html">Storage
     * Classes</a> in the <i>Amazon S3 User Guide</i>.</p>  <ul> <li>
     * <p>Directory buckets only support <code>EXPRESS_ONEZONE</code> (the S3 Express
     * One Zone storage class) in Availability Zones and <code>ONEZONE_IA</code> (the
     * S3 One Zone-Infrequent Access storage class) in Dedicated Local Zones.</p> </li>
     * <li> <p>Amazon S3 on Outposts only uses the OUTPOSTS Storage Class.</p> </li>
     * </ul> 
     */
    inline StorageClass GetStorageClass() const { return m_storageClass; }
    inline bool StorageClassHasBeenSet() const { return m_storageClassHasBeenSet; }
    inline void SetStorageClass(StorageClass value) { m_storageClassHasBeenSet = true; m_storageClass = value; }
    inline PutObjectRequest& WithStorageClass(StorageClass value) { SetStorageClass(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the bucket is configured as a website, redirects requests for this object
     * to another object in the same bucket or to an external URL. Amazon S3 stores the
     * value of this header in the object metadata. For information about object
     * metadata, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html">Object
     * Key and Metadata</a> in the <i>Amazon S3 User Guide</i>.</p> <p>In the following
     * example, the request header sets the redirect to an object (anotherPage.html) in
     * the same bucket:</p> <p> <code>x-amz-website-redirect-location:
     * /anotherPage.html</code> </p> <p>In the following example, the request header
     * sets the object redirect to another website:</p> <p>
     * <code>x-amz-website-redirect-location: http://www.example.com/</code> </p>
     * <p>For more information about website hosting in Amazon S3, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/WebsiteHosting.html">Hosting
     * Websites on Amazon S3</a> and <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/how-to-page-redirect.html">How
     * to Configure Website Page Redirects</a> in the <i>Amazon S3 User Guide</i>. </p>
     *  <p>This functionality is not supported for directory buckets.</p> 
     */
    inline const Aws::String& GetWebsiteRedirectLocation() const { return m_websiteRedirectLocation; }
    inline bool WebsiteRedirectLocationHasBeenSet() const { return m_websiteRedirectLocationHasBeenSet; }
    template<typename WebsiteRedirectLocationT = Aws::String>
    void SetWebsiteRedirectLocation(WebsiteRedirectLocationT&& value) { m_websiteRedirectLocationHasBeenSet = true; m_websiteRedirectLocation = std::forward<WebsiteRedirectLocationT>(value); }
    template<typename WebsiteRedirectLocationT = Aws::String>
    PutObjectRequest& WithWebsiteRedirectLocation(WebsiteRedirectLocationT&& value) { SetWebsiteRedirectLocation(std::forward<WebsiteRedirectLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the algorithm to use when encrypting the object (for example,
     * <code>AES256</code>).</p>  <p>This functionality is not supported for
     * directory buckets.</p> 
     */
    inline const Aws::String& GetSSECustomerAlgorithm() const { return m_sSECustomerAlgorithm; }
    inline bool SSECustomerAlgorithmHasBeenSet() const { return m_sSECustomerAlgorithmHasBeenSet; }
    template<typename SSECustomerAlgorithmT = Aws::String>
    void SetSSECustomerAlgorithm(SSECustomerAlgorithmT&& value) { m_sSECustomerAlgorithmHasBeenSet = true; m_sSECustomerAlgorithm = std::forward<SSECustomerAlgorithmT>(value); }
    template<typename SSECustomerAlgorithmT = Aws::String>
    PutObjectRequest& WithSSECustomerAlgorithm(SSECustomerAlgorithmT&& value) { SetSSECustomerAlgorithm(std::forward<SSECustomerAlgorithmT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the customer-provided encryption key for Amazon S3 to use in
     * encrypting data. This value is used to store the object and then it is
     * discarded; Amazon S3 does not store the encryption key. The key must be
     * appropriate for use with the algorithm specified in the
     * <code>x-amz-server-side-encryption-customer-algorithm</code> header.</p> 
     * <p>This functionality is not supported for directory buckets.</p> 
     */
    inline const Aws::String& GetSSECustomerKey() const { return m_sSECustomerKey; }
    inline bool SSECustomerKeyHasBeenSet() const { return m_sSECustomerKeyHasBeenSet; }
    template<typename SSECustomerKeyT = Aws::String>
    void SetSSECustomerKey(SSECustomerKeyT&& value) { m_sSECustomerKeyHasBeenSet = true; m_sSECustomerKey = std::forward<SSECustomerKeyT>(value); }
    template<typename SSECustomerKeyT = Aws::String>
    PutObjectRequest& WithSSECustomerKey(SSECustomerKeyT&& value) { SetSSECustomerKey(std::forward<SSECustomerKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the 128-bit MD5 digest of the encryption key according to RFC 1321.
     * Amazon S3 uses this header for a message integrity check to ensure that the
     * encryption key was transmitted without error.</p>  <p>This functionality
     * is not supported for directory buckets.</p> 
     */
    inline const Aws::String& GetSSECustomerKeyMD5() const { return m_sSECustomerKeyMD5; }
    inline bool SSECustomerKeyMD5HasBeenSet() const { return m_sSECustomerKeyMD5HasBeenSet; }
    template<typename SSECustomerKeyMD5T = Aws::String>
    void SetSSECustomerKeyMD5(SSECustomerKeyMD5T&& value) { m_sSECustomerKeyMD5HasBeenSet = true; m_sSECustomerKeyMD5 = std::forward<SSECustomerKeyMD5T>(value); }
    template<typename SSECustomerKeyMD5T = Aws::String>
    PutObjectRequest& WithSSECustomerKeyMD5(SSECustomerKeyMD5T&& value) { SetSSECustomerKeyMD5(std::forward<SSECustomerKeyMD5T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the KMS key ID (Key ID, Key ARN, or Key Alias) to use for object
     * encryption. If the KMS key doesn't exist in the same account that's issuing the
     * command, you must use the full Key ARN not the Key ID.</p> <p> <b>General
     * purpose buckets</b> - If you specify <code>x-amz-server-side-encryption</code>
     * with <code>aws:kms</code> or <code>aws:kms:dsse</code>, this header specifies
     * the ID (Key ID, Key ARN, or Key Alias) of the KMS key to use. If you specify
     * <code>x-amz-server-side-encryption:aws:kms</code> or
     * <code>x-amz-server-side-encryption:aws:kms:dsse</code>, but do not provide
     * <code>x-amz-server-side-encryption-aws-kms-key-id</code>, Amazon S3 uses the
     * Amazon Web Services managed key (<code>aws/s3</code>) to protect the data.</p>
     * <p> <b>Directory buckets</b> - To encrypt data using SSE-KMS, it's recommended
     * to specify the <code>x-amz-server-side-encryption</code> header to
     * <code>aws:kms</code>. Then, the
     * <code>x-amz-server-side-encryption-aws-kms-key-id</code> header implicitly uses
     * the bucket's default KMS customer managed key ID. If you want to explicitly set
     * the <code> x-amz-server-side-encryption-aws-kms-key-id</code> header, it must
     * match the bucket's default customer managed key (using key ID or ARN, not
     * alias). Your SSE-KMS configuration can only support 1 <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#customer-cmk">customer
     * managed key</a> per directory bucket's lifetime. The <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#aws-managed-cmk">Amazon
     * Web Services managed key</a> (<code>aws/s3</code>) isn't supported. Incorrect
     * key specification results in an HTTP <code>400 Bad Request</code> error. </p>
     */
    inline const Aws::String& GetSSEKMSKeyId() const { return m_sSEKMSKeyId; }
    inline bool SSEKMSKeyIdHasBeenSet() const { return m_sSEKMSKeyIdHasBeenSet; }
    template<typename SSEKMSKeyIdT = Aws::String>
    void SetSSEKMSKeyId(SSEKMSKeyIdT&& value) { m_sSEKMSKeyIdHasBeenSet = true; m_sSEKMSKeyId = std::forward<SSEKMSKeyIdT>(value); }
    template<typename SSEKMSKeyIdT = Aws::String>
    PutObjectRequest& WithSSEKMSKeyId(SSEKMSKeyIdT&& value) { SetSSEKMSKeyId(std::forward<SSEKMSKeyIdT>(value)); return *this;}
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
    PutObjectRequest& WithSSEKMSEncryptionContext(SSEKMSEncryptionContextT&& value) { SetSSEKMSEncryptionContext(std::forward<SSEKMSEncryptionContextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether Amazon S3 should use an S3 Bucket Key for object encryption
     * with server-side encryption using Key Management Service (KMS) keys
     * (SSE-KMS).</p> <p> <b>General purpose buckets</b> - Setting this header to
     * <code>true</code> causes Amazon S3 to use an S3 Bucket Key for object encryption
     * with SSE-KMS. Also, specifying this header with a PUT action doesn't affect
     * bucket-level settings for S3 Bucket Key.</p> <p> <b>Directory buckets</b> - S3
     * Bucket Keys are always enabled for <code>GET</code> and <code>PUT</code>
     * operations in a directory bucket and can’t be disabled. S3 Bucket Keys aren't
     * supported, when you copy SSE-KMS encrypted objects from general purpose buckets
     * to directory buckets, from directory buckets to general purpose buckets, or
     * between directory buckets, through <a
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
    inline PutObjectRequest& WithBucketKeyEnabled(bool value) { SetBucketKeyEnabled(value); return *this;}
    ///@}

    ///@{
    
    inline RequestPayer GetRequestPayer() const { return m_requestPayer; }
    inline bool RequestPayerHasBeenSet() const { return m_requestPayerHasBeenSet; }
    inline void SetRequestPayer(RequestPayer value) { m_requestPayerHasBeenSet = true; m_requestPayer = value; }
    inline PutObjectRequest& WithRequestPayer(RequestPayer value) { SetRequestPayer(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag-set for the object. The tag-set must be encoded as URL Query
     * parameters. (For example, "Key1=Value1")</p>  <p>This functionality is not
     * supported for directory buckets.</p> 
     */
    inline const Aws::String& GetTagging() const { return m_tagging; }
    inline bool TaggingHasBeenSet() const { return m_taggingHasBeenSet; }
    template<typename TaggingT = Aws::String>
    void SetTagging(TaggingT&& value) { m_taggingHasBeenSet = true; m_tagging = std::forward<TaggingT>(value); }
    template<typename TaggingT = Aws::String>
    PutObjectRequest& WithTagging(TaggingT&& value) { SetTagging(std::forward<TaggingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Object Lock mode that you want to apply to this object.</p> 
     * <p>This functionality is not supported for directory buckets.</p> 
     */
    inline ObjectLockMode GetObjectLockMode() const { return m_objectLockMode; }
    inline bool ObjectLockModeHasBeenSet() const { return m_objectLockModeHasBeenSet; }
    inline void SetObjectLockMode(ObjectLockMode value) { m_objectLockModeHasBeenSet = true; m_objectLockMode = value; }
    inline PutObjectRequest& WithObjectLockMode(ObjectLockMode value) { SetObjectLockMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when you want this object's Object Lock to expire. Must be
     * formatted as a timestamp parameter.</p>  <p>This functionality is not
     * supported for directory buckets.</p> 
     */
    inline const Aws::Utils::DateTime& GetObjectLockRetainUntilDate() const { return m_objectLockRetainUntilDate; }
    inline bool ObjectLockRetainUntilDateHasBeenSet() const { return m_objectLockRetainUntilDateHasBeenSet; }
    template<typename ObjectLockRetainUntilDateT = Aws::Utils::DateTime>
    void SetObjectLockRetainUntilDate(ObjectLockRetainUntilDateT&& value) { m_objectLockRetainUntilDateHasBeenSet = true; m_objectLockRetainUntilDate = std::forward<ObjectLockRetainUntilDateT>(value); }
    template<typename ObjectLockRetainUntilDateT = Aws::Utils::DateTime>
    PutObjectRequest& WithObjectLockRetainUntilDate(ObjectLockRetainUntilDateT&& value) { SetObjectLockRetainUntilDate(std::forward<ObjectLockRetainUntilDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether a legal hold will be applied to this object. For more
     * information about S3 Object Lock, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-lock.html">Object
     * Lock</a> in the <i>Amazon S3 User Guide</i>.</p>  <p>This functionality is
     * not supported for directory buckets.</p> 
     */
    inline ObjectLockLegalHoldStatus GetObjectLockLegalHoldStatus() const { return m_objectLockLegalHoldStatus; }
    inline bool ObjectLockLegalHoldStatusHasBeenSet() const { return m_objectLockLegalHoldStatusHasBeenSet; }
    inline void SetObjectLockLegalHoldStatus(ObjectLockLegalHoldStatus value) { m_objectLockLegalHoldStatusHasBeenSet = true; m_objectLockLegalHoldStatus = value; }
    inline PutObjectRequest& WithObjectLockLegalHoldStatus(ObjectLockLegalHoldStatus value) { SetObjectLockLegalHoldStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account ID of the expected bucket owner. If the account ID that you
     * provide does not match the actual owner of the bucket, the request fails with
     * the HTTP status code <code>403 Forbidden</code> (access denied).</p>
     */
    inline const Aws::String& GetExpectedBucketOwner() const { return m_expectedBucketOwner; }
    inline bool ExpectedBucketOwnerHasBeenSet() const { return m_expectedBucketOwnerHasBeenSet; }
    template<typename ExpectedBucketOwnerT = Aws::String>
    void SetExpectedBucketOwner(ExpectedBucketOwnerT&& value) { m_expectedBucketOwnerHasBeenSet = true; m_expectedBucketOwner = std::forward<ExpectedBucketOwnerT>(value); }
    template<typename ExpectedBucketOwnerT = Aws::String>
    PutObjectRequest& WithExpectedBucketOwner(ExpectedBucketOwnerT&& value) { SetExpectedBucketOwner(std::forward<ExpectedBucketOwnerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetCustomizedAccessLogTag() const { return m_customizedAccessLogTag; }
    inline bool CustomizedAccessLogTagHasBeenSet() const { return m_customizedAccessLogTagHasBeenSet; }
    template<typename CustomizedAccessLogTagT = Aws::Map<Aws::String, Aws::String>>
    void SetCustomizedAccessLogTag(CustomizedAccessLogTagT&& value) { m_customizedAccessLogTagHasBeenSet = true; m_customizedAccessLogTag = std::forward<CustomizedAccessLogTagT>(value); }
    template<typename CustomizedAccessLogTagT = Aws::Map<Aws::String, Aws::String>>
    PutObjectRequest& WithCustomizedAccessLogTag(CustomizedAccessLogTagT&& value) { SetCustomizedAccessLogTag(std::forward<CustomizedAccessLogTagT>(value)); return *this;}
    template<typename CustomizedAccessLogTagKeyT = Aws::String, typename CustomizedAccessLogTagValueT = Aws::String>
    PutObjectRequest& AddCustomizedAccessLogTag(CustomizedAccessLogTagKeyT&& key, CustomizedAccessLogTagValueT&& value) {
      m_customizedAccessLogTagHasBeenSet = true; m_customizedAccessLogTag.emplace(std::forward<CustomizedAccessLogTagKeyT>(key), std::forward<CustomizedAccessLogTagValueT>(value)); return *this;
    }
    ///@}
  private:

    ObjectCannedACL m_aCL{ObjectCannedACL::NOT_SET};
    bool m_aCLHasBeenSet = false;


    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_cacheControl;
    bool m_cacheControlHasBeenSet = false;

    Aws::String m_contentDisposition;
    bool m_contentDispositionHasBeenSet = false;

    Aws::String m_contentEncoding;
    bool m_contentEncodingHasBeenSet = false;

    Aws::String m_contentLanguage;
    bool m_contentLanguageHasBeenSet = false;

    long long m_contentLength{0};
    bool m_contentLengthHasBeenSet = false;

    Aws::String m_contentMD5;
    bool m_contentMD5HasBeenSet = false;

    ChecksumAlgorithm m_checksumAlgorithm{ChecksumAlgorithm::NOT_SET};
    bool m_checksumAlgorithmHasBeenSet = false;

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

    Aws::Utils::DateTime m_expires{};
    bool m_expiresHasBeenSet = false;

    Aws::String m_ifMatch;
    bool m_ifMatchHasBeenSet = false;

    Aws::String m_ifNoneMatch;
    bool m_ifNoneMatchHasBeenSet = false;

    Aws::String m_grantFullControl;
    bool m_grantFullControlHasBeenSet = false;

    Aws::String m_grantRead;
    bool m_grantReadHasBeenSet = false;

    Aws::String m_grantReadACP;
    bool m_grantReadACPHasBeenSet = false;

    Aws::String m_grantWriteACP;
    bool m_grantWriteACPHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    long long m_writeOffsetBytes{0};
    bool m_writeOffsetBytesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_metadata;
    bool m_metadataHasBeenSet = false;

    ServerSideEncryption m_serverSideEncryption{ServerSideEncryption::NOT_SET};
    bool m_serverSideEncryptionHasBeenSet = false;

    StorageClass m_storageClass{StorageClass::NOT_SET};
    bool m_storageClassHasBeenSet = false;

    Aws::String m_websiteRedirectLocation;
    bool m_websiteRedirectLocationHasBeenSet = false;

    Aws::String m_sSECustomerAlgorithm;
    bool m_sSECustomerAlgorithmHasBeenSet = false;

    Aws::String m_sSECustomerKey;
    bool m_sSECustomerKeyHasBeenSet = false;

    Aws::String m_sSECustomerKeyMD5;
    bool m_sSECustomerKeyMD5HasBeenSet = false;

    Aws::String m_sSEKMSKeyId;
    bool m_sSEKMSKeyIdHasBeenSet = false;

    Aws::String m_sSEKMSEncryptionContext;
    bool m_sSEKMSEncryptionContextHasBeenSet = false;

    bool m_bucketKeyEnabled{false};
    bool m_bucketKeyEnabledHasBeenSet = false;

    RequestPayer m_requestPayer{RequestPayer::NOT_SET};
    bool m_requestPayerHasBeenSet = false;

    Aws::String m_tagging;
    bool m_taggingHasBeenSet = false;

    ObjectLockMode m_objectLockMode{ObjectLockMode::NOT_SET};
    bool m_objectLockModeHasBeenSet = false;

    Aws::Utils::DateTime m_objectLockRetainUntilDate{};
    bool m_objectLockRetainUntilDateHasBeenSet = false;

    ObjectLockLegalHoldStatus m_objectLockLegalHoldStatus{ObjectLockLegalHoldStatus::NOT_SET};
    bool m_objectLockLegalHoldStatusHasBeenSet = false;

    Aws::String m_expectedBucketOwner;
    bool m_expectedBucketOwnerHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_customizedAccessLogTag;
    bool m_customizedAccessLogTagHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
