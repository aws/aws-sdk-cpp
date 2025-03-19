/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/S3Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/s3/model/ObjectLockMode.h>
#include <aws/s3/model/ObjectLockLegalHoldStatus.h>
#include <aws/s3/model/ReplicationStatus.h>
#include <aws/s3/model/RequestCharged.h>
#include <aws/s3/model/ServerSideEncryption.h>
#include <aws/s3/model/StorageClass.h>
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
  class WriteGetObjectResponseRequest : public StreamingS3Request
  {
  public:
    AWS_S3_API WriteGetObjectResponseRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "WriteGetObjectResponse"; }

    AWS_S3_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    AWS_S3_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    AWS_S3_API bool HasEmbeddedError(IOStream &body, const Http::HeaderValueCollection &header) const override;
    AWS_S3_API bool SignBody() const override { return false; }

    AWS_S3_API bool IsChunked() const override { return true; }

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_S3_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>Route prefix to the HTTP URL generated.</p>
     */
    inline const Aws::String& GetRequestRoute() const { return m_requestRoute; }
    inline bool RequestRouteHasBeenSet() const { return m_requestRouteHasBeenSet; }
    template<typename RequestRouteT = Aws::String>
    void SetRequestRoute(RequestRouteT&& value) { m_requestRouteHasBeenSet = true; m_requestRoute = std::forward<RequestRouteT>(value); }
    template<typename RequestRouteT = Aws::String>
    WriteGetObjectResponseRequest& WithRequestRoute(RequestRouteT&& value) { SetRequestRoute(std::forward<RequestRouteT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A single use encrypted token that maps <code>WriteGetObjectResponse</code> to
     * the end user <code>GetObject</code> request.</p>
     */
    inline const Aws::String& GetRequestToken() const { return m_requestToken; }
    inline bool RequestTokenHasBeenSet() const { return m_requestTokenHasBeenSet; }
    template<typename RequestTokenT = Aws::String>
    void SetRequestToken(RequestTokenT&& value) { m_requestTokenHasBeenSet = true; m_requestToken = std::forward<RequestTokenT>(value); }
    template<typename RequestTokenT = Aws::String>
    WriteGetObjectResponseRequest& WithRequestToken(RequestTokenT&& value) { SetRequestToken(std::forward<RequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The integer status code for an HTTP response of a corresponding
     * <code>GetObject</code> request. The following is a list of status codes.</p>
     * <ul> <li> <p> <code>200 - OK</code> </p> </li> <li> <p> <code>206 - Partial
     * Content</code> </p> </li> <li> <p> <code>304 - Not Modified</code> </p> </li>
     * <li> <p> <code>400 - Bad Request</code> </p> </li> <li> <p> <code>401 -
     * Unauthorized</code> </p> </li> <li> <p> <code>403 - Forbidden</code> </p> </li>
     * <li> <p> <code>404 - Not Found</code> </p> </li> <li> <p> <code>405 - Method Not
     * Allowed</code> </p> </li> <li> <p> <code>409 - Conflict</code> </p> </li> <li>
     * <p> <code>411 - Length Required</code> </p> </li> <li> <p> <code>412 -
     * Precondition Failed</code> </p> </li> <li> <p> <code>416 - Range Not
     * Satisfiable</code> </p> </li> <li> <p> <code>500 - Internal Server Error</code>
     * </p> </li> <li> <p> <code>503 - Service Unavailable</code> </p> </li> </ul>
     */
    inline int GetStatusCode() const { return m_statusCode; }
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }
    inline void SetStatusCode(int value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }
    inline WriteGetObjectResponseRequest& WithStatusCode(int value) { SetStatusCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string that uniquely identifies an error condition. Returned in the
     * &lt;Code&gt; tag of the error XML response for a corresponding
     * <code>GetObject</code> call. Cannot be used with a successful
     * <code>StatusCode</code> header or when the transformed object is provided in the
     * body. All error codes from S3 are sentence-cased. The regular expression (regex)
     * value is <code>"^[A-Z][a-zA-Z]+$"</code>.</p>
     */
    inline const Aws::String& GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    template<typename ErrorCodeT = Aws::String>
    void SetErrorCode(ErrorCodeT&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::forward<ErrorCodeT>(value); }
    template<typename ErrorCodeT = Aws::String>
    WriteGetObjectResponseRequest& WithErrorCode(ErrorCodeT&& value) { SetErrorCode(std::forward<ErrorCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains a generic description of the error condition. Returned in the
     * &lt;Message&gt; tag of the error XML response for a corresponding
     * <code>GetObject</code> call. Cannot be used with a successful
     * <code>StatusCode</code> header or when the transformed object is provided in
     * body.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    WriteGetObjectResponseRequest& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates that a range of bytes was specified.</p>
     */
    inline const Aws::String& GetAcceptRanges() const { return m_acceptRanges; }
    inline bool AcceptRangesHasBeenSet() const { return m_acceptRangesHasBeenSet; }
    template<typename AcceptRangesT = Aws::String>
    void SetAcceptRanges(AcceptRangesT&& value) { m_acceptRangesHasBeenSet = true; m_acceptRanges = std::forward<AcceptRangesT>(value); }
    template<typename AcceptRangesT = Aws::String>
    WriteGetObjectResponseRequest& WithAcceptRanges(AcceptRangesT&& value) { SetAcceptRanges(std::forward<AcceptRangesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies caching behavior along the request/reply chain.</p>
     */
    inline const Aws::String& GetCacheControl() const { return m_cacheControl; }
    inline bool CacheControlHasBeenSet() const { return m_cacheControlHasBeenSet; }
    template<typename CacheControlT = Aws::String>
    void SetCacheControl(CacheControlT&& value) { m_cacheControlHasBeenSet = true; m_cacheControl = std::forward<CacheControlT>(value); }
    template<typename CacheControlT = Aws::String>
    WriteGetObjectResponseRequest& WithCacheControl(CacheControlT&& value) { SetCacheControl(std::forward<CacheControlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies presentational information for the object.</p>
     */
    inline const Aws::String& GetContentDisposition() const { return m_contentDisposition; }
    inline bool ContentDispositionHasBeenSet() const { return m_contentDispositionHasBeenSet; }
    template<typename ContentDispositionT = Aws::String>
    void SetContentDisposition(ContentDispositionT&& value) { m_contentDispositionHasBeenSet = true; m_contentDisposition = std::forward<ContentDispositionT>(value); }
    template<typename ContentDispositionT = Aws::String>
    WriteGetObjectResponseRequest& WithContentDisposition(ContentDispositionT&& value) { SetContentDisposition(std::forward<ContentDispositionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies what content encodings have been applied to the object and thus
     * what decoding mechanisms must be applied to obtain the media-type referenced by
     * the Content-Type header field.</p>
     */
    inline const Aws::String& GetContentEncoding() const { return m_contentEncoding; }
    inline bool ContentEncodingHasBeenSet() const { return m_contentEncodingHasBeenSet; }
    template<typename ContentEncodingT = Aws::String>
    void SetContentEncoding(ContentEncodingT&& value) { m_contentEncodingHasBeenSet = true; m_contentEncoding = std::forward<ContentEncodingT>(value); }
    template<typename ContentEncodingT = Aws::String>
    WriteGetObjectResponseRequest& WithContentEncoding(ContentEncodingT&& value) { SetContentEncoding(std::forward<ContentEncodingT>(value)); return *this;}
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
    WriteGetObjectResponseRequest& WithContentLanguage(ContentLanguageT&& value) { SetContentLanguage(std::forward<ContentLanguageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the content body in bytes.</p>
     */
    inline long long GetContentLength() const { return m_contentLength; }
    inline bool ContentLengthHasBeenSet() const { return m_contentLengthHasBeenSet; }
    inline void SetContentLength(long long value) { m_contentLengthHasBeenSet = true; m_contentLength = value; }
    inline WriteGetObjectResponseRequest& WithContentLength(long long value) { SetContentLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The portion of the object returned in the response.</p>
     */
    inline const Aws::String& GetContentRange() const { return m_contentRange; }
    inline bool ContentRangeHasBeenSet() const { return m_contentRangeHasBeenSet; }
    template<typename ContentRangeT = Aws::String>
    void SetContentRange(ContentRangeT&& value) { m_contentRangeHasBeenSet = true; m_contentRange = std::forward<ContentRangeT>(value); }
    template<typename ContentRangeT = Aws::String>
    WriteGetObjectResponseRequest& WithContentRange(ContentRangeT&& value) { SetContentRange(std::forward<ContentRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This header can be used as a data integrity check to verify that the data
     * received is the same data that was originally sent. This specifies the Base64
     * encoded, 32-bit <code>CRC32</code> checksum of the object returned by the Object
     * Lambda function. This may not match the checksum for the object stored in Amazon
     * S3. Amazon S3 will perform validation of the checksum values only when the
     * original <code>GetObject</code> request required checksum validation. For more
     * information about checksums, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/checking-object-integrity.html">Checking
     * object integrity</a> in the <i>Amazon S3 User Guide</i>.</p> <p>Only one
     * checksum header can be specified at a time. If you supply multiple checksum
     * headers, this request will fail.</p> <p/>
     */
    inline const Aws::String& GetChecksumCRC32() const { return m_checksumCRC32; }
    inline bool ChecksumCRC32HasBeenSet() const { return m_checksumCRC32HasBeenSet; }
    template<typename ChecksumCRC32T = Aws::String>
    void SetChecksumCRC32(ChecksumCRC32T&& value) { m_checksumCRC32HasBeenSet = true; m_checksumCRC32 = std::forward<ChecksumCRC32T>(value); }
    template<typename ChecksumCRC32T = Aws::String>
    WriteGetObjectResponseRequest& WithChecksumCRC32(ChecksumCRC32T&& value) { SetChecksumCRC32(std::forward<ChecksumCRC32T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This header can be used as a data integrity check to verify that the data
     * received is the same data that was originally sent. This specifies the Base64
     * encoded, 32-bit <code>CRC32C</code> checksum of the object returned by the
     * Object Lambda function. This may not match the checksum for the object stored in
     * Amazon S3. Amazon S3 will perform validation of the checksum values only when
     * the original <code>GetObject</code> request required checksum validation. For
     * more information about checksums, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/checking-object-integrity.html">Checking
     * object integrity</a> in the <i>Amazon S3 User Guide</i>.</p> <p>Only one
     * checksum header can be specified at a time. If you supply multiple checksum
     * headers, this request will fail.</p>
     */
    inline const Aws::String& GetChecksumCRC32C() const { return m_checksumCRC32C; }
    inline bool ChecksumCRC32CHasBeenSet() const { return m_checksumCRC32CHasBeenSet; }
    template<typename ChecksumCRC32CT = Aws::String>
    void SetChecksumCRC32C(ChecksumCRC32CT&& value) { m_checksumCRC32CHasBeenSet = true; m_checksumCRC32C = std::forward<ChecksumCRC32CT>(value); }
    template<typename ChecksumCRC32CT = Aws::String>
    WriteGetObjectResponseRequest& WithChecksumCRC32C(ChecksumCRC32CT&& value) { SetChecksumCRC32C(std::forward<ChecksumCRC32CT>(value)); return *this;}
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
    inline bool ChecksumCRC64NVMEHasBeenSet() const { return m_checksumCRC64NVMEHasBeenSet; }
    template<typename ChecksumCRC64NVMET = Aws::String>
    void SetChecksumCRC64NVME(ChecksumCRC64NVMET&& value) { m_checksumCRC64NVMEHasBeenSet = true; m_checksumCRC64NVME = std::forward<ChecksumCRC64NVMET>(value); }
    template<typename ChecksumCRC64NVMET = Aws::String>
    WriteGetObjectResponseRequest& WithChecksumCRC64NVME(ChecksumCRC64NVMET&& value) { SetChecksumCRC64NVME(std::forward<ChecksumCRC64NVMET>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This header can be used as a data integrity check to verify that the data
     * received is the same data that was originally sent. This specifies the Base64
     * encoded, 160-bit <code>SHA1</code> digest of the object returned by the Object
     * Lambda function. This may not match the checksum for the object stored in Amazon
     * S3. Amazon S3 will perform validation of the checksum values only when the
     * original <code>GetObject</code> request required checksum validation. For more
     * information about checksums, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/checking-object-integrity.html">Checking
     * object integrity</a> in the <i>Amazon S3 User Guide</i>.</p> <p>Only one
     * checksum header can be specified at a time. If you supply multiple checksum
     * headers, this request will fail.</p>
     */
    inline const Aws::String& GetChecksumSHA1() const { return m_checksumSHA1; }
    inline bool ChecksumSHA1HasBeenSet() const { return m_checksumSHA1HasBeenSet; }
    template<typename ChecksumSHA1T = Aws::String>
    void SetChecksumSHA1(ChecksumSHA1T&& value) { m_checksumSHA1HasBeenSet = true; m_checksumSHA1 = std::forward<ChecksumSHA1T>(value); }
    template<typename ChecksumSHA1T = Aws::String>
    WriteGetObjectResponseRequest& WithChecksumSHA1(ChecksumSHA1T&& value) { SetChecksumSHA1(std::forward<ChecksumSHA1T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This header can be used as a data integrity check to verify that the data
     * received is the same data that was originally sent. This specifies the Base64
     * encoded, 256-bit <code>SHA256</code> digest of the object returned by the Object
     * Lambda function. This may not match the checksum for the object stored in Amazon
     * S3. Amazon S3 will perform validation of the checksum values only when the
     * original <code>GetObject</code> request required checksum validation. For more
     * information about checksums, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/checking-object-integrity.html">Checking
     * object integrity</a> in the <i>Amazon S3 User Guide</i>.</p> <p>Only one
     * checksum header can be specified at a time. If you supply multiple checksum
     * headers, this request will fail.</p>
     */
    inline const Aws::String& GetChecksumSHA256() const { return m_checksumSHA256; }
    inline bool ChecksumSHA256HasBeenSet() const { return m_checksumSHA256HasBeenSet; }
    template<typename ChecksumSHA256T = Aws::String>
    void SetChecksumSHA256(ChecksumSHA256T&& value) { m_checksumSHA256HasBeenSet = true; m_checksumSHA256 = std::forward<ChecksumSHA256T>(value); }
    template<typename ChecksumSHA256T = Aws::String>
    WriteGetObjectResponseRequest& WithChecksumSHA256(ChecksumSHA256T&& value) { SetChecksumSHA256(std::forward<ChecksumSHA256T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether an object stored in Amazon S3 is (<code>true</code>) or is
     * not (<code>false</code>) a delete marker. To learn more about delete markers,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/DeleteMarker.html">Working
     * with delete markers</a>.</p>
     */
    inline bool GetDeleteMarker() const { return m_deleteMarker; }
    inline bool DeleteMarkerHasBeenSet() const { return m_deleteMarkerHasBeenSet; }
    inline void SetDeleteMarker(bool value) { m_deleteMarkerHasBeenSet = true; m_deleteMarker = value; }
    inline WriteGetObjectResponseRequest& WithDeleteMarker(bool value) { SetDeleteMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An opaque identifier assigned by a web server to a specific version of a
     * resource found at a URL. </p>
     */
    inline const Aws::String& GetETag() const { return m_eTag; }
    inline bool ETagHasBeenSet() const { return m_eTagHasBeenSet; }
    template<typename ETagT = Aws::String>
    void SetETag(ETagT&& value) { m_eTagHasBeenSet = true; m_eTag = std::forward<ETagT>(value); }
    template<typename ETagT = Aws::String>
    WriteGetObjectResponseRequest& WithETag(ETagT&& value) { SetETag(std::forward<ETagT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the object is no longer cacheable.</p>
     */
    inline const Aws::Utils::DateTime& GetExpires() const { return m_expires; }
    inline bool ExpiresHasBeenSet() const { return m_expiresHasBeenSet; }
    template<typename ExpiresT = Aws::Utils::DateTime>
    void SetExpires(ExpiresT&& value) { m_expiresHasBeenSet = true; m_expires = std::forward<ExpiresT>(value); }
    template<typename ExpiresT = Aws::Utils::DateTime>
    WriteGetObjectResponseRequest& WithExpires(ExpiresT&& value) { SetExpires(std::forward<ExpiresT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the object expiration is configured (see PUT Bucket lifecycle), the
     * response includes this header. It includes the <code>expiry-date</code> and
     * <code>rule-id</code> key-value pairs that provide the object expiration
     * information. The value of the <code>rule-id</code> is URL-encoded. </p>
     */
    inline const Aws::String& GetExpiration() const { return m_expiration; }
    inline bool ExpirationHasBeenSet() const { return m_expirationHasBeenSet; }
    template<typename ExpirationT = Aws::String>
    void SetExpiration(ExpirationT&& value) { m_expirationHasBeenSet = true; m_expiration = std::forward<ExpirationT>(value); }
    template<typename ExpirationT = Aws::String>
    WriteGetObjectResponseRequest& WithExpiration(ExpirationT&& value) { SetExpiration(std::forward<ExpirationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the object was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModified() const { return m_lastModified; }
    inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }
    template<typename LastModifiedT = Aws::Utils::DateTime>
    void SetLastModified(LastModifiedT&& value) { m_lastModifiedHasBeenSet = true; m_lastModified = std::forward<LastModifiedT>(value); }
    template<typename LastModifiedT = Aws::Utils::DateTime>
    WriteGetObjectResponseRequest& WithLastModified(LastModifiedT&& value) { SetLastModified(std::forward<LastModifiedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to the number of metadata entries not returned in <code>x-amz-meta</code>
     * headers. This can happen if you create metadata using an API like SOAP that
     * supports more flexible metadata than the REST API. For example, using SOAP, you
     * can create metadata whose values are not legal HTTP headers.</p>
     */
    inline int GetMissingMeta() const { return m_missingMeta; }
    inline bool MissingMetaHasBeenSet() const { return m_missingMetaHasBeenSet; }
    inline void SetMissingMeta(int value) { m_missingMetaHasBeenSet = true; m_missingMeta = value; }
    inline WriteGetObjectResponseRequest& WithMissingMeta(int value) { SetMissingMeta(value); return *this;}
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
    WriteGetObjectResponseRequest& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    template<typename MetadataKeyT = Aws::String, typename MetadataValueT = Aws::String>
    WriteGetObjectResponseRequest& AddMetadata(MetadataKeyT&& key, MetadataValueT&& value) {
      m_metadataHasBeenSet = true; m_metadata.emplace(std::forward<MetadataKeyT>(key), std::forward<MetadataValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Indicates whether an object stored in Amazon S3 has Object Lock enabled. For
     * more information about S3 Object Lock, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/object-lock.html">Object
     * Lock</a>.</p>
     */
    inline ObjectLockMode GetObjectLockMode() const { return m_objectLockMode; }
    inline bool ObjectLockModeHasBeenSet() const { return m_objectLockModeHasBeenSet; }
    inline void SetObjectLockMode(ObjectLockMode value) { m_objectLockModeHasBeenSet = true; m_objectLockMode = value; }
    inline WriteGetObjectResponseRequest& WithObjectLockMode(ObjectLockMode value) { SetObjectLockMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether an object stored in Amazon S3 has an active legal hold.</p>
     */
    inline ObjectLockLegalHoldStatus GetObjectLockLegalHoldStatus() const { return m_objectLockLegalHoldStatus; }
    inline bool ObjectLockLegalHoldStatusHasBeenSet() const { return m_objectLockLegalHoldStatusHasBeenSet; }
    inline void SetObjectLockLegalHoldStatus(ObjectLockLegalHoldStatus value) { m_objectLockLegalHoldStatusHasBeenSet = true; m_objectLockLegalHoldStatus = value; }
    inline WriteGetObjectResponseRequest& WithObjectLockLegalHoldStatus(ObjectLockLegalHoldStatus value) { SetObjectLockLegalHoldStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when Object Lock is configured to expire.</p>
     */
    inline const Aws::Utils::DateTime& GetObjectLockRetainUntilDate() const { return m_objectLockRetainUntilDate; }
    inline bool ObjectLockRetainUntilDateHasBeenSet() const { return m_objectLockRetainUntilDateHasBeenSet; }
    template<typename ObjectLockRetainUntilDateT = Aws::Utils::DateTime>
    void SetObjectLockRetainUntilDate(ObjectLockRetainUntilDateT&& value) { m_objectLockRetainUntilDateHasBeenSet = true; m_objectLockRetainUntilDate = std::forward<ObjectLockRetainUntilDateT>(value); }
    template<typename ObjectLockRetainUntilDateT = Aws::Utils::DateTime>
    WriteGetObjectResponseRequest& WithObjectLockRetainUntilDate(ObjectLockRetainUntilDateT&& value) { SetObjectLockRetainUntilDate(std::forward<ObjectLockRetainUntilDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The count of parts this object has.</p>
     */
    inline int GetPartsCount() const { return m_partsCount; }
    inline bool PartsCountHasBeenSet() const { return m_partsCountHasBeenSet; }
    inline void SetPartsCount(int value) { m_partsCountHasBeenSet = true; m_partsCount = value; }
    inline WriteGetObjectResponseRequest& WithPartsCount(int value) { SetPartsCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if request involves bucket that is either a source or destination
     * in a Replication rule. For more information about S3 Replication, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/replication.html">Replication</a>.</p>
     */
    inline ReplicationStatus GetReplicationStatus() const { return m_replicationStatus; }
    inline bool ReplicationStatusHasBeenSet() const { return m_replicationStatusHasBeenSet; }
    inline void SetReplicationStatus(ReplicationStatus value) { m_replicationStatusHasBeenSet = true; m_replicationStatus = value; }
    inline WriteGetObjectResponseRequest& WithReplicationStatus(ReplicationStatus value) { SetReplicationStatus(value); return *this;}
    ///@}

    ///@{
    
    inline RequestCharged GetRequestCharged() const { return m_requestCharged; }
    inline bool RequestChargedHasBeenSet() const { return m_requestChargedHasBeenSet; }
    inline void SetRequestCharged(RequestCharged value) { m_requestChargedHasBeenSet = true; m_requestCharged = value; }
    inline WriteGetObjectResponseRequest& WithRequestCharged(RequestCharged value) { SetRequestCharged(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information about object restoration operation and expiration time
     * of the restored object copy.</p>
     */
    inline const Aws::String& GetRestore() const { return m_restore; }
    inline bool RestoreHasBeenSet() const { return m_restoreHasBeenSet; }
    template<typename RestoreT = Aws::String>
    void SetRestore(RestoreT&& value) { m_restoreHasBeenSet = true; m_restore = std::forward<RestoreT>(value); }
    template<typename RestoreT = Aws::String>
    WriteGetObjectResponseRequest& WithRestore(RestoreT&& value) { SetRestore(std::forward<RestoreT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The server-side encryption algorithm used when storing requested object in
     * Amazon S3 (for example, AES256, <code>aws:kms</code>).</p>
     */
    inline ServerSideEncryption GetServerSideEncryption() const { return m_serverSideEncryption; }
    inline bool ServerSideEncryptionHasBeenSet() const { return m_serverSideEncryptionHasBeenSet; }
    inline void SetServerSideEncryption(ServerSideEncryption value) { m_serverSideEncryptionHasBeenSet = true; m_serverSideEncryption = value; }
    inline WriteGetObjectResponseRequest& WithServerSideEncryption(ServerSideEncryption value) { SetServerSideEncryption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Encryption algorithm used if server-side encryption with a customer-provided
     * encryption key was specified for object stored in Amazon S3.</p>
     */
    inline const Aws::String& GetSSECustomerAlgorithm() const { return m_sSECustomerAlgorithm; }
    inline bool SSECustomerAlgorithmHasBeenSet() const { return m_sSECustomerAlgorithmHasBeenSet; }
    template<typename SSECustomerAlgorithmT = Aws::String>
    void SetSSECustomerAlgorithm(SSECustomerAlgorithmT&& value) { m_sSECustomerAlgorithmHasBeenSet = true; m_sSECustomerAlgorithm = std::forward<SSECustomerAlgorithmT>(value); }
    template<typename SSECustomerAlgorithmT = Aws::String>
    WriteGetObjectResponseRequest& WithSSECustomerAlgorithm(SSECustomerAlgorithmT&& value) { SetSSECustomerAlgorithm(std::forward<SSECustomerAlgorithmT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> If present, specifies the ID (Key ID, Key ARN, or Key Alias) of the Amazon
     * Web Services Key Management Service (Amazon Web Services KMS) symmetric
     * encryption customer managed key that was used for stored in Amazon S3 object.
     * </p>
     */
    inline const Aws::String& GetSSEKMSKeyId() const { return m_sSEKMSKeyId; }
    inline bool SSEKMSKeyIdHasBeenSet() const { return m_sSEKMSKeyIdHasBeenSet; }
    template<typename SSEKMSKeyIdT = Aws::String>
    void SetSSEKMSKeyId(SSEKMSKeyIdT&& value) { m_sSEKMSKeyIdHasBeenSet = true; m_sSEKMSKeyId = std::forward<SSEKMSKeyIdT>(value); }
    template<typename SSEKMSKeyIdT = Aws::String>
    WriteGetObjectResponseRequest& WithSSEKMSKeyId(SSEKMSKeyIdT&& value) { SetSSEKMSKeyId(std::forward<SSEKMSKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> 128-bit MD5 digest of customer-provided encryption key used in Amazon S3 to
     * encrypt data stored in S3. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/ServerSideEncryptionCustomerKeys.html">Protecting
     * data using server-side encryption with customer-provided encryption keys
     * (SSE-C)</a>.</p>
     */
    inline const Aws::String& GetSSECustomerKeyMD5() const { return m_sSECustomerKeyMD5; }
    inline bool SSECustomerKeyMD5HasBeenSet() const { return m_sSECustomerKeyMD5HasBeenSet; }
    template<typename SSECustomerKeyMD5T = Aws::String>
    void SetSSECustomerKeyMD5(SSECustomerKeyMD5T&& value) { m_sSECustomerKeyMD5HasBeenSet = true; m_sSECustomerKeyMD5 = std::forward<SSECustomerKeyMD5T>(value); }
    template<typename SSECustomerKeyMD5T = Aws::String>
    WriteGetObjectResponseRequest& WithSSECustomerKeyMD5(SSECustomerKeyMD5T&& value) { SetSSECustomerKeyMD5(std::forward<SSECustomerKeyMD5T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides storage class information of the object. Amazon S3 returns this
     * header for all objects except for S3 Standard storage class objects.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage-class-intro.html">Storage
     * Classes</a>.</p>
     */
    inline StorageClass GetStorageClass() const { return m_storageClass; }
    inline bool StorageClassHasBeenSet() const { return m_storageClassHasBeenSet; }
    inline void SetStorageClass(StorageClass value) { m_storageClassHasBeenSet = true; m_storageClass = value; }
    inline WriteGetObjectResponseRequest& WithStorageClass(StorageClass value) { SetStorageClass(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of tags, if any, on the object.</p>
     */
    inline int GetTagCount() const { return m_tagCount; }
    inline bool TagCountHasBeenSet() const { return m_tagCountHasBeenSet; }
    inline void SetTagCount(int value) { m_tagCountHasBeenSet = true; m_tagCount = value; }
    inline WriteGetObjectResponseRequest& WithTagCount(int value) { SetTagCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ID used to reference a specific version of the object.</p>
     */
    inline const Aws::String& GetVersionId() const { return m_versionId; }
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }
    template<typename VersionIdT = Aws::String>
    void SetVersionId(VersionIdT&& value) { m_versionIdHasBeenSet = true; m_versionId = std::forward<VersionIdT>(value); }
    template<typename VersionIdT = Aws::String>
    WriteGetObjectResponseRequest& WithVersionId(VersionIdT&& value) { SetVersionId(std::forward<VersionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates whether the object stored in Amazon S3 uses an S3 bucket key for
     * server-side encryption with Amazon Web Services KMS (SSE-KMS).</p>
     */
    inline bool GetBucketKeyEnabled() const { return m_bucketKeyEnabled; }
    inline bool BucketKeyEnabledHasBeenSet() const { return m_bucketKeyEnabledHasBeenSet; }
    inline void SetBucketKeyEnabled(bool value) { m_bucketKeyEnabledHasBeenSet = true; m_bucketKeyEnabled = value; }
    inline WriteGetObjectResponseRequest& WithBucketKeyEnabled(bool value) { SetBucketKeyEnabled(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetCustomizedAccessLogTag() const { return m_customizedAccessLogTag; }
    inline bool CustomizedAccessLogTagHasBeenSet() const { return m_customizedAccessLogTagHasBeenSet; }
    template<typename CustomizedAccessLogTagT = Aws::Map<Aws::String, Aws::String>>
    void SetCustomizedAccessLogTag(CustomizedAccessLogTagT&& value) { m_customizedAccessLogTagHasBeenSet = true; m_customizedAccessLogTag = std::forward<CustomizedAccessLogTagT>(value); }
    template<typename CustomizedAccessLogTagT = Aws::Map<Aws::String, Aws::String>>
    WriteGetObjectResponseRequest& WithCustomizedAccessLogTag(CustomizedAccessLogTagT&& value) { SetCustomizedAccessLogTag(std::forward<CustomizedAccessLogTagT>(value)); return *this;}
    template<typename CustomizedAccessLogTagKeyT = Aws::String, typename CustomizedAccessLogTagValueT = Aws::String>
    WriteGetObjectResponseRequest& AddCustomizedAccessLogTag(CustomizedAccessLogTagKeyT&& key, CustomizedAccessLogTagValueT&& value) {
      m_customizedAccessLogTagHasBeenSet = true; m_customizedAccessLogTag.emplace(std::forward<CustomizedAccessLogTagKeyT>(key), std::forward<CustomizedAccessLogTagValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_requestRoute;
    bool m_requestRouteHasBeenSet = false;

    Aws::String m_requestToken;
    bool m_requestTokenHasBeenSet = false;


    int m_statusCode{0};
    bool m_statusCodeHasBeenSet = false;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::String m_acceptRanges;
    bool m_acceptRangesHasBeenSet = false;

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

    Aws::String m_contentRange;
    bool m_contentRangeHasBeenSet = false;

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

    bool m_deleteMarker{false};
    bool m_deleteMarkerHasBeenSet = false;

    Aws::String m_eTag;
    bool m_eTagHasBeenSet = false;

    Aws::Utils::DateTime m_expires{};
    bool m_expiresHasBeenSet = false;

    Aws::String m_expiration;
    bool m_expirationHasBeenSet = false;

    Aws::Utils::DateTime m_lastModified{};
    bool m_lastModifiedHasBeenSet = false;

    int m_missingMeta{0};
    bool m_missingMetaHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_metadata;
    bool m_metadataHasBeenSet = false;

    ObjectLockMode m_objectLockMode{ObjectLockMode::NOT_SET};
    bool m_objectLockModeHasBeenSet = false;

    ObjectLockLegalHoldStatus m_objectLockLegalHoldStatus{ObjectLockLegalHoldStatus::NOT_SET};
    bool m_objectLockLegalHoldStatusHasBeenSet = false;

    Aws::Utils::DateTime m_objectLockRetainUntilDate{};
    bool m_objectLockRetainUntilDateHasBeenSet = false;

    int m_partsCount{0};
    bool m_partsCountHasBeenSet = false;

    ReplicationStatus m_replicationStatus{ReplicationStatus::NOT_SET};
    bool m_replicationStatusHasBeenSet = false;

    RequestCharged m_requestCharged{RequestCharged::NOT_SET};
    bool m_requestChargedHasBeenSet = false;

    Aws::String m_restore;
    bool m_restoreHasBeenSet = false;

    ServerSideEncryption m_serverSideEncryption{ServerSideEncryption::NOT_SET};
    bool m_serverSideEncryptionHasBeenSet = false;

    Aws::String m_sSECustomerAlgorithm;
    bool m_sSECustomerAlgorithmHasBeenSet = false;

    Aws::String m_sSEKMSKeyId;
    bool m_sSEKMSKeyIdHasBeenSet = false;

    Aws::String m_sSECustomerKeyMD5;
    bool m_sSECustomerKeyMD5HasBeenSet = false;

    StorageClass m_storageClass{StorageClass::NOT_SET};
    bool m_storageClassHasBeenSet = false;

    int m_tagCount{0};
    bool m_tagCountHasBeenSet = false;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet = false;

    bool m_bucketKeyEnabled{false};
    bool m_bucketKeyEnabledHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_customizedAccessLogTag;
    bool m_customizedAccessLogTagHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
