﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/s3-crt/S3CrtRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/s3-crt/model/RequestPayer.h>
#include <aws/s3-crt/model/ChecksumMode.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace S3Crt
{
namespace Model
{

  /**
   */
  class GetObjectRequest : public S3CrtRequest
  {
  public:
    AWS_S3CRT_API GetObjectRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetObject"; }

    AWS_S3CRT_API Aws::String SerializePayload() const override;

    AWS_S3CRT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    AWS_S3CRT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    AWS_S3CRT_API bool ShouldValidateResponseChecksum() const override;

    AWS_S3CRT_API Aws::Vector<Aws::String> GetResponseChecksumAlgorithmNames() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_S3CRT_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>The bucket name containing the object. </p> <p> <b>Directory buckets</b> -
     * When you use this operation with a directory bucket, you must use
     * virtual-hosted-style requests in the format <code>
     * <i>Bucket-name</i>.s3express-<i>zone-id</i>.<i>region-code</i>.amazonaws.com</code>.
     * Path-style requests are not supported. Directory bucket names must be unique in
     * the chosen Zone (Availability Zone or Local Zone). Bucket names must follow the
     * format <code> <i>bucket-base-name</i>--<i>zone-id</i>--x-s3</code> (for example,
     * <code> <i>amzn-s3-demo-bucket</i>--<i>usw2-az1</i>--x-s3</code>). For
     * information about bucket naming restrictions, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/directory-bucket-naming-rules.html">Directory
     * bucket naming rules</a> in the <i>Amazon S3 User Guide</i>.</p> <p> <b>Access
     * points</b> - When you use this action with an access point, you must provide the
     * alias of the access point in place of the bucket name or specify the access
     * point ARN. When using the access point ARN, you must direct requests to the
     * access point hostname. The access point hostname takes the form
     * <i>AccessPointName</i>-<i>AccountId</i>.s3-accesspoint.<i>Region</i>.amazonaws.com.
     * When using this action with an access point through the Amazon Web Services
     * SDKs, you provide the access point ARN in place of the bucket name. For more
     * information about access point ARNs, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-access-points.html">Using
     * access points</a> in the <i>Amazon S3 User Guide</i>.</p> <p> <b>Object Lambda
     * access points</b> - When you use this action with an Object Lambda access point,
     * you must direct requests to the Object Lambda access point hostname. The Object
     * Lambda access point hostname takes the form
     * <i>AccessPointName</i>-<i>AccountId</i>.s3-object-lambda.<i>Region</i>.amazonaws.com.</p>
     *  <p>Access points and Object Lambda access points are not supported by
     * directory buckets.</p>  <p> <b>S3 on Outposts</b> - When you use this
     * action with S3 on Outposts, you must direct requests to the S3 on Outposts
     * hostname. The S3 on Outposts hostname takes the form <code>
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
    GetObjectRequest& WithBucket(BucketT&& value) { SetBucket(std::forward<BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Return the object only if its entity tag (ETag) is the same as the one
     * specified in this header; otherwise, return a <code>412 Precondition
     * Failed</code> error.</p> <p>If both of the <code>If-Match</code> and
     * <code>If-Unmodified-Since</code> headers are present in the request as follows:
     * <code>If-Match</code> condition evaluates to <code>true</code>, and;
     * <code>If-Unmodified-Since</code> condition evaluates to <code>false</code>;
     * then, S3 returns <code>200 OK</code> and the data requested. </p> <p>For more
     * information about conditional requests, see <a
     * href="https://tools.ietf.org/html/rfc7232">RFC 7232</a>.</p>
     */
    inline const Aws::String& GetIfMatch() const { return m_ifMatch; }
    inline bool IfMatchHasBeenSet() const { return m_ifMatchHasBeenSet; }
    template<typename IfMatchT = Aws::String>
    void SetIfMatch(IfMatchT&& value) { m_ifMatchHasBeenSet = true; m_ifMatch = std::forward<IfMatchT>(value); }
    template<typename IfMatchT = Aws::String>
    GetObjectRequest& WithIfMatch(IfMatchT&& value) { SetIfMatch(std::forward<IfMatchT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Return the object only if it has been modified since the specified time;
     * otherwise, return a <code>304 Not Modified</code> error.</p> <p>If both of the
     * <code>If-None-Match</code> and <code>If-Modified-Since</code> headers are
     * present in the request as follows:<code> If-None-Match</code> condition
     * evaluates to <code>false</code>, and; <code>If-Modified-Since</code> condition
     * evaluates to <code>true</code>; then, S3 returns <code>304 Not Modified</code>
     * status code.</p> <p>For more information about conditional requests, see <a
     * href="https://tools.ietf.org/html/rfc7232">RFC 7232</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetIfModifiedSince() const { return m_ifModifiedSince; }
    inline bool IfModifiedSinceHasBeenSet() const { return m_ifModifiedSinceHasBeenSet; }
    template<typename IfModifiedSinceT = Aws::Utils::DateTime>
    void SetIfModifiedSince(IfModifiedSinceT&& value) { m_ifModifiedSinceHasBeenSet = true; m_ifModifiedSince = std::forward<IfModifiedSinceT>(value); }
    template<typename IfModifiedSinceT = Aws::Utils::DateTime>
    GetObjectRequest& WithIfModifiedSince(IfModifiedSinceT&& value) { SetIfModifiedSince(std::forward<IfModifiedSinceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Return the object only if its entity tag (ETag) is different from the one
     * specified in this header; otherwise, return a <code>304 Not Modified</code>
     * error.</p> <p>If both of the <code>If-None-Match</code> and
     * <code>If-Modified-Since</code> headers are present in the request as
     * follows:<code> If-None-Match</code> condition evaluates to <code>false</code>,
     * and; <code>If-Modified-Since</code> condition evaluates to <code>true</code>;
     * then, S3 returns <code>304 Not Modified</code> HTTP status code.</p> <p>For more
     * information about conditional requests, see <a
     * href="https://tools.ietf.org/html/rfc7232">RFC 7232</a>.</p>
     */
    inline const Aws::String& GetIfNoneMatch() const { return m_ifNoneMatch; }
    inline bool IfNoneMatchHasBeenSet() const { return m_ifNoneMatchHasBeenSet; }
    template<typename IfNoneMatchT = Aws::String>
    void SetIfNoneMatch(IfNoneMatchT&& value) { m_ifNoneMatchHasBeenSet = true; m_ifNoneMatch = std::forward<IfNoneMatchT>(value); }
    template<typename IfNoneMatchT = Aws::String>
    GetObjectRequest& WithIfNoneMatch(IfNoneMatchT&& value) { SetIfNoneMatch(std::forward<IfNoneMatchT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Return the object only if it has not been modified since the specified time;
     * otherwise, return a <code>412 Precondition Failed</code> error.</p> <p>If both
     * of the <code>If-Match</code> and <code>If-Unmodified-Since</code> headers are
     * present in the request as follows: <code>If-Match</code> condition evaluates to
     * <code>true</code>, and; <code>If-Unmodified-Since</code> condition evaluates to
     * <code>false</code>; then, S3 returns <code>200 OK</code> and the data requested.
     * </p> <p>For more information about conditional requests, see <a
     * href="https://tools.ietf.org/html/rfc7232">RFC 7232</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetIfUnmodifiedSince() const { return m_ifUnmodifiedSince; }
    inline bool IfUnmodifiedSinceHasBeenSet() const { return m_ifUnmodifiedSinceHasBeenSet; }
    template<typename IfUnmodifiedSinceT = Aws::Utils::DateTime>
    void SetIfUnmodifiedSince(IfUnmodifiedSinceT&& value) { m_ifUnmodifiedSinceHasBeenSet = true; m_ifUnmodifiedSince = std::forward<IfUnmodifiedSinceT>(value); }
    template<typename IfUnmodifiedSinceT = Aws::Utils::DateTime>
    GetObjectRequest& WithIfUnmodifiedSince(IfUnmodifiedSinceT&& value) { SetIfUnmodifiedSince(std::forward<IfUnmodifiedSinceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Key of the object to get.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    GetObjectRequest& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Downloads the specified byte range of an object. For more information about
     * the HTTP Range header, see <a
     * href="https://www.rfc-editor.org/rfc/rfc9110.html#name-range">https://www.rfc-editor.org/rfc/rfc9110.html#name-range</a>.</p>
     *  <p>Amazon S3 doesn't support retrieving multiple ranges of data per
     * <code>GET</code> request.</p> 
     */
    inline const Aws::String& GetRange() const { return m_range; }
    inline bool RangeHasBeenSet() const { return m_rangeHasBeenSet; }
    template<typename RangeT = Aws::String>
    void SetRange(RangeT&& value) { m_rangeHasBeenSet = true; m_range = std::forward<RangeT>(value); }
    template<typename RangeT = Aws::String>
    GetObjectRequest& WithRange(RangeT&& value) { SetRange(std::forward<RangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the <code>Cache-Control</code> header of the response.</p>
     */
    inline const Aws::String& GetResponseCacheControl() const { return m_responseCacheControl; }
    inline bool ResponseCacheControlHasBeenSet() const { return m_responseCacheControlHasBeenSet; }
    template<typename ResponseCacheControlT = Aws::String>
    void SetResponseCacheControl(ResponseCacheControlT&& value) { m_responseCacheControlHasBeenSet = true; m_responseCacheControl = std::forward<ResponseCacheControlT>(value); }
    template<typename ResponseCacheControlT = Aws::String>
    GetObjectRequest& WithResponseCacheControl(ResponseCacheControlT&& value) { SetResponseCacheControl(std::forward<ResponseCacheControlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the <code>Content-Disposition</code> header of the response.</p>
     */
    inline const Aws::String& GetResponseContentDisposition() const { return m_responseContentDisposition; }
    inline bool ResponseContentDispositionHasBeenSet() const { return m_responseContentDispositionHasBeenSet; }
    template<typename ResponseContentDispositionT = Aws::String>
    void SetResponseContentDisposition(ResponseContentDispositionT&& value) { m_responseContentDispositionHasBeenSet = true; m_responseContentDisposition = std::forward<ResponseContentDispositionT>(value); }
    template<typename ResponseContentDispositionT = Aws::String>
    GetObjectRequest& WithResponseContentDisposition(ResponseContentDispositionT&& value) { SetResponseContentDisposition(std::forward<ResponseContentDispositionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the <code>Content-Encoding</code> header of the response.</p>
     */
    inline const Aws::String& GetResponseContentEncoding() const { return m_responseContentEncoding; }
    inline bool ResponseContentEncodingHasBeenSet() const { return m_responseContentEncodingHasBeenSet; }
    template<typename ResponseContentEncodingT = Aws::String>
    void SetResponseContentEncoding(ResponseContentEncodingT&& value) { m_responseContentEncodingHasBeenSet = true; m_responseContentEncoding = std::forward<ResponseContentEncodingT>(value); }
    template<typename ResponseContentEncodingT = Aws::String>
    GetObjectRequest& WithResponseContentEncoding(ResponseContentEncodingT&& value) { SetResponseContentEncoding(std::forward<ResponseContentEncodingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the <code>Content-Language</code> header of the response.</p>
     */
    inline const Aws::String& GetResponseContentLanguage() const { return m_responseContentLanguage; }
    inline bool ResponseContentLanguageHasBeenSet() const { return m_responseContentLanguageHasBeenSet; }
    template<typename ResponseContentLanguageT = Aws::String>
    void SetResponseContentLanguage(ResponseContentLanguageT&& value) { m_responseContentLanguageHasBeenSet = true; m_responseContentLanguage = std::forward<ResponseContentLanguageT>(value); }
    template<typename ResponseContentLanguageT = Aws::String>
    GetObjectRequest& WithResponseContentLanguage(ResponseContentLanguageT&& value) { SetResponseContentLanguage(std::forward<ResponseContentLanguageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the <code>Content-Type</code> header of the response.</p>
     */
    inline const Aws::String& GetResponseContentType() const { return m_responseContentType; }
    inline bool ResponseContentTypeHasBeenSet() const { return m_responseContentTypeHasBeenSet; }
    template<typename ResponseContentTypeT = Aws::String>
    void SetResponseContentType(ResponseContentTypeT&& value) { m_responseContentTypeHasBeenSet = true; m_responseContentType = std::forward<ResponseContentTypeT>(value); }
    template<typename ResponseContentTypeT = Aws::String>
    GetObjectRequest& WithResponseContentType(ResponseContentTypeT&& value) { SetResponseContentType(std::forward<ResponseContentTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the <code>Expires</code> header of the response.</p>
     */
    inline const Aws::Utils::DateTime& GetResponseExpires() const { return m_responseExpires; }
    inline bool ResponseExpiresHasBeenSet() const { return m_responseExpiresHasBeenSet; }
    template<typename ResponseExpiresT = Aws::Utils::DateTime>
    void SetResponseExpires(ResponseExpiresT&& value) { m_responseExpiresHasBeenSet = true; m_responseExpires = std::forward<ResponseExpiresT>(value); }
    template<typename ResponseExpiresT = Aws::Utils::DateTime>
    GetObjectRequest& WithResponseExpires(ResponseExpiresT&& value) { SetResponseExpires(std::forward<ResponseExpiresT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Version ID used to reference a specific version of the object.</p> <p>By
     * default, the <code>GetObject</code> operation returns the current version of an
     * object. To return a different version, use the <code>versionId</code>
     * subresource.</p>  <ul> <li> <p>If you include a <code>versionId</code> in
     * your request header, you must have the <code>s3:GetObjectVersion</code>
     * permission to access a specific version of an object. The
     * <code>s3:GetObject</code> permission is not required in this scenario.</p> </li>
     * <li> <p>If you request the current version of an object without a specific
     * <code>versionId</code> in the request header, only the <code>s3:GetObject</code>
     * permission is required. The <code>s3:GetObjectVersion</code> permission is not
     * required in this scenario.</p> </li> <li> <p> <b>Directory buckets</b> - S3
     * Versioning isn't enabled and supported for directory buckets. For this API
     * operation, only the <code>null</code> value of the version ID is supported by
     * directory buckets. You can only specify <code>null</code> to the
     * <code>versionId</code> query parameter in the request.</p> </li> </ul> 
     * <p>For more information about versioning, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketVersioning.html">PutBucketVersioning</a>.</p>
     */
    inline const Aws::String& GetVersionId() const { return m_versionId; }
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }
    template<typename VersionIdT = Aws::String>
    void SetVersionId(VersionIdT&& value) { m_versionIdHasBeenSet = true; m_versionId = std::forward<VersionIdT>(value); }
    template<typename VersionIdT = Aws::String>
    GetObjectRequest& WithVersionId(VersionIdT&& value) { SetVersionId(std::forward<VersionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the algorithm to use when decrypting the object (for example,
     * <code>AES256</code>).</p> <p>If you encrypt an object by using server-side
     * encryption with customer-provided encryption keys (SSE-C) when you store the
     * object in Amazon S3, then when you GET the object, you must use the following
     * headers:</p> <ul> <li> <p>
     * <code>x-amz-server-side-encryption-customer-algorithm</code> </p> </li> <li> <p>
     * <code>x-amz-server-side-encryption-customer-key</code> </p> </li> <li> <p>
     * <code>x-amz-server-side-encryption-customer-key-MD5</code> </p> </li> </ul>
     * <p>For more information about SSE-C, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/ServerSideEncryptionCustomerKeys.html">Server-Side
     * Encryption (Using Customer-Provided Encryption Keys)</a> in the <i>Amazon S3
     * User Guide</i>.</p>  <p>This functionality is not supported for directory
     * buckets.</p> 
     */
    inline const Aws::String& GetSSECustomerAlgorithm() const { return m_sSECustomerAlgorithm; }
    inline bool SSECustomerAlgorithmHasBeenSet() const { return m_sSECustomerAlgorithmHasBeenSet; }
    template<typename SSECustomerAlgorithmT = Aws::String>
    void SetSSECustomerAlgorithm(SSECustomerAlgorithmT&& value) { m_sSECustomerAlgorithmHasBeenSet = true; m_sSECustomerAlgorithm = std::forward<SSECustomerAlgorithmT>(value); }
    template<typename SSECustomerAlgorithmT = Aws::String>
    GetObjectRequest& WithSSECustomerAlgorithm(SSECustomerAlgorithmT&& value) { SetSSECustomerAlgorithm(std::forward<SSECustomerAlgorithmT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the customer-provided encryption key that you originally provided
     * for Amazon S3 to encrypt the data before storing it. This value is used to
     * decrypt the object when recovering it and must match the one used when storing
     * the data. The key must be appropriate for use with the algorithm specified in
     * the <code>x-amz-server-side-encryption-customer-algorithm</code> header.</p>
     * <p>If you encrypt an object by using server-side encryption with
     * customer-provided encryption keys (SSE-C) when you store the object in Amazon
     * S3, then when you GET the object, you must use the following headers:</p> <ul>
     * <li> <p> <code>x-amz-server-side-encryption-customer-algorithm</code> </p> </li>
     * <li> <p> <code>x-amz-server-side-encryption-customer-key</code> </p> </li> <li>
     * <p> <code>x-amz-server-side-encryption-customer-key-MD5</code> </p> </li> </ul>
     * <p>For more information about SSE-C, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/ServerSideEncryptionCustomerKeys.html">Server-Side
     * Encryption (Using Customer-Provided Encryption Keys)</a> in the <i>Amazon S3
     * User Guide</i>.</p>  <p>This functionality is not supported for directory
     * buckets.</p> 
     */
    inline const Aws::String& GetSSECustomerKey() const { return m_sSECustomerKey; }
    inline bool SSECustomerKeyHasBeenSet() const { return m_sSECustomerKeyHasBeenSet; }
    template<typename SSECustomerKeyT = Aws::String>
    void SetSSECustomerKey(SSECustomerKeyT&& value) { m_sSECustomerKeyHasBeenSet = true; m_sSECustomerKey = std::forward<SSECustomerKeyT>(value); }
    template<typename SSECustomerKeyT = Aws::String>
    GetObjectRequest& WithSSECustomerKey(SSECustomerKeyT&& value) { SetSSECustomerKey(std::forward<SSECustomerKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the 128-bit MD5 digest of the customer-provided encryption key
     * according to RFC 1321. Amazon S3 uses this header for a message integrity check
     * to ensure that the encryption key was transmitted without error.</p> <p>If you
     * encrypt an object by using server-side encryption with customer-provided
     * encryption keys (SSE-C) when you store the object in Amazon S3, then when you
     * GET the object, you must use the following headers:</p> <ul> <li> <p>
     * <code>x-amz-server-side-encryption-customer-algorithm</code> </p> </li> <li> <p>
     * <code>x-amz-server-side-encryption-customer-key</code> </p> </li> <li> <p>
     * <code>x-amz-server-side-encryption-customer-key-MD5</code> </p> </li> </ul>
     * <p>For more information about SSE-C, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/ServerSideEncryptionCustomerKeys.html">Server-Side
     * Encryption (Using Customer-Provided Encryption Keys)</a> in the <i>Amazon S3
     * User Guide</i>.</p>  <p>This functionality is not supported for directory
     * buckets.</p> 
     */
    inline const Aws::String& GetSSECustomerKeyMD5() const { return m_sSECustomerKeyMD5; }
    inline bool SSECustomerKeyMD5HasBeenSet() const { return m_sSECustomerKeyMD5HasBeenSet; }
    template<typename SSECustomerKeyMD5T = Aws::String>
    void SetSSECustomerKeyMD5(SSECustomerKeyMD5T&& value) { m_sSECustomerKeyMD5HasBeenSet = true; m_sSECustomerKeyMD5 = std::forward<SSECustomerKeyMD5T>(value); }
    template<typename SSECustomerKeyMD5T = Aws::String>
    GetObjectRequest& WithSSECustomerKeyMD5(SSECustomerKeyMD5T&& value) { SetSSECustomerKeyMD5(std::forward<SSECustomerKeyMD5T>(value)); return *this;}
    ///@}

    ///@{
    
    inline RequestPayer GetRequestPayer() const { return m_requestPayer; }
    inline bool RequestPayerHasBeenSet() const { return m_requestPayerHasBeenSet; }
    inline void SetRequestPayer(RequestPayer value) { m_requestPayerHasBeenSet = true; m_requestPayer = value; }
    inline GetObjectRequest& WithRequestPayer(RequestPayer value) { SetRequestPayer(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Part number of the object being read. This is a positive integer between 1
     * and 10,000. Effectively performs a 'ranged' GET request for the part specified.
     * Useful for downloading just a part of an object.</p>
     */
    inline int GetPartNumber() const { return m_partNumber; }
    inline bool PartNumberHasBeenSet() const { return m_partNumberHasBeenSet; }
    inline void SetPartNumber(int value) { m_partNumberHasBeenSet = true; m_partNumber = value; }
    inline GetObjectRequest& WithPartNumber(int value) { SetPartNumber(value); return *this;}
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
    GetObjectRequest& WithExpectedBucketOwner(ExpectedBucketOwnerT&& value) { SetExpectedBucketOwner(std::forward<ExpectedBucketOwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>To retrieve the checksum, this mode must be enabled.</p>
     */
    inline ChecksumMode GetChecksumMode() const { return m_checksumMode; }
    inline bool ChecksumModeHasBeenSet() const { return m_checksumModeHasBeenSet; }
    inline void SetChecksumMode(ChecksumMode value) { m_checksumModeHasBeenSet = true; m_checksumMode = value; }
    inline GetObjectRequest& WithChecksumMode(ChecksumMode value) { SetChecksumMode(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetCustomizedAccessLogTag() const { return m_customizedAccessLogTag; }
    inline bool CustomizedAccessLogTagHasBeenSet() const { return m_customizedAccessLogTagHasBeenSet; }
    template<typename CustomizedAccessLogTagT = Aws::Map<Aws::String, Aws::String>>
    void SetCustomizedAccessLogTag(CustomizedAccessLogTagT&& value) { m_customizedAccessLogTagHasBeenSet = true; m_customizedAccessLogTag = std::forward<CustomizedAccessLogTagT>(value); }
    template<typename CustomizedAccessLogTagT = Aws::Map<Aws::String, Aws::String>>
    GetObjectRequest& WithCustomizedAccessLogTag(CustomizedAccessLogTagT&& value) { SetCustomizedAccessLogTag(std::forward<CustomizedAccessLogTagT>(value)); return *this;}
    template<typename CustomizedAccessLogTagKeyT = Aws::String, typename CustomizedAccessLogTagValueT = Aws::String>
    GetObjectRequest& AddCustomizedAccessLogTag(CustomizedAccessLogTagKeyT&& key, CustomizedAccessLogTagValueT&& value) {
      m_customizedAccessLogTagHasBeenSet = true; m_customizedAccessLogTag.emplace(std::forward<CustomizedAccessLogTagKeyT>(key), std::forward<CustomizedAccessLogTagValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_ifMatch;
    bool m_ifMatchHasBeenSet = false;

    Aws::Utils::DateTime m_ifModifiedSince{};
    bool m_ifModifiedSinceHasBeenSet = false;

    Aws::String m_ifNoneMatch;
    bool m_ifNoneMatchHasBeenSet = false;

    Aws::Utils::DateTime m_ifUnmodifiedSince{};
    bool m_ifUnmodifiedSinceHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_range;
    bool m_rangeHasBeenSet = false;

    Aws::String m_responseCacheControl;
    bool m_responseCacheControlHasBeenSet = false;

    Aws::String m_responseContentDisposition;
    bool m_responseContentDispositionHasBeenSet = false;

    Aws::String m_responseContentEncoding;
    bool m_responseContentEncodingHasBeenSet = false;

    Aws::String m_responseContentLanguage;
    bool m_responseContentLanguageHasBeenSet = false;

    Aws::String m_responseContentType;
    bool m_responseContentTypeHasBeenSet = false;

    Aws::Utils::DateTime m_responseExpires{};
    bool m_responseExpiresHasBeenSet = false;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet = false;

    Aws::String m_sSECustomerAlgorithm;
    bool m_sSECustomerAlgorithmHasBeenSet = false;

    Aws::String m_sSECustomerKey;
    bool m_sSECustomerKeyHasBeenSet = false;

    Aws::String m_sSECustomerKeyMD5;
    bool m_sSECustomerKeyMD5HasBeenSet = false;

    RequestPayer m_requestPayer{RequestPayer::NOT_SET};
    bool m_requestPayerHasBeenSet = false;

    int m_partNumber{0};
    bool m_partNumberHasBeenSet = false;

    Aws::String m_expectedBucketOwner;
    bool m_expectedBucketOwnerHasBeenSet = false;

    ChecksumMode m_checksumMode{ChecksumMode::NOT_SET};
    bool m_checksumModeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_customizedAccessLogTag;
    bool m_customizedAccessLogTagHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Crt
} // namespace Aws
