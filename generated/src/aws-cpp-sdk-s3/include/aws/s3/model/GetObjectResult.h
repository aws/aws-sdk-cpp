/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/s3/model/ChecksumType.h>
#include <aws/s3/model/ServerSideEncryption.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/s3/model/StorageClass.h>
#include <aws/s3/model/RequestCharged.h>
#include <aws/s3/model/ReplicationStatus.h>
#include <aws/s3/model/ObjectLockMode.h>
#include <aws/s3/model/ObjectLockLegalHoldStatus.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace S3
{
namespace Model
{
  class GetObjectResult
  {
  public:
    AWS_S3_API GetObjectResult() = default;
    AWS_S3_API GetObjectResult(GetObjectResult&&) = default;
    AWS_S3_API GetObjectResult& operator=(GetObjectResult&&) = default;
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    GetObjectResult(const GetObjectResult&) = delete;
    GetObjectResult& operator=(const GetObjectResult&) = delete;


    AWS_S3_API GetObjectResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_S3_API GetObjectResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    ///@{
    /**
     * <p>Object data.</p>
     */
    inline Aws::IOStream& GetBody() const { return m_body.GetUnderlyingStream(); }
    inline void ReplaceBody(Aws::IOStream* body) { m_body = Aws::Utils::Stream::ResponseStream(body); }

    ///@}

    ///@{
    /**
     * <p>Indicates whether the object retrieved was (true) or was not (false) a Delete
     * Marker. If false, this response header does not appear in the response.</p>
     *  <ul> <li> <p>If the current version of the object is a delete marker,
     * Amazon S3 behaves as if the object was deleted and includes
     * <code>x-amz-delete-marker: true</code> in the response.</p> </li> <li> <p>If the
     * specified version in the request is a delete marker, the response returns a
     * <code>405 Method Not Allowed</code> error and the <code>Last-Modified:
     * timestamp</code> response header.</p> </li> </ul> 
     */
    inline bool GetDeleteMarker() const { return m_deleteMarker; }
    inline void SetDeleteMarker(bool value) { m_deleteMarkerHasBeenSet = true; m_deleteMarker = value; }
    inline GetObjectResult& WithDeleteMarker(bool value) { SetDeleteMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates that a range of bytes was specified in the request.</p>
     */
    inline const Aws::String& GetAcceptRanges() const { return m_acceptRanges; }
    template<typename AcceptRangesT = Aws::String>
    void SetAcceptRanges(AcceptRangesT&& value) { m_acceptRangesHasBeenSet = true; m_acceptRanges = std::forward<AcceptRangesT>(value); }
    template<typename AcceptRangesT = Aws::String>
    GetObjectResult& WithAcceptRanges(AcceptRangesT&& value) { SetAcceptRanges(std::forward<AcceptRangesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the object expiration is configured (see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketLifecycleConfiguration.html">
     * <code>PutBucketLifecycleConfiguration</code> </a>), the response includes this
     * header. It includes the <code>expiry-date</code> and <code>rule-id</code>
     * key-value pairs providing object expiration information. The value of the
     * <code>rule-id</code> is URL-encoded.</p>  <p>Object expiration information
     * is not returned in directory buckets and this header returns the value
     * "<code>NotImplemented</code>" in all responses for directory buckets.</p>
     * 
     */
    inline const Aws::String& GetExpiration() const { return m_expiration; }
    template<typename ExpirationT = Aws::String>
    void SetExpiration(ExpirationT&& value) { m_expirationHasBeenSet = true; m_expiration = std::forward<ExpirationT>(value); }
    template<typename ExpirationT = Aws::String>
    GetObjectResult& WithExpiration(ExpirationT&& value) { SetExpiration(std::forward<ExpirationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information about object restoration action and expiration time of
     * the restored object copy.</p>  <p>This functionality is not supported for
     * directory buckets. Directory buckets only support <code>EXPRESS_ONEZONE</code>
     * (the S3 Express One Zone storage class) in Availability Zones and
     * <code>ONEZONE_IA</code> (the S3 One Zone-Infrequent Access storage class) in
     * Dedicated Local Zones.</p> 
     */
    inline const Aws::String& GetRestore() const { return m_restore; }
    template<typename RestoreT = Aws::String>
    void SetRestore(RestoreT&& value) { m_restoreHasBeenSet = true; m_restore = std::forward<RestoreT>(value); }
    template<typename RestoreT = Aws::String>
    GetObjectResult& WithRestore(RestoreT&& value) { SetRestore(std::forward<RestoreT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date and time when the object was last modified.</p> <p> <b>General purpose
     * buckets </b> - When you specify a <code>versionId</code> of the object in your
     * request, if the specified version in the request is a delete marker, the
     * response returns a <code>405 Method Not Allowed</code> error and the
     * <code>Last-Modified: timestamp</code> response header.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModified() const { return m_lastModified; }
    template<typename LastModifiedT = Aws::Utils::DateTime>
    void SetLastModified(LastModifiedT&& value) { m_lastModifiedHasBeenSet = true; m_lastModified = std::forward<LastModifiedT>(value); }
    template<typename LastModifiedT = Aws::Utils::DateTime>
    GetObjectResult& WithLastModified(LastModifiedT&& value) { SetLastModified(std::forward<LastModifiedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Size of the body in bytes.</p>
     */
    inline long long GetContentLength() const { return m_contentLength; }
    inline void SetContentLength(long long value) { m_contentLengthHasBeenSet = true; m_contentLength = value; }
    inline GetObjectResult& WithContentLength(long long value) { SetContentLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An entity tag (ETag) is an opaque identifier assigned by a web server to a
     * specific version of a resource found at a URL.</p>
     */
    inline const Aws::String& GetETag() const { return m_eTag; }
    template<typename ETagT = Aws::String>
    void SetETag(ETagT&& value) { m_eTagHasBeenSet = true; m_eTag = std::forward<ETagT>(value); }
    template<typename ETagT = Aws::String>
    GetObjectResult& WithETag(ETagT&& value) { SetETag(std::forward<ETagT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Base64 encoded, 32-bit <code>CRC32</code> checksum of the object. This
     * checksum is only present if the object was uploaded with the object. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/checking-object-integrity.html">
     * Checking object integrity</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline const Aws::String& GetChecksumCRC32() const { return m_checksumCRC32; }
    template<typename ChecksumCRC32T = Aws::String>
    void SetChecksumCRC32(ChecksumCRC32T&& value) { m_checksumCRC32HasBeenSet = true; m_checksumCRC32 = std::forward<ChecksumCRC32T>(value); }
    template<typename ChecksumCRC32T = Aws::String>
    GetObjectResult& WithChecksumCRC32(ChecksumCRC32T&& value) { SetChecksumCRC32(std::forward<ChecksumCRC32T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Base64 encoded, 32-bit <code>CRC32C</code> checksum of the object. This
     * will only be present if the object was uploaded with the object. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/checking-object-integrity.html">
     * Checking object integrity</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline const Aws::String& GetChecksumCRC32C() const { return m_checksumCRC32C; }
    template<typename ChecksumCRC32CT = Aws::String>
    void SetChecksumCRC32C(ChecksumCRC32CT&& value) { m_checksumCRC32CHasBeenSet = true; m_checksumCRC32C = std::forward<ChecksumCRC32CT>(value); }
    template<typename ChecksumCRC32CT = Aws::String>
    GetObjectResult& WithChecksumCRC32C(ChecksumCRC32CT&& value) { SetChecksumCRC32C(std::forward<ChecksumCRC32CT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Base64 encoded, 64-bit <code>CRC64NVME</code> checksum of the object. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/checking-object-integrity.html">Checking
     * object integrity in the Amazon S3 User Guide</a>.</p>
     */
    inline const Aws::String& GetChecksumCRC64NVME() const { return m_checksumCRC64NVME; }
    template<typename ChecksumCRC64NVMET = Aws::String>
    void SetChecksumCRC64NVME(ChecksumCRC64NVMET&& value) { m_checksumCRC64NVMEHasBeenSet = true; m_checksumCRC64NVME = std::forward<ChecksumCRC64NVMET>(value); }
    template<typename ChecksumCRC64NVMET = Aws::String>
    GetObjectResult& WithChecksumCRC64NVME(ChecksumCRC64NVMET&& value) { SetChecksumCRC64NVME(std::forward<ChecksumCRC64NVMET>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Base64 encoded, 160-bit <code>SHA1</code> digest of the object. This will
     * only be present if the object was uploaded with the object. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/checking-object-integrity.html">
     * Checking object integrity</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline const Aws::String& GetChecksumSHA1() const { return m_checksumSHA1; }
    template<typename ChecksumSHA1T = Aws::String>
    void SetChecksumSHA1(ChecksumSHA1T&& value) { m_checksumSHA1HasBeenSet = true; m_checksumSHA1 = std::forward<ChecksumSHA1T>(value); }
    template<typename ChecksumSHA1T = Aws::String>
    GetObjectResult& WithChecksumSHA1(ChecksumSHA1T&& value) { SetChecksumSHA1(std::forward<ChecksumSHA1T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Base64 encoded, 256-bit <code>SHA256</code> digest of the object. This
     * will only be present if the object was uploaded with the object. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/checking-object-integrity.html">
     * Checking object integrity</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline const Aws::String& GetChecksumSHA256() const { return m_checksumSHA256; }
    template<typename ChecksumSHA256T = Aws::String>
    void SetChecksumSHA256(ChecksumSHA256T&& value) { m_checksumSHA256HasBeenSet = true; m_checksumSHA256 = std::forward<ChecksumSHA256T>(value); }
    template<typename ChecksumSHA256T = Aws::String>
    GetObjectResult& WithChecksumSHA256(ChecksumSHA256T&& value) { SetChecksumSHA256(std::forward<ChecksumSHA256T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The checksum type, which determines how part-level checksums are combined to
     * create an object-level checksum for multipart objects. You can use this header
     * response to verify that the checksum type that is received is the same checksum
     * type that was specified in the <code>CreateMultipartUpload</code> request. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/checking-object-integrity.html">Checking
     * object integrity</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline ChecksumType GetChecksumType() const { return m_checksumType; }
    inline void SetChecksumType(ChecksumType value) { m_checksumTypeHasBeenSet = true; m_checksumType = value; }
    inline GetObjectResult& WithChecksumType(ChecksumType value) { SetChecksumType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is set to the number of metadata entries not returned in the headers
     * that are prefixed with <code>x-amz-meta-</code>. This can happen if you create
     * metadata using an API like SOAP that supports more flexible metadata than the
     * REST API. For example, using SOAP, you can create metadata whose values are not
     * legal HTTP headers.</p>  <p>This functionality is not supported for
     * directory buckets.</p> 
     */
    inline int GetMissingMeta() const { return m_missingMeta; }
    inline void SetMissingMeta(int value) { m_missingMetaHasBeenSet = true; m_missingMeta = value; }
    inline GetObjectResult& WithMissingMeta(int value) { SetMissingMeta(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Version ID of the object.</p>  <p>This functionality is not supported
     * for directory buckets.</p> 
     */
    inline const Aws::String& GetVersionId() const { return m_versionId; }
    template<typename VersionIdT = Aws::String>
    void SetVersionId(VersionIdT&& value) { m_versionIdHasBeenSet = true; m_versionId = std::forward<VersionIdT>(value); }
    template<typename VersionIdT = Aws::String>
    GetObjectResult& WithVersionId(VersionIdT&& value) { SetVersionId(std::forward<VersionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies caching behavior along the request/reply chain.</p>
     */
    inline const Aws::String& GetCacheControl() const { return m_cacheControl; }
    template<typename CacheControlT = Aws::String>
    void SetCacheControl(CacheControlT&& value) { m_cacheControlHasBeenSet = true; m_cacheControl = std::forward<CacheControlT>(value); }
    template<typename CacheControlT = Aws::String>
    GetObjectResult& WithCacheControl(CacheControlT&& value) { SetCacheControl(std::forward<CacheControlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies presentational information for the object.</p>
     */
    inline const Aws::String& GetContentDisposition() const { return m_contentDisposition; }
    template<typename ContentDispositionT = Aws::String>
    void SetContentDisposition(ContentDispositionT&& value) { m_contentDispositionHasBeenSet = true; m_contentDisposition = std::forward<ContentDispositionT>(value); }
    template<typename ContentDispositionT = Aws::String>
    GetObjectResult& WithContentDisposition(ContentDispositionT&& value) { SetContentDisposition(std::forward<ContentDispositionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates what content encodings have been applied to the object and thus
     * what decoding mechanisms must be applied to obtain the media-type referenced by
     * the Content-Type header field.</p>
     */
    inline const Aws::String& GetContentEncoding() const { return m_contentEncoding; }
    template<typename ContentEncodingT = Aws::String>
    void SetContentEncoding(ContentEncodingT&& value) { m_contentEncodingHasBeenSet = true; m_contentEncoding = std::forward<ContentEncodingT>(value); }
    template<typename ContentEncodingT = Aws::String>
    GetObjectResult& WithContentEncoding(ContentEncodingT&& value) { SetContentEncoding(std::forward<ContentEncodingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language the content is in.</p>
     */
    inline const Aws::String& GetContentLanguage() const { return m_contentLanguage; }
    template<typename ContentLanguageT = Aws::String>
    void SetContentLanguage(ContentLanguageT&& value) { m_contentLanguageHasBeenSet = true; m_contentLanguage = std::forward<ContentLanguageT>(value); }
    template<typename ContentLanguageT = Aws::String>
    GetObjectResult& WithContentLanguage(ContentLanguageT&& value) { SetContentLanguage(std::forward<ContentLanguageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The portion of the object returned in the response.</p>
     */
    inline const Aws::String& GetContentRange() const { return m_contentRange; }
    template<typename ContentRangeT = Aws::String>
    void SetContentRange(ContentRangeT&& value) { m_contentRangeHasBeenSet = true; m_contentRange = std::forward<ContentRangeT>(value); }
    template<typename ContentRangeT = Aws::String>
    GetObjectResult& WithContentRange(ContentRangeT&& value) { SetContentRange(std::forward<ContentRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A standard MIME type describing the format of the object data.</p>
     */
    inline const Aws::String& GetContentType() const { return m_contentType; }
    template<typename ContentTypeT = Aws::String>
    void SetContentType(ContentTypeT&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::forward<ContentTypeT>(value); }
    template<typename ContentTypeT = Aws::String>
    GetObjectResult& WithContentType(ContentTypeT&& value) { SetContentType(std::forward<ContentTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Deprecated: Please use ExpiresString instead. 
     * <p>The date and time at which the object is no longer cacheable.</p>
     */
    inline const Aws::Utils::DateTime& GetExpires() const { return m_expires; }
    template<typename ExpiresT = Aws::Utils::DateTime>
    void SetExpires(ExpiresT&& value) { m_expiresHasBeenSet = true; m_expires = std::forward<ExpiresT>(value); }
    template<typename ExpiresT = Aws::Utils::DateTime>
    GetObjectResult& WithExpires(ExpiresT&& value) { SetExpires(std::forward<ExpiresT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the bucket is configured as a website, redirects requests for this object
     * to another object in the same bucket or to an external URL. Amazon S3 stores the
     * value of this header in the object metadata.</p>  <p>This functionality is
     * not supported for directory buckets.</p> 
     */
    inline const Aws::String& GetWebsiteRedirectLocation() const { return m_websiteRedirectLocation; }
    template<typename WebsiteRedirectLocationT = Aws::String>
    void SetWebsiteRedirectLocation(WebsiteRedirectLocationT&& value) { m_websiteRedirectLocationHasBeenSet = true; m_websiteRedirectLocation = std::forward<WebsiteRedirectLocationT>(value); }
    template<typename WebsiteRedirectLocationT = Aws::String>
    GetObjectResult& WithWebsiteRedirectLocation(WebsiteRedirectLocationT&& value) { SetWebsiteRedirectLocation(std::forward<WebsiteRedirectLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The server-side encryption algorithm used when you store this object in
     * Amazon S3.</p>
     */
    inline ServerSideEncryption GetServerSideEncryption() const { return m_serverSideEncryption; }
    inline void SetServerSideEncryption(ServerSideEncryption value) { m_serverSideEncryptionHasBeenSet = true; m_serverSideEncryption = value; }
    inline GetObjectResult& WithServerSideEncryption(ServerSideEncryption value) { SetServerSideEncryption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of metadata to store with the object in S3.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetMetadata() const { return m_metadata; }
    template<typename MetadataT = Aws::Map<Aws::String, Aws::String>>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = Aws::Map<Aws::String, Aws::String>>
    GetObjectResult& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    template<typename MetadataKeyT = Aws::String, typename MetadataValueT = Aws::String>
    GetObjectResult& AddMetadata(MetadataKeyT&& key, MetadataValueT&& value) {
      m_metadataHasBeenSet = true; m_metadata.emplace(std::forward<MetadataKeyT>(key), std::forward<MetadataValueT>(value)); return *this;
    }
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
    GetObjectResult& WithSSECustomerAlgorithm(SSECustomerAlgorithmT&& value) { SetSSECustomerAlgorithm(std::forward<SSECustomerAlgorithmT>(value)); return *this;}
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
    GetObjectResult& WithSSECustomerKeyMD5(SSECustomerKeyMD5T&& value) { SetSSECustomerKeyMD5(std::forward<SSECustomerKeyMD5T>(value)); return *this;}
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
    GetObjectResult& WithSSEKMSKeyId(SSEKMSKeyIdT&& value) { SetSSEKMSKeyId(std::forward<SSEKMSKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the object uses an S3 Bucket Key for server-side encryption
     * with Key Management Service (KMS) keys (SSE-KMS).</p>
     */
    inline bool GetBucketKeyEnabled() const { return m_bucketKeyEnabled; }
    inline void SetBucketKeyEnabled(bool value) { m_bucketKeyEnabledHasBeenSet = true; m_bucketKeyEnabled = value; }
    inline GetObjectResult& WithBucketKeyEnabled(bool value) { SetBucketKeyEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides storage class information of the object. Amazon S3 returns this
     * header for all objects except for S3 Standard storage class objects.</p> 
     * <p> <b>Directory buckets </b> - Directory buckets only support
     * <code>EXPRESS_ONEZONE</code> (the S3 Express One Zone storage class) in
     * Availability Zones and <code>ONEZONE_IA</code> (the S3 One Zone-Infrequent
     * Access storage class) in Dedicated Local Zones.</p> 
     */
    inline StorageClass GetStorageClass() const { return m_storageClass; }
    inline void SetStorageClass(StorageClass value) { m_storageClassHasBeenSet = true; m_storageClass = value; }
    inline GetObjectResult& WithStorageClass(StorageClass value) { SetStorageClass(value); return *this;}
    ///@}

    ///@{
    
    inline RequestCharged GetRequestCharged() const { return m_requestCharged; }
    inline void SetRequestCharged(RequestCharged value) { m_requestChargedHasBeenSet = true; m_requestCharged = value; }
    inline GetObjectResult& WithRequestCharged(RequestCharged value) { SetRequestCharged(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon S3 can return this if your request involves a bucket that is either a
     * source or destination in a replication rule.</p>  <p>This functionality is
     * not supported for directory buckets.</p> 
     */
    inline ReplicationStatus GetReplicationStatus() const { return m_replicationStatus; }
    inline void SetReplicationStatus(ReplicationStatus value) { m_replicationStatusHasBeenSet = true; m_replicationStatus = value; }
    inline GetObjectResult& WithReplicationStatus(ReplicationStatus value) { SetReplicationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The count of parts this object has. This value is only returned if you
     * specify <code>partNumber</code> in your request and the object was uploaded as a
     * multipart upload.</p>
     */
    inline int GetPartsCount() const { return m_partsCount; }
    inline void SetPartsCount(int value) { m_partsCountHasBeenSet = true; m_partsCount = value; }
    inline GetObjectResult& WithPartsCount(int value) { SetPartsCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of tags, if any, on the object, when you have the relevant
     * permission to read object tags.</p> <p>You can use <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObjectTagging.html">GetObjectTagging</a>
     * to retrieve the tag set associated with an object.</p>  <p>This
     * functionality is not supported for directory buckets.</p> 
     */
    inline int GetTagCount() const { return m_tagCount; }
    inline void SetTagCount(int value) { m_tagCountHasBeenSet = true; m_tagCount = value; }
    inline GetObjectResult& WithTagCount(int value) { SetTagCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Object Lock mode that's currently in place for this object.</p> 
     * <p>This functionality is not supported for directory buckets.</p> 
     */
    inline ObjectLockMode GetObjectLockMode() const { return m_objectLockMode; }
    inline void SetObjectLockMode(ObjectLockMode value) { m_objectLockModeHasBeenSet = true; m_objectLockMode = value; }
    inline GetObjectResult& WithObjectLockMode(ObjectLockMode value) { SetObjectLockMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when this object's Object Lock will expire.</p> 
     * <p>This functionality is not supported for directory buckets.</p> 
     */
    inline const Aws::Utils::DateTime& GetObjectLockRetainUntilDate() const { return m_objectLockRetainUntilDate; }
    template<typename ObjectLockRetainUntilDateT = Aws::Utils::DateTime>
    void SetObjectLockRetainUntilDate(ObjectLockRetainUntilDateT&& value) { m_objectLockRetainUntilDateHasBeenSet = true; m_objectLockRetainUntilDate = std::forward<ObjectLockRetainUntilDateT>(value); }
    template<typename ObjectLockRetainUntilDateT = Aws::Utils::DateTime>
    GetObjectResult& WithObjectLockRetainUntilDate(ObjectLockRetainUntilDateT&& value) { SetObjectLockRetainUntilDate(std::forward<ObjectLockRetainUntilDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether this object has an active legal hold. This field is only
     * returned if you have permission to view an object's legal hold status. </p>
     *  <p>This functionality is not supported for directory buckets.</p> 
     */
    inline ObjectLockLegalHoldStatus GetObjectLockLegalHoldStatus() const { return m_objectLockLegalHoldStatus; }
    inline void SetObjectLockLegalHoldStatus(ObjectLockLegalHoldStatus value) { m_objectLockLegalHoldStatusHasBeenSet = true; m_objectLockLegalHoldStatus = value; }
    inline GetObjectResult& WithObjectLockLegalHoldStatus(ObjectLockLegalHoldStatus value) { SetObjectLockLegalHoldStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetId2() const { return m_id2; }
    template<typename Id2T = Aws::String>
    void SetId2(Id2T&& value) { m_id2HasBeenSet = true; m_id2 = std::forward<Id2T>(value); }
    template<typename Id2T = Aws::String>
    GetObjectResult& WithId2(Id2T&& value) { SetId2(std::forward<Id2T>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetObjectResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the object is no longer cacheable.</p>
     */
    inline const Aws::String& GetExpiresString() const { return m_expiresString; }
    template<typename ExpiresStringT = Aws::String>
    void SetExpiresString(ExpiresStringT&& value) { m_expiresStringHasBeenSet = true; m_expiresString = std::forward<ExpiresStringT>(value); }
    template<typename ExpiresStringT = Aws::String>
    GetObjectResult& WithExpiresString(ExpiresStringT&& value) { SetExpiresString(std::forward<ExpiresStringT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::Stream::ResponseStream m_body{};
    bool m_bodyHasBeenSet = false;

    bool m_deleteMarker{false};
    bool m_deleteMarkerHasBeenSet = false;

    Aws::String m_acceptRanges;
    bool m_acceptRangesHasBeenSet = false;

    Aws::String m_expiration;
    bool m_expirationHasBeenSet = false;

    Aws::String m_restore;
    bool m_restoreHasBeenSet = false;

    Aws::Utils::DateTime m_lastModified{};
    bool m_lastModifiedHasBeenSet = false;

    long long m_contentLength{0};
    bool m_contentLengthHasBeenSet = false;

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

    ChecksumType m_checksumType{ChecksumType::NOT_SET};
    bool m_checksumTypeHasBeenSet = false;

    int m_missingMeta{0};
    bool m_missingMetaHasBeenSet = false;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet = false;

    Aws::String m_cacheControl;
    bool m_cacheControlHasBeenSet = false;

    Aws::String m_contentDisposition;
    bool m_contentDispositionHasBeenSet = false;

    Aws::String m_contentEncoding;
    bool m_contentEncodingHasBeenSet = false;

    Aws::String m_contentLanguage;
    bool m_contentLanguageHasBeenSet = false;

    Aws::String m_contentRange;
    bool m_contentRangeHasBeenSet = false;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    Aws::Utils::DateTime m_expires{};
    bool m_expiresHasBeenSet = false;

    Aws::String m_websiteRedirectLocation;
    bool m_websiteRedirectLocationHasBeenSet = false;

    ServerSideEncryption m_serverSideEncryption{ServerSideEncryption::NOT_SET};
    bool m_serverSideEncryptionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_metadata;
    bool m_metadataHasBeenSet = false;

    Aws::String m_sSECustomerAlgorithm;
    bool m_sSECustomerAlgorithmHasBeenSet = false;

    Aws::String m_sSECustomerKeyMD5;
    bool m_sSECustomerKeyMD5HasBeenSet = false;

    Aws::String m_sSEKMSKeyId;
    bool m_sSEKMSKeyIdHasBeenSet = false;

    bool m_bucketKeyEnabled{false};
    bool m_bucketKeyEnabledHasBeenSet = false;

    StorageClass m_storageClass{StorageClass::NOT_SET};
    bool m_storageClassHasBeenSet = false;

    RequestCharged m_requestCharged{RequestCharged::NOT_SET};
    bool m_requestChargedHasBeenSet = false;

    ReplicationStatus m_replicationStatus{ReplicationStatus::NOT_SET};
    bool m_replicationStatusHasBeenSet = false;

    int m_partsCount{0};
    bool m_partsCountHasBeenSet = false;

    int m_tagCount{0};
    bool m_tagCountHasBeenSet = false;

    ObjectLockMode m_objectLockMode{ObjectLockMode::NOT_SET};
    bool m_objectLockModeHasBeenSet = false;

    Aws::Utils::DateTime m_objectLockRetainUntilDate{};
    bool m_objectLockRetainUntilDateHasBeenSet = false;

    ObjectLockLegalHoldStatus m_objectLockLegalHoldStatus{ObjectLockLegalHoldStatus::NOT_SET};
    bool m_objectLockLegalHoldStatusHasBeenSet = false;

    Aws::String m_id2;
    bool m_id2HasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    Aws::String m_expiresString;
    bool m_expiresStringHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
